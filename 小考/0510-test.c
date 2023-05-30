#include <stdio.h>
void int2n(int number, int base, char *answer){
	
int i = 0, remainder;
    
    if (number == 0) {
        answer[0] = '0';
        answer[1] = '\0';
        return;
    }

    while (number > 0) {
        remainder = number % base;
        if (remainder >= 10) {
            answer[i] = (char)(remainder - 10 + 'A');
        } else {
            answer[i] = (char)(remainder + '0');
        }
        number /= base;
        i++;
    }
    answer[i] = '\0';

    // Reverse the answer string
    int start = 0;
    int end = i - 1;
    char temp;
    while (start < end) {
        temp = answer[start];
        answer[start] = answer[end];
        answer[end] = temp;
        start++;
        end--;
    }
}
main(){
  int number, base;
  char answer[100];
  for(;;){
    if(scanf("%d%d", &number, &base)<0) break;
    int2n(number, base, answer);
    printf("%d(10)=%s(%d)\n", number, answer, base);
  }
}
