#include<stdio.h>
void main(){
int n,i,A[100],sum=0;
printf("Enter the no of items :");
scanf("%d",&n);
printf("Enter %d items :",n);
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
sum=sum+A[i];
}
printf("\nElements in the array are\n");
for(i=0;i<n;i++)
{
printf("\n%d",A[i]);
}
printf("\nSum of elements is : %d\n",sum);
}	
