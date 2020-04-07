#include<stdio.h>
int main()
{
    int n,c,rem,res=0;
    int count=0;
    printf("\nEnter the number");
    scanf("%d",&n);
    c=n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    n=c;
    while(n!=0)
    {
        rem=n%10;
        res=res+pow(rem,count);
        n=n/10;
    }
    if(c==res)
      {
        printf("\tEntered number is Armstrong\t");
      }
    else
        printf("\nEntered Number is NOT Armstrong\t");

}
