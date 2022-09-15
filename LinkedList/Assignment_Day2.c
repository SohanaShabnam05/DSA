#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
typedef struct node node;
struct node
{
    int data;
    node *next;
};

node *insertatBegining(node *head, int val)
{
    node *p = head;
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = val;
    new_node->next = head;
    head = new_node;
    return head;
}

node *insertatEnd(node *head, int val)
{
    node *p = head;
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = val;
    new_node->next = NULL;
    if (head == NULL)
    {
        head = new_node;
        return head;
    }
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = new_node;
    return head;
}
void display(node *p)
{
    if (p == NULL)
    {
        printf("Empty List");
    }
    else
    {
        while (p != NULL)
        {
            printf("%d\t", p->data);
            p = p->next;
        }
    }
}

node *insertatPos(node *head, int val, int pos)
{
    if (pos < 1)
    {
        printf("\nWrong Position(position can't be less than 1)");
    }
    else if (pos == 1)
    {
        head = insertatBegining(head, val);
    }
    else
    {
        node *ptr = head;
        int i = 1;
        while (ptr != NULL && i != pos - 1)
        {
            ptr = ptr->next;
            i++;
        }
        if (ptr == NULL)
        {
            printf("\nPosition Doesn't exist");
        }
        else
        {
            node *new_node = (node *)malloc(sizeof(node));
            new_node->data = val;
            new_node->next = ptr->next;
            ptr->next = new_node;
        }
    }
    return head;
}

node *deleteatBegining(node *head, int *pop_front)
{
    if (head == NULL)
    {
        printf("\nEmpty list");
        *pop_front = INT_MIN;
    }
    else
    {
        node *ptr = head;
        head = head->next;
        *pop_front = ptr->data;
        free(ptr);
    }
    return head;
}

node *deleteatEnd(node *head, int *pop_back)
{
    if (head == NULL)
    {
        printf("\nEmpty list");
    }
    else
    {
        node *curr = head;
        node *prev = NULL;
        while (curr->next != NULL)
        {
            prev = curr;
            curr = curr->next;
        }
        if (prev == NULL)
        {
            *pop_back = curr->data;
            free(curr);
            head = NULL;
        }
        else
        {
            *pop_back = curr->data;
            prev->next = NULL;
            free(curr);
        }
    }
    return head;
}

node *deleteatPosition(node *head, int pos, int *delval)
{
    if (pos < 1)
    {
        printf("\nWrong Position(position can't be less than 1)");
    }
    else if (pos == 1)
    {
        head = deleteatBegining(head, delval);
    }
    else
    {
        node *curr = head;
        node *prev = NULL;
        int i = 1;
        while (curr != NULL && i != pos)
        {
            prev = curr;
            curr = curr->next;
            i++;
        }
        if (curr == NULL)
        {
            printf("Position is Invalid!!");
        }
        else
        {
            *delval = curr->data;
            prev->next = curr->next;
            free(curr);
        }
    }
    return head;
}

int main()
{
    node *head;
    head = NULL;
    bool loop = true;
    int i = 0, val, n, pos;
    while (loop)
    {
        printf("\nChoices:\n1.Create a list\n2.Insert at begining\n3.Insert at end\n4.Insert at position\n5.Delete at begining\n6.Delete at end\n7.Delete at position\n8.Display list\n0.Exit\nEnter:");
        int choice = 0;
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            loop = false;
            break;
        case 1:
            while (head != NULL)
            {
                head = deleteatEnd(head, &val);
            }
            printf("Enter no. of nodes:");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("\nEnter value:");
                scanf("%d", &val);
                head = insertatEnd(head, val);
            }
            break;
      case 2:
            printf("\nEnter value:");
            scanf("%d", &val);
            head = insertatBegining(head, val);
            break;
        case 3:
            printf("\nEnter value:");
            scanf("%d", &val);
            head = insertatEnd(head, val);
            break;
        case 4:
            printf("\nEnter value && position:");
            scanf("%d%d", &val, &pos);
            head = insertatPos(head, val, pos);
            break;
        case 5:
            val = INT_MIN;
            head = deleteatBegining(head, &val);
            if (val != INT_MIN)
            {
                printf("\nDeleted Item: %d", val);
            }
            break;
        case 6:
            val = INT_MIN;
            head = deleteatEnd(head, &val);
            if (val != INT_MIN)
            {
                printf("\nDeleted Item: %d", val);
            }
            break;

        case 7:
            val = INT_MIN;
            printf("\nEnter the position to be deleted: ");
            scanf("%d", &pos);
            head = deleteatPosition(head, pos, &val);
            if (val != INT_MIN)
            {
                printf("\nDeleted Item: %d", val);
            }
            break;
        case 8:
            display(head);
            break;
        default:
            printf("\nInvalid Choice.");
        }
    }
    return 0;
}