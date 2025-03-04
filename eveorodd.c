#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
	printf("YES");
    }
    else{
	    printf("%d is odd.\n",num);
	    printf("NO");
    }
    return 0;
}

