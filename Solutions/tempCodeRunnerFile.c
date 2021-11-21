void miniMaxSum(int arr_count, int* arr) {
    long min = arr[0],max = 0,sum = 0;
    for(int i=0;i<arr_count;i++){
        sum += arr[i];
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    printf("%d %d",sum-max,sum-min);
}