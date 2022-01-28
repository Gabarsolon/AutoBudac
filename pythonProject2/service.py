from domain import Question


class Service:
    def __init__(self, repository):
        self._repository = repository
        self.load_master_question_list()

    def convert_string_command_to_question(self, command):
        """
        Obtain the question object from a command that was inputted by the user
        :param command: a string representing the command
        :return: a Question object
        """
        command = command.strip()
        command = command.split(sep = ';')
        id = int(command[0])
        text = command[1]
        choices_list = []
        choice_a = command[2]
        choice_b = command[3]
        choice_c = command[4]
        choices_list.append(choice_a)
        choices_list.append(choice_b)
        choices_list.append(choice_c)
        correct_choice = command[5]
        difficulty = command[6]
        return Question(id, text, choices_list, correct_choice,difficulty)


    def load_master_question_list(self):
        """
        Load the master questiions file into memory
        :return:
        """
        master_file = open("master_questions_list.txt", 'rt')
        for line in master_file.readlines():
            self._repository.add_question(self.convert_string_command_to_question(line))
        master_file.close()

    def save_master_question_list(self):
        """
        Save the questions stored in memory to master questions file
        :return:
        """
        master_file = open("master_questions_list.txt", 'wt')
        for question in self._repository.get_questions().values():
            id = str(question.id)
            text = question.text
            choice_a = question.answers[0]
            choice_b = question.answers[1]
            choice_c = question.answers[2]
            correct_choice = question._correct_answer
            difficulty = question.difficulty
            master_file.write(id+';'+text+';'+choice_a+';'+choice_b+';'+choice_c+';'+correct_choice+';'+difficulty+'\n')
        master_file.close()

    def add_command_run(self, command):
        '''
        Run the add command, which adds a new question to the repository
        :param command:
        :return:
        '''
        self._repository.add_question(self.convert_string_command_to_question(command))
        self.save_master_question_list()

    def create_command_run(self, command):
        command = command.strip()
        command = command.split(sep = ' ')
        difficulty = command[0]
        number_of_questions = int(command[1])
        file_name = command[2]
        quiz_file = open(file_name, 'wt')
        counter = 0
        for question in self._repository.get_questions().values():
            if question.difficulty == difficulty:
                counter += 1
        if counter < number_of_questions // 2 or number_of_questions > len(self._repository.get_questions()):
            raise ValueError("Not enough questions for creating the quiz")
        counter = number_of_questions
        for question in self._repository.get_questions().values():
            if question.difficulty != difficulty:
                id = str(question.id)
                text = question.text
                choice_a = question.answers[0]
                choice_b = question.answers[1]
                choice_c = question.answers[2]
                correct_choice = question._correct_answer
                quiz_file.write(
                    id + ';' + text + ';' + choice_a + ';' + choice_b + ';' + choice_c + ';' + correct_choice + ';' + question.difficulty + '\n')
                counter -= 1
                if counter == number_of_questions//2:
                    break
        for question in self._repository.get_questions().values():
            if question.difficulty == difficulty:
                id = str(question.id)
                text = question.text
                choice_a = question.answers[0]
                choice_b = question.answers[1]
                choice_c = question.answers[2]
                correct_choice = question._correct_answer
                quiz_file.write(
                    id + ';' + text + ';' + choice_a + ';' + choice_b + ';' + choice_c + ';' + correct_choice + ';' + difficulty + '\n')
                counter -= 1
                if counter == 0:
                    break
        quiz_file.close()

    def get_questions(self):
        """
        Get the list of questions
        :return:
        """
        return self._repository.get_questions()
