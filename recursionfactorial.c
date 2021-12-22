//Example: factorial of Natural Numbers Using Recursion

#include <stdio.h>
int fact(int n);

int main() {
    int n, result;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    result = fact(n);    				// 3	4

    printf("factorial = %d", result);

}

int fact(int n) 
{
    if (n == 1)
        
        return 1; 		  
    else
    
    	return n * fact(n-1);
    	
    	return fact;
    
}

