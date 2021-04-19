import random
file = open("./list", "w")

n = input("size: ")
n = int(n)

max_num = input("max num: ")
file.write(str(n) + "\n")
max_num = int(max_num)

for i in range(0, n):
    file.write(str(random.randint(1, max_num)) + "\n")

file.close()
