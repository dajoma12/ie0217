# define a list
my_list = [4, 7, 0]

# create an iterator from the list
iterator = iter(my_list)

# get the first element of the iterator
print(next(iterator)) # prints 4

# get the second element of the iterator
print(next(iterator)) # prints 7

# get the third element of the iterator
print(next(iterator)) # prints 0

# define a list

for element in my_list:
    print(element)