#include <stdio.h>

int main () {

    //Data
    int money = 0,watertype,extramoney = 0;

    //Input money
    printf("Water dispenser\n");
    
    printf("1. Cola 30 bart\n");
    printf("2. Pepsi 30 bart\n");
    printf("3. Est 30 bart\n");
    printf("4. Big cola 40 bart\n");
    printf("Input your money\n");
    scanf("%d",&money);
    printf("Money %d bart\n",money);

    //Input water type
    printf("Choose your water\n");
    scanf("%d",&watertype);

    int cost = 0;

    if (watertype==1)
    {
        cost = 30;
        
        if (money<cost)
        {
            printf("Withdraw money %d bart",money);

        }
        else
        {
            printf("You choose cola\n");
            money -= cost;
            printf("Withdraw money %d bart",money);

        }
    }
    else if (watertype==2)
    {
        cost = 30;
            
        if (money<cost)
        {
            printf("Withdraw money %d bart",money);

        }
        else
        {
            printf("You choose pepsi\n");
            money -= cost;
            printf("Withdraw money %d bart",money);
        }
    }
    else if (watertype==3)
    {
        cost = 30;

        if (money<cost)
        {
            printf("Withdraw money %d bart",money);

        }
        else
        {
            printf("You choose est\n");
            money -= cost;
            printf("Withdraw money %d bart",money);
        }
    }   
    else if (watertype==4)
    {
        cost = 40;

        if (money<cost)
        {
            printf("Withdraw money %d bart",money);

        }
        else
        {
            printf("You choose big cola\n");
            money -= cost;
            printf("Withdraw money %d bart",money);
        }
    }
    else
    {
        printf("Invalid water type\n");
        printf("Withdraw money %d bart\n",money);
    }

    return 0 ;

}