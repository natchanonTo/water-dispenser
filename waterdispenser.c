#include <stdio.h>

int main () {

    //Data
    int money = 0,watertype,extramoney = 0;

    //Input money
    printf("Water dispenser\n");
    printf("Input your money\n");
    scanf("%d",&money);
    printf("Money %d bart\n",money);

    //Input water type
    printf("Choose your water\n");
    printf("1. Cola\n");
    printf("2. Pepsi\n");
    printf("3. Est\n");
    printf("4. Big cola\n");
    scanf("%d",&watertype);

    int cost = 0;

    if (watertype==1)
    {
        cost = 30;
        printf("You choose cola\n");
        while (money<cost)
        {
            printf("Input more money\n");
            scanf("%d",&extramoney);
            money += extramoney;
            
        }
        money -= cost;
        printf("Withdraw money %d bart",money);

    }
    else if (watertype==2)
    {
        cost = 30;
        printf("You choose cola\n");
        while (money<cost)
        {
            printf("Input more money\n");
            scanf("%d",&extramoney);
            money += extramoney;
            
        }
        money -= cost;
        printf("Withdraw money %d bart",money);

    }
    else if (watertype==3)
    {
        cost = 30;
        printf("You choose cola\n");
        while (money<cost)
        {
            printf("Input more money\n");
            scanf("%d",&extramoney);
            money += extramoney;
            
        }
        money -= cost;
        printf("Withdraw money %d bart",money);

    }   
    else if (watertype==4)
    {
        cost = 40;
        printf("You choose cola\n");
        while (money<cost)
        {
            printf("Input more money\n");
            scanf("%d",&extramoney);
            money += extramoney;
            
        }
        money -= cost;
        printf("Withdraw money %d bart",money);

    }
    else
    {
        printf("Invalid water type\n");
        printf("Withdraw money %d bart\n",money);
    }
    return 0 ;

}