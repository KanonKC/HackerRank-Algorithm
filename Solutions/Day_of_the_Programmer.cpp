#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */


string dayOfProgrammer(int year) {
    string rtn = to_string(year);
    if(year == 1918)
        rtn = "26.09." + rtn;
    else if(year >= 1919){
        if((year%4==0 && year%100!=0) || year%400==0)
            rtn = "12.09." + rtn;
        else
            rtn = "13.09." + rtn;
    }   
    else{
        if(year%4==0)
            rtn = "12.09." + rtn;
        else
            rtn = "13.09." + rtn;
    }
    return rtn;
}

int main(){
    cout << dayOfProgrammer(1800);
}