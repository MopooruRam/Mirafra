#include<stdio.h>
#include<stdlib.h>
#include<srring.h>

typedef  struct Acc{
     char name[50];
     char pan[11];
     char aadhaar[13];
     char username[20];
     char password[20];
     char bankAccount[13];
     float balance;
     int isBlocked;
     struct Acc *Next ;
 
 }Account ;
 

