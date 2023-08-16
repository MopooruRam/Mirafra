#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "account.h"

Account *head;
extern void createAccount() ;
void displayAccount(Account* account);
void createAccount() 
{
	Account* account = NULL ;
	account = (Account*) malloc(sizeof(Account));

	printf("Enter Name: ");
	scanf("%s", account->name);

	printf("Enter PAN: ");
	scanf("%s", account->pan);

	printf("Enter Aadhaar: ");
	scanf("%s", account->aadhaar);

	printf("Enter Username: ");
	scanf("%s", account->username);

	printf("Enter Password: ");
	scanf("%s", account->password);

	printf("Enter Bank Account Number: ");
	scanf("%s",account->bankAccount);

	account->Next = head ;
	head = account ;
 displayAccount(account);


}
void displayAccount(Account* account) 
{

	printf("PAN: %s\n", account->pan);
	printf("Aadhaar: %s\n", account->aadhaar);
	printf("Username: %s\n", account->username);
	printf("Bank Account Number: %s\n", account->bankAccount);
	printf("Balance: %.2f\n", account->balance);
	printf("Blocked Status: %s\n", account->isBlocked ? "Blocked" : "Not Blocked");
}

