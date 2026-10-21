#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'sockMerchant' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER n
#  2. INTEGER_ARRAY ar
#

def sockMerchant(n, ar):
    # Write your code here
    # Keeping trace of what i've already read, in which quantity is present and 
    # how many pairs are in there
    used = list()
    num = 0
    pairs = 0
    
    for i in ar:
        #counting value occurrences
        num = ar.count(i)
        # If i've already considered that valued i'll not add to pairs count
        if (i in used):
            pass
        else:
            # Otherwise i will compute the pairs of that value and append 
            # and append it to the list that i'm using to trace values.
            pairs += int(num / 2)
            print(pairs)
            used.append(i)
            
        print(pairs)
        print(used)
    return pairs

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    ar = list(map(int, input().rstrip().split()))

    result = sockMerchant(n, ar)

    fptr.write(str(result) + '\n')

    fptr.close()
