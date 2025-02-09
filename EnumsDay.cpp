#include <iostream>
using namespace std;

enum enColor {Red,Green,Yellow=90,White};
enum enGender {Male, Famale};
enum enStatus {Married, Single};
struct stAddress {
	string HouseNumber;
	string StreetName;
	string BulidingNum;
	

	stAddress() = default;
};
struct stCotactInfo {
	string Email;
	string PhoneNumber;
	stAddress Address;
};
struct stPerson {
	string FirstName;
	string LastName;
	stCotactInfo Info;
	enColor MyFavoriteColor;
	enGender MyGender;
	enStatus MySocialStatus;
};
int main()
{
	stPerson Person1;
	Person1.FirstName;
	cout << "What is Your First Name?\n";
	cin >> Person1.FirstName;
	Person1.LastName;
	cout << "What is Your Last Name?\n";
	cin >> Person1.LastName;
	Person1.Info.Email;
	cout << "What is Your Email?\n";
	cin >> Person1.Info.Email;
	Person1.Info.PhoneNumber;
	cout << "What is Your Phone Number?\n";
	cin >> Person1.Info.PhoneNumber;
	Person1.Info.Address.BulidingNum;
	cout << "What is your Buliding Number?\n";
	cin >> Person1.Info.Address.BulidingNum;
	Person1.Info.Address.HouseNumber;
	cout << "What is your House Number?\n";
	cin >> Person1.Info.Address.HouseNumber;
	Person1.Info.Address.StreetName;
	cout << "What is Street Name?\n";
	cin >> Person1.Info.Address.StreetName;
    Person1.MyFavoriteColor = enColor::White;
    Person1.MyGender = enGender::Male;
	Person1.MySocialStatus = enStatus::Single;
	cout << "***************************************************************\n";
	cout << "First Name is :" << Person1.FirstName << endl;
	cout << "Last Name is :" << Person1.LastName << endl;
	cout << "Email is :" << Person1.Info.Email << endl;
	cout << "Phone Number is :" << Person1.Info.PhoneNumber << endl;
	cout << "Buiding Number is :" << Person1.Info.Address.BulidingNum << endl;
	cout << "House Number is : " << Person1.Info.Address.HouseNumber << endl;
	cout << "Street Name is :" << Person1.Info.Address.StreetName << endl;
	if (Person1.MyFavoriteColor == White && Person1.MyGender == Male && Person1.MySocialStatus == Single) {
		cout << "Gender is Male\n";
		cout << "Best Color is White\n";
		cout << "I am still Single\n";
	}cout << "*****************************************************************\n";
return 0;
}
