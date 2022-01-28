class UI:
    def __init__(self, service):
        self._service = service

    def start(self):
        while True:
            try:
                command = input(">")
                command = command.strip()
                command = command.split(sep=' ', maxsplit=1)
                command_name = command[0].lower()
                if command_name == 'add':
                    self._service.add_command_run(command[1])
                    print("Question added succesfully")
                elif command_name == 'create':
                    self._service.create_command_run(command[1])
                    print("Quiz created succesfully")
                else:
                    raise ValueError("Invalid Command")
            except Exception as error_message:
                print(error_message)
