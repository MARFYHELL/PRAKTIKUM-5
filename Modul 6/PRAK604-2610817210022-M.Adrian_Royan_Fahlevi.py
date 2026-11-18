code = input()
message = input()

if len(code) != len(message):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    result = ""
    stars = 0
    hashes = 0
    for a, b in zip(code, message):
        if a == " " and b == " ":
            result += " "         
        elif a == b:
            result += "*"
            stars += 1
        else:
            result += "#"
            hashes += 1

    print(result)
    print("* =", stars)
    print("# =", hashes)
    if stars >= hashes:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")