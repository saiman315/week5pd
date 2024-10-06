#include <iostream>
float taxcalculator(char,float );
using namespace std;

int main ()
{
float item_price;
char vechicle_type;
cout<<" Enter The Price Of The Vechile: ";
cin>>item_price;
cout<<"Enter The Vechile Type (M,E,S,V,T) : ";
cin>>vechicle_type;
float tax=taxcalculator(vechicle_type,item_price);
float final_price=item_price+tax;
cout<<"The Price Of The Vechile Including Tax Is = "<<final_price<<" $";
}


float taxcalculator(char vechicle_type,float item_price)
{
if(vechicle_type=='M')
{
float tax_amount=item_price*0.06;
return tax_amount;

}

else if(vechicle_type=='E')
{
float tax_amount=item_price*0.08;
return tax_amount;

}

else if(vechicle_type=='S')
{
float tax_amount=item_price*0.1;
return tax_amount;
}
else if(vechicle_type=='V')
{
float tax_amount=item_price*0.12;
return tax_amount;
}

else if(vechicle_type=='T')
{
float tax_amount=item_price*15/100/100;
return tax_amount;
}

else
cout<<"Invalid Vechile Type Entered";

}