#include <iostream>
using namespace std;
class MinHeap
{
public:
    int arr[50];
    int idx;
    int top() { return arr[1]; }
    MinHeap() { idx = 1; }
    void push(int element)
    {
        arr[idx] = element;
        int i = idx;
        idx++;
        while (i != 1)
        {
            int parent = i / 2;
            if (arr[i] < arr[parent]) swap(arr[i], arr[parent]);
            else break;
            i = parent;
        }
    }

    void pop()
    {
        idx--;
        arr[1] = arr[idx];
        int i = 1;
        while (1)
        {
            int leftChild = 2 * i;
            int rightChild = (2 * i) + 1;
            if (leftChild > (idx - 1))  break;
            if (rightChild > idx - 1)
            {
                if (arr[i] > arr[leftChild])
                {
                    swap(arr[i], arr[leftChild]);
                    i = leftChild;
                }
                break;
            }

            if (arr[leftChild] > arr[rightChild])
            {
                if (arr[i] > arr[rightChild])
                {
                    swap(arr[i], arr[rightChild]);
                    i = rightChild;
                }
            }
            else
            {
                if (arr[i] > arr[leftChild])
                {
                    swap(arr[i], arr[leftChild]);
                    i = leftChild;
                }
            }
        }
    }
};
int main()
{
    MinHeap pq;
    pq.push(10);
    pq.push(20);
    pq.push(11);
    pq.push(30);
    pq.push(40);
    pq.push(12);
    pq.push(4);
    pq.push(7);
    pq.push(2);
    cout << pq.top()<<endl;
    pq.pop();
    cout << pq.top()<<endl;
    
}