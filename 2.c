/* Q2: Input two numbers and display sum, difference, product and quotient. */

#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (b == 0)
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=undefined", a+b, a-b, a*b);
    else
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d", a+b, a-b, a*b, a/b);
    return 0;
}
