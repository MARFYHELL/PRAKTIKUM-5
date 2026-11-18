n_input = input().split()
n1 = int(n_input[0])
n2 = int(n_input[1])

if n1 != n2:
    print("Jumlah tidak sama")
else:
    row1 = input().split()
    row2 = input().split()
    
    result = []
    for i in range(n1):
        kali = int(row1[i]) * int(row2[i])
        result.append(str(kali))
        
    print(" ".join(result))