#include<stdio.h>
#include<stdlib.h>

struct stack 
{
    int size;
    int top;
    int *arr;
};

int Empty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return -1;
    }
    else{
        return 0;
    }
}
 int Full(struct stack *ptr)
 {
    if(ptr->top==ptr-> size-1)
    {
        return 1;
    }
    else{
        return 0; 
    }
 }
 void push(struct stack*ptr, int val)
 {
    if(Full(ptr))
    {
        printf("stack overflow cannot push %d to the stack \n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }
 }
 int main()
 {
    struct stack *sp=(struct stack*)malloc(sizeof (struct stack)); 
    sp-> size = 10;
    sp-> top = -1;
    sp-> arr=(int*)malloc(sp->size*sizeof (int));

    printf("stack has been created succesfully\n");
    printf("before pushing , Full %d\n", Full(sp));
    printf("before pushing , Empty %d\n", Empty(sp));
    
    push(sp, 56);
    push(sp, 5);    
    push(sp, 45);
    push(sp, 6);
    push(sp, 77);
    push(sp, 76);
    push(sp, 52);
    push(sp, 97);
    push(sp, 23);
    push(sp, 13); // push 10 value
    push(sp, 44); // stack overflow

    printf("after pushing Full %d\n", Full(sp));
    printf("after pushiung Empty %d\n", Empty(sp));
 
    return 0;
 }