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
