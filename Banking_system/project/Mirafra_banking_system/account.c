#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "account.h"

Account *head;

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
	scanf("%s", account->bankAccount);

	account->Next = head ;
	head = account ;

}

