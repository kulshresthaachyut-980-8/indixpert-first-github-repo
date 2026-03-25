#include <stdio.h>
int main()
{
    int Apples;
    int color;
    int count_red = 0;
    int count_green = 0;

    printf("You Can See Apples on a Tree.\n");
    printf("Guess How Many total Apples You can see on this tree.");
    printf("\n!hint: < 12\n  : ");
    scanf("%d", &Apples);
    printf("\nHow many Diffrent Colors of Apple on Tree You can see: ");
    scanf("%d",&color);
    int tree[color][Apples];

    printf("\nIf Apple is Red than Press : '1' \n If Apple is Green Than Press : '2'\n ");
    for (int i = 0; i < color; i++)
    {
        for (int a = 0; a < Apples; a++)
        {
            scanf("%d", &tree[i][a]);
        }
    }

    for (int i = 0; i < color; i++)
    {
        for (int a = 0; a < Apples; a++)
        {
            if (tree[i][a] == 1)
            {
                count_red++;
            }
            else if (tree[i][a] == 2)
            {
                count_green++;
            }
        }
    }
    printf("\nTotal Red Apples on this Tree = %d \nTotal Green Apples On this Tree = %d \n Total Apples On this tree = %d", count_red, count_green, count_green + count_red);

    return 0;
}