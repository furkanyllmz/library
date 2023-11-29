#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct intersectedNode
{

    int data;
    int index1;
    int index2;
    struct intersectedNode *next;
};
struct intersectedNode *intersected_nodes(struct node *list1, struct node *list2)
{
    struct node *iter1;
    struct node *iter2;
    struct intersectedNode *iter3;
    iter1 = list1;
    iter2 = list2;
    struct intersectedNode *list3;
    list3 = (struct intersectedNode *)malloc(sizeof(struct intersectedNode));
    list3->next = NULL;
    iter3 = list3;
    int list1count, list2count;
    list1count = 0;
    list2count = 0;
    while (iter1->next != NULL)
    {
        while (iter2->next != NULL)
        {

            if (iter1->data == iter2->data)
            {
                iter3->data = iter1->data;
                iter3->index1 = list1count;
                iter3->index2 = list2count;
                iter3->next = (struct intersectedNode *)malloc(sizeof(struct intersectedNode));
                iter3->next->next = NULL;
                iter3 = iter3->next;
            }
            iter2 = iter2->next;
            list2count++;

            if (iter2->next == NULL)
            {
                iter2 = list2;
                list2count = 0;
                break;
            }
        }
        iter1 = iter1->next;
        list1count++;
    }
    return list3;
};
int main()
{

    struct node *root1;
    int input;
    struct node *iter1;
    root1 = (struct node *)malloc(sizeof(struct node));
    struct node *root2;
    root2 = (struct node *)malloc(sizeof(struct node));
    struct intersectedNode *list3;
    list3 = (struct intersectedNode *)malloc(sizeof(struct intersectedNode));
    list3->next = NULL;
    root1->next = NULL;
    root2->next = NULL;
    iter1 = root1;

    while (1)
    {

        scanf("%d", &input);
        if (input != -1)
        {
            iter1->data = input;
            iter1->next = (struct node *)malloc(sizeof(struct node));
            iter1->next->next = NULL;
            iter1 = iter1->next;
        }
        else
            break;
    }
    iter1 = root2;
    while (1)
    {

        scanf("%d", &input);
        if (input != -1)
        {
            iter1->data = input;
            iter1->next = (struct node *)malloc(sizeof(struct node));
            iter1->next->next = NULL;
            iter1 = iter1->next;
        }
        else
            break;
    }
    list3 = intersected_nodes(root1, root2);

    while (list3->next != NULL)
    {
        printf("%d %d %d\n", list3->data, list3->index1, list3->index2);
        list3 = list3->next;
    }

    return 0;
}