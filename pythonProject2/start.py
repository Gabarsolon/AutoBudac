from repository import Repository
from service import Service
from ui import UI

ui = UI(Service(Repository()))
ui.start()