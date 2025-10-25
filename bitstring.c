#include <stdio.h>

int main()
{

int A[10],B[10];
int U[10],I[10],CA[10],CB[10];
int i;

printf("Enter The Bits For Set A: ");
for(i=0;i<10;i++)
scanf("%d",&A[i]);

printf("Enter The Bits For Set B: ");
for(i=0;i<10;i++)
scanf("%d",&B[i]);

for(i=0;i<10;i++)
{
    U[i] = (A[i] || B[i]);
    I[i] = (A[i] && B[i]);
    CA[i] = !A[i];
    CB[i] = !B[i];
}

printf("The Union Is: ");
for(i=0;i<10;i++)
{
    printf("%d",U[i]);
    
}


printf("The Intersection Is: ");
for(i=0;i<10;i++)
{
    printf("%d",I[i]);
}

printf("The Compliment Of Set A Is: ");
for (i=0;i<10;i++)
{
    printf("%d",CA[i]);
}

printf("The Compliment Of Set B Is: ");
for (i=0;i<10;i++)
{
    printf("%d",CB[i]);
}
}
