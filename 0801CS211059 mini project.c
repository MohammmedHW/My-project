/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct passenger
{
char f_name[20];
char l_name[20];
char gen[6];
int age;
}p[50];
void about();
void introduction();
void main_menu();
void india();
void international();
void details();
void receipt(int);
float gst(int);
void confirm(int);
void edit();
// Global variables
int no_of_person, amount;
char type[60], place[30], travel_date[13];
void about()
{
int a, a_;
system("cls");
introduction();
printf("\n\t\t\t\t1. Contact details::\n");
printf("\t\t\t\t2. About company::\n");
printf("\t\t\t\t3. Main menu::\n");
printf("\t\t\t\tEnter your choice:");
scanf("%d", &a);
if(a==1)
{
system("cls");
printf("\n\t\t\t\tGuide Name: Mohammad Hoshangabadwala.\n\n\t\t\t\tContact no: 966945XXXX\n\n\t\t\t\tEmail: hoshanXXX@gmail.com");
}
else if(a==2)
{
system("cls");
printf("\n\n\t\t\t\t****WELCOME TO JUST TRIP tour and travels****\n\n\t\t\t\tFounded in year 2005 as JUST TRIP tour and travels, an online travel plateform.\n\t\t\t\tThe company boosted as a private limited in the year 2013 and emerged as the\n\t\t\t\t BEST UPCOMING INBOUNDTOUR OPERATORS IN INDIA\n\t\t\t\tIt has been awarded in the category of\n\t\t\t\tEXCELLENCE IN THE TOURISM INDUSTRY\n\t\t\t\tby world tourism brand academy.");
}
else if(a==2)
{
system("cls");
main_menu();
}
else
{
printf("Please enter a valid choice!!!");
}
printf("\n\t\t\t\tPress:");
printf("\n\t\t\t\t1 for main menu:");
printf("\n\t\t\t\t2 for exit");
scanf("%d", &a_);
if(a_==1)
main_menu();
else if (a_==2)
exit(0);
else
printf("\n\t\t\t\tPlease enter a valid choice:");
}
void introduction()
{
printf("\t\t\t\t***Tourism Package Management System***\n");
printf("\t\t\t\t**Welcome to JUST TRIP Tour and Travel**\n");
printf("\t\t\t***Watch the beauty of World and India through a diffrent lens***\n");
printf("\t\t\t***Vaccination Certificate is NECESSARY For Travel Purpose***\n");
}
void main_menu()
{
system("cls");
introduction();
printf("\n\n\t\t\t\tHERE IS THE MAIN MENU ::\n");
printf("\t\t\t\t1. International Tour Packages\n");
printf("\t\t\t\t2. India Tour Packages\n");
printf("\t\t\t\t3. About Company ::\n");
int a;
printf("\t\t\t\tEnter Your Tour Destination: ");
scanf("%d", &a);
switch (a)
{
case 1:
international();
break;
case 2:
india();
break;
case 3:
about();
break;
default:
printf("Please Enter a valid choice !!!");
break;
}
}
void india()
{
int a;
system("cls");
 introduction();
strcpy(type, "India Tour Package");
printf("\n\n\t\t\t\tIndian Tour Package:::\n");
printf("\t\t\t\t1. Kullu-Manali-Kasol tou+r package with 9 days and 8 nights ( INR 45699/- per person)\n");
printf("\t\t\t\t2. Kashmir Tour Packages with 5 Days 4 Nights ( INR 35599/- per person)\n");
printf("\t\t\t\t3. Goa Tour Packages with 11 Days 10 Nights ( INR 25499/- per person)\n");
printf("\t\t\t\tEnter Your Choice: ");
scanf("%d", &a);
if (a == 1)
{
strcpy(place, "Kullu-Manali-Kasol Tour");
amount = 45699;
}
else if (a == 2)
{
strcpy(place, "Kashmir Tour");
amount = 39599;
}
else if (a == 3)
{
strcpy(place, "Goa Tour");
amount = 25499;
}
else
{
printf("Please Enter a valid Choice !!!");
}
details();
}
void international()
{
int a;
system("cls");
introduction();
strcpy(type, "International Tour Package");
printf("\n\n\t\t\t\tInternational Tour Package:::\n");
printf("\t\t\t\t1. England Tour Packages 6 Days 7 Nights (115599/- per person)\n");
printf("\t\t\t\t2. Thailand Tour Packages 5 Days 4 Nights (75499/- per person)\n");
printf("\t\t\t\t3. New York Tour Packages 11 Days 10 Nights (175899/- per person)\n");
printf("\t\t\t\tEnter Your Choice: ");
scanf("%d", &a);
if (a == 1)
{
strcpy(place, "England Tour");
amount = 115599;
}
else if (a == 2)
{
strcpy(place, "Thailand Tour");
amount = 75499;
}
else if (a == 3)
{
strcpy(place, "New York Tour");
amount = 175899;
}
else
{
printf("Please enter a valid choice !!!");
}
details();
}
void details()
{
system("cls");
introduction();
printf("\n\t\t\t\tEnter Number Of Passengers: ");
scanf("%d", &no_of_person);
printf("\n\t\t\t\tEnter Date (DD/MM/YY): ");
scanf("%c", &travel_date);
int i=1;
while(i<=no_of_person)
{
system("cls");
introduction();
printf("\n\n\t\t\t\tEnter The first name of %dth Passenger : ",i);
scanf("%s", &p[i].f_name);
printf("\n\t\t\t\tEnter The last name of %dth Passenger : ",i);
scanf("%s", &p[i].l_name);
printf("\n\t\t\t\tEnter The %dth Passenger Gender: ",i);
scanf("%s", &p[i].gen);
printf("\n\t\t\t\tEnter The %dth Passenger Age: ",i);
scanf("%d", &p[i].age);
i++;
}
confirm(no_of_person);
}
float gst(int amt)
{
float t_amt=amt+(0.18*amt);
return t_amt;
}
void confirm(int n)
{
system("cls");
introduction();
int amt=amount*n;
float t_amt=gst(amt);
char ch;
printf("\n\n\t\t\t\t*****The Details Of Your Package*****");
int i=1;
while (i<=n)
{
printf("\n\n\t\t\t\t***Details of persons %d***", i);
printf("\n\n\t\t\t\tName : %s %s",p[i].f_name, p[i].l_name);
printf("\n\t\t\t\tGender : %s", p[i].gen );
printf("\n\t\t\t\tAge : %d ", p[i].age);
i++;
}
printf("\n\n\t\t\t\tType of tour package : %s", type);
printf("\n\n\t\t\t\tTour Destination : %s", place);
printf("\n\n\t\t\t\tThe amount is : %f", t_amt);
printf("\n\n\t\t\t\tTravel date : %s", travel_date);
printf("\n\n\t\t\t\tPLEASE CHECK ALL THE DETAILS OF YOUR PACKAGE CAREFULLY");
printf("\n\n\t\t\t\tPRESS C/c TO CONFIRM AND E/e TO EDIT THE DETAILS : ");
scanf("%c", &ch);
scanf("%c", &ch);
if(ch=='C' || ch=='c')
{
receipt(no_of_person);
}
else if(ch=='e' || ch=='E')
{
edit();
}
else
{
printf("\n\n\t\t\t\tPlease Enter a valid choice and proceed again !!!");
}
}
void edit()
{
system("cls");
introduction();
int ch;
printf("\n\n\t\t\t\tPlease press the number corresponding to the choice you want to edit : ");
printf("\n\t\t\t\t1. Details of persons ::");
printf("\n\t\t\t\t2. Travel package ::");
printf("\n\t\t\t\t3. Travel destination ::");
printf("\n\t\t\t\t4. Travel Date ::");
printf("\n\t\t\t\t5. Number of persons ::");
printf("\n\n\t\t\t\tEnter your choice : ");
scanf("%d", &ch);
switch (ch)
{
case 1 :
details();
break;
case 2 :
main_menu();
break;
case 3 :
if(type=="India Tour Package")
{
india();
break;
}
else if(type=="International Tour Package")
{
international();
break;
}
case 4 :
printf("\n\n\t\t\t\tEnter the new Travel Date : ");
scanf("%s", &travel_date);
receipt(no_of_person);
break;
case 5 :
details();
break;
}
}
void receipt(int n)
{
int amt;
system("cls");
introduction();
printf("\n\n\t\t\t\t********Here's your receipt********\n");
printf("\n\n\t\t\t\t**Take Screenshot For Further Use**\n");
int i=1;
while (i<=n)
{
printf("\n\n\t\t\t\t***Details of persons %d***", i);
printf("\n\n\t\t\t\tName : %s %s",p[i].f_name, p[i].l_name);
printf("\n\t\t\t\tGender : %s", p[i].gen );
printf("\n\t\t\t\tAge : %d ", p[i].age);
i++;
}
amt=amount*n;
float t_amt=gst(amt);
printf("\n\n\t\t\t\tType of tour package : %s", type);
printf("\n\n\t\t\t\tTour Destination : %s", place);
printf("\n\n\t\t\t\tThe amount is : %f", t_amt);
printf("\n\n\t\t\t\tTravel date : %s", travel_date);
printf("\n\n\t\t\t\t**Thank You For registration**");
printf("\n\n\t\t\t\t******************************");
}
void main()
{
system("cls");
introduction();
main_menu();
}