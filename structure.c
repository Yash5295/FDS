#include<stdio.h>
#include<string.h>

struct book
{
    int ID;
    char name[50];
    char authorname[50];
};

int main()
{
    struct book b[50];
    int n,i;
    int choice;

    printf("Enter The no. of books:");
    scanf("%d",&n);
    getchar();

    printf("Enter detail of %d books:",n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter details of book no.%d",i+1);

        printf("\nEnter ID:");
        scanf("%d",&b[i].ID);
        getchar();

        printf("Enter name of Book:");
        fgets(b[i].name,50,stdin);

        printf("Enter Authorname:");
        fgets(b[i].authorname,50,stdin);
    }

    while(1)
    {
        printf("\n---MENU---");
        printf("\n1.Insert Record");
        printf("\n2.Delete Record");
        printf("\n3.Update Record");
        printf("\n4.Display Record");
        printf("\n5.Exit");

        printf("\nEnter your choice:");
        scanf("%d",&choice);
        getchar();

        if(choice==5)
        {
            printf("Exiting Program");
            break;
        }

        switch(choice)
        {

        case 1:
            printf("Enter details of new book:");

            printf("\nEnter ID:");
            scanf("%d",&b[n].ID);
            getchar();

            printf("Enter name of book:");
            fgets(b[n].name,50,stdin);

            printf("Enter authorname:");
            fgets(b[n].authorname,50,stdin);

            n++;

            printf("New Record after Insertion:\n");

            for(i=0;i<n;i++)
            {
                printf("\nDetail of book no.%d",i+1);
                printf("\nID:%d",b[i].ID);
                printf("\nName:%s",b[i].name);
                printf("\nAuthorname:%s",b[i].authorname);
            }
            break;


        case 2:
        {
            printf("Enter the ID which you want to delete:\n");
            int del,index=-1;

            scanf("%d",&del);

            for(i=0;i<n;i++)
            {
                if(b[i].ID==del)
                {
                    index=i;
                    break;
                }
            }

            if(index==-1)
            {
                printf("Record not found");
            }
            else
            {
                for(i=index;i<n-1;i++)
                {
                    b[i]=b[i+1];
                }

                n--;

                printf("Record After Deletion:\n");

                for(i=0;i<n;i++)
                {
                    printf("\nDetail of book no.%d",i+1);
                    printf("\nID:%d",b[i].ID);
                    printf("\nName:%s",b[i].name);
                    printf("\nAuthorname:%s",b[i].authorname);
                }
            }
        }
        break;


        case 3:
        {
            printf("Enter the ID which you want to update\n");

            int id,index=-1;

            scanf("%d",&id);
            getchar();

            for(i=0;i<n;i++)
            {
                if(b[i].ID==id)
                {
                    index=i;
                    break;
                }
            }

            if(index==-1)
            {
                printf("Record not found");
            }
            else
            {
                printf("Enter the new name:");
                fgets(b[index].name,50,stdin);

                printf("Enter new Authorname:");
                fgets(b[index].authorname,50,stdin);
            }

            printf("Updated Record:\n");

            for(i=0;i<n;i++)
            {
                printf("\nDetail of book no.%d",i+1);
                printf("\nID:%d",b[i].ID);
                printf("\nName:%s",b[i].name);
                printf("\nAuthorname:%s",b[i].authorname);
            }
        }
        break;


        case 4:

            if(n==0)
            {
                printf("No record available");
            }
            else
            {
                printf("\nBook Records:");

                for(i=0;i<n;i++)
                {
                    printf("\nBook %d",i+1);
                    printf("\nID:%d",b[i].ID);
                    printf("\nName:%s",b[i].name);
                    printf("\nAuthorname:%s",b[i].authorname);
                }
            }

            break;

        default:
            printf("Invalid Choice\n");
        }
    }

    return 0;
}
