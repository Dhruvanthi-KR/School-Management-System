#include <stdio.h>
struct student{
    char name[100], sec;
    int roll;
    float percent;
    char grade;
    char place[100];
    struct dob{
        long int day, month, year;
    } dob;
};
struct student s[100];
int count = 0;
void enter_details(){
    printf("\n\t\t\t*****ADD STUDENT DETAILS*****\n");
    printf("\t\t\t\tStudent Name : ");
    scanf("%s",s[count].name);
    printf("\t\t\t\tStudent Roll Number : ");
    scanf("%d",&s[count].roll);
    printf("\t\t\t\tStudent Date of birth : ");
    scanf("%ld %ld %ld",&s[count].dob.day, &s[count].dob.month, &s[count].dob.year);
    printf("\t\t\t\tStudent Section : ");
    scanf(" %c",&s[count].sec);
    printf("\t\t\t\tStudent Percentage : ");
    scanf("%f",&s[count].percent);
    printf("\t\t\t\tStudent Grade : ");
    scanf(" %c",&s[count].grade);
    printf("\t\t\t\tStudent State: ");
    scanf("%s",s[count].place);
    printf("\t\t\t__________________________________\n");
    count++;
}
void insert_data(){
        enter_details();
}
void find_student(int roll){
    for(int i = 0; i < count; i++){
        if(s[i].roll == roll){
            printf("\n\n\t\t\t\tSTUDENT DETAILS\n");
            printf("\t\t\t\tStudent Name : %s\n",s[i].name);
            printf("\t\t\t\tStudent Roll Number : %d\n",s[i].roll);
            printf("\t\t\t\tDate of Birth : %02ld-%02ld-%ld\n", s[i].dob.day, s[i].dob.month, s[i].dob.year);
            printf("\t\t\t\tStudent Section : %c\n",s[i].sec);
            printf("\t\t\t\tStudent Percentage : %.2f\n",s[i].percent);
            printf("\t\t\t\tStudent Grade : %c\n",s[i].grade);
            printf("\t\t\t\tStudent State: %s\n",s[i].place);
            printf("\t\t\t\t________________________\n");
            return;
        }
    }
    printf("\n\t\t\tNo student found with roll number %d.\n", roll); 
}
void count_student(){
    printf("\n\t\t\tNumber of students are %d\n",count);
}
void delete_student(int roll){
    int i;
    for(int i = 0; i < count; i++){
        if(s[i].roll == roll){
            for(int j = i; j < count - 1; j++){
                s[j] = s[j+1];
            }
            count--;
            printf("\n\t\t\tStudent with roll number %d has been deleted !\n",roll);
            return;
        }
    }
    printf("\n\t\t\tNo Student found with roll number %d !\n",roll);
}
void update_data(int uproll){
    int update;
    for(int i = 0; i < count; i++){
        if(s[i].roll == uproll){
            printf("\t\t\t\t1. Student Name : %s\n", s[i].name);
            printf("\t\t\t\t2. Student Roll Number : %d\n", s[i].roll);
            printf("\t\t\t\t3. Date of Birth : %02ld-%02ld-%ld\n", s[i].dob.day, s[i].dob.month, s[i].dob.year);
            printf("\t\t\t\t4. Student Section : %c\n", s[i].sec);
            printf("\t\t\t\t5. Student Percentage : %.2f\n", s[i].percent);
            printf("\t\t\t\t6. Student Grade : %c\n", s[i].grade);
            printf("\t\t\t\t7. Student State: %s\n", s[i].place);
            printf("\n\t\t\tWhich detail you want to update ! : ");
            scanf("%d",&update);

            switch (update){
                case 1 : {
                    printf("\t\t\t\t1. Enter Name : ");
                    scanf("%s",s[i].name);
                    printf("\n\t\t\tUpdated name : %s\n",s[i].name);
                } break;
                case 2 : {
                    printf("\t\t\t\t2. Enter Roll Number : ");
                    scanf("%d",&s[i].roll);
                    printf("\n\t\t\tUpdated roll Number : %d\n",s[i].roll);
                } break;
                case 3 : {
                    printf("\t\t\t\t3. Enter Date of birth : ");
                    scanf("%ld %ld %ld",&s[i].dob.day, &s[i].dob.month, &s[i].dob.year);
                    printf("\n\t\t\tUpdated Date of birth : %02ld-%02ld-%ld\n",s[i].dob.day, s[i].dob.month, s[i].dob.year);
                } break;
                case 4 : {
                    printf("\t\t\t\t4. Enter Section : ");
                    scanf(" %c",&s[i].sec);
                    printf("\n\t\t\tUpdated Section : %c\n",s[i].sec);
                } break;
                case 5 : {
                    printf("\t\t\t\t5. Enter Percentage : ");
                    scanf("%f",&s[i].percent);
                    printf("\n\t\t\tUpdated Percentage : %.2f\n",s[i].percent);
                } break;
                case 6 : {
                    printf("\t\t\t\t6. Enter Grade : ");
                    scanf(" %c",&s[i].grade);
                    printf("\n\t\t\tUpdated Grade : %c\n",s[i].grade);
                } break;
                case 7 : {
                    printf("\t\t\t\t7. Enter State : ");
                    scanf("%s",s[i].place);
                    printf("\n\t\t\tUpdated State : %s\n",s[i].place);
                } break;
            }
        }
    }
}
void display_students(){
    if(count == 0){
        printf("\n\t\t\tNo student is updated!\n");
        return;
    }
    for(int i = 0; i < count; i++){
        printf("\n\t\t\t\tDISPLAYING STUDENT DETAILS\n");
        printf("\t\t\t\t%d. Student Name : %s\n",i + 1, s[i].name);
        printf("\t\t\t\t%d. Student Roll Number : %d\n",i + 1, s[i].roll);
        printf("\t\t\t\t%d. Date of Birth : %02ld-%02ld-%ld\n",i + 1, s[i].dob.day, s[i].dob.month, s[i].dob.year);
        printf("\t\t\t\t%d. Student Section : %c\n",i + 1, s[i].sec);
        printf("\t\t\t\t%d. Student Percentage : %.2f\n",i + 1, s[i].percent);
        printf("\t\t\t\t%d. Student Grade : %c\n",i + 1, s[i].grade);
        printf("\t\t\t\t%d. Student State: %s\n",i + 1, s[i].place);
        printf("\t\t\t\t________________________\n");
    }
}
void main(){
    int choice;
    int roll;
    int uproll;
    while(choice != 8){
        printf("\n\t\t\t*****SCHOOL MANAGEMENT SYSTEM*****\n\n");
        printf("\t\t\t1.\tENTER STUDENT DETAILS\n");
        printf("\t\t\t2.\tINSERT STUDENT DATA\n");
        printf("\t\t\t3.\tFIND STUDENT DATA\n");
        printf("\t\t\t4.\tCOUNT STUDENT\n");
        printf("\t\t\t5.\tDELETE A STUDENT\n");
        printf("\t\t\t6.\tUPDATE STUDENT DATA\n");
        printf("\t\t\t7.\tDISPLAY THE STUDENTS\n");
        printf("\t\t\t8.\tEXIT ! THANK YOU\n");
        printf("\t\t\t__________________________________\n");
        printf("\t\t\tEnter the choice : ");
        scanf("%d",&choice);

        switch (choice){
            case 1 : enter_details();
                break;
            case 2 : insert_data();
                break;
            case 3 : {
                printf("\n\t\t\tEnter the roll number to be searched! : ");
                scanf("%d",&roll);
                find_student(roll);
            }   break;
            case 4 : count_student();
                break;
            case 5 : {
                printf("\n\t\t\tEnter the roll number to delete : ");
                scanf("%d",&roll);
                delete_student(roll);
            }   break;
            case 6 : {
                printf("\n\t\t\tGive Roll Number of the student to be updated ! ");
                scanf("%d",&uproll);
                update_data(uproll);
            }    break;
            case 7 : display_students();
                break;
            case 8 : printf("\n\t\t\tExiting! Thank you! \n");
                return; 
            default :
                printf("\n\t\t\tInvalid choice ! Please try again.\n");
        }
    }
}