//Program to find average of N Numbers


#include<stdio.h>

int main()
{

    int n, i;
    float sum = 0, x,avg;

    printf("Enter number of elements:  ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%f", &x);
        sum=sum+x;
    }
    
    avg=sum/n;
    printf("\n\n\nAverage of the entered numbers is =  %f", avg);

}

