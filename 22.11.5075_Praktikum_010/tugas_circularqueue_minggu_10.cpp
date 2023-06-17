#include <iostream>

using namespace std;

class CircularQueue {
private:
    int *items;
    int front, rear;
    int maxSize;

public:
    CircularQueue(int size) {
        maxSize = size + 1; 
        items = new int[maxSize];
        front = 0;
        rear = 0;
    }

    ~CircularQueue() {
        delete[] items;
    }

    bool isFull() {
        return (rear + 1) % maxSize == front;
    }

    bool isEmpty() {
        return front == rear;
    }

    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue sudah penuh. Tidak bisa men-enqueue element." << endl;
        } else {
            rear = (rear + 1) % maxSize;
            items[rear] = element;
            cout << "ter-enqueued: " << element << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue kosong. Tidak bisa men-dequeue element." << endl;
        } else {
            front = (front + 1) % maxSize;
            cout << "Ter-queued: " << items[front] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue kosong." << endl;
        } else {
            int i = (front + 1) % maxSize;
            cout << "Queue elements: ";
            while (i != (rear + 1) % maxSize) {
                cout << items[i] << " ";
                i = (i + 1) % maxSize;
            }
            cout << endl;
        }
    }
};

int main() {
    int size;
    cout << "Masukkan ukuran dari circular queue yang diinginkan: ";
    cin >> size;

    CircularQueue queue(size);

    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);

    queue.display();

    queue.dequeue();
    queue.dequeue();

    queue.display();

    queue.enqueue(6);
    queue.enqueue(7);

    queue.display();

    return 0;
}
