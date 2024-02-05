class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       Node* newNode = new Node(data);

        if (!head) {
            newNode->next = newNode;
            return newNode;
        }

        Node* current = head;

        // Find the position to insert the new node
        while (true) {
            if (current->next->data >= data || current->next == head) {
                newNode->next = current->next;
                current->next = newNode;
                break;
            }
            current = current->next;
        }

        // Update head if necessary
        if (data < head->data) {
            head = newNode;
        }

        return head;
    }
};
