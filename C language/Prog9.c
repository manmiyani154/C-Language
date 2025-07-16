#include <stdio.h>
#define SIZE 5

int cq[SIZE], front = -1, rear = -1;

void insert(int val) {
    if ((rear + 1) % SIZE == front) return;
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    cq[rear] = val;
}

void delete() {
    if (front == -1) return;
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void display() {
    if (front == -1) return;
    int i = front;
    while (1) {
        printf("%d ", cq[i]);
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {

    insert(1);
    insert(2);
    insert(3);
    insert(4);
    display();       
    delete();
    insert(5);
    display();       
    return 0;
}
