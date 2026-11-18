word = input().lower().strip()

reversed_word = ""
for i in range(len(word) - 1, -1, -1):
    reversed_word += word[i]

if word == reversed_word:
    print(f"Kata '{word}' adalah palindrom")
else:
    print(f"Kata '{word}' bukan palindrom")