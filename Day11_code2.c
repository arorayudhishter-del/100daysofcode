#include <stdio.h>
int main()
{
    int cost, sell;
    printf("Enter the cost price here:");
    scanf("%d", &cost);
    printf("Enter the selling price here:");
    scanf("%d", &sell);
    float profit = ((float)(sell - cost) / cost) * 100;
    float loss = ((float)(cost - sell) / cost) * 100;
    if(cost > sell)
    {
        printf("You faced a loss and profit will be negative");
        printf("loss : %.2d", loss);
    }
    else
    {
        printf("You have had a profit and its value is %.2d", profit);
    }
    return 0;
}