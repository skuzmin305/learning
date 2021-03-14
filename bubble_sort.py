a = [5, 12, 4, 32, 188, 16, 78, 1, 41, 75]
count = 0
print(a)
print()

for i in range(0, len(a) - 1):
    for q in range(0, len(a) - 1 - i):
        count += 1
        if a[q] > a[q +1]:
            a[q], a[q + 1] = a[q + 1], a[q]
print(f'{count} проходов было сделанно!')
print(a)