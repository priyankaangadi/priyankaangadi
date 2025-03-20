#include<stdio.h>
#include<string.h>

struct Book_Inventory
{
    char title[100];
    char author[100];
    float price;
    int stock;

};

int main()
{
    struct Book_Inventory book[]=
    {
        {"Love The Nature","Micheal",450.00,7},{"Science","Albert Einstien",670.78,5},{"End of Life","Doperb",900.56,10}
    };
    char title1[100],author1[100];
    int copies,option;
    float total_cost;
    do
    {
        printf("Books Available in our inventory are:\n");
        int i,flag=0;
        for(i=0;i<3;i++)
        {
            printf("Title : %s\t\tAuthor : %s\t\tPrice : %f\tStock : %d\n",book[i].title,book[i].author,book[i].price,book[i].stock);

        }
        printf("Enter the title name of the book you want to buy :\n");
        gets(title1);
        printf("Enter the author name of the book you want to buy :\n");
        gets(author1);
        if(strcmp(book[i].title,title1)==0 && strcmp(book[i].author,author1)==0)
        {
            flag=1;
            printf("Book Found.\n");
            printf("Enter the required copies youn want :\n");
            scanf("%d",&copies);
            if(copies<=book[i].stock)
            {
                total_cost=copies*book[i].price;
                printf("Total price of the book is : %f.\n",total_cost);
            }
            else{
                printf("We are out of stock!.\n");
            }

        }
        if(flag==0)
        {
            printf("Book Not Found!.\n");
        }
        printf("Do you want to buy another book.?\n");
        printf("Enter 1 if you want to buy.\nEnter 2 if you want to quit.\n");
        scanf("%d",&option);
    } while (option==1);
    
 return 0;
}