#!/bin/python3

#
# Complete the 'repeatedString' function below.
#
# The function is expected to return a LONG_INTEGER.
# The function accepts following parameters:
#  1. STRING s
#  2. LONG_INTEGER n
#

def repeatedString(s, n):
    # how many complete "s" sequences are there in the first "n" character
    # there are:  int([n/len(s)])
    completeSeqs = int(n / len(s))

    # there is also a remainder: n % len(s) => remaining characters that do not form a complete seq
    partialSeqs = n % len(s)

    # the partial string is the sum of COMPLETE sequences, plus the NUMBER of remaining characters
    ##partialString = (s * completeSeqs) + s[:(partialSeqs)]
    # I tried to use the "count()" function but partial string can be VERY LARGE

    # Let's try use a Math formula:
    # 1- I know the # of complete seqs, and the # of a's in ONE complete seqs
    #   with a multiplication, I can know the number of a's in ALL complete seqs
    asInCompleteSeqs = completeSeqs * s.count('a')

    # 2- I also know the # of remaining characters to add to the # of complete seqs to reach the nth first chars
    #   So, I can count the # of a's there too
    asInRemaining = s[:(partialSeqs)].count('a')

    # So the number of a is: # of a's in COMPLETE seqs + # of a's in the remaining characters
    return (asInCompleteSeqs + asInRemaining)
