#include<stdio.h>

int main(){

    int year=2015;
    int month=11;
    int limit;
    int hits = 0;
    int loop_counter = 0;
    int days = 0;
    
    printf("How many predictions do you want?\n");
    scanf("%d",&limit);

    if(limit<=0)
      return 0;
    else{

      while(1){
        //+nov - now dec
        days += 30;
        month = 12;
        if(days % 7 == 0){
          printf("Year %d month %d\n",year,month);
          days = 0;
          hits++;
          if(hits == limit)
            return 0;
        }
        //+dec - now jan
        year++;
        days += 31;
        month = 1;
        if(days % 7 == 0){
          printf("Year %d month %d\n",year,month);
          days = 0;
          hits++;
          if(hits == limit)
            return 0;
        }
        //+jan - now feb
        days += 31;
        month = 2;
        if(days % 7 == 0){
          printf("Year %d month %d\n",year,month);
          days = 0;
          hits++;
          if(hits == limit)
            return 0;
        }
        //+feb - now mar
        if(year % 4 == 0)
          days += 29;
        else
          days += 28;
        month = 3;
        if(days % 7 == 0){
          printf("Year %d month %d\n",year,month);
          days = 0;
          hits++;
          if(hits == limit)
            return 0;
        }
        //+mar - now apr
        days += 31;
        month = 4;
        if(days % 7 == 0){
          printf("Year %d month %d\n",year,month);
          days = 0;
          hits++;
          if(hits == limit)
            return 0;
        }
        //+apr - now may
        days += 30;
        month = 5;
        if(days % 7 == 0){
          printf("Year %d month %d\n",year,month);
          days = 0;
          hits++;
          if(hits == limit)
            return 0;
        }
        //+may - now jun
        days += 31;
        month = 6;
        if(days % 7 == 0){
          printf("Year %d month %d\n",year,month);
          days = 0;
        }
        //+jun - now jul
        days += 30;
        month = 7;
        if(days % 7 == 0){
          printf("Year %d month %d\n",year,month);
          days = 0;
          hits++;
          if(hits == limit)
            return 0;
        }
        //+jul - now aug
        days += 31;
        month = 8;
        if(days % 7 == 0){
          printf("Year %d month %d\n",year,month);
          days = 0;
          hits++;
          if(hits == limit)
            return 0;
        }
        //+aug - now sep
        days += 31;
        month = 9;
        if(days % 7 == 0){
          printf("Year %d month %d\n",year,month);
          days = 0;
          hits++;
          if(hits == limit)
            return 0;
        }
        //+sep - now oct
        days += 30;
        month = 10;
        if(days % 7 == 0){
          printf("Year %d month %d\n",year,month);
          days = 0;
          hits++;
          if(hits == limit)
            return 0;
        }
        //+oct - now nov
        days += 31;
        month = 11;
        if(days % 7 == 0){
          printf("Year %d month %d\n",year,month);
          days = 0;
          hits++;
          if(hits == limit)
            return 0;
        }


      }

    }



    return 0;
}