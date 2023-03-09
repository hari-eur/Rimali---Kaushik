#include <stdio.h>
int main() {
printf("1.dbs Bank\n2.kvb Bank\n3.SBI bank\n4.union Bank\n5.HDFC");
int name;
printf("\nEnter the bank number:\n");
scanf("%d",&name);
switch(name)
{
    case 1:
    printf("dbs Bank\n");
    int cash=200000;
        printf("1.Current\n2.Saving\n3.demat\n");
        int dbsid;
        printf("Enter the number account type:\n");
        scanf("%d",&dbsid);
        switch(dbsid)
        {
            case 1:
            printf("1.Debit\n2.Credit");
            int num;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num);
            switch(num){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
            }
            break;
            case 2:
            printf("1.Debit\n2.Credit");
            int num1;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num1);
            switch(num1){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
            }
            break;
            case 3:
            printf("1.Debit\n2.Credit");
            int num2;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num2);
            switch(num2){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            default:
            printf("enter proper number\n");
            }
            break;
            case 2:
    printf("kvb Bank\n");
    int cash1=200000;
        printf("1.Current\n2.Saving\n3.demat\n");
        int kvbid;
        printf("Enter the number account type:\n");
        scanf("%d",&kvbid);
        switch(kvbid)
        {
            case 1:
            printf("1.Debit\n2.Credit");
            int num;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num);
            switch(num){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash1-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash1+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 2:
            printf("1.Debit\n2.Credit");
            int num1;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num1);
            switch(num1){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash1-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash1+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 3:
            printf("1.Debit\n2.Credit");
            int num2;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num2);
            switch(num2){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash1-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash1+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            default:
            printf("enter proper number\n");
        }
            break;
            case 3:
    printf("SBI Bank\n");
    int cash2=200000;
        printf("1.Current\n2.Saving\n3.demat\n");
        int SBIid;
        printf("Enter the number account type:\n");
        scanf("%d",&SBIid);
        switch(SBIid)
        {
            case 1:
            printf("1.Debit\n2.Credit");
            int num;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num);
            switch(num){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash2-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash2+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 2:
            printf("1.Debit\n2.Credit");
            int num1;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num1);
            switch(num1){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash2-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash2+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 3:
            printf("1.Debit\n2.Credit");
            int num2;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num2);
            switch(num2){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash2-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash2+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            default:
            printf("enter proper number\n");
        }
            
            break;
            case 4:
    printf("union Bank\n");
    int cash3=200000;
        printf("1.Current\n2.Saving\n3.demat\n");
        int unionid;
        printf("Enter the number account type:\n");
        scanf("%d",&unionid);
        switch(unionid)
        {
            case 1:
            printf("1.Debit\n2.Credit");
            int num;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num);
            switch(num){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash3-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash3+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 2:
            printf("1.Debit\n2.Credit");
            int num1;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num1);
            switch(num1){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash3-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash3+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 3:
            printf("1.Debit\n2.Credit");
            int num2;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num2);
            switch(num2){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash3-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash3+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            break;
            default:
            printf("enter proper number\n");
        }
            
            break;
            case 5:
    printf("HDFC\n");
    int cash4=200000;
        printf("1.Current\n2.Saving\n3.demat\n");
        int HDFCid;
        printf("Enter the number account type:\n");
        scanf("%d",&HDFCid);
        switch(HDFCid)
        {
            case 1:
            printf("1.Debit\n2.Credit");
            int num;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num);
            switch(num){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash4-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash4+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 2:
            printf("1.Debit\n2.Credit");
            int num1;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num1);
            switch(num1){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash4-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash4+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            
            break;
            case 3:
            printf("1.Debit\n2.Credit");
            int num2;
            printf("\nEnter the number for operation:\n");
            scanf("%d",&num2);
            switch(num2){
                case 1:
                printf("enter the amount you want to withdraw:\n");
                int amount;
                scanf("%d",&amount);
                int balance=cash4-amount;
                printf("your balance:%d",balance);
                break;
                case 2:
                printf("enter the amount you want to credit:\n");
                int amount1;
                scanf("%d",&amount1);
                int balance1=cash4+amount1;
                printf("your balance:%d",balance1);
                break;
                default:
                printf("Enter the proper number\n");
                
            }
            break;
            default:
            printf("enter proper number\n");
        }
            
            break;
    default:
        printf("Enter the proper bank number\n");
}


return 0;
}
