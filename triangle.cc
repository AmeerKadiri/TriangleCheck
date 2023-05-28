#include<iostream>
using namespace std;
int main()
{
 int a,b,c;

/* Enter all side's Triangle*/
 cout<<"Enter The Value of a, b, c \n";
 cin>>a>>b>>c;

 if(a==b && b==c && c==a)
 {
  cout<<"The Triangle is Equilateral Triangle\n";
 }
 else if(a==b || b==c || c==a)
 {
  cout<<"The Triangle is Isosceles Triangle\n";
 }
 else if(a*a==b*b+c*c ||b*b==c*c+a*a || c*c==a*a+b*b)
 {
  cout<<"The Triangle is Right Triangle\n";
 }
 else
 {
  cout<<"The Triangle Scalene Triangle\n";
 }
 return 0;

}
