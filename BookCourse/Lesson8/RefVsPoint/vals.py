def doubleIt(x: int) -> int:
    x *= 2
    return x

a = 5
print(f"A is {a}")

print(f"Doubling A: {doubleIt(a)}")

print(f"A is {a}")

# In conclusion, Python passes arguments by value for integers

def swapIt(a: list) -> list:
    first = a[0]
    a[0] = a[-1]
    a[-1] = first
    return a

my_list = ["potato", "strawberry", "avalanche"]

print(f"My list:\n{my_list}")
print(f"Swap it:\n{swapIt(my_list)}")
print(f"My list:\n{my_list}")

#BUT! Lists are passed by reference
