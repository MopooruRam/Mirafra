int Admin_menu()
{
	char choice;





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

	printf("Enter the Admin name : ");
	scanf("%s",admin_name);

	printf("Enter the Admin Password : ");
	scanf("%s",admin_pass);

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

