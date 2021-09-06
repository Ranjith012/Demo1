#include<iostream>
using namespace std;
class Student
{
	private:
			int rollno,age,m1,m2,m3,tot;
			char name[20];
			float avg;
	public:
	void getdata();
	void display();
	void pro();
};
void Student::getdata(){
	cout<<"\nEnter the RollNo :";
	cin>>rollno;
	cout<<"\nEnter the Name :";
	cin>>name;
	cout<<"\nEnter the Age :";
	cin>>age;
	cout<<"\nEnter the M1,M2,M3 :";
	cin>>m1>>m2>>m3;	
}
void Student::pro()
{
	tot=m1+m2+m3;
	avg=tot/3;
}
void Student::display()
{
	 cout<<"\n\nGiven Display :";
	 cout<<"\nRollno"<<rollno;
	 cout<<"\nName :"<<name;
	 cout<<"\nAge :"<<age;
	 cout<<"\nTotal :"<<tot;
	 cout<<"\nAverge :"<<avg;
}
int main()
{
	Student s[20];
	int n,i;
	cout<<"Enter the n value :";
	cin>>n;
	cout<<"Enter the Array value :";
	for(i=0;i<n;i++)
	{
	s[i].getdata();
		s[i].pro();
    }
   for(i=0;i<n;i++)
	{
	s[i].display();
    }
	return 0;
}
