#include <stdio.h>

void countApplesAndOranges(int s, int t, int a, int b, int apples_count, int* apples, int oranges_count, int* oranges) {
    int apple_house = 0,orange_house = 0;
    for(int i=0;i<apples_count;i++){
        int distance = apples[i]+a;
        if(distance >= s && distance <= t)
            apple_house++;
    }
    for(int i=0;i<oranges_count;i++){
        int distance = oranges[i]+b;
        if(distance >= s && distance <= t)
            orange_house++;
    }
    printf("%d\n%d",apple_house,orange_house);
}

int main(){
    int apple[] = {-2,2,1};
    int orange[] = {5,-6};
    countApplesAndOranges(7,11,5,15,3,apple,2,orange);
}