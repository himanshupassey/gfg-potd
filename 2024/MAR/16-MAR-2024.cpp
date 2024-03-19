class Solution {
public:
    void deleteNode(Node *del_node) {
        Node* next_node = del_node->next;
        del_node->data = next_node->data;
        del_node->next = next_node->next;
        free(next_node);
    }
};
