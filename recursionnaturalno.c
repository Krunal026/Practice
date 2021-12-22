//Example: Sum of Natural Numbers Using Recursion

#include <stdio.h>
int sum(int n);

int main() {
    int n, result;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    result = sum(n);    				// 3	4

    printf("sum = %d", result);

}

int sum(int n) {
    if (n != 0)
        // sum() function calls itself
        return n + sum(n-1); 			// 4+sum(3)  3+sum(2)  2+sum(1)  1+sum(0)
    else
        return n;
}

