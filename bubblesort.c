#include<stdio.h>
void printarray(int *A, int n)
{  
    for(int i=0; i<n ; i++)
    {
        printf("%d", A[i]);
    } 
    printf("\n");
}
void bubblesort(int*A ,int n)
{
    int temp;
    int sorted=0;
    for(int i=0; i<n-1; i++)
    {
        printf("working on pass number %d\n", i+1);
        sorted = 1;
        for(int j=0; j<n-1-i; j++)
        {
            if(A[j]>A[j+1])
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                sorted = 0;
            }
        }
        if(sorted)
        {
            return;
        }
    }
}

int main()
{
    int A[] = { 1, 6, 8, 2, 4, 7};
    int n = 6;
    printarray(A, n);
    bubblesort(A, n);
    printarray(A, n);

    return 0;
}
