//Hotel Management Program from Youtube to get back into practice
#include <iostream>
using namespace std;

int main()
{
	int quant;
	int choice;
	//How many of each we have
	int Qrooms = 0, Qpasta = 0, Qburger = 0, Qnoodles = 0, Qshake = 0, Qchicken = 0;
	//How many we have sold
	int Srooms = 0, Spasta = 0, Sburger = 0, Snoodles = 0, Sshake = 0, Schicken = 0;
	// Price
	int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_Chicken = 0;

	//This prompts the user to get the initial quantity of each
	cout << "\n \t Quantity of Items We Have";
	cout << "\n \t Rooms Available: ";
	cin >> Qrooms;
	cout << "\n \t Pasta Available: ";
	cin >> Qpasta;
	cout << "\n \t Burgers Available: ";
	cin >> Qburger;
	cout << "\n \t Noodles Available: ";
	cin >> Qnoodles;
	cout << "\n \t Shakes Available: ";
	cin >> Qshake;
	cout << "\n \t Chicken Available: ";
	cin >> Qchicken;

	//This allows the customer to select what they wish to order
	cout << "\n \t \t \t Please Select From The Menu Options: ";
	cout << "\n \n 1)Rooms";
	cout << "\n 2)Pasta";
	cout << "\n 3)Burger";
	cout << "\n 4)Noodles";
	cout << "\n 5)Shake";
	cout << "\n 6)Chicken";
	cout << "\n 7)Information Regarding Sales and Collection";
	cout << "\n 8)Exit";

	cout << "\n\n Please enter your choice: ";
	cin >> choice;

	//This handles the choice that the customer makes
	switch (choice)
	{
		case 1:
			cout << "Enter Number of Rooms Requested: ";
			cin >> quant;
			if (Qrooms - Srooms >= quant)
			{
				Srooms = Srooms + quant;
				Total_rooms = Total_rooms + quant * 1200;
				cout << "\n \n \t \t" << quant << " room/rooms have been assigned to you."
			}
			else
			{
				cout << "\n \t Only " << Qrooms - Srooms << " rooms are available at this time";
				break;
			}

	}

}