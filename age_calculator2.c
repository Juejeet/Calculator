#include <stdio.h>

void calculations(int ,int ,int ,int ,int ,int);

int main(){
    int currentday, currentmonth,currentyear ;
    int birthday, birthmonth, birthyear ;

    printf("================================================");
    printf("\nEnter the birthdate (dd mm yyyy): ");
    scanf("%d %d %d",&birthday,&birthmonth,&birthyear);

    printf("Enter the currentdate (dd mm yyyy): ");
    scanf("%d %d %d",&currentday,&currentmonth,&currentyear);
    printf("=================================================");

    calculations(currentday,birthday,currentmonth,birthmonth,currentyear,birthyear);
   
    
    return 0;
}

void calculations(int currentday,int birthday,int currentmonth,int birthmonth,int currentyear,int birthyear){
   
    int years,days,week;
    int months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int finalmonth ;
    int totalmonths,totalweeks,totaldays;

    
     years = (currentyear - birthyear);

    if(currentmonth>birthmonth){
        printf("age: %d",years);
    }
    else if(currentmonth==birthmonth){
        if(currentday>=birthday){

        }
        else{
            years--;

        }
    }
    else{
        years--;  
    }    
    //-------------------------------------------
    if(currentday < birthday){
        currentday += months[birthmonth-1];
        currentmonth-=1;

    }
    if(currentmonth < birthmonth){
        currentmonth += 12;        
        currentyear -= 1;

    }


    days = currentday - birthday;
    finalmonth = currentmonth - birthmonth;

    totalmonths = years * 12;
    totaldays = years *365 + (years/4) ;
    totalweeks = totaldays / 7;

    //-----------------------------------------
    if(days>=1 && days<=7 ){
        week = 1;
    }
    else if(days>=8 && days<=14)
        week = 2;
    else if(days>=15 && days<=21)
        week = 3;
    else if(days>=22 && days<28){
        week =4;
    }    

    printf("\nYears: %d, months: %d, week: %d, days: %d",years,finalmonth,week,days);
    printf("\nTotal months = %d",totalmonths);
    printf("\nTotal weeks = %d",totalweeks);
    printf("\nTotal days = %d",totaldays);

}