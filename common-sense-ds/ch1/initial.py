# Data structures refer to how data is organized.

def print_numbers_version_one():
    number = 2
    while number <= 20:
        if number % 2 == 0:
            print(number)
        number += 1


print('Print version one')
print_numbers_version_one()


def print_numbers_version_two():
    number = 2
    while number <= 20:
        print(number)
        number += 2


print('Print version two')
print_numbers_version_two()

# Which of these functions do you think runs faster?
# If you said Version 2, you’re right. This is because Version 1 ends up looping
# 100 times, while Version 2 only loops 50 times. The first version then, takes
# twice as many steps as the second version.
