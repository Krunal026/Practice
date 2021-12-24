//Program to find Factors of a Number



#include<stdio.h>

int main()
{

    int  num, i;
    printf("Enter the number to find the factors of :  ");
    scanf("%d",&num);														//12
    printf("\n\n\nFactors of %d are \n\n", num);

    for(i = 1; i <= num/2; i++)					//(i=1;i<= 6;i++)
    {
        if(num%i == 0)							// 
            printf("\t\t\t%d\n", i);
    }

}

