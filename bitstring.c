#include <stdio.h>

int main()
{
    int A[10],B[10];
    int U[10],I[10],CA[10],CB[10];
    int i;
    
    
    printf("Enter The Bit To Set A: ");
    for(i=0;i<10;i++)
    scanf("%d",&A[i]);
    printf("\n");
    
    printf("Enter The Bit To Set B: ");
    for (i=0;i<10;i++)
    scanf("%d",&B[i]);
    printf("\n");
    
    for(i=0;i<10;i++)
    {
        U[i] = (A[i] | B[i]);
        I[i] = (A[i] & B[i]);
        CA[i] = !A[i];
        CB[i] = !B[i];
    }
    
     printf("The Intersection Is: ");
    for(i = 0; i < 10; i++)
        printf("%d ", I[i]);
    printf("\n");

    printf("The Union Is: ");
    for(i = 0; i < 10; i++)
        printf("%d ", U[i]);
    printf("\n");

    printf("The Complement Of Set A Is: ");
    for(i = 0; i < 10; i++)
        printf("%d ", CA[i]);
    printf("\n");

    printf("The Complement Of Set B Is: ");
    for(i = 0; i < 10; i++)
        printf("%d ", CB[i]);
    printf("\n");
}
