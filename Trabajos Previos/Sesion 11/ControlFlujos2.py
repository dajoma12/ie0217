# program to find first 5 multiples of 6

i = 1 

while i <= 10:
    print("6 *", (i), '=', 6*i)
    if i >=5:
        break
    i = i + 1

# program to print add numbers from 1 to 10
    
num = 0

while num < 10:
    num += 1

    if (num % 2) == 0:
        continue
    print(num)