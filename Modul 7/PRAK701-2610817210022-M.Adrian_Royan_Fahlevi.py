first = input("Nama Depan: ")
last = input("Nama Belakang: ")

full_name = first + " " + last

no_space = 0
for char in full_name:
    if char != ' ':
        no_space += 1

print("Nama Lengkap:", full_name)
print("Panjang Nama (tanpa spasi):", no_space)