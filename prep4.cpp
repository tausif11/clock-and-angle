#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int calculate(double h , double m)
{

    int h_angle,m_angle;
    if( h == 12)
        h = 0;
    if(m == 60)
        m = 0;

    h_angle= 0.5*(h * 60 + m);
    m_angle= 6 * m;

    int dif = abs(h_angle - m_angle);
    dif = min(360 - dif , dif);

    return dif;
}
int main()
{
  int a;
  cin>>a;
  double h , m;
  for(int i=1; i<=a; i++)
   {
       cin>>h>>m;
       cout<<calculate(h,m)<<endl;
   }


  return 0;
}
