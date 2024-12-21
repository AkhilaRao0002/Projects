#include<stdio.h>
#include<stdlib.h>
int main()
{
    int day,month,year,final_day;
    printf("enter the date in DD MM YYYY format\n");
    printf("enter the day\n");
    scanf("%d",&day);
    printf("enter the month\n");
    scanf("%d",&month);
    printf("enter the year\n");
    scanf("%d",&year);

    if(day<32)
    {
        if(month==4|| month==6 || month==9 || month==11)
        {
            if(day==31)
            {
                printf("%d month has only 30 days",month);
                exit(0);
            }
        }
        else if(month==2)
        {
            if(year%4==0 && day>29)
            {
            printf("in a leap year febraury has only 29 days");
            exit(0);
            }
            else if(year%4 != 0 && day>28)
            {
                printf("there are only 28 days in feb in this year");
                exit(0);
            }

        }
        
    }
    else
    {
        printf("there are only 31 days in a month");
        exit(0);
    }

    int y=year%100;
   
    int y1=year-y;
     
    int leap_year,count,m_od;
    int not_leap_year;
    if(year % 400 == 0)

    {
        for(int i=100;i<year;i=i+100)
        {
            if(i%400 != 0)
                 count++;
        }
        leap_year = (y1/4)-count;
        not_leap_year = y1-leap_year;
    }
    else
    {
         for(int i=100;i<year;i=i+100)
        {
            if(i%400 == 0)
                 count++;
        }
          int y2 = y1/100;
          leap_year = (y1/4)-y2+count;
          not_leap_year = y1-leap_year;
    }
   //printf("\n%d\n%d",leap_year,not_leap_year);
    int odd_days = ((leap_year*2)+(not_leap_year))%7;
   // printf("\n%d",odd_days);
    int y_leap_year = y/4;

    if(month==1 || month==10)
    {
        m_od = 6;
    }
    else if(month==2 || month==3 || month==11)
    {
        m_od = 2;
    }
    else if(month==4 || month==7)
    {
        m_od = 5;
    }
    else if(month==5)
    {
        m_od = 0;
    }
    else if(month==6)
    {
        m_od = 3;
    }
    else if(month==8)
    {
        m_od = 1;
    }
    else if(month==9 || month==12)
    {
        m_od = 4;
    }
    else
    {
    printf("there are only 12 months");
    exit(0);
    }
    
    if(year%4==0 && day==29 && month==2)
    {
         final_day = ((odd_days + y + y_leap_year + m_od + day)%7)-1;
    }
    else
     final_day = (odd_days + y + y_leap_year + m_od + day)%7;
   // printf("%d",final_day);
   if(final_day==0)
   {
        printf("\nIt's Sunday");
   }
   else if(final_day==1)
   {
        printf("\nIt's Monday");
   }
    else if(final_day==2)
   {
        printf("\nIt's Tuesday");
   }
    else if(final_day==3)
   {
        printf("\nIt's Wednesday");
   }
    else if(final_day==4)
   {
        printf("\nIt's Thursday");
   }
    else if(final_day==5)
   {
        printf("\nIt's Friday");
   }
    else if(final_day==6)
   {
        printf("\nIt's Saturday");
   }
   return 0;
}