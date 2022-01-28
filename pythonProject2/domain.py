class Question:
    def __init__(self, id, text, answers, correct_answer, difficulty):
        """
        Initialize the question object
        :param id: an integer representing the id of the question
        :param text: a string representing the question
        :param answers: a list of answers (Strings)
        :param correct_answer: a string representing the correct answer
        :param difficulty: a string representing the difficulty
        """
        self._id = id
        self._text = text
        self._answers = answers
        self._correct_answer = correct_answer
        self._difficulty = difficulty

    @property
    def id(self):
        return self._id

    @property
    def text(self):
        return self._text

    @property
    def answers(self):
        return self._answers

    @property
    def correct_answer(self):
        return self._correct_answer

    @property
    def difficulty(self):
        return self._difficulty

