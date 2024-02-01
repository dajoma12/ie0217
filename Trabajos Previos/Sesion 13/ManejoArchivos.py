import os
print(os.getcwd())

# change directory
os.chdir('C:\\Python33')
print(os.getcwd())

# Ouput: C:Python33

# delete the empty directory "mydir"
os.rmdir("mydir")


os.listdir()
['test']

# rename a directory
os.rename('test', 'new_one')

os.listdir()
['new_one']