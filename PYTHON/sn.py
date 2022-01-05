import msvcrt
 
 
def getchar():
    while True:
        print("Press '1' to quit")
        command = msvcrt.getch()
        print(f'command: {command}')
        # If using antique python, write above print statement like:
        # print('command: {}'.format(command))
        # f-string requires python 3.6 or newer
        if command == b'1':
            break
 
getchar()