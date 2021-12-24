//Below is a program on adding two numbers using recursion.

#include<stdio.h>

int y;


int add(a,b)							
{
    if(b == 0)							
        return a;

   
    else
    y=a+b;
    return y;
}

int main()
{
    
    int a, b, r;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &a, &b);
    r = add(a, b);     
    printf("\n\nSum of two numbers is: %d\n\n", r);
    


}

