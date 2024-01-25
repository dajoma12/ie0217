# Program to filter out only the even items from list
my_list = [1, 5, 4, 6, 8, 11, 3, 12]

new_list = list(filter(lambda x: (x%2 == 0)), my_list)

print(new_list)
# Ouput: [4, 6, 8, 12]

# Program to double each item in a list using map()

my_list = [1, 5, 4, 6, 8, 11, 3, 12]
new_list = list(map(lambda x: x * 2), my_list)

print(new_list)
# Output: [2, 10, 8, 12, 16, 22, 6, 24]