#include <stdio.h>

int main(){
    int t, i, digitStart, digitEnd, letterStart, letterEnd, digitSum, letterSum, absDifference;
    char str[15] = {'\0'};;
    scanf("%d", &t);
    for (int cases = 0; cases < t; cases++){
        scanf("%s", &str);
        printf("Case %d: \"%s\" is ", cases+1, str);
        if ('0' <= str[0] && str[0] <= '9'){
            digitStart = 0;
            if(str[2]=='-'){
                letterStart = 3;
                digitEnd = 1;
                if(str[5]=='\0'){
                    letterEnd = 4;
                }else{
                    letterEnd = 5;
                }
            }
            else if(str[3]=='-'){
                letterStart = 4;
                digitEnd = 2;
                if(str[6]=='\0'){
                    letterEnd = 5;
                }else{
                    letterEnd = 6;
                }
            }
            else if(str[4]=='-'){
                letterStart = 5;
                digitEnd = 3;
                if(str[7]=='\0'){
                    letterEnd = 6;
                }else{
                    letterEnd = 7;
                }
            }
        }else{
            letterStart = 0;
            if(str[2]=='-'){
                digitStart = 3;
                letterEnd = 1;
                if(str[5]=='\0'){
                    digitEnd = 4;
                }else if(str[6]=='\0'){
                    digitEnd = 5;
                }else{
                    digitEnd = 6;
                }
            }else{
                digitStart = 4;
                letterEnd = 2;
                if(str[6]=='\0'){
                    digitEnd = 5;
                }else if(str[7]=='\0'){
                    digitEnd = 6;
                }else{
                    digitEnd = 7;
                }
            }
        }
        for (i = digitStart, digitSum = 0; i <= digitEnd; i++){
            digitSum = digitSum * 10 + str[i] - '0';
        }
        for (i = letterStart, letterSum = 0; i <= letterEnd; i++){
            letterSum = letterSum * 26 + str[i] - 'A';
        }
        absDifference = digitSum - letterSum;
        if (absDifference < 0){
            absDifference = -absDifference;
        }
        if (absDifference > 100){
            printf("not nice due to ");
        }else{
            printf("nice due to ");
        }
        if ('0' <= str[0] && str[0] <= '9'){
            printf("|%d-%d|=|%d|=%d\n", digitSum, letterSum, digitSum - letterSum, absDifference);
        }
        else{
            printf("|%d-%d|=|%d|=%d\n", letterSum, digitSum, letterSum - digitSum, absDifference);
        }
    }
}
