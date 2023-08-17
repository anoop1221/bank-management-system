#include<stdio.h>
#include<conio.h>
char name[20];
int dep_amt,tot_amt = 0,acc_num;
int wit_mon,tran_amt;
void menu(){
    printf("MAIN MENU\n");
    printf("1.Deposit Money\n");
    printf("2.Withdraw Money\n");
    printf("3.Transfer Money\n");
    printf("4.Account details\n");
    printf("5.Transaction details\n");
    printf("6.Exit\n");
}

void deposit_money(){
    FILE *ptr;
    ptr = fopen("Account.txt","a");
    printf("Depositing Money\n");
    printf("Enter the amount to be deposited: \n");
    scanf("%d",&dep_amt);
    tot_amt+= dep_amt;
    printf("Money deposited successfully\n");
    printf("Current Balance is: %d\n",tot_amt);
    fprintf(ptr,"Rs %d has been deposited to your account\n",dep_amt);
    fclose(ptr);
    printf("Press any key to continue\n");
    getch();
}

void withdraw_money(){
    FILE *ptr;
    ptr = fopen("Account.txt","a");
    printf("Withdrawing Money\n");
    printf("Enter the amount to be withdrawn : \n");
    scanf("%d",&wit_mon);
    tot_amt-= wit_mon;
    printf("Money withdrawn successfully\n");
    printf("Current balance is : %d",tot_amt);
    fprintf("Rs %d has been withdrawn from your account.\n",wit_mon);
    fclose(ptr);
    printf("Press any key to continue\n");
    getch();
}

int main(int argc, char const *argv[])
{
    int choice;
    printf("Enter your name\n");
    gets(name);

    printf("Enter your Account number\n");
    scanf("%d",&acc_num);
    
    while(1){
        menu();
        printf("Enter your choice: \n");
        scanf("%d",&choice);

    
        switch (choice)
        {
        case 1:
            deposit_money(); 
            
            break;
        case 2:
            withdraw_money();
            break;    
        // case 3:
        //     transfer_money();
        //     break;    
        // case 4:
        //     account_details();
        //     break;    
        // case 5:
        //     transaction_details();
        //     break;
        // case 6:
        //     last_details();    
        //     exit(0);
        //  break;
        default:
            printf("INVALID CHOICE\n");
            break;
        }
}
    return 0;
}