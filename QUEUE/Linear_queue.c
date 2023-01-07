#include<stdio.h>
#include<stdlib.h>
#define Queuesize 7
#define TRUE 1
#define FALSE 0
struct Queue{
    int item[Queuesize];
    int rear;
    int front;
};

void Initialize(struct Queue* Q){
    Q->rear=-1;
    Q->front=0; 
}

int Isempty(struct Queue* Q){
    if(Q->rear-Q->front+1==0){
        return TRUE;
    }
    else{
        return FALSE;
    }
}

void Enqueue(struct Queue* Q,int x){
    if(Q->rear==Queuesize-1){
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
    struct Queue MyQ;
    Initialize(&MyQ);
    printf("1. Enqueue Buffer\n 2. Dequeue Buffer\n");
    int y;
    scanf("%d",&y);
    int result=User_Work(y);
    printf("Result of Action execution %d\n",result);
    printf("Again want to input enter 4\n");
    int s;
    scanf("%d",&s);
    if(s==4){
        int y;
        scanf("%d",&y);
        User_Work(y);
    }
    else{
        printf("Invalid Input\n");
    }
    
    return 0;
}

