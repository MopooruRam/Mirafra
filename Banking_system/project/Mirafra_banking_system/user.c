#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "account.h"
Account *head;
 
void closeAccount(Account *account);
Account* searchAccount(char* user_name ,char* user_pass);
char user_menu(Account* Current_account);
void deposit(Account *account, float amount);
void withdraw(Account *account, float amount);


void user_login()
{
//user login
	char user_pass[20] ;
	char user_name[20] ;
//Taking input from user name and user password
	printf("Enter the user name : ");
	scanf("%s",user_name);

	printf("Enter the user Password : ");
	scanf("%s",user_pass);

//checking the what ever the user name and password is matching or not and the result is stored in *ret
	Account* ret =  searchAccount(user_name,user_pass) ;
//return ret is non zero
	if(ret != 0)
	{
//if the account is blocked then go the else case
		if(!(ret->isBlocked))
			user_menu(ret);
		else
			printf("Account is blocked.\n");
	}


}
Account* searchAccount(char* user_name ,char* user_pass)
{
	Account *temp = head;
	do
	{
		if(!(strcmp(temp->username,user_name)))
		{
			if(!(strcmp(temp->password,user_pass)))
			{
				printf("*********User Login Sucessfull**********\n");
				return temp;
			}
			else
			{
				printf("*********Wrong User Password**********\n");
				return 0;

			}

		}
		temp=temp->Next;
	}
	while(temp->Next != NULL);
	printf("*********Wrong User Name**********\n");
	return 0;
}

char user_menu(Account* Current_account)
{
	int choice;
	float amount = 0.00;
	int month, year;
//giving options to the user for different actions like withdraw deposit close account and view balance

	do {
		printf("\nAccount holder : %s \nAccount number %s\n\n",Current_account->name , Current_account->bankAccount );
		printf("1. Deposit\n");
		printf("2. Withdraw\n");
		printf("3. Close Account\n");
		printf("4. View Balance\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
			case 1:
				printf("Enter the amount to deposit: ");
				scanf("%f", &amount);
				printf("deposite %.2f",amount);
				deposit(Current_account, amount);
				printf("Amount deposited successfully.\n");
				break;

			case 2:
				printf("Enter the amount to withdraw: ");
				scanf("%f", &amount);
				withdraw(Current_account, amount);
				break;

			case 3:
				closeAccount(Current_account);
				choice = 6;
				printf("Exiting...\n");
				printf("\n Account Closed Sucessfully");
				break;

			case 4:

				printf("Account Balance %.2f \n",Current_account->balance );

				break;

			case 5:
				printf("Exiting...\n");

				break;

			default:
				printf("Invalid choice. Try again.\n");
				break;
		}

		printf("\n");
	} while (choice != 6);


}
void closeAccount(Account *account) {


	Account *temp = head, *prev= head;

	if(temp!=NULL && (temp==account))
	{
		head = temp->Next;
		free(temp);
		temp= 0  ;
		return;
	}

	while(temp != NULL)
	{
		if(temp==account)
		{
			prev->Next = temp->Next ;
			free(temp);
			temp= 0  ;
			return ;

		}
		else
		{
			prev = temp ;
			temp=temp->Next;
		}
	}

}
void deposit(Account *account, float amount) 
{

	account->balance += amount;
	printf("Amount %.2f deposited successfully.\n", amount);
}


void withdraw(Account *account, float amount) 
{

	if (amount > account->balance) 
	{
		printf("Insufficient balance.\n");
	} 
	else 
	{
		account->balance -= amount;
		printf("Amount %.2f withdrawn successfully.\n", amount);
	}


}

