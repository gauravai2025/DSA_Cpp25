#include <iostream>
#include <vector>

using namespace std;

struct Node
{
	int data;
	Node *next;
	Node *prev;
	Node(int x)
	{
		data = x;
		next = nullptr;
		prev = nullptr;
	}
};

void trippleSumInLinkedList(Node* head, int targetSum, vector<vector<int>>& result) {
    // Pointer to traverse the list
    Node* current = head;

    // Find the last node of the list only once
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }

    // Outer loop: For each node, try to find pairs in the remaining part of the list
    while (current != nullptr && current->next != nullptr && current->next->next != nullptr) {
        // Left pointer starts from the next node after current
        Node* left = current->next;
        // Right pointer starts from the last node of the list (tail)
        Node* right = tail;

        // The sum we need to find with the remaining two nodes
        int remainingSum = targetSum - current->data;

        // Inner loop: Use two pointers (left and right) to find pairs that sum to remainingSum
        while (left != right && left != nullptr && right != nullptr && left != right->next) {
            int pairSum = left->data + right->data;

            // If we find a triplet that sums to targetSum
            if (pairSum == remainingSum) {
                result.push_back({current->data, left->data, right->data});
                left = left->next;    // Move left pointer forward
                right = right->prev;  // Move right pointer backward
            }
            // If the pair sum is greater than remainingSum, move the right pointer backward
            else if (pairSum > remainingSum) {
                right = right->prev;
            }
            // If the pair sum is less than remainingSum, move the left pointer forward
            else {
                left = left->next;
            }
        }

        // Move the current pointer to the next node in the list
        current = current->next;
    }
}


int main()
{
    int num;
    cout<<"Enter the number of elements in the linked list: \n";
    cin>>num;
	Node *head =NULL;
    Node* curr=head;

    while(num--){
        int x;
        cin>>x;
        Node *temp=new Node(x);

        if(head==NULL){
        head=temp;
        head->prev=NULL;
        curr=temp;
        }

        else{
        curr->next=temp;
        temp->prev=curr;
        curr=curr->next;
        }
    }
  
int target;
cout<<"Enter the target sum: \n";
cin>>target;
vector<vector<int>>res;

trippleSumInLinkedList(head, target,res);

	for (int i = 0; i < res.size(); i++)
		cout << res[i][0] << ", " << res[i][1] << ", " << res[i][2] << endl;
	return 0;
}
