//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include "account.h"

int admin_login();
void blockAccount(Account *account);
void unblockAccount(Account *account);
void Accounts_Details();
void closeAccountA(Account *account);
void Account_sel();
Account *head;


int Admin_menu()
{
	int choice;

//giving admin options like search the account and select the account and exit



	do{
		printf("\n\n********Admin Login***********\n");
		printf("\n1.Accounts Details");
		printf("\n2.Select Accounts");
		printf("\n3.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				Accounts_Details();
				break;

			case 2:
				Account_sel() ;
				break;

			default:
				printf("\n Invalid Selection");
				break;

		}

	}while(choice!=3);

	return 0 ;
}


int admin_login()
{

	char admin_pass[20] ;
	char admin_name[20] ;
//we have to collect from admin whether the person is admin or not?

	printf("Enter the Admin name : ");
	scanf("%s",admin_name);

	printf("Enter the Admin Password : ");
	scanf("%s",admin_pass);
//after collecting the admin name and password we have to compare
	if((strcmp("Mirafra",admin_name)))
	{
		printf("*********Wrong Admin Name**********\n");
	}

	else if((strcmp("1234",admin_pass)))
	{
		printf("*********Wrong Admin Password**********\n");
	}

	else
	{
		printf("*********Admin Login Sucessfull**********\n");
		Admin_menu() ;
		return 1 ;
	}


	return 0 ;

}
void blockAccount(Account *account)
{
            account->isBlocked = 1;
            printf("Account blocked successfully.\n");

}


void unblockAccount(Account *account)
{
            account->isBlocked = 0;
            printf("Account Unblocked successfully.\n");

}


void Accounts_Details()
{
    Account*Temp = head ;
    printf("\nName  Account Num");

    while(Temp!=NULL)
    {
       printf("\n%s     %s",Temp->name,Temp->bankAccount);
       Temp = Temp->Next ;
    }

}


void closeAccountA(Account *account) {


    Account *temp = head, *prev= head;

    if(temp!=NULL && (temp==account))
    {
        head = temp->Next;
        free(temp);
        temp= 0  ;
        return;
    }

    while(temp)
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
void Account_sel()
{
    int choice ;
    char Account_num[13] ;
    Account *Temp = head ;


    printf("\n Enter the Account Number to select : ");
    scanf("%s",Account_num);

     while(Temp)    {
        if(!strcmp(Temp->bankAccount,Account_num))
        {
            do{
                printf("\nAccount holder %s \n Account Number %s",Temp->name,Temp->bankAccount);
                printf("1. Block \n");
                printf("2. Unblock\n");
                printf("3. Close Account\n");
                printf("5. Exit\n");
                printf("Enter your choice: ");
                scanf("%d",&choice);

                switch (choice)
                {
                    case 1:
                        blockAccount(Temp) ;
                        break;

                    case 2:
                        unblockAccount(Temp) ;
                        break;

                    case 3:
                        closeAccountA(Temp);
                      //  printf("\nnode %u",&Temp) ;
                        choice = 5;
                        printf("\n Exiting...\n");
                        printf("\n Account Closed Sucessfully");
                        break;


                    case 4:
                        printf("\nExiting........");
                        break;

                    default:
                        printf("\nINVALID SELECTION");
                        //try catch
                        break;


                }


            }while(choice!=5);

            return ;
        }
        Temp = Temp->Next ;
    }
     printf("\n Account Not Found");
}
