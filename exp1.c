#include <stdio.h>

int STK[100], TOP = 0, i, j, k, choice;
void Push();
void Pop();
void Peep();
void display();
int main()
{
    printf("Enter the size of stack(maximum size=100):");
    scanf("%d", &i);
    do
    {
        printf("\n1.Push\n2.Pop\n3.Peep\n4.Display\n5.Exit");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (TOP >= i - 1)
            {
                printf("Stack Overflow \n");
            }
            else
            {
                printf(" Enter the element to be pushed: ");
                scanf("%d", &k);
                TOP++;
                STK[TOP] = k;
            }
            break;
        case 2:
            if (TOP < 0)
            {
                printf(" Stack Underflow \n");
            }
            else
            {
                printf(" The popped element is: %d \n", STK[TOP]);
                TOP--;
            }
        case 3:
            printf("Enter the position of the element you want to pop:");
            scanf("%d", &j);
            if (TOP - j + 1 < 0)
            {
                printf("Stack Underflow on Peep \n");
            }
            else
            {
                printf("The %d element from the top is: %d \n", j, STK[TOP - j + 1]);
            }
            break;
        case 4:
            if (TOP < 0)
            {
                printf(" Stack is empty \n");
            }
            else
            {
                printf(" The element in the stack are:");
                for (i = TOP; i > -1; i--)
                {
                    printf("\n %d \n", STK[i]);
                }
            }
            break;
        case 5:
            printf("Exit: Program Finished");
            break;
        default:
            printf("Please enter a valid choide: 1, 2, 3, 4, 5 \n");
        }

    } while (choice != 5);
    return 0;
}