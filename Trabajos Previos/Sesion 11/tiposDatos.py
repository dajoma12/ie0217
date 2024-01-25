numbers = [21, 34, 54, 12]

print("Before Append:", numbers)

# using append method
numbers.append(32)

print("After Append:", numbers)

# --------------------------------
languages = ["Python", "Swift", "C++"]

# changing the third item to 'C'
languages[2] = 'C'

print(languages) # ['Python', 'Swift', 'C']

# --------------------------------

prime_numbers = [2, 3, 5]
print("List1:", prime_numbers)

even_numbers = [4, 6, 8]
print("List2:", even_numbers)

# join two lists
prime_numbers.extend(even_numbers)

print("List after append:", prime_numbers)

# -------------------------------
languages = ['Python', 'Swift', 'C++', 'C', 'Java', 'Rust', 'R']

# deleting the second item
del languages[1]
print(languages) # ['Python', 'Swift', 'C++', 'C', 'Java', 'Rust', 'R']

# deleting the last item
del languages[-1]
print(languages) # ['Python', 'Swift', 'C++', 'C', 'Java', 'Rust', 'R']

# delete first two items
del languages[0 : 2] # ['Python', 'Swift', 'C++', 'C', 'Java', 'Rust', 'R']
print(languages)

# -------------------------------
languages = ['Python', 'Swift', 'C++', 'C', 'Java', 'Rust', 'R']

# remove 'Python' from the list
languages.remove('Python')

print(languages) # ['Swift', 'C++', 'C', 'Java', 'Rust', 'R']
