#include<iostream>
#include<string>
using namespace std;

int ReadAge(void);
string HasLicense(void);
void PrintInfo(int Age, string License);
void IsHired(int Age, string License);

int main(void)
{
	string License = HasLicense();
	int Age = ReadAge();

	PrintInfo(Age,License);
	IsHired(Age,License);
	return 0;
}
int ReadAge(void)
{
	int Age = 0;
	cout<<"Please Enter Your Age\n";
	cin>>Age;
	return Age;
}
string HasLicense(void)
{
	string HasLicense;
	cout<<"Do you have driving license?\n";
	getline(cin, HasLicense);
	return HasLicense;
}
void PrintInfo(int Age, string License)
{
	cout<<"Your age is "<<Age<<"\n";
	cout<<"Your license status is "<<License<<"\n";
}
void IsHired(int Age, string License)
{
	if(Age > 21 && (License == "YES" || License == "yes"))
			cout<<"Hired\n";
	else
		cout<<"Sorry You dont fit\n";
}