//Phone Book Mini Project.
#include<stdio.h>

//decalring a structure
struct cont{
    char name[30];
    char num[10];
    char group[10];
};

//horizontal rule
void hr(){
    for (int i = 0; i < 40; i++) {
        printf("=");}
        printf("\n");
    }


int main(){

    //Introduction
  printf("\033[1;3mHello User\nThis is Contact Book Program\nYou can create contact and display it right away!\033[0m\n");
  hr();

  //Asking Number of Contacts
  printf("\nHow many Contacts do you wish to add? ");
  int n, i;
  scanf("%d", &n);
  getchar();
  struct cont c[n];
  for (i = 0; i < n; i++)
  { printf("\033[1;3mCONTACT NO.%d\033[0m\n", i+1);

    printf("Name of the Contact? ");
    fgets(c[i].name, sizeof(c[i].name),stdin);

    printf("\nContact Number :");
    fgets(c[i].num, sizeof(c[i].num),stdin);
    
    printf("\nSpecify the group :");
    fgets(c[i].group, sizeof(c[i].group), stdin);

    printf("Details Filled!\n");
    hr();
   }
   char ch;
   display:

   //asking user whether they want to print the phonebook
   printf("\033[1mDo you wish to Display the Phone Book?\n Y-Yes or N-No : \033[0m");
   scanf(" %c", &ch);
   if (ch=='Y'||ch=='y'){
    //prints the phone book
    printf("\033[3mDisplaying The Phone Book\033[0m\n");
    printf("\033[1mTotal Contacts in Phone Book = %d\033[0m\n", n);

    //loop to print the phone book
    for (int i = 0; i < n; i++)
    {
        printf("Contact No. %d\n", i+1);
        printf("Contact Name : %s", c[i].name);
        printf("Contact Number : %s", c[i].num);
        printf("Contact Group : %s", c[i].group);
        hr();
    }
   }
   else if (ch=='N'||ch=='n')
   {
    //exits the loop
    printf("\033[3mExiting from Program\033[0m");
   }
   else
   {
    //invalid input found! asking user agiain for choice
    try_again:
    printf("\033[1mOpps! Looks Like your input isn't a valid Choice\n Do you wish to try again? \033[0m");
    char v;
    scanf(" %c", &v);
    if (v=='Y'||v=='y')
    {
        goto display;
    }
    else if (v=='N'||v=='n')
    {
       printf("\033[3mExiting Program\033[0m");
    }
    else
    {
       goto try_again;
    }
    
   }
    return 0;
}