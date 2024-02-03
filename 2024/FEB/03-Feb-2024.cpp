class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
        long long unsigned int decimal = 0;
        Node* current = head;
        
        while (current != nullptr) {
            decimal = (decimal * 2 + current->data) % MOD;
            current = current->next;
        }
        
        return decimal;
        }
};
