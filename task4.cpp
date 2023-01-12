#include<iostream>
using namespace std;
int total(int,int);
int total2(int,int);
main()
{
 int hours,days,workers,result,result1;
 float remaning_days;
 int remaning_hours;
 cout<<"Enter need hours:";
 cin>> hour;
 cout<<"Enter days:";
 cin>>days;
 cout<<"enter number of workers:";
 cin>>workers;
 remaning_days=days*0.1;
 remaning_days=days-remaning_days;
 remaning_hours=remaning_days*workers*10;
 result=total(remaning_hours,hours);
 result1=total2(remaning_hours,hours);
 if(remaning_hours>hours)
  {
   cout<<"yes!"<<result<< " hours left";
  }
 if(remaning_hours<hours)
  {
    cout<<"NOt enough time "<< result1<<" hours needed";
  }


}
  int total(int remaning_hours,int hours)
 {
    if(remaning_hours>hours)
      {
         remaning_hours=remaning_hours-hours;
         return remaning_hours;
      }
    return 0;
 } 
   int total2(int remaning_hours,int hours)
   {

      if(remaning_hours<hours)
       {
         remaning_hours=hours-remaning_hours;
         return remaning_hours;
       }
           return 0;

   }






  

