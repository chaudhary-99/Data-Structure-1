/*13. Let us work on the menu of a library. Create a structure containing book information like accession number,
name of author, book title and flag to know whether book is issued or not. Create a menu in which the following can be done.
 1 - Display book information
 2 - Add a new book
 3 - Display all the books in the library of a particular author
 4 - Display the number of books of a particular title
 5 - Display the total number of books in the library
 6 - Issue a book
 (If we issue a book, then its number gets decreased by 1 and if we add a book, its number gets increased by 1)*/
 #include<stdio.h>
#include<stdlib.h>
struct library{
	int accen_no;
    char au_name[20];
    char book_title[20];
    int flag;
};
int main(){
    int n;
    scanf("%d",&n);
    struct library s[n];
	for(int i=0;i<n;i++){
        scanf("%d",&s[i].accen_no);
        scanf("%s",s[i].au_name);
        scanf("%s",s[i].book_title);
        scanf("%d",&s[i].flag);
    }
    
    /*##################################*/
    for(int i=0;i<n;i++){
        printf("%d ",s[i].accen_no);
        printf("%s ",s[i].au_name);
        printf("%s ",s[i].book_title);
        if(s[i].flag==1){
            printf("ISSUED\n");
        }
        else{
            printf("NOT ISSUED\n");
        }
        printf("\n");
    }
    /*#######################################*/
    n=n+1;
    scanf("%d",&s[n-1].accen_no);
    scanf("%s",s[n-1].au_name);
    scanf("%s",s[n-1].book_title);
    scanf("%d",&s[n-1].flag);
    /*#####################################*/
    char name_of_author[20];
    scanf("%s",name_of_author);
    for(int i=0;i<n;i++){
       if(s[i].au_name==name_of_author){
           printf("%s",s[i].book_title);
       }
    }
    /*######################################*/
    char book_name[20];
    scanf("%s",book_name);
    int count=0;
    for(int i=0;i<n;i++){
       if(s[i].book_title==book_name){
           count++;
       }
    }
    printf("total number of books %d",count);
    /*##################################*/
    printf("Total number of books in a library are  %d",n);
    /*##################################*/
    int count_issued=0;
    for(int i=0;i<n;i++){
       if(s[i].flag==1){
           count_issued++;
       }
    }
    printf("Total number of issued books in a library are %d",count_issued);


	return 0;
}