#include <iostream>

using namespace std;

int main()
{
	string Managers, salestaff, prodlinestaff, hourlypaidstaff;
	int paycode, numhours;
	double wage;

	while (paycode != -1)
	{
		switch (paycode) 
		{
		case 1 :
			cout << "Enter your pay code" << endl;
			cin >> paycode;

			if (paycode == 1)
			{
				cout << "You are a Manager and You have a fixed weekly pay" << endl;
			}

			break;

		case 2:
			cout << "Enter your pay code" << endl;
			cin >> paycode;

			if (paycode == 2)
			{
				cout << "You are an hourly paid staff" << endl;
				cout << "Enter the number of hours worked" << endl;
				cin >> numhours;

				wages = numhours

				
			}

			break;

		case 3:
			cout << "Enter your pay code" << endl;
			cin >> paycode;

			if (paycode == 1)
			{
				cout << "You are a Manager and You have a fixed weekly pay" << endl;
			}

			break;


		case 4:
			cout << "Enter your pay code" << endl;
			cin >> paycode;

			if (paycode == 1)
			{
				cout << "You are a Manager and You have a fixed weekly pay" << endl;
			}

			break;
		}
	}
}