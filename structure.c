#include<stdio.h>
#include<string.h>
struct book
{   int ID;
    char name[50];
    char authorname[50];
};
int main()
{
    struct book b[50];
    int n ,i;
    int choice;
    printf("Enter The no. of books:");
    scanf("%d",&n);
    printf("Enter detail of %d books:",n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter details of book no.%d",i+1);
        printf("\nEnter ID:");
        scanf("%d",&b[i].ID);
        getchar();
        printf("Enter name of Book:");
        scanf("%s" ,&b[i].name);
        printf("Enter Authorname:");
        scanf("%s",&b[i].authorname);
    }
    while(1)
    {
        printf("\n---MENU---");
        printf("\n 1.Insert Record");
        printf("\n 2.Delete Record");
        printf("\n 3.Update Record");
        printf("\n 4.Display Record");
        printf("\n 5.Exit");

        printf("\n Enter your choice:");
        scanf("%d" ,&choice);
        if(choice==5)
        { printf("Exiting Program");
          break; }
        switch(choice)
       {
        case 1: printf("Enter details of new book:");
       for(int i=n;i<n+1;i++)
       {
        printf("\nEnter ID:");
        scanf("%d",&b[i].ID);
        getchar();
        printf("Enter name of book:");
        scanf("%s" ,&b[i].name);
        printf("Enter authorname:");
        scanf("%s",&b[i].authorname);
       }
      n++;
      printf("New Record after Isertion is:\n");
      for(int i=0;i<n;i++)
      {
        printf("\nDetail of book no.%d",i+1);
        printf("\nId:%d",b[i].ID);
        printf("\nName:%s",b[i].name);
        printf("\nAuthorname:%s",b[i].authorname);
      }
      break;
        
        case 2:printf("Enter the ID which you want to delete:\n");
        int del,index = -1;
        scanf("%d",&del);
        for(int i=0; i<n; i++)
    {
        if(b[i].ID==del)
        {
            index=i;
            break;
        }
    }
        for(int i = index; i < n - 1; i++)
      {
        b[i]=b[i+1];
      }
      n--;
      printf("Record After Deletion:\n");
    for(int i=0;i<n;i++)
     {
        printf("\nDetail of book no.%d",i+1);
        printf("\nID:%d",b[i].ID);
        printf("\nName:%s",b[i].name);
        printf("\nAuthorname:%s",b[i].authorname);
     }
   break;

        case 3:printf("Enter the ID which you want to update\n");
        int temp;
           scanf("%d",&temp);
           getchar();
        for(int i=0;i<n;i++)
     {
        if(b[i].ID==temp)
       {
           temp=i;
           break;
       }
     }
           printf("Enter the new name:");
           scanf("%s" ,&b[temp].name);
           printf("Enter new Authorname:");
           scanf("%s",&b[temp].authorname);
           
           printf("Updated Record:\n");
           for(int i=0;i<n;i++)
         {
           printf("\nDetail of book no.%d",i+1);
           printf("\nID:%d",b[i].ID);
           printf("\nName:%s",b[i].name);
           printf("\nAuthorname:%s",b[i].authorname);
         }
        break;
       case 4:if(n==4)
       {
           printf("No record available");
       }
       else
       {
           printf("\n book record:");
           for(i=0;i<n;i++)
           {
               printf("\n book %d" ,i+1);
               printf("\n ID:%d" ,b[i].ID);
               printf("\n Nmae:%s" ,b[i].name);
               printf("\n Authorname:%s" ,b[i].authorname);  
           }
       }
           break;
          default:printf("Invalid Choice\n");
     }
   }
 return 0;  
}