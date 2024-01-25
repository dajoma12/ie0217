languages = ['Python', 'Swift', 'C++']

# iterating through the list
for language in languages:
    print(language)

language = ['Python', 'Swift', 'C++']
print('C' in languages) # False
print('Python' in languages) # True

languages = ['Python', 'Swift', 'C++']

print("List: ", languages)
print("Total Elements: ", len(languages))

numbers = [number*number for number in range(1,6)]
print(numbers)

# Output: [1, 4, 9, 16, 25]

numbers = [x*x for x in range(1,6)]
numbers = []
for x in range(1, 6):
    numbers.append(x * x)