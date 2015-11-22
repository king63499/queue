#include <stdio.h>
#define QUEUE_SIZE 5

typedef struct Queue{
	int list[QUEUE_SIZE];
	int * head;
	int * rear;
}sQueue;

void init(sQueue * q){
	q->head = q->list;
	q->rear = q->list;
} 
void enQueue(sQueue * q,int a){
	if(isFull(q) == 0){
		*q->rear = a;
		q->rear ++;
		if(q->rear == q->list + QUEUE_SIZE){
			q->rear = q->list;
		}
		printf("%d%s\n",a," has been added to the queue");
	}else{
		printf("%s\n","the queue is full");
	}
}
int deQueue(sQueue * q){
	if(isEmpty(q) == 0){
		int a = *q->head;
		q->head++;
		if(q->head == q->list + QUEUE_SIZE){
			q->head = q->list;
		}
		printf("%d%s\n",a," has been removed from the queue");
		return (a);
	}else{
		printf("%s\n","the queue is empty");
	}
	return (0);
}

int isFull(sQueue * q){
	//q->rear;
	if((q->rear + 1 - q->head) % QUEUE_SIZE == 0){
		return (1);
	}else{
		return (0);
	}
}
int isEmpty(sQueue * q){
	if((q->rear - q->head) % QUEUE_SIZE == 0){
		return (1);
	}else{
		return (0);
	}
}


void main(){
	sQueue q;
	init(&q);
	
	enQueue(&q,5);
	deQueue(&q);
	enQueue(&q,71);
	deQueue(&q);
	enQueue(&q,72);
	deQueue(&q);
	enQueue(&q,73);
	enQueue(&q,74);
	deQueue(&q);
	enQueue(&q,75);
	enQueue(&q,76);
	enQueue(&q,77);
	deQueue(&q);
	enQueue(&q,78);
	deQueue(&q);
	deQueue(&q);
	deQueue(&q);
	deQueue(&q);
	deQueue(&q);
	
}
