#!/bin/python3

#
# Complete the 'sockMerchant' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER_ARRAY ar
#

def sockMerchant(n, ar):
    pair = 0
    #sort the array
    ar.sort()
    #go through array...
    i = 0
    while i < n:
        #count occurences of ith array element
        occur = ar.count(ar[i])
        
        #Find number of possible match.
        #NOTICE: I am performing an integer division
        match = (int(occur / 2))
        if match == 0:
            i+=1
        
        pair = pair + match
        #move the index forward, past the number of ocurrence of i
        i += (occur)
    
    return pair
    

if __name__ == '__main__':
    n = 9
    ar = [10, 20, 20, 10, 10, 30, 50, 10, 20]

    print(sockMerchant(n, ar))
