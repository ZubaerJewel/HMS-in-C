
/*   A PROJECT ON HOSPITAL MANAGEMENT SYSTEM   */
#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

/* DECLARATION OF FUNCTIONS TO BE USED */
void first(void);
void login(void);
void signup(void);
void emp(void);
void MainMenu(void);
void pat(void);
void inv1(void);
void inv2(void);
/* DECLARATION OF STRUCTURES TO BE USED */

struct address
{
    int hno;
    char street[40];
    char city[40];
    char state[40],pass1[15],pass2[15];
}user;

struct patient
{
    struct address a;
    char name[40];
    char fname[40];
    int age;
    char bg[3];
    char gender;
    char regn[10];
    char ph[10];
    char disease[60];
    char doc_name[40];
    char history[200];
    char date[10];
    char treatment[40];
    char med[40];
};

struct staff
{
    char name[40];
    char fname[40];
    int age;
    char bg[3];
    char gender;
    char uid[10];
    struct address b;
    char ph[10];
    double salary;
    char desig[40];
};

struct inventory1
{
    int sno;
    char name[30];
    char dop[20];
    int qnty;
    float price;
    float amount;
};
struct inventory2
{
    int sno;
    char name[30];
    char dop[20];
    int qnty;
    float price;
    float amount;
};

/* MAIN MENU FUNCTION */

