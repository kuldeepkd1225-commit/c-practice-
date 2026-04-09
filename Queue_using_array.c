    #include <stdio.h>
    #include <stdlib.h>

    struct myQueue {
        int *arr;
        int front, rear, size;
    };

    void initQueue(struct myQueue *q, int n) {
        q->size = n;
        q->front = 0;
        q->rear = -1;
        q->arr = (int *)malloc(n * sizeof(int));
    }

    int isEmpty(struct myQueue *q) {
        return (q->rear == -1);
    }

    int isFull(struct myQueue *q) {
        return (q->rear == q->size - 1 && q->front == 0);
    }

    void enqueue(struct myQueue *q, int x) {
        if (q->rear == q->size - 1 && q->front > 0) {
            int j = 0;
            for (int i = q->front; i <= q->rear; i++) {
                q->arr[j++] = q->arr[i];
            }
            q->rear = q->rear - q->front;
            q->front = 0;
        }

        if (q->rear == q->size - 1)
            return;

        q->arr[++(q->rear)] = x;
    }

    void dequeue(struct myQueue *q) {
        if (isEmpty(q))
            return;

        q->front++;

        if (q->front > q->rear) {
            q->front = 0;
            q->rear = -1;
        }
    }

    int getFront(struct myQueue *q) {
        if (isEmpty(q))
            return -1;
        return q->arr[q->front];
    }

    int getRear(struct myQueue *q) {
        if (isEmpty(q))
            return -1;
        return q->arr[q->rear];
    }

    int main() {
        struct myQueue q;
        initQueue(&q, 3);  

        printf("Is Empty: %d\n", isEmpty(&q));

        enqueue(&q, 10);
        enqueue(&q, 20);
        enqueue(&q, 30);

        printf("Is Full: %d\n", isFull(&q));
        enqueue(&q, 40);

        printf("Front: %d\n", getFront(&q));
        printf("Rear: %d\n", getRear(&q));

        dequeue(&q);
        dequeue(&q);
        dequeue(&q);

        printf("Is Empty after dequeue: %d\n", isEmpty(&q));

        dequeue(&q);

        enqueue(&q, 50);
        enqueue(&q, 60);

        printf("Front after reset: %d\n", getFront(&q));
        printf("Rear after reset: %d\n", getRear(&q));

        return 0;
    }