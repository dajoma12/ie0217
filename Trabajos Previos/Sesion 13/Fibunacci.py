def fibonacci_nuumbers(nums):
    x, y = 0, 1
    for _ in range(nums):
        x, y = y, x+y
        yield  x


def square(nums):
    for num in nums:
        yield num**2


print (sum(square(fibonacci_nuumbers(10))))
