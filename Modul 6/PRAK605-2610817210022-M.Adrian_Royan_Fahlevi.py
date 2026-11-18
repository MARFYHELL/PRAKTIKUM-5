n = int(input())

A = []
for i in range(n):
    row = list(map(int, input().split()))
    A.append(row)

B = []
for i in range(n):
    row = list(map(int, input().split()))
    B.append(row)

result = []
for i in range(n):
    row = [0] * n
    result.append(row)

for i in range(n):
    for j in range(n):
        for k in range(n):
            result[i][j] += A[i][k] * B[k][j]

print("Matriks AXB")
for i in range(n):
    row_str = []
    for j in range(n):
        row_str.append(str(result[i][j]))
    print(" ".join(row_str))