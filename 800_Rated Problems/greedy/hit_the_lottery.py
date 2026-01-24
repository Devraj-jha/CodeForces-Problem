n = int(input())

denominations = [100, 20, 10, 5, 1]
count = 0

for d in denominations:
    count += n // d
    n %= d

print(count)
