#include<stdio.h>
void main(){
int n,i,A[100],c,count;
printf("Enter the no of items in Array :");
scanf("%d",&n);
printf("Enter %d items :",n);
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
printf("Enter value to check :");
scanf("%d",&c);
for(i=0;i<n;i++)
{
if(c==A[i])
count++;
}
printf("\nFrequency of %d is %d\n",c,count);
printf("\n");
}	
