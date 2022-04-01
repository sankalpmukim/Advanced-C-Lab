from random import randint

days_in_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

for month in range(1, 13):
    print("Month:", month)
    num = randint(20, 80)
    lower_limit = num
    upper_limit = num + 30
    l = []
    for day in range(1, days_in_month[month - 1] + 1):
        l.append(randint(lower_limit, upper_limit))
    # append list to the file rainfall.txt in new line
    with open("rainfall.txt", "a") as f:
        f.write(" ".join(map(str, l)) + "\n")
