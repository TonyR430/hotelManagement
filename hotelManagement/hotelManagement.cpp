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
	int Total_rooms = 0, Total_pasta = 0, Total_burger = 0, Total_noodles = 0, Total_shake = 0, Total_chicken = 0;

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

	m: //Marks this as the menu
	//This allows the customer to select what they wish to order
	cout << "\n \t \t \t Please Select From The Menu Options: ";
	cout << "\n \n 1)Rooms";
	cout << "\n 2)Pasta Bowl";
	cout << "\n 3)Burger";
	cout << "\n 4)Noodle Bowl";
	cout << "\n 5)Shake";
	cout << "\n 6)Chicken Parmesan";
	cout << "\n 7)Information Regarding Sales and Collection";
	cout << "\n 8)Exit";

	cout << "\n\n Please enter your choice: ";
	cin >> choice;

	//This handles the choice that the customer makes
	switch (choice)  //There is currently an error in this statement, added to troubleshoot
	{
		//Room
		case 1:
			cout << "Enter Number of Rooms Requested: ";
			cin >> quant;
			if (Qrooms - Srooms >= quant)
			{
				Srooms = Srooms + quant;
				Total_rooms = Total_rooms + quant * 1200; //Line Contains Price
				cout << "\n \n \t \t" << quant << " room/rooms have been assigned to you.";
				break;
			}
			else
			{
				cout << "\n \t Only " << Qrooms - Srooms << " rooms are available at this time";
				break;
			}

		//Pasta Dishes
		case 2:
			cout << "Enter Number of Pasta Bowls Requested: ";
			cin >> quant;
			if (Qpasta - Spasta >= quant)
			{
				Spasta = Spasta + quant;
				Total_pasta = Total_pasta + quant * 250; //Line Contains Price
				cout << "\n \n \t \t" << quant << " Pasta Bowls have been added to the order.";
				break;
			}
			else
			{
				cout << "\n \t Only " << Qpasta - Spasta << " Pasta Bowls are available at this time";
				break;
			}

		//Burgers
		case 3:
			cout << "Enter Number of Burgers Requested: ";
			cin >> quant;
			if (Qburger - Sburger >= quant)
			{
				Sburger = Sburger + quant;
				Total_burger = Total_burger + quant * 120; //Line Contains Price
				cout << "\n \n \t \t" << quant << " Burgers have been added to the order.";
				break;
			}
			else
			{
				cout << "\n \t Only " << Qburger - Sburger << " Burgers are available at this time";
				break;
			}

		//Noodle Bowls
		case 4:
			cout << "Enter Number of Noodle Bowls Requested: ";
			cin >> quant;
			if (Qnoodles - Snoodles >= quant)
			{
				Snoodles = Snoodles + quant;
				Total_noodles = Total_noodles + quant * 140; //Line Contains Price
				cout << "\n \n \t \t" << quant << " Noodle Bowls have been added to the order.";
				break;
			}
			else
			{
				cout << "\n \t Only " << Qnoodles - Snoodles << " Noodle Bowls are available at this time";
				break;
			}

		//Shake
		case 5:
			cout << "Enter Number of Shakes Requested: ";
			cin >> quant;
			if (Qshake - Sshake >= quant)
			{
				Sshake = Sshake + quant;
				Total_shake = Total_shake + quant * 120; //Line Contains Price
				cout << "\n \n \t \t" << quant << " Shakes have been added to the order.";
				break;
			}
			else
			{
				cout << "\n \t Only " << Qshake - Sshake << " Shakes are available at this time";
				break;
			}

		//Chicken Parmesan
		case 6:
			cout << "Enter Number of Chicken Parmesan Requested: ";
			cin >> quant;
			if (Qchicken - Schicken >= quant)
			{
				Schicken = Schicken + quant;
				Total_chicken = Total_chicken + quant * 150; //Line Contains Price
				cout << "\n \n \t \t" << quant << " Chicken Parmesan have been added to the order.";
				break;
			}
			else
			{
				cout << "\n \t Only " << Qchicken - Schicken << " Chicken Parmesan are available at this time";
				break;
			}

		//Sales and Collection
		case 7:
			cout << "\n \t \t Details of ssales and selection";// Room Details
			cout << "\n \n Initial Number of Rooms: " << Qrooms;
			cout << "\n \n Number or rooms rented: " << Srooms;
			cout << "\n \n Number of rooms remaining: " << Qrooms - Srooms;
			cout << "\n \n Total Collected or Rooms Today: $" << Total_rooms;

			cout << "\n \n Initial Number of Pasta Bowls: " << Qpasta; // Pasta Details
			cout << "\n \n Number of Pasta Bowls sold: " << Spasta;
			cout << "\n \n Number of Pasta Bowls Remaining: " << Qpasta - Spasta;
			cout << "\n \n Total colected for Pasta Bowls Today: $" << Total_pasta;

			cout << "\n \n Initial Number of Burgers: " << Qburger; //Burger Details
			cout << "\n \n Number of Burgers Sold: " << Sburger;
			cout << "\n \n Number of Burgers Remaining: " << Qburger - Sburger;
			cout << "\n \n Total Collected for Burgers Today: $" << Total_burger;

			cout << "\n \n Initial Number of Noodle Bowls: " << Qnoodles; // Noodle Bowl Details
			cout << "\n \n Number of Noodle Bowls Sold: " << Snoodles;
			cout << "\n \n Number of Noodle Bowls Remaining: " << Qnoodles - Snoodles;
			cout << "\n \n Total Collected for Noodle Bowls Today: $" << Total_noodles;

			cout << "\n \n Initial Number of Shakes: " << Qshake; //Shake Details
			cout << "\n \n Number of Shakes Sold: " << Sshake;
			cout << "\n \n Number of Shakes Remaining: " << Qshake - Sshake;
			cout << "\n \n Total Collected for Shakes Today: $" << Total_shake;

			cout << "\n \n Initial Number of Chicken Parmesan: " << Qchicken; //Chicken Details
			cout << "\n \n Number of Chicken Parmesan Sold: " << Schicken;
			cout << "\n \n Number of Chicken Parmesan Remaining: " << Qchicken - Schicken;
			cout << "\n \n Total Collected for Chicken Parmesan Today: $" << Total_chicken;

			cout << "\n \n Total Sales for the Day: $" << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken; // Total Sales of day
			break;

		case 8:
			exit(0);

		default:
			cout << "Invalid Selection, Please Select a Menu option Listed.";



	}

	goto m; // Returns the user to the menu after making a choice

}