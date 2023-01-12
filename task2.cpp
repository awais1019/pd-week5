#include<iostream>
using namespace std;
float volume(string,float);
main()
{
  float lenght,width,height;
  string unit;
  float pyramid_volume;
  cout<<"Enter length..(in meters)";
  cin>>lenght;
  cout<<"Enter width..(in meters)";
  cin>>width;
  cout<<"Enter height..(in meters)";
  cin>>height;
  cout<<"Enter unit:";
  cin>>unit;
  pyramid_volume=lenght*width*height/3;
  pyramid_volume=volume(unit,pyramid_volume);
  if(unit=="centimeters")
  {
    cout<<"volume of pyramid is"<<pyramid_volume<< " cubic "<<unit;

  }
   if(unit=="kilometers")
   {
    cout<<"volume of pyramid is"<<pyramid_volume<< " cubic "<< unit;
   }
   if(unit=="milimeters")
    {
      cout<<"volume of pyramid is"<<pyramid_volume<< " cubic "<<unit;
    }
}

   float volume(string unit,float pyramid_volume)
{
     if(unit=="centimeters")
      {
          pyramid_volume=pyramid_volume*10;
          return  pyramid_volume;
      }
     if(unit=="kilometers")
       {
          pyramid_volume=pyramid_volume*1000; 
          return  pyramid_volume;
       }
     if(unit=="milimeters")
        {
          pyramid_volume=pyramid_volume/1000;
          return  pyramid_volume; 
    
        }
        return 0;
}
   







 

