a = [5, 12, 4, 32, 188, 16, 78, 1, 41, 75]

less = []
equal = []
power = []

begin = a[0]
end = a[-1]
def quick_sort(array, begin, end):
    median = (begin + end) / 2
    if len(array) == 1:
        return
    for i in range(0, len(array) - 1):
        if array[i] > median:
            power.append(array[i])
        elif array[i] < median:
            less.append(array[i])
        else:
            equal.append(array[i])

    print(a)

    print(median)

    print(less)
    print(equal)
    print(power)

quick_sort(a, begin, end)