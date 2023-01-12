#include<iostream>
using namespace std;
float taxcalculator(float,char);

main()
{
 char code;
 float item_price;
 float result;
 float final_price;
 cout<<"Enter item price:";
 cin>>item_price;
 cout<<"Enter code(m,e,s,t,v):";
 cin>>code;
 result=taxcalculator(item_price,code);
 final_price=item_price + result;
 cout<<"The final price on vehicle of "<<code<<" type after adding the tax is "<<final_price;

}
   float taxcalculator(float item_price,char code)
 {
   float tax_amount;
    if(code=='m')
     {
       tax_amount=item_price*0.06;
       return tax_amount;
     }
       if(code=='e')  
        {
         tax_amount=item_price*0.08;
         return tax_amount;
        }
           if(code=='s')  
            {   
              tax_amount=item_price*0.1;
              return tax_amount;
            }

             if(code=='t')  
               {
                tax_amount=item_price*0.12;
                return tax_amount;
               }
                  if(code=='v') 
                   {
                     tax_amount=item_price*0.15;
                     return tax_amount;
                   } 
                       return 0;
 }












