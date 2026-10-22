#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'checkMagazine' function below.
#
# The function accepts following parameters:
#  1. STRING_ARRAY magazine
#  2. STRING_ARRAY note
#

def checkMagazine(magazine, note):
    # Write your code here
    #First idea -> use strip() to extract words stripping based on whitespace
    #Count every occurence in the note string
    #Check if every occurence of the note string exist in magazine message
    #Check if every occurrence of the note string exist in the right number in th 
    #magazine message
    
    words_note = [i.strip() for i in note]
    words_magazine = [j.strip() for j in magazine]
    
    for i in words_note:
        word_count = words_note.count(i)
        word_count_magazine = words_magazine.count(i)
        if(word_count > word_count_magazine):
            return print("No")
        elif(word_count < word_count_magazine): 
            pass
        
    return print("Yes")
    

if __name__ == '__main__':
    first_multiple_input = input().rstrip().split()

    m = int(first_multiple_input[0])

    n = int(first_multiple_input[1])

    magazine = input().rstrip().split()

    note = input().rstrip().split()

    checkMagazine(magazine, note)
