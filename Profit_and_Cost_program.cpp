// This program will take the number of Kilograms from the user and calculate the amount of containers, 
// the cost of producing that many containers, and the profit from that many containers.  Containers hold 2.76 kilograms of cheese.
// Cost per conainter to produce is $4.12.  
// Profit per container of cheese is $1.45.
// Programing assignment 2 ITCS 2530 MCC
// Tim Cutts


#include <iostream> //included to use inputs and outputs
#include <iomanip> //included to use setill and setw to format program output.
#include <cmath> //included cmath to use ceil to round up or down.

using namespace std; //included to not have to type std cout or std cin

const double hold = 2.76; //constant variable for how much each container holds
const double cost = 4.12; //constant variable for how much each container of cheese costs to make
const double profit = 1.45; //constant variable for how much profit from each container of cheese makes

int main()
{
	double user_kilo; //double variable to store the users amount of kilograms of cheese
	double containers; //double  variable to store the total amount of containers
	double total_cost; //double variable to store the total cost of containers
	double total_profit; //double variable to store the total profit from cheese

	cout << setw(90) << setfill('*') << "" << endl; //this line outputs 90 *'s to the screen
	cout << setw(60) << setfill('*') << " Profit and Cost Program " << setw(30) << setfill('*') << "" << endl; //this line outputs welcome message surrounded by *'s
	cout << setw(90) << setfill('*') << "" << endl; //this line outputs 90 *'s to the screen
	cout << "\n" << endl; //creates a blank line space

	cout << "Please enter the total number of kilograms of cheese produced: "; 
	cin >> user_kilo; //askes the user for the kilograms and takes their input
	
	

	containers = user_kilo / hold; //takes the input and divides it by the hold variable to get containers
	total_cost = ceil(+containers) * cost; //takes the containers variable and rounds it to the next integer and multiplies it with cost variable to get total cost
	total_profit = ceil(+containers) * profit; //take the containers variable and rounds it to the next integer and multiplies it with profit variable to get total profit

	cout << fixed << setprecision(0); //sets the decimal to 0 places
	cout << "The number of containers to hold the cheese is:"; // outputs to the screen
	cout << right; //sets the justification to the right
	cout << setw(42) << setfill(' '); //creates 42 columns and fills the empty space with blank spaces
	cout << ceil(+containers) << endl; //outputs containers variable rounded up to next integer

	cout << setprecision(0); //sets the decimal to 0 places
	cout << left << "The cost of producing "<< ceil(+containers) <<" container(s) of cheese is: $"; //outputs with left justification to the screen and uses rounded containers variable as part of the string
	cout << showpoint << setprecision(2); //sets the decimal to show and to 2 places
	cout << setw(35) << right << total_cost << endl; //sets up 35 columns and right justification.  Outputs the total cost variable screen.

	cout << noshowpoint << setprecision(0); //hides decimal point and sets it to 0 places
	cout << left << "The profit from producing " << ceil(+containers) << " container(s) of cheese is: $"; //outputs with left justification to the screen and uses rounded containers variable as part of the string
	cout << showpoint << setprecision(2); //shows decimal point and sets it to 2 places
	cout << setw(31) << right << total_profit << endl; //sets up 31 columns and right justification. Outputs the total profit variable to screen.

	
}


