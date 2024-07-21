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
     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = new ListNode(70);
        ListNode* c = temp;
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                temp->next = list1;
                list1 = list1->next;
                temp = temp->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
                temp = temp->next;
            }
        }
        if (!list1)
            temp->next = list2;
        else
            temp->next = list1;

        return c->next;
    }
     ListNode* mergeKLists(vector<ListNode*>& lists) {

        if (lists.size() == 0)
            return NULL;
        // while (lists.size() > 1) {
        //     ListNode* last1 = lists[lists.size() - 1];
        //     lists.pop_back();
        //     ListNode* last2 = lists[lists.size() - 1];
        //     lists.pop_back();
        //     ListNode* ans = mergeTwoLists(last1, last2);
        //     lists.push_back(ans);
        
        // }
        //better approach
         while (lists.size() > 1) {
            ListNode* front1 = lists[0];
           lists.erase(lists.begin());
            ListNode* front2= lists[0];
           lists.erase(lists.begin());
            
            ListNode* ans = mergeTwoLists(front1, front2);
            lists.push_back(ans);
          
        }
        return lists[0];
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
    
    
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(4);
    ListNode *c = new ListNode(5);
    ListNode *d = new ListNode(1);
    ListNode *e = new ListNode(3);
    ListNode *f = new ListNode(4);
    ListNode *g = new ListNode(2);
    ListNode *h = new ListNode(6);

    a->next = b;
    b->next = c;  

    d->next = e;
    e->next = f;

    g->next=h;

    vector<ListNode*>lists{{a},{d},{g}};
    // cout << endl;
    solution ans;
    ListNode* answer= ans.mergeKLists(lists);
    
    display(answer);
}