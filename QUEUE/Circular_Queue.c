#include<stdio.h>
#include<stdlib.h>
#define CQueuesize 7
#define TRUE 1
#define FALSE 0
struct CQueue{
    int item[CQueuesize];
    int rear;
    int front;
};

void Initialize(struct CQueue* CQ){
    CQ->rear=CQueuesize-1;
    CQ->front=CQueuesize-1; 
}

int Isempty(struct CQueue* CQ){
    if(CQ->rear==CQ->front){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

void Enqueue(struct CQueue* CQ,int x){
    if(CQ->rear==Queuesize-1){
        printf("Queue Overflow\n");
        exit(1);
    }
    else{
        Q->rear=Q->rear+1;
        Q->item[Q->rear]=x;
    }
}

int Dequeue(struct Queue* Q){
    if(Isempty(Q)){
        printf("Queue Underflow\n");
        exit(1);
    }
    else{
        int x;
        x=Q->item[Q->front];
        Q->front++;
        return x;
    }
}

int User_Work(int y){
    struct Queue MyQ;
    Initialize(&MyQ);
    if(y==1){
        int x; 
        scanf("%d",&x);
        Enqueue(&MyQ,x);
        return 1;
    }
    else if(y==2){
        int x;
        x=Dequeue(&MyQ); 
        printf("%d  ",x);
        return x;
    }
    else{
        printf("Invalid Input\n");
        return 0;
    }

}
int main(){
    struct CQueue CQ;
    Initialize(&CQ);
    
    
    return 0;
}
