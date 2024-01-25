numbers = {2, 4, 6, 6, 2 , 8}
print(numbers) # {8, 2, 4, 6}

numbers = {21, 34, 54, 12}

print("Initial set:", numbers)

# using add() method
numbers.add(32)

print("Updated set:", numbers)

companies = {'Lacoste', 'Ralph Lauren'}
tech_companies = ['apple', 'google', 'apple']

companies.update(tech_companies)

print(companies)

# Output: {'google', 'apple', 'Lacoste', 'Ralph Lauren'}

languages = {'Swift', 'Java', 'Python'}

print('inicitial Set:', languages)
# remove 'Java' from a set
removedValue = languages.discard('Java')