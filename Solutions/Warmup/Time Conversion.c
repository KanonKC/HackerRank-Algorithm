#include <stdio.h>
#include <stdlib.h>

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */

char* timeConversion(char* s) {
    int hour = ((int)s[0]-48)*10 + (int)s[1]-48;
    char *time = malloc(sizeof(char)*10);
    if(s[8] == 'A')
        hour %= 12;
    else
        hour = (hour%12)+12;
    int dec = hour < 10 ? 0 : hour < 20 ? 1 : 2;
    time[0] = dec == 0 ? '0' : dec == 1 ? '1' : '2';
    time[1] = (char)((hour-(dec*10))+48);
    for(int i=2;i<8;i++){
        time[i] = s[i];
    }
    return time;
}

int main(){

}