# open a file
file1 = open("test.txt", "r")

# read the file
read_content = file1.read()
print(read_content)

# close the file
file1.close()


try:
    file1 = open("test.txt", "r")
    read_content = file1.read()
    print(read_content)

finally:
    # close the file
    file1.close()

with open("test.txt", "r") as file1:
    read_content = file1.read()
    print(read_content)