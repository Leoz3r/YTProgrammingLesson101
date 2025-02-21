# collection = single "variable" used to store multiple values
#   List  = [] ordered and changeable. Duplicates OK
#   Set   = {} unordered and immutable, but Add/Remove OK. NO duplicates
#   Tuple = () ordered and unchangeable. Duplicates OK. FASTER

fruits = ("apple", "orange", "banana", "coconut", "coconut")
# dir(dir(fruits))
# print(help(fruits))
# print(len(fruits))
# print("pineapple" in fruits)

# print(fruits.index("apple"))
print(fruits.count("coconut"))

print(fruits)
# for fruit in fruits:
#  print (fruit)


# fruits = ["apple", "orange", "banana", "coconut"]
# list methods 
# fruits[0] = "pineapple"
# fruits.append("pineapple")
# fruits.remove("apple")
# fruits.insert(0, "pineapple")
# fruits.sort()
# fruits.reverse()
# fruits.clear()
# print(fruits.index("apple"))
# print(fruits.count("pineapple"))


# fruits = {"apple", "orange", "banana", "coconut", "coconut"}
# set methods 
# fruits.add("pineapple")
# fruits.remove("apple")
# fruits.pop()
# fruits.clear()
