#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Enter any 3 numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    int x = (n1 > n2) 
              ? (n1 > n3 ? n1 : n3)
              : (n2 > n3 ? n2 : n3);

    printf("Largest number is: %d", x);
    return 0;
}
