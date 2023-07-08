#include <stdio.h>
# define SIZE 100
void enqueue();
void dequeue();
void show();
int inp_arr[SIZE];
int Rear = - 1;
int Front = - 1;

int main()
{
    int ch;
    while (10)
    {
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("---------------------------------------------------------------------------");
        printf("\n");
        printf("1.Input Elements\n");
        printf("2.Remove Elements\n");
        printf("3.Display Elements\n");
        printf("4.Input Lots of Elements\n");
        printf("5.Exit\n");
        printf("Which Operation you want to Perform : ");
        scanf("%d", &ch);
        printf("---------------------------------------------------------------------------");
        printf("\n");
        printf("\n");
        
        printf("--------------------------------------------------------------------------- \n");
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            show();
            break;
            case 4:
            morenum();
            case 5:
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
        printf("--------------------------------------------------------------------------- \n");
        
    } 
} 
 
void enqueue()
{
    int insert_item;
    if (Rear == SIZE - 1)
       printf("Overflow \n");
    else
    {
        if (Front == - 1)
      
        Front = 0;
        printf("Element to be inserted in the Queue\n : ");
        scanf("%d", &insert_item);
        Rear = Rear + 1;
        inp_arr[Rear] = insert_item;
    }
} 

void morenum()
{
    int insert_num;
    int times;
    int i;
    printf("How many Inputs ?");
    scanf("%d", &times);

    for(i = 0; i < times; ++i )
    {
            int insert_item;
            if (Rear == SIZE - 1)
                printf("Overflow \n");
            else
            {
                if (Front == - 1)
            
                Front = 0;
                printf("Element to be inserted in the Queue\n : ");
                scanf("%d", &insert_item);
                Rear = Rear + 1;
                inp_arr[Rear] = insert_item;
            }
    }
    
}
 
void dequeue()
{
    if (Front == - 1 || Front > Rear)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", inp_arr[Front]);
        Front = Front + 1;
    }
} 
 
void show()
{
    
    if (Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", inp_arr[i]);
        printf("\n");
    }
} 