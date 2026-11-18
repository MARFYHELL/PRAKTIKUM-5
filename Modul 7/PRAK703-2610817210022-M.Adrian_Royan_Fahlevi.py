sentence = input("Kalimat : ")

vowels = 0
consonants = 0
for ch in sentence.lower():
    if ch in "aiueo":
        vowels += 1
    elif ch.isalpha():
        consonants += 1

print("Jumlah Vokal :", vowels)
print("Jumlah Konsonan :", consonants)