void menu2()
{

    char choice;
    system("color 3B");
    system("cls");

    printf("\n\n\n\t\t\t *****************************");
    printf("\n\t\t\t ***                       ***");
    printf("\n\t\t\t * WELCOME TO ROYEL HOSPITAL *");
    printf("\n\t\t\t ***                       ***");
    printf("\n\t\t\t *****************************");
    printf("\n\n\n\a[Please Choose Your Option From Below] \n\n");
    //printf("\n\t\t\t\t--Made by MD. ZUBAER HOSSAIN(JEWEL)");
    printf("\n\n\n\n\n\n\n");
    printf("\n\t\t\t<1>  PATIENT");
    printf("\n\t\t\t<2>  INVENTORY");
    printf("\n\t\t\t<3>  ABOUT PROGRAM");
    printf("\n\t\t\t<4>  BACK");
    printf("\n\t\t\t<5>  EXIT");
    printf("\n\n\n\t\tEnter Your Choice: ");
    fflush(stdin);
    choice=getche();
    //scanf("%s",&choice);

    switch(choice)
    {
    case '1':
    {
        system("cls");
        system("color 3B");
        pat();
        break;
    }

    case '2':
    {
        system("cls");
        system("color 3B");
        inv2();
        break;
    }
    case '3':
    {

        system("cls");
        system("color 3B");
        about2();
    }


    break;
    case '4':
        {
            system("cls");
        system("color 3B");
            first();
        }
    case '5':
     {
                system("cls");
                system("color 4C");
                printf("\n\n\t\t\tAre You Sure To EXIT ?\n\n");
                printf("\n\n\t\t\t<1> Yes.\n\n\t\t\t<2> No");
                char s;
                s=getche();
                switch(s)
                {
                case '1':
                    {
                        system("cls");

                system("color 4C");

                printf("\n\t\t\tPRESS ANY KEY FOR EXIT.\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                exit(1);
                break;
                    }
                case '2':
                    {
                        system("cls");
               first();
                break;
                    }

                }

            }
    default:
    {
        system("cls");
        system("color 4C");
        printf("\n\n\n\n\n\t\t\t!!!Wrong Choice!!!\n\n\t\t\t<Please Try Again>\n\n\nPress Any Key For BACK: ");
        fflush(stdin);
        getch();
        menu2();
        break;
    }
    }
}
void menu1()
{

    char choice;
    system("cls");
system("color 3B");
    printf("\n\n\n\t\t\t *****************************");
    printf("\n\t\t\t ***                       ***");
    printf("\n\t\t\t * WELCOME TO ROYEL HOSPITAL *");
    printf("\n\t\t\t ***                       ***");
    printf("\n\t\t\t *****************************");
    printf("\n\n\n\n\a[Please Choose Your Option From Below] \n\n");
    //printf("\n\t\t\t\t--Made by MD. ZUBAER Hossain (Jewel)");
    printf("\n\n");
    printf("\n\t\t\t<1>  STAFF OR AUTHORITY");
    printf("\n\t\t\t<2>  INVENTORY");
    printf("\n\t\t\t<3>  ABOUT PROGRAM");
    printf("\n\t\t\t<4>  BACK");
    printf("\n\t\t\t<5>  EXIT");
    printf("\n\n\n\t\tEnter Your Choice: ");
    fflush(stdin);
    choice=getche();
    //scanf("%s",&choice);


    switch(choice)
    {

    case '1':
        system("cls");
        system("color 3B");
        emp();

        break;
    case '2':
        system("cls");
        system("color 3B");
        inv1();

        break;
    case '3':
        system("cls");
        system("color 3B");

        about1();

        break;
    case'4':
        system("cls");
        system("color 3B");
        first();

    case '5':
         {
                system("cls");
                system("color 4C");
                printf("\n\n\t\t\tAre You Sure To EXIT ?\n\n");
                printf("\n\n\t\t\t<1> Yes.\n\n\t\t\t<2> No");
                char s;
                s=getche();
                switch(s)
                {
                case '1':
                    {
                        system("cls");

                system("color 4C");

                printf("\n\t\t\tPRESS ANY KEY FOR EXIT.\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                exit(1);
                break;
                    }
                case '2':
                    {
                        system("cls");
               first();
                break;
                    }

                }

            }
    default:
        system("cls");
        system("color 4C");
        printf("\n\n\t\t\t!!!Wrong Choice!!!\n\n\t\t\t<Please Try Again>\n\n\n\nPress Any Key For BACK: ");
        fflush(stdin);
        getch();
        menu1();
        break;

    }
}


void pat()
{
    FILE *fp,*ft;
    char another,ch;
    char reg[20],pname[40];
    int iF=0;
    long int recsize;
    struct patient p;

    fp=fopen("pat.txt","r+");
    if(fp==NULL)
    {
        fp=fopen("pat.txt","w+");
        if(fp==NULL)
        {
            puts("\nSorry!! Cannot open file");
            exit(1);
        }
    }
    recsize=sizeof(p);
    while(1)
    {
        system("cls");
        system("color 3B");
        int flag;
        /* DISPLAY OF OPTIONS */
        printf("\n\n\t\t\tPATIENT");
        printf("\n\n\t\t<1>  Enter a New Entry");
        printf("\n\n\t\t<2>  Modify Existing");
        printf("\n\n\t\t<3>  Search an Entry");
        printf("\n\n\t\t<4>  Listing of records");
        printf("\n\n\t\t<5>  Delete an Entry");
        printf("\n\n\t\t<6>  BACK");
        printf("\n\n\t\t<7>  EXIT");
        printf("\n\n\n\t\tEnter your choice here: ");
        fflush(stdin);
        ch=getche();

        switch(ch)
        {

        /* ADDITION OF RECORDS */

        case '1':
            {
system("cls");
            fseek(fp,0,SEEK_END);
            another='Y';
            while(another=='Y'||another=='y')
            {
w:

                    system("color 2B");
                    printf("\n-----------------------------------------------------------------------------------------");
                    printf("\n\n\nEnter Registration Number: ");
                    fflush(stdin);
                    scanf("%s",reg);
                    rewind(fp);

                    /* CHECKING FOR REGISTRATION NUMBER */

                    while(fread(&p,recsize,1,fp)==1)
                {
                        if(strcmp(p.regn,reg)==0)
                        {
                            iF=1;
                            printf("\n--------------------------------------------------------------------------------------------");
                            printf("\n\t\tTHIS REGISTRATION NUMBER ALREADY EXISTS. ENTER ANOTHER ONE");
                            goto w;
                        }
                    }
                    if(iF==0||fread(&p,recsize,1,fp)==0)
                    {
                        fseek (fp,0,SEEK_END);
                        strcpy(p.regn,reg);
                        fflush(stdin);
                        printf("\n----------------------------------------------------------------------------------------------");
                        printf("\n\n\nEnter the name of the patient: ");
                        gets(p.name);
                        fflush(stdin);
                        printf("\nEnter the name of the Guardian: ");
                        gets(p.fname);
                        printf("\nEnter the gender of the patient(M.male or F.female): ");
                        fflush(stdin);
                        scanf("%s",&p.gender);
                        printf("\nEnter the Blood group of the patient: ");
                        fflush(stdin);
                        scanf("%s",p.bg);
                        printf("\nEnter the age of the patient: ");
                        scanf("%d",&p.age);
                        printf("\nEnter the address of the patient:\n");
                        printf("\n\tEnter the house number: ");
                        scanf("%d",&p.a.hno);
                        fflush(stdin);
                        printf("\n\tEnter the street/colony: ");
                        fflush(stdin);
                        scanf("%s",p.a.street);
                        printf("\n\tEnter the city: ");
                        fflush(stdin);
                        scanf("%s",p.a.city);
                        printf("\n\tEnter the state: ");
                        fflush(stdin);
                        scanf("%s",p.a.state);
                        printf("\nEnter the phone number of the patient: ");
                        fflush(stdin);
                        scanf("%s",p.ph);
                        fflush(stdin);
                        printf("\nEnter the Disease or problem for which he/she wants treatment: ");
                        gets(p.disease);
                        fflush(stdin);
                        printf("\nEnter the name of the Doctor to which he/she being referred: ");
                        gets(p.doc_name);
                        fflush(stdin);
                        printf("\nEnter the history,if any,\n\nRelated to treatment of the patient(otherwise write <NOT AVAILABLE>): ");
                        gets(p.history);

                        fwrite(&p,recsize,1,fp);
                        printf("\n-----------------------------------------------------------------------------------------");
                        printf("\n\n\n\t\t\tWant to add another Patient ?\n\n\t\t\t(Yes.Press Y/No.Press Any Key): ");
                        fflush(stdin);
                        another=getche();
                        system("cls");
                    }
                }


                break;
            }

            /* MODIFICATION OF EXISTING RECORDS */

        case '2':
            {
system("cls");
            another='Y';
            while(another=='Y'||another=='y')
            {
                printf("\n\n\nEnter the Registration number of the patient to modify: ");
                scanf("%s",reg);
                rewind(fp);
                flag=0;
                while(fread(&p,recsize,1,fp)==1)
                {
                    if(strcmp(p.regn,reg)==0)
                    {
                        flag=1;
                        fflush(stdin);
                        printf("\n\nEnter the new name of the patient: ");
                        gets(p.name);
                        printf("\nEnter the new name of the Guardian: ");
                        gets(p.fname);
                        printf("\nEnter the new Blood group of the patient: ");
                        scanf("%s",p.bg);
                        printf("\nEnter the new age of the patient: ");
                        scanf("%d",&p.age);
                        printf("\nEnter the new address of the patient:\n");
                        printf("\n\tEnter the house number: ");
                        scanf("%d",&p.a.hno);
                        fflush(stdin);
                        printf("\n\tEnter the street/colony: ");
                        scanf("%s",p.a.street);
                        printf("\n\tEnter the city: ");
                        scanf("%s",p.a.city);
                        printf("\n\tEnter the state: ");
                        scanf("%s",p.a.state);
                        printf("\nEnter the new phone number of the patient: ");
                        scanf("%s",p.ph);
                        fflush(stdin);
                        printf("enter the date of treatment given: ");
                        gets(p.date);
                        printf("\nEnter the detail of treatment given: ");
                        gets(p.treatment);
                        printf("\nEnter the medicines prescribed: ");
                        gets(p.med);

                        fseek(fp,-recsize,SEEK_CUR);
                        fwrite(&p,recsize,1,fp);
                        break;
                    }

                }
                if(flag==0)
                {
                    system("cls");
                    system("color 4C");
                    printf("\a\n\n\n\t\t\t!!!!Invalid UID!!!!\n");
                    printf("\n----------------------------------------------------\n\n");
                    printf("\n\n\t\t\tPress any Key For BACK: ");
                    getch();
                    pat();
                }
                printf("\n----------------------------------------------------");
                printf("\nModify another Record\n\n(Yes.Press Y/No.Press Any Key): ");
                fflush(stdin);
                another=getche();
                system("cls");
            }
            break;
        }


        /*SEARCHING A PARTICULAR ENTRY (BY NAME) */

    case '3':
        {
system("cls");

            another='Y';
            while(another=='Y'||another=='y')
            {
                printf("\nEnter name to search: ");
                gets(pname);
                rewind(fp);
                flag=0;
                while(fread(&p,recsize,1,fp)==1)
                {
                    if(strcmp(p.name,pname)==0)
                    {
                        flag=1;
                        printf("\nRegistration Number of the Patient : ");
                        puts(p.regn);
                        printf("\nName of the Patient : ");
                        puts(p.name);
                        printf("\nName of the Guardian : ");
                        puts(p.fname);
                        printf("\nAge : %d",p.age);
                        printf("\nGender : %c",p.gender);
                        printf("\nBlood group: %s",p.bg);
                        printf("\nAddress  : %d,%s,%s,%s",p.a.hno,p.a.street,p.a.city,p.a.state);
                        printf("\nphone number : +88-%s",p.ph);
                        printf("\nDisease : %s",p.disease);
                        printf("\nEarlier History : ");
                        puts(p.history);
                        printf("\nDetails of treatment given and medicine prescribed:");
                        printf("\nDATE\t\tTREATMENT GIVEN\t\tMEDICINE PRESCRIBED\n");
                        printf("%s\t\t\t%s\t\t\t%s\n",p.date,p.treatment,p.med);
                        printf("\nName of the Doctor : ");
                        puts(p.doc_name);

                    }

                }
                if(flag==0)
                {
                    system("cls");
                    system("color 4C");
                    printf("\a\n\n\n\t\t\t!!!!Invalid Name!!!!\n");
                    printf("\n----------------------------------------------------\n\n");
                    printf("\n\n\t\t\tPress any Key For BACK: ");
                    getch();
                    pat();
                }
                printf("\n----------------------------------------------------");
                printf("\nSearch another Entry\n\n(Yes.Press Y/No.Press Any Key): ");
                fflush(stdin);
                another=getche();
                system("cls");
            }

            break;
        }

            /* LISTING OF ALL RECORDS */

        case '4':
            {
                system("cls");

            rewind(fp);
            flag=0;
            while(fread(&p,recsize,1,fp)==1)
            {
                flag=1;
                printf("\nRegistration Number of the Patient : ");
                puts(p.regn);
                printf("\nName of the Patient : ");
                puts(p.name);
                printf("\nName of the Guardian : ");
                puts(p.fname);
                printf("\nAge : %d",p.age);
                printf("\nGender : %c",p.gender);
                printf("\nBlood group: %s",p.bg);
                printf("\nAddress  : %d,%s,%s,%s",p.a.hno,p.a.street,p.a.city,p.a.state);
                printf("\nphone number : +88-%s",p.ph);
                printf("\nDisease : %s",p.disease);
                printf("\nEarlier History : ");
                puts(p.history);
                printf("\nDetails of treatment given and medicine prescribed:");
                printf("\nDATE\t\t TREATMENT GIVEN\t\t\t MEDICINE PRESCRIBED\n");
                printf("%s\t\t\t%s\t\t\t%s\n",p.date,p.treatment,p.med);
                printf("\nName of the Doctor : ");
                puts(p.doc_name);

                printf("\n----------------------------------------------------\n\n\n");
                printf("Press Any Key For BACK: ");


            }
            if(flag==0)
                {
                    system("cls");
                    system("color 4C");
                    printf("\a\n\n\n\t\t\t!!!!Record Not Found!!!!\n");
                    printf("\n----------------------------------------------------\n\n");
                    printf("\n\n\t\t\tPress any Key For BACK: ");
                    getch();
                   pat();
                }
            getch();

            break;
            }

        /* DELETION OF RECORD */

        case '5':
            {
system("cls");
            another='Y';
            while(another=='Y'||another=='y')
            {
                printf("\nEnter the Registration number of the Patient to be deleted: ");
                scanf("%s",reg);
                ft=fopen("temp.txt","w+");
                rewind(fp);
                flag=0;
                while(fread(&p,recsize,1,fp)==1)
                {

                    if(strcmp(p.regn,reg)!=0)
                        fwrite(&p,recsize,1,ft);
                    else
                        flag=1;
                        printf("\nThe Record has been Deleted Successfully.");
                    break;
                }
                if(flag==0)
                {
                    system("cls");
                    system("color 4C");
                    printf("\a\n\n\n\t\t\t!!!!Invalid UID!!!!\n");
                    printf("\n----------------------------------------------------\n\n");
                    printf("\n\n\t\t\tPress any Key For BACK: ");
                    getch();
                    pat();
                }

                fclose(fp);
                fclose(ft);
                remove("pat.txt");
                rename("temp.txt","pat.txt");
                fp=fopen("pat.txt","r+");

                printf("\n\nDelete another record?\n\n(Yes.Press Y/No.Press Any Key): ");
                fflush(stdin);
                another=getche();
                system("cls");
            }


            }

        case '6':
        {
            fclose(fp);
            system("cls");

            menu2();
            break;

        }



        case '7':
    {
                system("cls");
                system("color 4C");
                printf("\n\n\t\t\tAre You Sure To EXIT ?\n\n");
                printf("\n\n\t\t\t<1> Yes.\n\n\t\t\t<2> No");
                char s;
                s=getche();
                switch(s)
                {
                case '1':
                    {
                        system("cls");

                system("color 4C");

                printf("\n\t\t\tPRESS ANY KEY FOR EXIT.\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                exit(1);
                break;
                    }
                case '2':
                    {
                        system("cls");
               first();
                break;
                    }

                }

            }
        default:
            {
                system("cls");
                system("color 4C");
                printf("\n\n\n\n\n\t\t\t!!!Wrong Choice!!!\n\n\t\t\t<Please Try Again>\n\n\nPress Any Key For BACK: ");
                fflush(stdin);
                getch();
                pat();
                break;

            }
            break;
        }
    }
}

/* EMPLOYEE */

void emp()
{
    FILE *fs,*fx;
    char more,c;
    int flag;
    char id[20],s_name[40];
    int iF=0;
    long int recsize1;
    struct staff s;

    fs=fopen("emp.txt","r+");
    if(fs==NULL)
    {
        fs=fopen("emp.txt","w+");
        if(fs==NULL)
        {
            puts("\nSorry!! Cannot open file");
            exit(1);
        }
    }
    recsize1=sizeof(s);
    while(1)
    {
        system("cls");
        system("color 3B");

        /* DISPLAY OF OPTIONS */

        printf("\n\n\n\t\t\tEMPLOYEE");
        printf("\n\n\t\t<1>  Add an Entry");
        printf("\n\n\t\t<2>  Modify Existing One");
        printf("\n\n\t\t<3>  Search an Entry");
        printf("\n\n\t\t<4>  Listing of all records");
        printf("\n\n\t\t<5>  Delete an Entry");
        printf("\n\n\t\t<6>  BACK");
        printf("\n\n\t\t<7>  EXIT");
        printf("\n\n\n\t\tEnter your choice here: ");
        fflush(stdin);
        c=getche();
        printf("\n\n");
        printf("\n----------------------------------------------------");
        switch(c)
        {

        /* ADDITION OF RECORDS */

        case '1':
            {

                system("cls");
            fseek(fs,0,SEEK_END);
            more='Y';
            while(more=='Y'||more=='y')
            {
u:

                printf("\n\n\nEnter the UID of the Employee: ");
                scanf("%s",id);
                rewind(fs);

                /* CHECKING FOR UNIQUE ID */

                while(fread(&s,recsize1,1,fs)==1)
                {

                    if(strcmp(s.uid,id)==0)
                    {
                        iF=1;
                        printf("\n\t\tTHIS UID ALREADY EXISTS. ENTER ANOTHER ONE");
                        goto u;
                    }
                }
                if(iF==0||fread(&s,recsize1,1,fs)==0)
                {
                    fseek (fs,0,SEEK_END);
                    strcpy(s.uid,id);
                    fflush(stdin);
                    printf("\nEnter the name of the Employee: ");
                    gets(s.name);
                    printf("\nEnter the name of the Guardian: ");
                    gets(s.fname);
                    fflush(stdin);
                    printf("\nEnter the gender of the employee(M.male or F.female): ");
                    scanf("%c",&s.gender);
                    fflush(stdin);
                    printf("\nEnter the Blood group of the Employee: ");
                    scanf("%s",s.bg);
                    printf("\nEnter the age of the Employee: ");
                    scanf("%d",&s.age);
                    printf("\nEnter the Salary of the Employee: ");
                    scanf("%lf",&s.salary);
                    printf("\nEnter the address of the Employee:\n");
                    printf("\n\tEnter the house number: ");
                    scanf("%d",&s.b.hno);
                    fflush(stdin);
                    printf("\n\tEnter the street/colony: ");
                    scanf("%s",s.b.street);
                    printf("\n\tEnter the city: ");
                    scanf("%s",s.b.city);
                    printf("\n\tEnter the state: ");
                    scanf("%s",s.b.state);
                    printf("\nEnter the phone number of the Employee: ");
                    scanf("%s",s.ph);
                    fflush(stdin);
                    printf("\nEnter the Designation: ");
                    gets(s.desig);

                    fwrite(&s,recsize1,1,fs);
                    printf("\n----------------------------------------------------");
                    printf("\n\n\n\t\tWant to add another Employee\n\n\t\t(Yes. Press Y / No. Press Any Key): ");
                    fflush(stdin);
                    more=getche();
                    system("cls");
                }
            }
            break;
        }

        /* MODIFICATION OF EXISTING RECORDS */

    case '2':
        {
            system("cls");
            more='Y';
            while(more=='Y'||more=='y')
            {
                printf("\n\n\nEnter the UID of the Employee to modify: ");
                scanf("%s",id);
                rewind(fs);
                flag=0;
                while(fread(&s,recsize1,1,fs)==1)
                {
                    if(strcmp(s.uid,id)==0)
                    {
                        flag=1;
                        fflush(stdin);
                        printf("\nEnter the new name of the Employee: ");
                        gets(s.name);
                        printf("\nEnter the new name of the Guardian: ");
                        gets(s.fname);
                        printf("\nEnter the new Blood group of the Employee: ");
                        scanf("%s",s.bg);
                        printf("\nEnter the new age of the Employee: ");
                        scanf("%d",&s.age);
                        printf("\nEnter the new Salary of the Employee: ");
                        scanf("%lf",&s.salary);
                        printf("\nEnter the new address of the Employee:\n");
                        printf("\n\tEnter the house number: ");
                        scanf("%d",&s.b.hno);
                        fflush(stdin);
                        printf("\n\tEnter the street/colony: ");
                        scanf("%s",s.b.street);
                        printf("\n\tEnter the city: ");
                        scanf("%s",s.b.city);
                        printf("\n\tEnter the state: ");
                        scanf("%s",s.b.state);
                        printf("\nEnter the new phone number of the Employee: ");
                        scanf("%s",s.ph);

                        fseek(fs,-recsize1,SEEK_CUR);
                        fwrite(&s,recsize1,1,fs);
                        break;
                    }

                }

                    if(flag==0)
                    {
                        system("cls");
                        system("color 4C");
                        printf("\n\n\t\t\t!!!!Invalid UID!!!!\n\n");
                        printf("\n---------------------------------------------------\n\n-");
                        printf("\a\t\t\tPress Any Key For BACK: ");

                        fflush(stdin);
                        getch();
                        emp();
                    }

                printf("\n----------------------------------------------------");
                printf("\nModify another Record\n\n(Yes.Press Y/No.Press Any Key): ");
                fflush(stdin);
                more=getche();
            }
            break;
        }

        /*SEARCHING A PARTICULAR ENTRY BY NAME*/

        case '3':
            {
system("cls");
            more='Y';
            while(more=='Y'||more=='y')
            {
                printf("\n\n\nEnter name to search: ");
                gets(s_name);
                rewind(fs);
                flag=0;
                while(fread(&s,recsize1,1,fs)==1)
                {
                    if(strcmp(s.name,s_name)==0)
                    {
                        flag=1;
                        printf("\n----------------------------------------------------\n");
                        printf("\nUID of the Employee : ");
                        puts(s.uid);
                        printf("\nName of the Employee : ");
                        puts(s.name);
                        printf("\nName of the Guardian : ");
                        puts(s.fname);
                        printf("\nAge : %d",s.age);
                        printf("\nSalary: %lf",s.salary);
                        printf("\nGender : %c",s.gender);
                        printf("\nBlood group: %s",s.bg);
                        printf("\nAddress  : %d,%s,%s,%s",s.b.hno,s.b.street,s.b.city,s.b.state);
                        printf("\nphone number : +88-%s",s.ph);
                        printf("\nDesignation : %s",s.desig);
                        break;
                    }

                }

                    if(flag==0)
                    {
                        system("cls");
                        system("color 4C");
                        printf("\n\n\t\t\t!!!!Invalid Name!!!!\n\n");
                        printf("\n----------------------------------------------------");
                        printf("\n\n\n\a\t\t\tPress Any Key For BACK: ");

                        fflush(stdin);
                        getch();
                        emp();
                    }

                        printf("\n----------------------------------------------------");
                        printf("\nSearch another Entry\n\n(Yes.Press Y/No.Press Any Key): ");
                        fflush(stdin);
                        more=getche();
                    }
                break;
            }

            /* LISTING OF ALL RECORDS */
        case '4':
            {

                rewind(fs);
                flag=0;
            while(fread(&s,recsize1,1,fs)==1)
            {
                flag=1;
                printf("\nUID of the Employee : ");
                puts(s.uid);
                printf("\nName of the Employee : ");
                puts(s.name);
                printf("\nName of the Guardian : ");
                puts(s.fname);
                printf("\nAge : %d",s.age);
                printf("\nSalary: %lf",s.salary);
                printf("\nGender : %c",s.gender);
                printf("\nBlood group: %s",s.bg);
                printf("\nAddress  : %d,%s,%s,%s",s.b.hno,s.b.street,s.b.city,s.b.state);
                printf("\nphone number : +88-%s",s.ph);
                printf("\nDesignation : %s",s.desig);

                printf("\n----------------------------------------------------\n\n");
            }


                if(flag==0)
                {
                    system("cls");
                    system("color 4C");
                    printf("\a\n\n\n\t\t\t!!!!No Record Found!!!!\n");
                    printf("\n----------------------------------------------------\n\n");
                    printf("\n\n\t\t\tPress any Key For BACK: ");
                    getch();
                    emp();
                }

                printf("\n\nPress Any Key For BACK: ");

            getch();
            break;
            }

        /* DELETION OF RECORD */

        case '5':
            {
system("cls");
            more='Y';
            while(more=='Y'||more=='y')
            {
                printf("\n\n\nEnter the UID of the Employee to be deleted: ");
                scanf("%s",id);
                fx=fopen("tem.txt","w+");
                rewind(fs);
                flag=0;
            while(fread(&s,recsize1,1,fs)==1)
                {

                    if(strcmp(s.uid,id)!=0)
                    {

                        fwrite(&s,recsize1,1,fx);
                    }
                    else
                        {
                            flag=1;

                        printf("\n\n\nThe Record has been Deleted Successfully.");
                        break;
                    }
                }
                    if(flag==0)
                {
                    system("cls");
                    system("color 4C");
                    printf("\a\n\n\n\t\t\t!!!!Invalid UID!!!!\n");
                    printf("\n----------------------------------------------------\n\n");
                    printf("\n\n\t\t\tPress any Key For BACK: ");
                    getch();
                    emp();
                }
                    fclose(fs);
                    fclose(fx);
                    remove("emp.txt");
                    rename("tem.txt","emp.txt");
                    fs=fopen("emp.txt","r+");
                    printf("\n\n\n\t\t\tDelete another record?\n\n\t\t\t(Yes.Press Y/No.Press Any Key): ");
                    fflush(stdin);
                    more=getche();
                }
            }



         case '6':
        {
            fclose(fs);
            system("cls");
            menu1();

        }


        case '7':
             {
                system("cls");
                system("color 4C");
                printf("\n\n\t\t\tAre You Sure To EXIT ?\n\n");
                printf("\n\n\t\t\t<1> Yes.\n\n\t\t\t<2> No");
                char s;
                s=getche();
                switch(s)
                {
                case '1':
                    {
                        system("cls");

                system("color 4C");

                printf("\n\t\t\tPRESS ANY KEY FOR EXIT.\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                exit(1);
                break;
                    }
                case '2':
                    {
                        system("cls");
               first();
                break;
                    }

                }

            }
        default:
            {
                system("cls");
                system("color 4C");
        printf("\n\n\n\n\n\t\t\t!!!Wrong Choice!!!\n\n\t\t\t<Please Try Again>\n\n\nPress Any Key For BACK: ");
        fflush(stdin);
        getch();
    emp();
        break;

    }
    break;
        }
    }
    }

/* INVENTORY */

void inv1()
{
    FILE *i,*y;
    char a,s;
    char i_name[40];
    int iF=0,j=1,flag;
    long int recsize2;
    struct inventory1 v;

    i=fopen("invH.txt","r+");
    if(i==NULL)
    {
        i=fopen("invH.txt","w+");
        if(i==NULL)
        {
            puts("\nSorry!! Cannot open file");
            exit(1);
        }
    }
    recsize2=sizeof(v);
    while(1)
    {
        system("cls");
        system("color 3B");
        /* DISPLAY OF OPTIONS */

        printf("\n\n\n\t\t\t\aINVENTORY");
        printf("\n\n\t\t<1>  Add an Entry for Item");
        printf("\n\n\t\t<2>  Modify Existing Entry");
        printf("\n\n\t\t<3>  Search an Entry");
        printf("\n\n\t\t<4>  Listing of all Entries");
        printf("\n\n\t\t<5>  Delete an Entry");
        printf("\n\n\t\t<6>  BACK");
        printf("\n\n\t\t<7>  EXIT");
        printf("\n\n\n\t\tEnter your choice here: ");
        fflush(stdin);
        s=getche();

        switch(s)
        {

        /* ADDITION OF RECORDS */

        case '1':
            {
system("cls");
            fseek(i,0,SEEK_END);
            a='Y';
            while(a=='Y'||a=='y')
            {
                x:
                printf("\n\n\nEnter the Name of the Item: ");
                scanf("%s",i_name);
                rewind(i);

                /* CHECKING FOR UNIQUENESS OF NAME */

                while(fread(&v,recsize2,1,i)==1)
                {

                    if(strcmp(v.name,i_name)==0)
                    {
                        iF=1;
                        printf("\n\n\t\tTHIS ITEM ALREADY EXISTS. ENTER ANOTHER ONE");
                        goto x;
                    }
                }
                if(iF==0||fread(&v,recsize2,1,i)==0)
                {
                    fseek (i,0,SEEK_END);
                    strcpy(v.name,i_name);
                    fflush(stdin);
                    printf("\nEnter the Date of purchase: ");
                    scanf("%s",v.dop);
                    fflush(stdin);
                    printf("\nEnter the Quantity of the Item: ");
                    scanf("%d",&v.qnty);
                    printf("\nEnter the price of One Item: ");
                    scanf("%f",&v.price);
                    v.amount=v.qnty*v.price;
                    printf("\nThe amount of %d %s is = %f",v.qnty,v.name,v.amount);

                    fwrite(&v,recsize2,1,i);
                    printf("\n----------------------------------------------------");
                    printf("\nWant to add another Item\n\n(Yes.Press Y/No.Press Any Key): ");
                    fflush(stdin);
                    a=getche();
                }
            }
            break;
        }

        /* MODIFICATION OF EXISTING RECORDS */

        case '2':
            {
system("cls");
            a='Y';
            while(a=='Y'||a=='y')
            {
                printf("\nEnter the name of the item to modify: ");
                scanf("%s",i_name);
                rewind(i);
                flag=0;
                while(fread(&v,recsize2,1,i)==1)
                {
                    if(strcmp(v.name,i_name)==0)
                    {
                        flag=1;
                        fflush(stdin);
                        printf("\nEnter the new name of the Item: ");
                        gets(v.name);
                        printf("\nEnter the new Date of purchase: ");
                        fflush(stdin);
                        scanf("%s",v.dop);
                        printf("\nEnter the new Quantity of the Item: ");
                        scanf("%d",&v.qnty);
                        printf("\nEnter the new price of One Item: ");
                        scanf("%f",&v.price);
                        v.amount=v.qnty*v.price;
                        printf("\nThe new amount of %d %s is = %f",v.qnty,v.name,v.amount);

                        fseek(i,-recsize2,SEEK_CUR);
                        fwrite(&v,recsize2,1,i);
                        break;
                    }
                }
                if(flag==0)
                {
                    system("cls");
                    system("color 4C");
                    printf("\a\n\n\n\t\t\t!!!!Invalid Item Name!!!!\n");
                    printf("\n----------------------------------------------------\n\n");
                    printf("\n\n\t\t\tPress any Key For BACK: ");
                    getch();
                inv1();
                }
                printf("\n----------------------------------------------------");
                printf("\nModify another Record\n\n(Yes.Press Y/No.Press Any Key): ");
                fflush(stdin);
                a=getche();
            }
            break;
            }

        /*SEARCHING A PARTICULAR ENTRY BY NAME*/

        case '3':
            {
system("cls");
            a='Y';
            while(a=='Y'||a=='y')
            {
                printf("\nEnter name of item to search: ");
                gets(i_name);
                rewind(i);
                flag=0;
                while(fread(&v,recsize2,1,i)==1)
                {
                    if(strcmp(v.name,i_name)==0)
                    {
                        flag=1;
                        printf("\nThe Name of the Item: ");
                        puts(v.name);
                        printf("\nEnter the Date of purchase: %s",v.dop);
                        printf("\nQuantity of the Item: %d",v.qnty);
                        printf("\nPrice of One Item: %f",v.price);
                        v.amount=v.qnty*v.price;
                        printf("\nThe amount of %d %s is = %f",v.qnty,v.name,v.amount);
                    }
                }
                if(flag==0)
                {
                   system("cls");
                    system("color 4C");
                    printf("\a\n\n\n\t\t\t!!!!Invalid Item Name!!!!\n");
                    printf("\n----------------------------------------------------\n\n");
                    printf("\n\n\t\t\tPress any Key For BACK: ");
                    getch();
                    inv1();
                }
                printf("\n----------------------------------------------------");
                printf("\nSearch another Entry\n\n(Yes.Press Y/No.Press Any Key): ");
                fflush(stdin);
                a=getche();
            }
            break;
        }

        /* LISTING OF ALL RECORDS */

        case '4':
            {
system("cls");
            printf("\n\n-------------------------------------------------------------------------------\n");
            rewind(i);
            flag=0;
            while(fread(&v,recsize2,1,i)==1)
            {
                flag=1;
                printf("S.No.   ");
                printf("%d\n\n",j);
                printf("ITEM.   ");
                printf("%s\n\n",v.name);
                printf("DATE.   ");
                printf("%s\n\n",v.dop);
                printf("QUANTITY.   ");
                printf("%d\n\n",v.qnty);
                printf("PRICE.   ");
                printf("Tk. %f\n\n",v.price);
                printf("AMOUNT.   ");
                printf("Tk. %f\n\n",v.amount);

                j++;


                printf("\n\n-------------------------------------------------------------------------------\n");
            }
            if(flag==0)
                {
                    system("cls");
                    system("color 4C");
                    printf("\a\n\n\n\t\t\t!!!!No Record Found!!!!\n");
                    printf("\n----------------------------------------------------\n\n");
                    printf("\n\n\t\t\tPress any Key For BACK: ");
                    getch();
                    inv1();
                }

            printf("\n\n-------------------------------------------------------------------------------\n\n");
            printf("\n\n\nPress Any Key For Back: ");
            getch();
            break;
        }

        /* DELETION OF RECORD */

        case '5':
            {
system("cls");
            a='Y';
            while(a=='Y'||a=='y')
            {
                printf("\nEnter the name of the Item to be deleted: ");
                scanf("%s",i_name);
                y=fopen("temporary.txt","w+");
                rewind(i);
                flag=0;
                while(fread(&v,recsize2,1,i)==1)
                {

                    if(strcmp(v.name,i_name)!=0)
                        fwrite(&v,recsize2,1,y);
                    else
                        flag=1;
                        printf("\nThe Record has been Deleted Successfully.");
                    break;
                }
                if(flag==0)
                {
                    system("cls");

                    system("color 4C");
                    printf("\a\n\n\n\t\t\t!!!!Invalid Item Name!!!!\n");
                    printf("\n----------------------------------------------------\n\n");
                    printf("\n\n\t\t\tPress any Key For BACK: ");
                    getch();
                    inv1();
                }

                fclose(i);
                fclose(y);
                remove("invH.txt");
                rename("temporary.txt","invH.txt");
                i=fopen("invH.txt","r+");
                printf("\nDelete another record?\n\n(Yes.Press Y/No.Press Any Key): ");
                fflush(stdin);
                a=getche();
            }
        }


        case '6':
            {
                fclose(i);

                printf("\n\n\n");
                menu1();
                break;
            }
        case '7':
            {
                system("cls");
                system("color 4C");
                printf("\n\n\t\t\tAre You Sure To EXIT ?\n\n");
                printf("\n\n\t\t\t<1> Yes.\n\n\t\t\t<2> No");
                char s;
                s=getche();
                switch(s)
                {
                case '1':
                    {
                        system("cls");

                system("color 4C");

                printf("\n\t\t\tPRESS ANY KEY FOR EXIT.\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                exit(1);
                break;
                    }
                case '2':
                    {
                        system("cls");
               first();
                break;
                    }

                }

            }
        default:
            {
                system("cls");
                system("color 4C");
                printf("\n\n\n\n\n\t\t\t!!!Wrong Choice!!!\n\n\t\t\t<Please Try Again>\n\n\nPress Any Key For BACK:");
                fflush(stdin);
                getch();
                inv1();
                break;

            }
            break;
        }
    }
}
void inv2()
{
    FILE *fi,*fy;
    char a,m;
    char i_name[40];
    int iF=0,j=1,flag;
    long int recsize2;
    struct inventory2 v;

    fi=fopen("InvP.txt","r+");
    if(fi==NULL)
    {
        fi=fopen("invP.txt","w+");
        if(fi==NULL)
        {
            puts("\nSorry!! Cannot open file");
            exit(1);
        }
    }
    recsize2=sizeof(v);
    while(1)
    {
        system("cls");
        system("color 3B");

        /* DISPLAY OF OPTIONS */

        printf("\n\n\n\t\t\t\aINVENTORY");
        printf("\n\n\t\t<1>  Add an Entry for Item");
        printf("\n\n\t\t<2>  Modify Existing Entry");
        printf("\n\n\t\t<3>  Search an Entry");
        printf("\n\n\t\t<4>  Listing of all Entries");
        printf("\n\n\t\t<5>  Delete an Entry");
        printf("\n\n\t\t<6>  BACK");
        printf("\n\n\t\t<7>  EXIT");
        printf("\n\n\n\t\tEnter your choice here: ");
        fflush(stdin);
        m=getche();

        switch(m)
        {

        /* ADDITION OF RECORDS */

        case '1':
            {
system("cls");
            fseek(fi,0,SEEK_END);
            a='Y';
            while(a=='Y'||a=='y')
            {
                x:
                printf("\n\n\nEnter the Name of the Item: ");
                scanf("%s",i_name);
                rewind(fi);

                /* CHECKING FOR UNIQUENESS OF NAME */

                while(fread(&v,recsize2,1,fi)==1)
                {

                    if(strcmp(v.name,i_name)==0)
                    {
                        iF=1;
                        printf("\n\n\t\tTHIS ITEM ALREADY EXISTS. ENTER ANOTHER ONE");
                        goto x;
                    }
                }
                if(iF==0||fread(&v,recsize2,1,fi)==0)
                {
                    fseek (fi,0,SEEK_END);
                    strcpy(v.name,i_name);
                    fflush(stdin);
                    printf("\nEnter the Date of purchase: ");
                    scanf("%s",v.dop);
                    fflush(stdin);
                    printf("\nEnter the Quantity of the Item: ");
                    scanf("%d",&v.qnty);
                    printf("\nEnter the price of One Item: ");
                    scanf("%f",&v.price);
                    v.amount=v.qnty*v.price;
                    printf("\nThe amount of %d %s is = %f",v.qnty,v.name,v.amount);

                    fwrite(&v,recsize2,1,fi);
                    printf("\n----------------------------------------------------");
                    printf("\nWant to add entry of the another Item\n\n(Yes.Press Y/No.Press Any Key): ");
                    fflush(stdin);
                    a=getche();
                }
            }
            break;
        }

        /* MODIFICATION OF EXISTING RECORDS */

        case '2':
            {
system("cls");
            a='Y';
            while(a=='Y'||a=='y')
            {
                printf("\nEnter the name of the item to modify: ");
                scanf("%s",i_name);
                rewind(fi);
                flag=0;
                while(fread(&v,recsize2,1,fi)==1)
                {
                    if(strcmp(v.name,i_name)==0)
                    {
                        flag=1;
                        fflush(stdin);
                        printf("\nEnter the new name of the Item: ");
                        gets(v.name);
                        printf("\nEnter the new Date of purchase: ");
                        fflush(stdin);
                        scanf("%s",v.dop);
                        printf("\nEnter the new Quantity of the Item: ");
                        scanf("%d",&v.qnty);
                        printf("\nEnter the new price of One Item: ");
                        scanf("%f",&v.price);
                        v.amount=v.qnty*v.price;
                        printf("\nThe new amount of %d %s is = %f",v.qnty,v.name,v.amount);

                        fseek(fi,-recsize2,SEEK_CUR);
                        fwrite(&v,recsize2,1,fi);
                        break;
                    }
                }
                if(flag==0)
                {
                    system("cls");
                    system("color 4C");
                    printf("\a\n\n\n\t\t\t!!!!Invalid Item Name!!!!\n");
                    printf("\n----------------------------------------------------\n\n");
                    printf("\n\n\t\t\tPress any Key For BACK: ");
                    getch();
                    inv2();
                }
                printf("\n----------------------------------------------------");
                printf("\nModify another Record\n\n(Yes.Press Y/No.Press Any Key): ");
                fflush(stdin);
                a=getche();
            }
            break;
            }

        /*SEARCHING A PARTICULAR ENTRY BY NAME*/

        case '3':
            {
system("cls");
            a='Y';
            while(a=='Y'||a=='y')
            {
                printf("\nEnter name of item to search: ");
                gets(i_name);
                rewind(fi);
                flag=0;
                while(fread(&v,recsize2,1,fi)==1)
                {
                    if(strcmp(v.name,i_name)==0)
                    {
                        flag=1;
                        printf("\nThe Name of the Item: ");
                        puts(v.name);
                        printf("\nEnter the Date of purchase: %s",v.dop);
                        printf("\nQuantity of the Item: %d",v.qnty);
                        printf("\nPrice of One Item: %f",v.price);
                        v.amount=v.qnty*v.price;
                        printf("\nThe amount of %d %s is = %f",v.qnty,v.name,v.amount);
                    }
                }
                 if(flag==0)
                {
                    system("cls");
                    system("color 4C");
                    printf("\a\n\n\n\t\t\t!!!!Invalid Item Name!!!!\n");
                    printf("\n----------------------------------------------------\n\n");
                    printf("\n\n\t\t\tPress any Key For BACK: ");
                    getch();
                    inv2();
                }
                printf("\n----------------------------------------------------");
                printf("\nSearch another Entry\n\n(Yes.Press Y/No.Press Any Key): ");
                fflush(stdin);
                a=getche();
            }
            break;
        }

        /* LISTING OF ALL RECORDS */

        case '4':
            {
system("cls");
            printf("\n\n-------------------------------------------------------------------------------\n");
            rewind(fi);
            flag=0;
            while(fread(&v,recsize2,1,fi)==1)
            {
                flag=1;
                printf("S.No.   ");
                printf("%d\n\n",j);
                printf("ITEM.   ");
                printf("%s\n\n",v.name);
                printf("DATE.   ");
                printf("%s\n\n",v.dop);
                printf("QUANTITY.   ");
                printf("%d\n\n",v.qnty);
                printf("PRICE.   ");
                printf("Tk. %f\n\n",v.price);
                printf("AMOUNT.   ");
                printf("Tk. %f\n\n",v.amount);

                j++;


                printf("\n\n-------------------------------------------------------------------------------\n");
            }
             if(flag==0)
                {
                    system("cls");
                    system("color 4C");
                    printf("\a\n\n\n\t\t\t!!!!Record Not Found!!!!\n");
                    printf("\n----------------------------------------------------\n\n");
                    printf("\n\n\t\t\tPress any Key For BACK: ");
                    getch();
                   inv2();
                }

            printf("\n\n-------------------------------------------------------------------------------\n");
            printf("\n\n\nPress Any Key For Back: ");
            getch();
            break;
            }

        /* DELETION OF  inv RECORD */

        case '5':
            {
system("cls");
            a='Y';
            while(a=='Y'||a=='y')
            {
                printf("\nEnter the name of the Item to be deleted: ");
                scanf("%s",i_name);
                fy=fopen("temporary.txt","w+");
                rewind(fi);
                flag=0;
                while(fread(&v,recsize2,1,fi)==1)
                {

                    if(strcmp(v.name,i_name)!=0)
                        fwrite(&v,recsize2,1,fy);
                    else
                    flag=1;

                printf("\nThe Record has been Deleted Successfully.");
                break;
                }

                    if(flag==0)
                    {
                        system("cls");
                        system("color 4C");
                        printf("\a\n\n\n\t\t\t!!!!Invalid Item Name!!!!\n");
                        printf("\n----------------------------------------------------\n\n");
                        printf("\n\n\t\t\tPress any Key For BACK: ");
                        getch();
                        inv2();
                }
                fclose(fi);
                fclose(fy);
                remove("invP.txt");
                rename("temporary.txt","invP.txt");
                fi=fopen("invP.txt","r+");
                printf("\nDelete another record?\n\n(Yes.Press Y/No.Press Any Key): ");
                fflush(stdin);
                a=getche();
            }
        }



        case '6':
            {
                fclose(fi);

                printf("\n\n\n");
                menu2();
                break;
            }
        case '7':
            {
                system("cls");
                system("color 4C");
                printf("\n\n\t\t\tAre You Sure To EXIT ?\n\n");
                printf("\n\n\t\t\t<1> Yes.\n\n\t\t\t<2> No");
                char s;
                s=getche();
                switch(s)
                {
                case '1':
                    {
                        system("cls");

                system("color 4C");

                printf("\n\t\t\tPRESS ANY KEY FOR EXIT.\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                exit(1);
                break;
                    }
                case '2':
                    {
                        system("cls");
               first();
                break;
                    }

                }

            }
        default:
            {
                system("cls");
                system("color 4C");
                printf("\n\n\n\n\n\t\t\t!!!Wrong Choice!!!\n\n\t\t\t<Please Try Again>\n\n\nPress Any Key For BACK: ");
                fflush(stdin);
                getch();
                inv2();
                break;

            }
            break;
        }
    }
}

/* ABOUT THE PROGRAM */

void about1()
{
    char n;
    system("cls");
    system("color 2A");
    printf("\n\n\n\aThis program is developed to maintain records of Patients,");
    printf("\n\nEmployees and Inventory items in a hospital.");
    printf("\n\nDeveloped  By:");
    printf("ZUBAER JEWEL.\n\nCSE Department,\n\nNorth Western University,Khulna.\n\nMobile no : 01771434701,01839666712");
    printf("\n\n\n\t\t\tPress Any Key For Back: \n\n\n\n");
    n=getche();
    system("cls");
    menu1();
}
void about2()
{
    char n;
    system("cls");
    system("color 2A");
    printf("\n\n\n\aThis program is developed to maintain records of Patients,");
    printf("\n\nEmployees and Inventory items in a hospital.");
    printf("\n\nDeveloped  By:");
    printf("\n\nZUBAER JEWEL\n\nCSE Department,\n\nFirst Year,\n\nNorth Western University,Khulna.\n\nMobile no : 01771434701,01839666712");
    printf("\n\n\n\t\t\tPress Any Key For Back: \n\n\n");
    n=getche();
    system("cls");
    menu2();

}
void first()
{
    char h;
system("cls");
system("color 3B");
    printf("\n\n\n");
    printf("\t\t______________________________________________________");
    printf("\n \t\t| ***** Welcome To Hospital Management System *****  | ");
    printf(" \n\t\t------------------------------------------------------\n\n\n\n");
    printf("\t\t\t\a   <1> For Hospital Authority ");
    printf("\n\n\t\t\t   <2> For Patient Authority");
    printf("\n\n\t\t\t   <3> For EXIT");
    printf("\n\n\n\t\t\t      Press Your Choice :");

    h=getche();
    //scanf("%s",&h);
    switch(h)
    {
    case '1':
    {
        system("cls");
        system("color 3B");
        menu1();
        break;
    }
    case '2':
    {
        system("cls");
        system("color 3B");
        menu2();

        break;

        case '3':
             {
                system("cls");
                system("color 4C");
                printf("\n\n\t\t\tAre You Sure To EXIT ?\n\n");
                printf("\n\n\t\t\t<1> Yes.\n\n\t\t\t<2> No");
                char s;
                s=getche();
                switch(s)
                {
                case '1':
                    {
                        system("cls");

                system("color 4C");

                printf("\n\t\t\tPRESS ANY KEY FOR EXIT.\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                exit(1);
                break;
                    }
                case '2':
                    {
                        system("cls");
               first();
                break;
                    }

                }

            }
        default:
            {
                system("cls");
                system("color 4C");
                printf("\n\n\n\n\n\t\t\t!!!Wrong Choice!!!\n\n\t\t\t<Please Try Again>\n\n\nPress Any Key For BACK: ");
               fflush(stdin);
               getch();
                first();
                break;
            }
        }
    }
}

void MainMenu()
{
    char n;
system("color 3B");
    printf("\n\n\n\t\t\t****************************************");
    printf("\n\t\t\t* Please Sign up and Login to continue *");
    printf("\n\t\t\t****************************************\n\n");
    printf("\n\n\t\t\t\a\t<1> For Sign Up\n\n\t\t\t\t<2> For Log In\n\n\t\t\t\t<3> For Exit\n\n\n\tPress Your Choice : ");
    n=getche();
    switch(n)
    {
    case '1':
        {
            signup();
            break;
        }
        case '2':
        {
            login();
            system("cls");
            printf("\n\n\n\n\n\t\t<You've successfully Logged in to your account>\n\n\n");

            break;
        }
        case '3':
            {
                system("cls");
                system("color 4C");
                printf("\n\n\t\t\tAre You Sure To EXIT ?\n\n");
                printf("\n\n\t\t\t<1> Yes.\n\n\t\t\t<2> No");
                char s;
                s=getche();
                switch(s)
                {
                case '1':
                    {
                        system("cls");

                system("color 4C");

                printf("\n\t\t\tPRESS ANY KEY FOR EXIT.\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
                exit(1);
                break;
                    }
                case '2':
                    {
                        system("cls");
                MainMenu();
                break;
                    }

                }

            }
        default:
            {
                system("cls");
                system("color 4C");

                printf("\n\n\n\n\n\t\t\t!!!Wrong Choice!!!\n\n\t\t\t<Please Try Again>\n\n\n\nPress Any Key For BACK: ");
                fflush(stdin);
                getch();
                system("cls");
                MainMenu();
                break;
            }
    }


}

void signup()
{
    FILE *f,*f1;
    char ch,username[55];
    system("color 6E");
    system("cls");
    printf("\n\n\n\n\t\t\t\t\a!!Sign up!!");
    printf("\n\n\t\tEnter your User-name(Spaces not allow): ");
    f = fopen("UserName.dat","w");
    scanf("%s",&username);
    fprintf(f,"%s",username);
    fclose(f);
    f1 = fopen("Password.dat","w");
     do
    {
        printf("\n\n\t\tEnter your password: ");
        int i=0;
    while(1)
    {
         ch=getch();
         if(ch==13)
                 break;
         printf("*");
         user.pass1[i++]=ch;
    }
     puts("");
        printf("\n\n\t\tEnter confirm password: ");
        i=0;
    while(1)
    {
         ch=getch();
         if(ch==13)
                 break;
         printf("*");
         user.pass2[i++]=ch;
    }
     user.pass2[i]='\0';
     puts("");
        if(strcmp(user.pass1,user.pass2)!=0)
        {

            system("color 4C");
            printf("\n\aWrong password! Try again.\n\n");
        }
    }while(strcmp(user.pass1,user.pass2)!=0);
    fprintf(f1,"%s\n",user.pass1);
    fclose(f1);
    printf("\n\t\tYou\'ve Successfully Signed Up Your Account.");

    login();
}
void login()
{
    char ch,username[55],username_log[55], pass1[25], pass2[25];
    FILE *f,*f1;
    f = fopen("UserName.dat","r");
    system("color 3B");
    system("cls");
    if(f==NULL)
    {
        system("color 4C");
        puts("\n\t\t\t     !!!!!Error Occurred!!!!!\n\n\t\tPlease Sign-Up.\n\n\t\tPress Any Key To Sign_Up: ");
        getch();
        system("cls");
        system("color 3B");
        MainMenu();
    }
    printf("\n\n\n\n\t\t\t\t\a!!Login!!\n\n");
    do
    {

        printf("\n\n\t\tUser-name: ");
        scanf("%s",&username_log);
        fscanf(f,"%s", &username);
        if(strcmp(username_log,username)!=0)
        {
            system("color 4C");
            printf("\n\n\t\tWrong User-Name. Please Try Again.\n");

            continue;
        }
        fclose(f);
    }
    while(strcmp(username_log,username)!=0);
    r:
    f1 = fopen("Password.dat","r");
    //system("color 3B");
    do
    {
        printf("\n\n\t\tPassword: ");

    int i=0;
    while(1)
    {
         ch=getch();
         if(ch==13)
                 break;
         printf("*");
         user.pass1[i++]=ch;
    }
        //scanf("%s",&pass1);
        fscanf(f1,"%s",&user.pass2);
        if(strcmp(user.pass2,user.pass1)!=0)
        {
            system("color 4C");
            printf("\n\n\t\tWrong Password. Try Again.\n");
            goto r;
        }

    }
    while(strcmp(user.pass2,user.pass1)!=0);
    //system("cls");
    fclose(f1);
}
#define LEN 150

void main()
{
    char buf[LEN];
    //int n=2017;
    time_t curtime;
    struct tm*loc_time;
    curtime=time(NULL);
    loc_time=localtime(&curtime);
    //printf("%s",asctime(loc_time));

    strftime(buf,LEN,"Today is %A,%d %b.",loc_time);

    fputs(buf,stdout);
    strftime(buf,LEN,"\n\nOpen Time is %I:%M%p.\n",loc_time);
    fputs(buf,stdout);
system("color 3B");
    MainMenu();
    system("cls");
    system("color 3B");
    first();
}

/* END OF THE PROGRAM */



