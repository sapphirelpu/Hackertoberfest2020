#include<stdio.h>
void main()
{
char account_holder_name[55],account_holder_address[111],account_status, enter_choice;
int account_number, account_pin, choice, another_account_number, e_account_pin;
float account_balance, withdrawl_ammount, deposit_ammount, total_amount;
printf("Enter Account Holder Name: ");
gets(account_holder_name);
printf("Enter Account Holder Address: ");
gets(account_holder_address);
printf("Enter Account Status: ");
account_status=getche();
printf("\n Enter Account Number: ");
scanf("%d", &account_number);
printf("Enter Account PIN: ");
scanf("%d", &account_pin);
printf("Enter Account Balance: ");
scanf("%f", & account_balance);
printf("\n\n***Details are***\n\n");
puts(account_holder_name);
puts(account_holder_address);
putch(account_status);
printf("\n%d",account_number);
printf("\n%d",account_pin);
printf("%\n%f",account_balance);
printf("\n\nWelcome to HDFC ATM Service\n\n");
again:
printf("\n1.Balance Enquiry\t 2.Withdrawal\n");
printf("3.Deposit \t 4.Transfer Amount to Another Account\n");
printf("5.PIN Change \t 6.Mini Statement");
printf("\nEnter Your Choice: ");
scanf("%d", &choice);
printf("Enter Your Account PIN: ");
scanf("%d", &e_account_pin);
if(e_account_pin==account_pin)
{
switch(choice)
{
case 1:
printf("Account Balance is: %f",account_balance);
break;
case 2:
printf("Enter Amount to Withdraw: ");
scanf("%f", &withdrawl_ammount);
account_balance= account_balance - withdrawl_ammount;
break;
case 3:
printf("Enter Amount to Deposit: ");
scanf("%f", &deposit_ammount);
account_balance= account_balance + deposit_ammount;
break;
case 4:
printf("Enter another Account No.: ");
scanf("%d", &another_account_number);
printf("Enter Amount to Transfer: ");
scanf("%f", &total_amount);
account_balance= account_balance - total_amount;
break;
case 5:
printf("Enter New Account PIN: ");
scanf("%d", &account_pin);
break;
case 6:
printf("The Mini Statement is: ");
printf("\nUpdated Account Balance is: %f\n", account_balance);
break;
default:
printf("Wrong Choice has been entered");
}
}
else
printf("Entered account_pin is Wrong");
printf("\n\n Want to Exit");
printf("\n Press Y for Yes");
printf("\n Press N for No");
printf("\n");
fflush(stdin);
enter_choice=getchar();
if(enter_choice=='Y')
printf("\n Thanks for using PNB ATM Services \n");
else
goto again;
}
