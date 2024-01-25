# Membership Test for Dictionary Keys
squares = {1: 1, 3: 9, 5:25, 7: 49, 9: 81}

# Output: True
print(1 in squares) # prints True

print(2 not in squares) # print True

# membership test for key only not value
print(49 in squares) # print false

# Iterating throught a Dictionary
for i in squares:
    print(squares[i])