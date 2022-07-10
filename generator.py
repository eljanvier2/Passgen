import string
import random

## characters to generate password from
characters = list(string.ascii_letters + string.digits + "!@#$%^&*()")

def generate_random_password(length):
	random.shuffle(characters)	
	password = []
	for i in range(int(length)):
		password.append(random.choice(characters))
	random.shuffle(password)
	return ("".join(password))
