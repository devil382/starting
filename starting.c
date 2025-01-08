// create a program with the help of switch statement
#include <stdio.h>

int main() {
    int days;
    printf(" enter days");
    scanf("%d", &days);
    switch (days){
        case 1:
        printf("monday\n");
        break;
        case 2:
        printf("tuesday\n");
        break;
        default :
        printf("nothing match\n");
        break;
    }
    printf("not holiday : %d\t", days);
    return 0;
}
