#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//    printf("The size of short is %zd bytes.\n", sizeof(short));
//    printf("The size of int is %zd bytes.\n", sizeof(int));
//    printf("The size of long is %zd bytes.\n", sizeof(long));
//    printf("The size of long long is %zd bytes.\n", sizeof(long long));
//
//    return 0;
//}
#include <stdio.h>

int main() {
    int i = 1;
    int j = 1;
    char a = 0;
    scanf("%c", &a);
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i;j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c ", a);
        }
    }
    return 0;
}
