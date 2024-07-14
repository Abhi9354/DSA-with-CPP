#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int n)
    {
        data = n;
        next = NULL;
    }
};
class linkedlist
{
public:
    node *head, *tail;
    linkedlist()
    {
        head = NULL;
        tail = NULL;
    }
    void display()
    {
        node *temp = head;

        

            while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void addFirst(int val)
    {
        node *temp = new node(val);
        if (head == NULL)
            head = temp;
        else
        {
            temp->next = head;
            head = temp;
        }
        if (tail == NULL)
            tail = head;
    }
    void addCycle(int idx)
    {
        node *temp = head;
        idx--;
        while (idx--)
        {
            temp = temp->next;
        }
        temp->next->next = head->next;
    }
    int findLength()
    {
        node *fast = head->next;
        node *slow = head;
        int fl = 0;
        //detect cycle
        while (fast and fast->next)
        {
            if (fast == slow)
            {
                fl = 1;
                break;
            }
            fast = fast->next->next;
            slow = slow->next;
        }
        if (fl == 0)
            return 0;


        //length           
        int cnt = 1;
        slow = slow->next;

        

            while (slow != fast)
        {
            cnt++;
            slow = slow->next;
        }
        return cnt;
    }
};
int main()
{
    linkedlist ll;
    ll.addFirst(1);
    ll.addFirst(2);
    ll.addFirst(3);
    ll.addFirst(4);
    ll.addFirst(5);
    ll.addFirst(6);
    ll.addCycle(4);
    cout << ll.findLength() << endl;
}