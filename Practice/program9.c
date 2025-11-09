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
printf("Intersection");
for(i=0;i<n1;i++)
{
for(j=0;j<n2;j++)
{
if(A[i]==B[j])
printf("\n%d",B[j]);
}
}
printf("\n");
}	
