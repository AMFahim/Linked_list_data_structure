#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};


void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;

}

void prit_link_list(Node *head)
{
    cout<<endl;
    cout << "Your Linklist: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout<<endl<<endl;
}

int main(){
    int val;
    Node* head = NULL;
    while(true){
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head, val);
    }

    prit_link_list(head);
    
    return 0;
}