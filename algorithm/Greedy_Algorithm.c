#include <stdio.h>

void coinChange(int coins[], int n, int amount) 
{
    int i, count = 0;
    
    printf("找零方案：\n");
    for (i = 0; i < n; i++) 
    {
        while (amount >= coins[i]) 
        {
            printf("%d ", coins[i]);
            amount -= coins[i];
            count++;
        }
    }
    
    printf("\n共使用 %d 个硬币\n", count);
}

int main() 
{
    printf("硬币找零问题\n");
    //按序排列的硬币面值
    int coins[] = {25, 10, 5, 1};  // 硬币面值，按从大到小排序
    int n = sizeof(coins) / sizeof(coins[0]);
    int amount = 67;  // 需要找零的金额
    
    coinChange(coins, n, amount);
    
    return 0;
}