#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'miniMaxSum' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def miniMaxSum(arr):
    max_value = 0
    min_value = arr[0]
    res = 0
    for i in range(len(arr)):
        res += arr[i]
        if arr[i] > max_value:
            max_value = arr[i]
        if arr[i] < min_value:
            min_value = arr[i]
    print(f"{res-max_value} {res-min_value}")

if __name__ == '__main__':

    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
