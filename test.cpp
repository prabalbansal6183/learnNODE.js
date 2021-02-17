#include<bits/stdc++.h>
using namespace std;
/*struct points{
	double x;
	double y;
	};*/

vector<pair<int,int> >p;
double slope(double a,double b,double a1,double b2){
	return abs(abs(a1-a)/abs(b2-b));
}
void setPixel(double x,double y)
{
	p.push_back(make_pair(x,y));
}

int main()
{
	double x1,y1,x2,y2;
	double m,x,y;
	cout<<"enter the points (x1,y1) (x2,y2)"<<endl;
	cin>>x1>>y1>>x2>>y2;
	m = slope(x1,y1,x2,y2);
	if(m<1)
	{
		double y = y1;
		for(int x = x1;x<=x2;x++,y+=(1/m))
			setPixel(x,round(y));
	}
	else
	{
		double x = x1;
		for(int y = y1;y<=y2;y+=1,x+=(1/m))
			setPixel(round(x),y);
	}
	for(auto x: p)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
	return 0;
}