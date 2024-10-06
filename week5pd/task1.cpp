#include <iostream>
#include <math.h>
float pyramidvolume (float,float,float,float,string);
using namespace std;
int main()
{
   float length,width,height,volume,result;
    string units="";
    cout<<"Enter the length  of pyramid (in meters) :";
    cin>>length;
    cout<<"Enter the width  of pyramid (in meters) :";
    cin>>width;
    cout<<"Enter the height  of pyramid (in meters) :";
    cin>>height;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters and kilometers) :";
   cin>>units;
   float pyramidvolume(length,width,height,volume,result,units);
}

float pyramidvolume(float length ,float width,float height,float result,string units)
{

if(units=="centimeters")
{

result = 1.0/3.0*length*width*height*1000000 ;
cout<<"The Volume Of The Pyramid is ="<<result<<" cubic" <<units;
}
else if(units=="millimeters"){


result = 1.0/3.0*length*width*height*1e+9 ;
cout<<"The Volume Of The Pyramid is ="<<result<<" cubic" <<units;
}
else if(units=="kilometers"){


result = 1.0/3.0*length*width*height*1e-9 ;
cout<<"The Volume Of The Pyramid is ="<<result<<" cubic" <<units;
}
else if(units=="meters"){


result = 1.0/3.0*length*width*height ;
cout<<"The Volume Of The Pyramid is ="<<result<<" cubic" <<units;
}
else 

cout<<"Invalid unit Provided:";

}
