#include<stdio.h>
char name,id,size,typeofroom;
int number,idnum,type,rooms,count,sum=0,password=9999,tables,user,food,typeoffood,typeofcondition;



int main()
{int ac_deluxe = 3000, ac_super_deluxe = 6000, non_ac_deluxe = 2500, non_ac_super_deluxe = 3500, cost_of_food = 2000;
    second: printf("\t\t\t welcome to 9 decades grand inn\n");
    printf("\nenter user type(1.customer or 2.employ)press 1 or 2  :");
    scanf("%d",&user);
    if(user==2)
    {
        printf("enter password  :");
        scanf("%d",&password);
        if(password==9999)
        {
            printf("edit price of ac deluxe           :");
            scanf("%d", &ac_deluxe);
            printf("edit price of ac super deluxe     :");
            scanf("%d", &ac_super_deluxe);
            printf("edit price of non ac deluxe       :");
            scanf("%d", &non_ac_super_deluxe);
            printf("edit price of non ac super deluxe :");
            scanf("%d", &non_ac_super_deluxe);
            printf("edit price of dining              :");
            scanf("%d", &cost_of_food);
            printf("\n\n");
            goto second;
        }
            else {
            printf("login failed wrong password");
            
        }
    }
    if(user==1) {
        printf("customer name  :");
        scanf("%s", &name);
        printf("mobile number  :");
        scanf("%d", &number);
        printf("ID card type   :");
        scanf("%s", &id);
        printf("ID number      :");
        scanf("%d", &idnum);
        printf("1.lodging\n2.dinning ");
        printf("\nselect from one of this :");
        scanf("%d", &type);
        switch (type) {
            case 1 :
                printf("type of room(1.deluxe or 2.super deluxe)press 1 or 2 :");
                scanf("%d",&typeofroom);
                printf("(1.ac or 2.non ac) press 1 or 2 :");
                scanf("%d", &typeofcondition);
                printf("number of rooms :");
                scanf("%d", &rooms);
                printf("(1.dining or 2.without_dining) press 1 or 2:");
                scanf("%d", &food);
                if (food == 1) {
                    printf("1.veg or 2.non veg press 1 or 2 :");
                    scanf("%d", &typeoffood);
                    printf("limited or unlimited          :");
                    scanf("%s", &size);
                    printf("total members dining          :");
                    scanf("%d", &count);
                    if (typeofroom ==1 && typeofcondition==1) {
                        printf("cost of %d deluxe AC rooms    :%d*%d", rooms, rooms, ac_deluxe);
                        printf("\ncost of dining for %d members :%d*%d", count, count, cost_of_food);
                        sum = ac_deluxe + (cost_of_food * count);
                        printf("\ntotal amount to be paid     :%d", sum);
                    }
                    if (typeofroom ==1 && typeofcondition==2) {
                        printf("cost of %d  deluxe non ac rooms        :%d*%d", rooms, rooms, non_ac_deluxe);
                        printf("\ncost of dining for %d members        :%d*%d", count, count, cost_of_food);
                        sum = non_ac_deluxe + (cost_of_food * count);
                        printf("\ntotal amount to be paid              :%d", sum);
                    }
                    if (typeofroom ==2 && typeofcondition==2) {
                        printf("cost of %d super deluxe non ac rooms   :%d*%d", rooms, rooms, non_ac_super_deluxe);
                        printf("\ncost of dining for %d members        :%d*%d", count, count, cost_of_food);
                        sum = non_ac_super_deluxe + (cost_of_food * count);
                        printf("\ntotal amount to be paid              :%d", sum);
                    }
                    if (typeofroom ==2 && typeofcondition==1) {
                        printf("cost of %d super deluxe ac rooms       :%d*%d", rooms, rooms, ac_super_deluxe);
                        printf("\ncost of dining for %d members        :%d*%d", count, count, cost_of_food);
                        sum = ac_super_deluxe + (cost_of_food * count);
                        printf("\ntotal amount to be paid              :%d\n", sum);
                    }

                } else {
                    if (food ==2) {
                        if (typeofroom ==1 && typeofcondition==1) {
                            printf("cost of %d deluxe AC rooms :%d*%d", rooms, rooms, ac_deluxe);
                            sum = ac_deluxe;
                            printf("\ntotal amount to be paid :%d", sum);
                        }
                        if (typeofroom ==1 && typeofcondition==2) {
                            printf("cost of %d deluxe non ac rooms :%d*%d", rooms, rooms, non_ac_super_deluxe);
                            sum = non_ac_deluxe;
                            printf("\ntotal amount to be paid :%d", sum);
                        }
                        if (typeofroom ==2 && typeofcondition==2) {
                            printf("cost of %d super deluxe non ac rooms :%d*% d", rooms, rooms, non_ac_super_deluxe);
                            sum = non_ac_super_deluxe;
                            printf("\ntotal amount to be paid :%d", sum);
                        }
                        if (typeofroom ==2 && typeofcondition==1) {
                            printf("cost of %d super deluxe ac rooms  :%d*%d", rooms, rooms, ac_super_deluxe);
                            sum = ac_super_deluxe;
                            printf("\ntotal amount to be paid :%d\n", sum);
                            goto second;
                        }
                    }
                }
                break;
            case 2:
                printf("(1.veg or 2.nonveg) press 1or 2  :");
                scanf("%d", &typeoffood);
                printf("limited or unlimited             :");
                scanf("%s", &size);
                printf("total members dining             :");
                scanf("%d", &count);
                printf("reservation of tables count      :");
                scanf("%d",&tables);
                printf("you table is reserved");
                printf("\ncost of dining for %d members :%d*%d", count, count, cost_of_food);
                sum=count*cost_of_food;
                printf("dear %s ");
                printf("\n\ntotal amount should be paid   :%d",sum);
        }
        printf("\n\t\t thanks for choosing to 9 decades grand inn\n");
    }   return (0);
}
