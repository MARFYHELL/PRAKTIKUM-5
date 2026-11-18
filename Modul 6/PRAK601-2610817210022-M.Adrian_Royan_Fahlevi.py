baris_kolom = input().split()
r = int(baris_kolom[0])
c = int(baris_kolom[1])

elements = input().split()

index = 0
for i in range(r):
    row_list = []
    for j in range(c):
        row_list.append(elements[index])
        index += 1
    print(" ".join(row_list))