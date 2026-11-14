void push(struct Stack *s, int value)
{
    if (s->top == MAX - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }

    s->top++;
    s->arr[s->top] = value;

    printf("%d pushed into the stack.\n", value);
}

void pop(struct Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack Underflow!\n");
        return;
    }

    printf("Popped element: %d\n", s->arr[s->top]);
    s->top--;
}

void display(struct Stack *s)
{
    int i;

    if (s->top == -1)
    {
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack elements are:\n");

    for (i = s->top; i >= 0; i--)
    {
        printf("%d\n", s->arr[i]);
    }
}
int main()
{
    struct Stack s;
    int choice, value;

    s.top = -1;

    while (1)
    {
        printf("\n--- STACK OPERATIONS ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter the value: ");
                scanf("%d", &value);
                push(&s, value);
                break;

            case 2:
                pop(&s);
                break;

            case 3:
                display(&s);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return (0);
}

