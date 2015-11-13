#include<stdio.h>
#include<stdlib.h>

int year=2015;
int month=11;
int limit;
int hits = 0;
int loop_counter = 0;
int days = 0;


void verify_date(){
    month = (month + 1) % 12;
    if(days % 7 == 0){
      printf("Year %d month %d\n",year,month);
      days = 0;
      hits++;
      if(hits == limit)
        exit(0);
    }
}


int main(){

    printf("How many predictions do you want?\n");
    scanf("%d",&limit);

    if(limit<=0)
      return 0;
    else{

      while(1){
        //+nov - now dec
        days += 30;
        verify_date();
        //+dec - now jan
        year++;
        days += 31;
        verify_date();
        //+jan - now feb
        days += 31;
        verify_date();
        //+feb - now mar
        if(year % 4 == 0)
          days += 29;
        else
          days += 28;
        verify_date();
        //+mar - now apr
        days += 31;
        verify_date();
        //+apr - now may
        days += 30;
        verify_date();
        //+may - now jun
        days += 31;
        verify_date();
        //+jun - now jul
        days += 30;
        verify_date();
        //+jul - now aug
        days += 31;
        verify_date();
        //+aug - now sep
        days += 31;
        verify_date();
        //+sep - now oct
        days += 30;
        verify_date();
        //+oct - now nov
        days += 31;
        verify_date();
      }

    }



    return 0;
}