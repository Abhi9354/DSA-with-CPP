#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
    }
};
class solution
{
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
vector<vector<int>> arr(m, vector<int>(n,-1));

         int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;
    ListNode *temp=head;

     while (minr <= maxr && minc <= maxc) {
        // Traverse from left to right
        for (int j = minc; j <= maxc; j++) {
           if(temp==NULL)return arr;
            arr[minr][j] = temp->val;
            temp=temp->next;
        }
        minr++;
        // Traverse from top to bottom
        for (int i = minr; i <= maxr; i++) {
           if(temp==NULL)return arr;

            arr[i][maxc] = temp->val;
            temp=temp->next;
        }
        maxc--;
        // Traverse from right to left
        if (minr <= maxr) {
            for (int j = maxc; j >= minc; j--) {
           if(temp==NULL)return arr;

                arr[maxr][j] = temp->val;
                temp=temp->next;
            }
            maxr--;
        }
        // Traverse from bottom to top
        if (minc <= maxc) {
            for (int i = maxr; i >= minr; i--) {
           if(temp==NULL)return arr;

                arr[i][minc] = temp->val;
                temp=temp->next;
            }
            minc++;
        }
    }

    return arr;
    }
};

void display(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main()
{
    ListNode *a = new ListNode(3);
    ListNode *b = new ListNode(0);
    ListNode *c = new ListNode(2);
    ListNode *d = new ListNode(6);
    ListNode *e = new ListNode(8);
    ListNode *f = new ListNode(1);
    ListNode *g = new ListNode(7);
    ListNode *h = new ListNode(9);
    ListNode *i = new ListNode(4);
    ListNode *j = new ListNode(2);
    ListNode *k = new ListNode(5);
    ListNode *l = new ListNode(5);
    ListNode *m = new ListNode(0);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = i;
    i->next = j;
    j->next = k;
    l->next = m;
    cout << endl;

    solution ans;
    vector<vector<int>>answer = ans.spiralMatrix(3, 5,a);
    for(int i =0; i<3;i++){
        for(int j =0 ; j<5;j++){
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }
    // display(answer);
}