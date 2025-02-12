
# name = input("Enter your full name: ")
phone_number = input("Enter your phone #: ")

# result = len(name)
# result = name.find("o")
# result = name.rfind("q")
# name = name.capitalize()
# name = name.upper()
# name = name.lower()
# result = name.isdigit()
# result = name.isalpha()
# result = phone_number.count("-")
phone_number = phone_number.replace("-", "")

print(phone_number)


# if you want a comprehensive list of all the strings method  
print(help(str))
