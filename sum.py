#!/user/bin/python3
def sum_array(a):
    total = 0
    for num in a:
        total += num
        num += 1
    return total

input = [-2.398]
print (sum_array(input))