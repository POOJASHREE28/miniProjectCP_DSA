import random
import string

def generate_password(length):
    alphabets = string.ascii_letters
    digits = string.digits
    punctuation = string.punctuation
    characters = alphabets + digits + punctuation
    password = ''.join(random.choice(characters) for _ in range(length))
    return password

while(1):

    length = int(input("Enter the length of the password you need to generate: "))
    password = generate_password(length)
    print(password)
    choice = int(input("Enter you 1 to proceed and 0 exit "))
    if choice == 0:
        exit(0)

