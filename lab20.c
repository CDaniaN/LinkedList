/*
Dania Nasereddin
5-3-21
The program asks the user for how many nodes are in the list.
Then it asks the user for a numeric value to store in each node.
Once the list has been fully populated, it prints the entire list.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int num; //points to current number in linked list
    struct Node *nextNum; //points to next number in linked list
}Node;


int main()
{
    int numOfNums; //how many in list
    Node *head = NULL; //front of list
    Node *temp = NULL; //temp place holder

    printf("How many numbers are in the list?\n");
    scanf("%d", &numOfNums); //input for how many in list

    for (int i = 0; i < numOfNums; i++) //go through list
    {
        //makes pointer out of the size of node
        temp = (Node *) malloc(sizeof(Node));
        printf("Enter a num\n");
        scanf("%d", &(temp->num)); //inputs numbers in each node
        temp->nextNum = head;
        //stores num and then moves to next node
        head = temp;
    }

    printf("Traverse the list of nodes!\n");
    temp = head; //back to begining of list

    for (int i = 0; i < numOfNums; i++) //go through list
    {
        //prints num in current node
        printf("Node %d's Value is %d\n", i + 1, temp->num);
        temp = temp->nextNum; //moves to next node or num
    }

    return 0;
}
