class Repository:
    def __init__(self):
        self._questions = dict()

    def add_question(self, question):
        """
        Add question to the repository
        :param question: a question object to add
        """
        self._questions[question.id] = question

    def get_questions(self):
        """
        Get the list of questions
        """
        return self._questions