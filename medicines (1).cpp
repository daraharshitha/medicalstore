#include<stdio.h>
#include<conio.h>
#include<string.h>
int medicine();
int addmedicines();
int delmedicines();
int admin();
int user();
int mlist();
int mbuy();
int exit();
int admindata();
char value[20];
char rel[20];
int i,n;
char ch;
struct medicines
{
 char name[30];	
 float cost;
}med;
// Main function starts from here
int main()
{
	printf("\n To login as Admin--------->A");
	printf("\n If You are User-------->U");
	ch=getche();
	if(ch=='A'||ch=='a')
		admin();
	else if(ch=='U'||ch=='u')
		user();
	else
	{
		printf("\n Wrong Choice!!! ");
		return 0;
	}
}
// Function to check admin
int admin()
{
	char username[100],password[100];
    printf("\n\n\n\n\n\t\t\tUsername   :  ");
    scanf("%s",username);
    printf("\n\n\n\n\n\t\t\tPassword   :  ");
    scanf("%s",password);
    if((strcmp(username,"11602300")==0)&&(strcmp(password,"hema")==0))
    {
     	admindata();
	}
	else
	{ 
		printf("\n\nPlease Enter correct User_Id and Password\n");
		return 0;
	}
}
int admindata()
{
	int choice;
	int item;
    while(1)
	{
        printf("\n****Welcome to Hema Pharmaceuticals****\n");
        printf("\n                MENU                             \n");
        printf("---------------------------------------\n");
        printf("\n 1.Medicines List    \n");
        printf("\n 2.Add Medicines    \n");
        printf("\n 3.Delete Medicines   \n");
        printf("\n 4.Main Menu   \n");
        printf("\n--------------------------------------\n");
        printf("Enter value:\t");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            medicine();
            break;
		case 2:
			addmedicines();
			break;
		case 3:
			delmedicines();
			break;
		case 4:
			main();
			break;
        default:
            printf("\n Wrong Choice:\n");
            break;
        }
    }
    return 0;
}
// Function for user purpose
int user()
{
	int choice;
	int item;
    while(1)
	{
		printf("\n\n\n\t------------------------------\n");
		printf("\nPress 1 to display Medicines list\n");
		printf("\nPress 2 to buy any medicine from list\n");
		printf("\nPress 3 to go back\n");
		printf("\n\n\t---------------------------------\n");
        printf("Enter value:\t");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            mlist();
            break;
		case 2:
			mbuy();
			break;
		case 3:
			main();
			break;
        default:
            printf("\n Wrong Choice:\n");
            break;
        }
    }
    return 0;
}
// Function for list of medicines with their prices
int mlist()
{
	printf("\nHello here are the medicines list with their price\n");
	printf("->Crocin\tRs.5\n");
	printf("->Dolo-650\tRs.3\n");
	printf("->Nice\t\tRs.4\n");
	printf("->Paraceutimal\tRs.5\n");
	printf("->Anacin\tRs.5\n");
	printf("->monocef o \tRs.10\n");

}
// Function for general purpose  i.e.,admin purpose
int general()
{
	int again;
	printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); 
	scanf("%d", &again);
	if (again == 1 )
		{
			mbuy();
		}
	else if (again == 2 )
		{
			exit();
		}	
	else 
		{
			printf("\n\n\t\tSorry Invalid Decision Entered\n\n\n\n");
			exit();
		}
}
// Function to buy medicines
int mbuy()
{
	int n=0,num,cost1=0,cost2=0,cost3=0,cost4=0,cost5=0,cost6=0,cost=0;
	printf("->1.Crocin\tRs.5\n");
	printf("->2.Dolo-650\tRs.3\n");
	printf("->3.Nice\t\tRs.4\n");
	printf("->4.Paraceutimal\tRs.5\n");
	printf("->5.Anacin\tRs.5\n");
	printf("->6.monocef o \tRs.10\n\n\n");
	printf("Enter number which medicine u want:-");
	scanf("%d",&num);
{
	if(num==1)
	{
		printf("Enter no of tablets u want:\n");
		scanf("%d",&n);
		cost1=5*n;
		printf("Your Amount for this order is %d , Please pay through cash only\n\n\n ",cost1);
		general();
	}
	else if(num==2)
	{
		printf("Enter no of tablets u want:\n");
		scanf("%d",&n);
		cost2=3*n;
		printf("Your Amount for this order is %d , Please pay through cash only\n\n\n ",cost2);
		general();
	}
	else if(num==3)
	{
		printf("Enter no of tablets u want:\n");
		scanf("%d",&n);
		cost3=4*n;
		printf("Your Amount for this order is %d , Please pay through cash only\n\n\n ",cost3);
		general();
	}
	else if(num==4)
	{
		printf("Enter no of tablets u want:\n");
		scanf("%d",&n);
		cost4=10*n;
		printf("Your Amount for this order is %d , Please pay through cash only\n\n\n ",cost4);
		general();
	}
	else if(num==5)
	{
		printf("Enter no of tablets u want:\n");
		scanf("%d",&n);
		cost5=5*n;
		printf("Your Amount for this order is %d , Please pay through cash only\n\n\n ",cost5);
		general();
	}
	else if(num==6)
	{
		printf("Enter no of tablets u want:\n");
		scanf("%d",&n);
		cost6=6*n;
		printf("Your Amount for this order is %d , Please pay through cash only\n\n\n ",cost6);
		general();
	}
	else 
	{
		printf("Enter correct Value\n");
		mbuy();
	}
}
}
// Function to find total cost
int exit()
{
	int cost1=5,cost2=3,cost3=4,cost4=5,cost5=5,cost6=10,cost;
	cost=cost1+cost2+cost3+cost4+cost5+cost6;
	printf("The total cost of medicines is : %d\n\n\n",cost);
	printf("\n\nThank you for visiting\n");
	printf("\t\t****************Please Visit Again*****************");
	return 0;
}
// Function to add medicines
int addmedicines()
{
 FILE *fp;
 fp = fopen("medical.txt", "a");
 printf("Enter the Name of the medicines      :");
 scanf("%s", &med.name);
 printf("Enter the cost of the medicine      :");
 scanf("%f", &med.cost);
 fwrite(&med, sizeof(med), 1, fp);
 printf("\t\t\t\tMedicines added successfully\n\n");
 fclose(fp);
}
//    Function to display list of medicines
int medicine()
{
 FILE *fp1;
 fp1 = fopen("medical.txt", "r");
 printf("\n\tMedicine Name\tcost\n\n");
 while (fread(&med, sizeof(med), 1, fp1))
 {
 printf("\t\%s\t\t%.2f\n", med.name, med.cost);
 }
 fclose(fp1);
}
// Function delete medicines
int delmedicines()
{
 FILE *fpo;
 FILE *fpt;
 char n[30],a[30];
 printf("Enter the name you want to delete :");
 scanf("%s", &n);
 if (n == 0)
  printf("name %s is not available in the file\n", n);
 else
 {
  fpo = fopen("medical.txt", "r");
  fpt = fopen("TempFile.txt", "w");
  while (fread(&med, sizeof(med), 1, fpo))
  {
   //a= med.name;
   if (a != n)
    fwrite(&med, sizeof(med), 1, fpt);
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("medical.txt", "w");
  fpt = fopen("TempFile.txt", "r");
  while (fread(&med, sizeof(med), 1, fpt))
  fwrite(&med, sizeof(med), 1, fpo);
  printf("\nRECORD DELETED\n");
  fclose(fpo);
  fclose(fpt);
 }
}




