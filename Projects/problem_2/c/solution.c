// 2. Add Two Numbers
#include <stdlib.h>

struct ListNode
{
    int value;
    struct ListNode *next;
};

struct ListNode* createNode(int value)
{
    struct ListNode *newNode = calloc(1, sizeof(struct ListNode *));
    
    newNode->value = value;
    
    return newNode;
}

void addNode(struct ListNode **list, int value)
{
    if (*list == NULL)
    {
        *list = createNode(value);
    }
    else
    {
        struct ListNode *currentNode = *list;
        
        while (currentNode->next != NULL)
        {
            currentNode = currentNode->next;
        }
        
        currentNode->next = createNode(value);
    }
}

struct ListNode* addTwoNumbers(struct ListNode* list1, struct ListNode* list2)
{
    struct ListNode *result = NULL;
    
    if (list1 != NULL && list2 != NULL)
    {
        struct ListNode *currentNode1 = list1;
        struct ListNode *currentNode2 = list2;
        int value = 0;
        int carry = 0;

        do
        {
            if (currentNode1 == NULL)
            {
                value = currentNode2->value;
                currentNode2 = currentNode2->next;
            }
            else
            {
                if (currentNode2 == NULL)
                {
                    value = currentNode1->value;
                    currentNode1 = currentNode1->next;
                }
                else
                {
                    value = currentNode1->value + currentNode2->value;
                    currentNode1 = currentNode1->next;
                    currentNode2 = currentNode2->next;
                }
            }

            addNode(&result, (value + carry) % 10);
            carry = ((value + carry) > 9) ? 1 : 0;
        } while (currentNode1 != NULL || currentNode2 != NULL);

        if (carry > 0)
        {
            addNode(&result, carry);
        }
    }
    
    return result;
}