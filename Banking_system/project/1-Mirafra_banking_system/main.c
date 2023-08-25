#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "account.h"
Account *H=NULL, *L=NULL, *N=NULL;
int main() 
{

	int c=1;
	int choice;
	do{
		//user menu

		printf("\n\t\t\t\t Mirafra Banking System\t\t\t\t\t\n");
		printf("1. Create Account\n");
		printf("2. User Login\n");
		printf("3. Admin Login\n");
		printf("4. Exit\n");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);

		switch (choice) 
		{
			case 1:
				createAccount();
				break;

			case 2:
				user_login();
				break;

			case 3:
				admin_login();
				break;
			default:
				printf("Exited\nThank You\n");
				break;
		}
		}
		while(choice!=4);
		return 0;

}
