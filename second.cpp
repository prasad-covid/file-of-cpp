#include<iostream>
#include<iomanip>

using namespace std;

class Time{
	public:
		
		int hh;
		int mm;
		int ss;
		int total;
};


main(){
		Time T;
		cout<<"Enter time: Hours?";
		cin>>T.hh;
		cout<<"Minutes?";
		cin>>T.mm;
		cout<<"Seconds?";
		cin>>T.ss;
		cout<<"The time is = ";
		cout << "The time is = " << setw(2) << setfill('0') << T.hh << ":"
	                             << setw(2) << setfill('0') << T.mm << ":"
	                             << setw(2) << setfill('0') << T.ss << endl;
		T.total=((T.hh*60*60)+(T.mm*60)+T.ss);
    	cout<<"Time in Total seconds : "<<T.total<<" "<<"seconds"<<endl;
	}
	
