#include <stdio.h>
#include<string.h>
struct contact{
    char name[50];
    char phone[15];
};

int main() {
    struct contact contact[100];
    int choice,count=0;
    do{
        printf("\n----Contact Book---\n");
        printf("1. Add contact\n");
        printf("2. Display all contacts\n");
        printf("3. Search contact\n");
        printf("4. Exit\n");
        printf("Enter Your Choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("---Add contact---\n");
            printf("please enter name for saving contact\n");
            scanf(" %[^\n]",contact[count].name);
            printf("Please enter 10 digit mobile number or phone number\n");
            scanf("%s",contact[count].phone);
            printf("---contact saved successfully---\n");
            count++;
            break;
            case 2:
            printf("---All Contacts---\n");
            for(int i=0;i<count;i++){
            printf("%d. name: %s, Mobile no.: %s \n",i+1,contact[i].name,contact[i].phone);
            }
            break;
            case 3:
            char searchName[50];
            int found=0;
            printf("---Searching contact---\n");
            printf("Enter first name for searching\n");
            scanf(" %[^\n]", searchName);
            for(int i=0;i< count;i++){
                if(strcmp(contact[i].name,searchName)==0){
                printf("Contact found...Name: %s ,Mobile No.: %s \n",contact[i].name,contact[i].phone);
                found=1;
                break;
                }
            }
            if(!found){
                printf("Sorry! contact not found.\n");
            }
            break;
            case 4:
            printf("Exited contact Book,GoodBye!");
            break;
            default:
            printf("invalid choice, Please choose between (1-4)");
            
        }
        
    }while(choice!=4);
    

    return 0;
}