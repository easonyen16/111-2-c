#include<stdio.h>
#define MAX 1000
char line[MAX];
enum token {EOL=0, OP, NUM};

enum token next_token(int* num, char* op) {
    static char* ptr;
    static int initialized = 0;
    if (!initialized) {
        ptr = line;
        initialized = 1;
    }

    while (*ptr == ' ' || *ptr == '\t') {
        ptr++; // Skip whitespace
    }

    if (*ptr == '\0' || *ptr == '\n') {
        initialized = 0;
        return EOL;
    }

    if (*ptr >= '0' && *ptr <= '9') {
        *num = 0;
        while (*ptr >= '0' && *ptr <= '9') {
            *num = *num * 10 + (*ptr - '0');
            ptr++;
        }
        return NUM;
    }

    *op = *ptr;
    ptr++;
    return OP;
}

int expression(int case_no) {
    if (!fgets(line, MAX, stdin)) {
        return 1; // End of file
    }

    // Remove the newline character from the line
    char *p = line;
    while (*p) {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
        p++;
    }
    if(case_no > 1){
        printf("\n");
    }
    printf("Case #%d:\n", case_no);
    printf("line=[%s]\n", line);
    int token_no = 1;
    while (1) {
        int num;
        char op;
        switch (next_token(&num, &op)) {
            case EOL:
                printf("token[%d]=[], type=EOL\n", token_no++);
                return EOL;
            case NUM:
                printf("token[%d]=[%d], type=NUM\n", token_no++, num);
                break;
            case OP:
                printf("token[%d]=[%c], type=OP\n", token_no++, op);
                break;
        }
    }
}

int main(){
    int caseno=0;
    while(expression(++caseno) == EOL);
}
