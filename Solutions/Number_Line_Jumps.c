#include <stdio.h>

char* kangaroo(int x1, int v1, int x2, int v2) {
    int lack,lackv,lead,leadv;
    if(x1 > x2){
        lack = x2;
        lead = x1;
        lackv = v2;
        leadv = v1;
    }
    else{
        lead = x2;
        lack = x1;
        leadv = v2;
        lackv = v1;
    }
    if(leadv > lackv)
        return "NO";
    while(lead > lack){
        lead += leadv;
        lack += lackv;
    }
    if(lead == lack)
        return "YES";
    return "NO";
}

int main(){
    printf("%s",kangaroo(21, 6, 47, 3));
}