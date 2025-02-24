"""
fruits =      ["apple", "orange", "banana", "coconut"]
vegetables =  ["celery", "carrots", "potatoes"]
meats =       ["chicken", "fish", "turkey"]

groceries = [fruits, vegetables, meats]

print(groceries[0][0])
"""

# or you can you this: 
groceries = [["apple", "orange", "banana", "coconut"], ["celery", "carrots", "potatoes"], ["chicken", "fish", "turkey"]]
# you can also use tuples or sets 

for collection in groceries:
  for food in collection:
    print(food, end=" ")
  print()
