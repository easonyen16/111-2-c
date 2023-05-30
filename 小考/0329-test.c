#include <stdio.h>

int main(){
    int t, i, digitStart, letterStart, digitSum, letterSum, absDifference;
    char str[15];
    scanf("%d", &t);
    for (int cases = 0; cases < t; cases++){
        scanf("%s", &str);
        printf("Case %d: %s=", cases+1, str);
        if ('0' <= str[0] && str[0] <= '9'){
            digitStart = 0;
            letterStart = 5;
        }else{
            digitStart = 4;
            letterStart = 0;
        }
        for (i = digitStart, digitSum = 0; i < digitStart + 4; i++){
            digitSum = digitSum * 10 + str[i] - '0';
        }
        for (i = letterStart, letterSum = 0; i < letterStart + 3; i++){
            letterSum = letterSum * 26 + str[i] - 'A';
        }
        absDifference = digitSum - letterSum;
        if (absDifference < 0){
            absDifference = -absDifference;
        }
        if ('0' <= str[0] && str[0] <= '9'){
            printf("|%d-%d|=|%d|=%d ==> ", digitSum, letterSum, digitSum - letterSum, absDifference);
        }
        else{
            printf("|%d-%d|=|%d|=%d ==> ", letterSum, digitSum, letterSum - digitSum, absDifference);
        }
        if (absDifference > 100){
            printf("not nice\n");
        }else{
            printf("nice\n");
        }
    }
}
