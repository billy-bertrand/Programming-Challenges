# Function to print permutations of a list of elements
# This function takes four parameters:
# 1. list of integers
# 2. Starting index of the list
# 3. Ending index of the list.
# 4. Array of list where generated arrangements will get stored

def permute(a, l, r, possibilities):
    if l==r:
        b = list.copy(a)
        possibilities.append(b)
    else:
        for i in range(l,r+1):
            a[l], a[i] = a[i], a[l]
            permute(a, l+1, r, possibilities)
            a[l], a[i] = a[i], a[l] # backtrack