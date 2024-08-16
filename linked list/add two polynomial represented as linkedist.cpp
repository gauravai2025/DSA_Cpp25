#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int power;
    int coefficient;
    Node *next;
    char base;

    // constructor
    Node(int coef, int pw)
    {
        this->power = pw;
        this->next = NULL;
        this->coefficient = coef;
        this->base = 'x';
    }
};

    // time complexity O(n+m)
    // space complexity O(n+m)
// void add_polynomial(Node *head1, Node *head2)
// {

//     Node *curr1 = head1;
//     Node *curr2 = head2;
//     Node *head = NULL;
//     Node *curr = NULL;

//     while (curr1 != NULL && curr2 != NULL)
//     {

//         Node *temp = NULL;

//         if (curr1->power == curr2->power)
//         {
//             temp = new Node(curr1->coefficient + curr2->coefficient, curr1->power);
//             curr1 = curr1->next;
//             curr2 = curr2->next;
//         }

//         else if (curr1->power>curr2->power)
//         {
//             temp = new Node(curr1->coefficient, curr1->power);
//             curr1 = curr1->next;
//         }

//         else
//         {
//             temp = new Node(curr2->coefficient, curr2->power);
//             curr2 = curr2->next;
//         }

//         if (head == NULL)
//         {
//             head = temp;
//             curr = temp;
//         }

//         else
//         {
//             curr->next = temp;
//             curr = temp;
//         }

//     }

//     if (curr1 != NULL)
//     {
//         curr->next = curr1;
//     }

//     if (curr2 != NULL)
//     {
//         curr->next = curr2;
//     }

//     curr = head;
//     bool flag=0;

//     while (curr != NULL)
//     {
//         if(flag)
//         cout<<"+";
//         cout << curr->coefficient << curr->base << curr->power;
//         curr = curr->next;
//         flag=1;
//     }

// }

// time complexity O(n+m)
// space complexity O(1)

  void add_polynomial(Node *head1, Node *head2)
{

    Node *curr1 = head1;
    Node *curr2 = head2;
    Node *dummy = new Node(0,0);
    Node *curr = dummy;

    while (curr1 != NULL && curr2 != NULL)
    {

       
  if (curr1->power == curr2->power)
     {
        
         curr1->coefficient=curr1->coefficient + curr2->coefficient;
         curr->next=curr1;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        else if (curr1->power>curr2->power)
        {
           curr->next=curr1;
            curr1 = curr1->next;
        }

        else
        {
           curr->next=curr2;
            curr2 = curr2->next;
        }

        curr=curr->next;
       

    }

    if (curr1 != NULL)
    {
        curr->next = curr1;
    }

    if (curr2 != NULL)
    {
        curr->next = curr2;
    }
    
    
    Node* head=dummy->next;

    
    curr = head;
    bool flag=0;

    while (curr != NULL)
    {
        if(flag)
        cout<<"+";
        if(curr->power!=0)
        cout << curr->coefficient << curr->base <<"^"<< curr->power;
        else
        cout<<curr->coefficient;
        curr = curr->next;
        flag=1;
    }
    
}

    int main()
    {

        int number_of_term1, number_of_term2;
        Node *head1 = NULL;
        Node *head2 = NULL;
        Node *curr1 = NULL;
        Node *curr2 = NULL;

        // cout << "enter number_of_term in 1st polynomial : ";
        cin >> number_of_term1;
        // cout << "enter 1st polynomial represented as linked list\n";

        for (int i = 1; i <= number_of_term1; i++)
        {
            int cf, pw;
            cin >> cf >> pw;
            Node *temp = new Node(cf, pw);

            if (i == 1)
            {
                head1 = temp;
                curr1 = temp;
            }

            else
            {
                curr1->next = temp;
                curr1 = temp;
            }
        }

        // cout << "enter number_of_term in 2nd polynomial : ";
        cin >> number_of_term2;

        // cout << "enter 2nd polynomial represented as linked list\n";

        for (int i = 1; i <= number_of_term2; i++)
        {
            int cf, pw;
            cin >> cf >> pw;
            Node *temp = new Node(cf, pw);

            if (i == 1)
            {
                head2 = temp;
                curr2 = temp;
            }

            else
            {
                curr2->next = temp;
                curr2 = temp;
            }
        }

        add_polynomial(head1, head2);

        return 0;
    }