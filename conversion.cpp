// Author: M. Merculio
// Date: March 9, 2022
// Description: Conversion Program

#include <iostream>	 // for cin, cout
#include <string>
#include <cmath>

using namespace std;

int main()
{
string init_unit, sec_unit;	 //declaration of the conversion units
double conv_val;	 //declaration of the number to be converted

// Welcome message 
cout<< "---------------------\n"
<< "| length Convertion |\n"
<<     "---------------------\n\n";

//request conversion unit
cout<<"Enter initial conversion unit (mm, cm, m, km): \n";	//user enters units
cin>>init_unit;

if (init_unit != "mm" && init_unit != "cm" && init_unit != "km" )
{
cerr<<"--> Sorry, unit to convert from is invalid\n"
<<"Thank you for using Metric Unit converter Program\n";
}
else 
{
cout<<"Enter unit to convert to (mm, cm, m, km): \n";	//user enters units
cin>>sec_unit;

}
if (sec_unit != "mm" && sec_unit != "cm" && sec_unit != "m" && sec_unit != "km")
{
cout<<"--> Sorry, unit to convert TO is invalid\n"
<<"Thank you for using Metric Unit converter Program\n"; 
}
else if (init_unit == "mm" && sec_unit == "cm")
{
cout<<"Enter numerical value to convert: \n";
cin>>conv_val;
cout<<"Result of conversion: "<<conv_val<<" is equivalent to "<<conv_val*10<<" "<<sec_unit<<endl //cm=mm*10
<<"Thank you for using Metric Unit converter Program\n";
}
else if (init_unit == "mm" && sec_unit == "m")
{
cout<<"Enter numerical value to convert: \n";
cin>>conv_val;
cout<<"Result of conversion: "<<conv_val<<" is equivalent to "<<conv_val*100<<" "<<sec_unit<<endl //m=mm*100
<<"Thank you for using Metric Unit converter Program\n";
}
else if (init_unit == "mm" && sec_unit == "km")
{
cout<<"Enter numerical value to convert: \n";
cin>>conv_val;
cout<<"Result of conversion: "<<conv_val<<" is equivalent to "<<conv_val*100000<<" "<<sec_unit<<endl //km=100000*mm
<<"Thank you for using Metric Unit converter Program\n";
}
else if (init_unit == "cm" && sec_unit == "mm")
{
cout<<"Enter numerical value to convert: \n";
cin>>conv_val;
cout<<"Result of conversion: "<<conv_val<<" is equivalent to "<<conv_val/10<<" "<<sec_unit<<endl //cm=mm*10
<<"Thank you for using Metric Unit converter Program\n";
}
else if (init_unit == "cm" && sec_unit == "m")
{
cout<<"Enter numerical value to convert: \n";
cin>>conv_val;
cout<<"Result of conversion: "<<conv_val<<" is equivalent to "<<conv_val*10<<" "<<sec_unit<<endl //cm=m*10
<<"Thank you for using Metric Unit converter Program\n";
}
else if (init_unit == "cm" && sec_unit == "mm")
{
cout<<"Enter numerical value to convert: \n";
cin>>conv_val;
cout<<"Result of conversion: "<<conv_val<<" is equivalent to "<<conv_val/10<<" "<<sec_unit<<endl //cm=mm*10
<<"Thank you for using Metric Unit converter Program\n";
}
else if (init_unit == "cm" && sec_unit == "m")
{
cout<<"Enter numerical value to convert: \n";
cin>>conv_val;
cout<<"Result of conversion: "<<conv_val<<" is equivalent to "<<conv_val*10<<" "<<sec_unit<<endl //m=cm*10
<<"Thank you for using Metric Unit converter Program\n";
}
else if (init_unit == "cm" && sec_unit == "km")
{
cout<<"Enter numerical value to convert: \n";
cin>>conv_val;
cout<<"Result of conversion: "<<conv_val<<" is equivalent to "<<conv_val*10000<<" "<<sec_unit<<endl //km=10000*cm
<<"Thank you for using Metric Unit converter Program\n";
}
else if (init_unit == "m" && sec_unit == "mm")
{
cout<<"Enter numerical value to convert: \n";
cin>>conv_val;
cout<<"Result of conversion: "<<conv_val<<" is equivalent to "<<conv_val/100<<" "<<sec_unit<<endl //m=mm*100
<<"Thank you for using Metric Unit converter Program\n";
}
else if (init_unit == "m" && sec_unit == "cm")
{
cout<<"Enter numerical value to convert: \n";
cin>>conv_val;
cout<<"Result of conversion: "<<conv_val<<" is equivalent to "<<conv_val/10<<" "<<sec_unit<<endl //m=cm*10
<<"Thank you for using Metric Unit converter Program\n";
}
else if (init_unit == "m" && sec_unit == "km")	
{
cout<<"Enter numerical value to convert: \n";
cin>>conv_val;
cout<<"Result of conversion: "<<conv_val<<" is equivalent to "<<conv_val*1000<<" "<<sec_unit<<endl //km=1000*m
<<"Thank you for using Metric Unit converter Program\n";
}
else if (init_unit == "km" && sec_unit == "mm")	
{
cout<<"Enter numerical value to convert: \n";
cin>>conv_val;
cout<<"Result of conversion: "<<conv_val<<" is equivalent to "<<conv_val/100000<<" "<<sec_unit<<endl //km=100000*mm
<<"Thank you for using Metric Unit converter Program\n";
}
else if (init_unit == "km" && sec_unit == "cm")
{
cout<<"Enter numerical value to convert: \n";
cin>>conv_val;
cout<<"Result of conversion: "<<conv_val<<" is equivalent to "<<conv_val/10000<<" "<<sec_unit<<endl //km=10000*cm
<<"Thank you for using Metric Unit converter Program\n";
}
else if (init_unit == "km" && sec_unit == "m")
{
cout<<"Enter numerical value to convert: \n";
cin>>conv_val;
cout<<"Result of conversion: "<<conv_val<<" is equivalent to "<<conv_val/1000<<" "<<sec_unit<<endl //km=1000*m
<<"Thank you for using Metric Unit converter Program\n";
}
system("Pause");
}
