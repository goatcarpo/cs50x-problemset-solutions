int get_height(void);

int main(void)
{
    int height = get_height();
    // height
    for (int i = 0; i < height; i++)
    {
        for (int k = 1; k < height - i; k++)
            {
                printf(" ");
            }
        for (int j = 0 ; j < i + 1 ; j++)
            {
            printf("#");
            }
        printf("\n");
    }
}

int get_height(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);
    return n;
}