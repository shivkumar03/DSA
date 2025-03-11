#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int empty(struct Queue*q)
{
    if(q->r=q->f)
    {
        return 1;
    }
    {
        return 0;
    }
}
int full(struct Queue *q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct Queue*q , int val)
{
    if(full (q))
    {
        printf("this queue is full \n");
    }
    else 
    {
        q->r++;
        q->arr[q->r]=val;
    }
}
int dequeue(struct Queue*q)
{
    int a = -1;
    if(empty(q))
    {
        printf("this queue is empty \n");
    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}
int main()
{
    struct Queue q;
    q.size = 400;
    q.f = q.r= 0;
    q.arr = (int *)malloc(q.size*sizeof(int));

    //BSF implementation 
    int node;
    int i=0;
    int visited[7] = { 0,0,0,0,0,0,0};
    int a[7][7] =
    {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},
    };

    printf("%d", i);
    visited[i] = 1;
    enqueue(&q, i);
    while(! empty(&q))
    {
        int Node = dequeue(&q);
        for(int j=0; j<7; j++ )
        {
            if( a [node][j] == 1 && visited[j] == 0)
            {
                printf("%d", j);
                visited [j] = 1;
                enqueue (&q, j);
            }
        }
    }
    return 0;
}