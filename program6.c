#include<stdio.h>
void main(){
int n1,n2,n3,i,j,A[100],B[100],C[100];
printf("Enter the no of items in Array 1:");
scanf("%d",&n1);
printf("Enter %d items :",n1);
for(i=0;i<n1;i++)
{
scanf("%d",&A[i]);
}
printf("Enter the no of items in Array 2:");
scanf("%d",&n2);
printf("Enter %d items :",n2);
for(i=0;i<n2;i++)
{
scanf("%d",&B[i]);
}
for(i=0;i<n1;i++)
{
C[i]=A[i];
}
for(i=n1,j=0;i<n1+n2;i++,j++)
{
C[i]=B[j];
}
printf("\nElements in the array are\n");
for(i=0;i<n1+n2;i++)
{
printf("\n%d",C[i]);
}
printf("\n");
}	
