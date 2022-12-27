// C program to create a simple queue and perform basic operations such as insert delete and display elements

#include <stdio.h>
#include <stdlib.h>
# define Size 10
void insert(int);
int delete();
void disp();

int queue[Size];
int top=-1, end=0;

int main()
{
    int ch, ele;
    
    while(1)
    {
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: printf("Enter the element to insert: ");
                scanf("%d", &ele);
                insert(ele);
                break;
        case 2: ele = delete();
                printf("Deleted item is %d\n",ele);
                break;
        case 3: disp();
                break;
        case 4: exit(0);
        default: printf("Enter valid input\n");
            break;
        }
    }
}

void insert(int ele)
{
    if(end >= Size-1)
    {
        printf("Queue Full\n");
        return;
    }
    else
    {
        queue[end++] = ele;
        if(top == -1)
        {
            top++;
        }
        printf("Element inserted!\n");
    }
}

int delete()
{
    int ele;
    if(top == -1 && end == 0)
    {
        printf("Queue is empty !!\n");
        return 0;
    }
    else
    {
        ele = queue[top++];
        return ele;
    }
}

void disp()
{
    int i;
    if (top == -1)
    {
        printf("Queue is empty!\n");
        return;
    }
    else
    {
        printf("The queue elements are:\n");
        for (i = top; i < end; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
        
    }
    
}