#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#define _CRT_SECURE_NO_WARNINGS
void main()
{
	char user[20];
	int pass;
	printf("Enter user name\n");
	if (scanf_s("%s", user, sizeof(user)) == 1);
	printf("Enter the password\n");
	scanf_s("%d",&pass);
	system("cls");
	printf("%s is login",user);
	if (pass == 12345 || user == "ahmed")
	{
		int ch;
		screenheader();
		do
		{
			mainscr();
			scanf_s("%d", &ch);
			descion(ch);
		} while (ch == 1 || ch == 2 || ch == 3 || ch == 4);
	}
	else 
	{
		printf("You have entered wrong password");
	}
}
int screenheader()
{
	printf("\n                       :::::::::::::::::::::::::::::::::::::");
	printf("\n                       ::                                 ::");
	printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
	printf("\n                       ::     @                     @     ::");
	printf("\n                       ::     @      WELCOME TO     @     ::");
	printf("\n                       ::     @                     @     ::");
	printf("\n                       ::     @   Malaysia  Hotel   @     ::");
	printf("\n                       ::     @                     @     ::");
	printf("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
	printf("\n                       ::                                 ::");
	printf("\n                       :::::::::::::::::::::::::::::::::::::\n\n");
}
int mainscr()
{
	printf("\n 1: Room Booking\n");
	printf("\n 2: Room Cancellation\n");
	printf("\n 3: Modify Booking\n");
	printf("\n 4: View Status\n");
}
int descion(int x)
{
	FILE* fptr = NULL;
	//errno_t err;
	int reserved;
	//errno_t err = fopen_s(&fptr,"C:\Users\hp\source\repos\hotel managemenet\Debug\room.txt" , "r");
	fptr = fopen("room.txt","w");
	int rooms[3];
	int days,age,id, gender;
	char names[20];
	if (x==1) 
	{
		int room;
		system("cls");
		screenheader();
		printf("Choose the room you want to avail\n\n 1: Suite room\n\n 2: Double room\n\n 3: Single room\n");
		scanf_s("%d", &room);
		if (room == 1) 
		{
			int room_no;
			system("cls");
			screenheader();
			printf("Choose the room you want to avail\n\n 1: SR 001\n\n 2: SR 002\n\n 3: SR 003\n");
			scanf_s("%d", &room_no);
			if (room_no==1) 
			{
				printf("No of days he will stay\n");
				scanf_s("%d", &days);
				system("cls");
				screenheader();
				printf("Full Name:\n");
				if (scanf_s("%s", names, sizeof(names)) == 1);
				printf("Age:\n");
				scanf_s("%d", &age);
				printf("Gender:\n1: Male\n2: Female\n");
				scanf_s("%d", &gender);
				printf("ID:\n");
				scanf_s("%d", &id);
				printf("\n\nSuite SR#001 reserved of :%d days\nEnter any number to continue:", days);
				fprintf(fptr, "SR 001\n ");
			}
			if (room_no == 2)
			{
				printf("No of days he will stay\n");
				scanf_s("%d", &days);
				system("cls");
				screenheader();
				printf("Full Name:\n");
				if (scanf_s("%s", names, sizeof(names)) == 1);
				printf("Age:\n");
				scanf_s("%d", &age);
				printf("Gender:\n1: Male\n2: Female\n");
				scanf_s("%d", &gender);
				printf("ID:\n");
				scanf_s("%d", &id);
				printf("\n\nSuite SR#002 reserved of :%d days\nEnter any number to continue:", days);

				fprintf(fptr, "SR 002\n ");
				//fclose(fptr);
			}
			if (room_no == 3)
			{
				printf("No of days he will stay\n");
				scanf_s("%d", &days);
				system("cls");
				screenheader();
				printf("Full Name:\n");
				if (scanf_s("%s", names, sizeof(names)) == 1);
				printf("Age:\n");
				scanf_s("%d", &age);
				printf("Gender:\n1: Male\n2: Female\n");
				scanf_s("%d", &gender);
				printf("ID:\n");
				scanf_s("%d", &id);
				printf("\n\nSuite SR#003 reserved of :%d days\nEnter any number to continue:", days);

				fprintf(fptr, "SR 003\n ");
				//fclose(fptr);
			}
			fclose(fptr);
			int me;
			scanf_s("%d", &me);
			rooms[0] = '1';
		}
		else if (room==2) 
		{
			int room_no;
			system("cls");
			screenheader();
			printf("Choose the room you want to avail\n\n 1: DR 004\n\n 2: DR 005\n\n 3: DR 006\n");
			scanf_s("%d", &room_no);
			if (room_no==1) 
			{
				printf("No of days he will stay\n");
				scanf_s("%d", &days);
				system("cls");
				screenheader();
				printf("Full Name:\n");
				if (scanf_s("%s", names, sizeof(names)) == 1);
				printf("Age:\n");
				scanf_s("%d", &age);
				printf("Gender:\n1: Male\n2: Female\n");
				scanf_s("%d", &gender);
				printf("ID:\n");
				scanf_s("%d", &id);
				//system("cls");
				printf("\n\nDouble DR#004 room reserved of :%d days\nEnter any number to continue:", days);
				fprintf(fptr, "DR 004 \n");
			}
			if (room_no == 2)
			{
				printf("No of days he will stay\n");
				scanf_s("%d", &days);
				system("cls");
				screenheader();
				printf("Full Name:\n");
				if (scanf_s("%s", names, sizeof(names)) == 1);
				printf("Age:\n");
				scanf_s("%d", &age);
				printf("Gender:\n1: Male\n2: Female\n");
				scanf_s("%d", &gender);
				printf("ID:\n");
				scanf_s("%d", &id);
				//system("cls");
				printf("\n\nDouble DR#005 room reserved of :%d days\nEnter any number to continue:", days);
				fprintf(fptr, "DR 005 \n");
			}
			if (room_no == 3)
			{
				printf("No of days he will stay\n");
				scanf_s("%d", &days);
				system("cls");
				screenheader();
				printf("Full Name:\n");
				if (scanf_s("%s", names, sizeof(names)) == 1);
				printf("Age:\n");
				scanf_s("%d", &age);
				printf("Gender:\n1: Male\n2: Female\n");
				scanf_s("%d", &gender);
				printf("ID:\n");
				scanf_s("%d", &id);
				//system("cls");
				printf("\n\nDouble DR#006 room reserved of :%d days\nEnter any number to continue:", days);
				fprintf(fptr, "DR 006 \n");
			}
			fclose(fptr);
			int me;
			scanf_s("%d", &me);
			rooms[1] = '1';
		}
		else if (room == 3)
		{
			int room_no;
			system("cls");
			screenheader();
			printf("Choose the room you want to avail\n\n 1: S 007\n\n 2: S 008\n\n 3: S 009\n\n 4: S 010\n");
			scanf_s("%d", &room_no);
			if (room_no == 1)
			{
				fprintf(fptr, "S 007 \n");
				printf("No of days he will stay\n");
				scanf_s("%d", &days);
				system("cls");
				screenheader();
				printf("Full Name:\n");
				if (scanf_s("%s", names, sizeof(names)) == 1);
				printf("Age:\n");
				scanf_s("%d", &age);
				printf("Gender:\n1: Male\n2: Female\n");
				scanf_s("%d", &gender);
				printf("ID:\n");
				scanf_s("%d", &id);
				//system("cls");
				printf("\n\nSingle S#007 room reserved of :%d days\nEnter any number to continue:", days);
			}
			if (room_no == 2)
			{
				fprintf(fptr, "S 008 \n");
				printf("No of days he will stay\n");
				scanf_s("%d", &days);
				system("cls");
				screenheader();
				printf("Full Name:\n");
				if (scanf_s("%s", names, sizeof(names)) == 1);
				printf("Age:\n");
				scanf_s("%d", &age);
				printf("Gender:\n1: Male\n2: Female\n");
				scanf_s("%d", &gender);
				printf("ID:\n");
				scanf_s("%d", &id);
				//system("cls");
				printf("\n\nSingle S#008 room reserved of :%d days\nEnter any number to continue:", days);
			}
			if (room_no == 3)
			{
				fprintf(fptr, "S 009 \n");
				printf("No of days he will stay\n");
				scanf_s("%d", &days);
				system("cls");
				screenheader();
				printf("Full Name:\n");
				if (scanf_s("%s", names, sizeof(names)) == 1);
				printf("Age:\n");
				scanf_s("%d", &age);
				printf("Gender:\n1: Male\n2: Female\n");
				scanf_s("%d", &gender);
				printf("ID:\n");
				scanf_s("%d", &id);
				//system("cls");
				printf("\n\nSingle S#009 room reserved of :%d days\nEnter any number to continue:", days);
			}
			if (room_no == 4)
			{
				fprintf(fptr, "S 010 \n");
				printf("No of days he will stay\n");
				scanf_s("%d", &days);
				system("cls");
				screenheader();
				printf("Full Name:\n");
				if (scanf_s("%s", names, sizeof(names)) == 1);
				printf("Age:\n");
				scanf_s("%d", &age);
				printf("Gender:\n1: Male\n2: Female\n");
				scanf_s("%d", &gender);
				printf("ID:\n");
				scanf_s("%d", &id);
				//system("cls");
				printf("\n\nSingle S#010 room reserved of :%d days\nEnter any number to continue:", days);
			}
			int me;
			scanf_s("%d", &me);
			rooms[2] = '1';
		}
	}
	else if(x==2)
	{
		int room;
		system("cls");
		screenheader();
		printf("Choose the room you want to cancel the booking\n\n 1: Suite room\n\n 2: Double room\n\n 3: Single room\n");
		scanf_s("%d", &room);
		if (room == 1) 
		{
			int cusid, reason;
			printf("\nPlease enter customer ID for Cancelation:\n");
			scanf_s("%d", &cusid);
			printf("***********************************************************\n");
			printf("\nPlease choose a reason for Cancelation:\n");
			printf("\n1: Not a suitable room\n");
			printf("\n2: Heigh rates\n");
			printf("\n3: Mind changed\n");
			printf("\n4: Others\n");
			scanf_s("%d", &reason);
			printf("\n\nSuite Room booking Cancelled\nEnter any number to continue:");
			int me;
			scanf_s("%d", &me);
			rooms[0] = '0';
		}
		else if(room==2)
		{
			int cusid, reason;
			printf("\nPlease enter customer ID for Cancelation:\n");
			scanf_s("%d", &cusid);
			printf("***********************************************************\n");
			printf("\nPlease choose a reason for Cancelation:\n");
			printf("\n1: Not a suitable room\n");
			printf("\n2: Heigh rates\n");
			printf("\n3: Mind changed\n");
			printf("\n4: Others\n");
			scanf_s("%d", &reason);
			printf("\n\nDouble Room booking Cancelled\nEnter any number to continue:");
			int me;
			scanf_s("%d", &me);
			rooms[1] = '0';
		}
		else if (room == 3)
		{
			int cusid, reason;
			printf("\nPlease enter customer ID for Cancelation:\n");
			scanf_s("%d", &cusid);
			printf("***********************************************************\n");
			printf("\nPlease choose a reason for Cancelation:\n");
			printf("\n1: Not a suitable room\n");
			printf("\n2: Heigh rates\n");
			printf("\n3: Mind changed\n");
			printf("\n4: Others\n");
			scanf_s("%d", &reason);
			printf("\n\nSingle Room booking Cancelled\nEnter any number to continue:");
			int me;
			scanf_s("%d", &me);
			rooms[2] = '0';
		}
	}
	else if (x==3)
	{
		int room;
		system("cls");
		screenheader();
		printf("Choose the room you want to modify the booking\n\n 1: Suite room\n\n 2: Double room\n\n 3: Single room\n");
		scanf_s("%d", &room);
		if (room == 1)
		{
			printf("No of days he will stay\n");
			scanf_s("%d", &days);
			system("cls");
			screenheader();
			printf("Full Name:\n");
			if (scanf_s("%s", names, sizeof(names)) == 1);
			printf("Age:\n");
			scanf_s("%d", &age);
			printf("Gender:\n1: Male\n2: Female\n");
			scanf_s("%d", &gender);
			printf("ID:\n");
			scanf_s("%d", &id);
			printf("Suite Room modified and reserved for :%d days\nEnter any number to continue:", days);
			int me;
			scanf_s("%d", &me);
			rooms[0] = '1';
		}
		else if (room == 2)
		{
			printf("No of days he will stay\n");
			scanf_s("%d", &days);
			system("cls");
			screenheader();
			printf("Full Name:\n");
			if (scanf_s("%s", names, sizeof(names)) == 1);
			printf("Age:\n");
			scanf_s("%d", &age);
			printf("Gender:\n1: Male\n2: Female\n");
			scanf_s("%d", &gender);
			printf("ID:\n");
			scanf_s("%d", &id);
			printf("Double Room modified and reserved for :%d days\nEnter any number to continue:", days);
			int me;
			scanf_s("%d", &me);
			rooms[1] = '1';
		}
		else if (room == 3)
		{
			printf("No of days he will stay\n");
			scanf_s("%d", &days);
			system("cls");
			screenheader();
			printf("Full Name:\n");
			for (int i = 0;i < 10;i++)
			if (scanf_s("%s", names, sizeof(names)) == 1);
			printf("Age:\n");
			scanf_s("%d", &age);
			printf("Gender:\n1: Male\n2: Female\n");
			scanf_s("%d", &gender);
			printf("ID:\n");
			scanf_s("%d", &id);
			printf("Single Room modified and reserved for :%d days\nEnter any number to continue:", days);
			int me;
			scanf_s("%d", &me);
			rooms[2] = '1';
		}
	}
	else if (x == 4)
	{
		int room;
		system("cls");
		screenheader();
		printf("Choose the room you want to view the Status\n\n 1: Suite room\n\n 2: Double room\n\n 3: Single room\n");
		scanf_s("%d", &room);
		if (room == 1)
		{
			printf("\n Room number            >>>1");
			printf("\n Advance                >>>750\n\n");
			printf("\n                      FEATURES OF THIS ROOM                       ");
			printf("\n------------------------------------------------------------------");
			printf("\n\n Room Type            >>> Suite");
			printf("\n\n Room charges         >>> Rinngit.1500 per day");
			printf("\n\n 1. Bed               >>>      4");
			printf("\n\n 2.Capacity           >>>      5");
			printf("\n\n 3.Balcony available     ");
			printf("\n------------------------------------------------------------------");
			printf("\n                     ADDITIONAL FEATURES                        ");
			printf("\n------------------------------------------------------------------");
			printf("\n\n 1.A/C  available ");
			printf("\n\n 2.Entertainment System");
			printf("\n\n 3.Kitchenette       ");
			printf("\n------------------------------------------------------------------");
			printf("\n NOTE :- Extra bed will cost Rinngit.50 per bed \n\n\n");
			printf("Enter any number to continue:");
			int me;
			scanf_s("%d", &me);
		}
		else if (room == 2)
		{
			printf("\n Room number            >>>2");
			printf("\n Advance                >>>500\n\n");
			printf("\n                      FEATURES OF THIS ROOM                       ");
			printf("\n------------------------------------------------------------------");
			printf("\n\n Room Type            >>> Double room");
			printf("\n\n Room charges         >>> Rinngit.1000 per day");
			printf("\n\n 1. Bed               >>>      1");
			printf("\n\n 2.Capacity           >>>      2");
			printf("\n------------------------------------------------------------------");
			printf("\n                     ADDITIONAL FEATURES                        ");
			printf("\n------------------------------------------------------------------");
			printf("\n\n 1.A/C  available ");
			printf("\n\n 2.Entertainment System");
			printf("\n\n 3.Kitchenette       ");
			printf("\n------------------------------------------------------------------");
			printf("\n NOTE :- Extra bed will cost Rinngit.50 per bed \n\n\n");
			printf("Enter any number to continue:");
			int me;
			scanf_s("%d", &me);
		}
		else if (room == 3)
		{
			printf("\n Room number            >>>3");
			printf("\n Advance                >>>250\n\n");
			printf("\n                      FEATURES OF THIS ROOM                       ");
			printf("\n------------------------------------------------------------------");
			printf("\n\n Room Type            >>> Single room");
			printf("\n\n Room charges         >>> Rinngit.500 per day");
			printf("\n\n 1. Bed               >>>      1");
			printf("\n\n 2.Capacity           >>>      1");
			printf("\n------------------------------------------------------------------");
			printf("\n                     ADDITIONAL FEATURES                        ");
			printf("\n------------------------------------------------------------------");
			printf("\n\n 1.A/C  available ");
			printf("\n\n 2.Entertainment System");
			printf("\n------------------------------------------------------------------");
			printf("\n NOTE :- Extra bed will cost Rinngit.50 per bed \n\n\n");
			printf("Enter any number to continue:");
			int me;
			scanf_s("%d", &me);
		}
	}
	system("cls");
	screenheader();
}