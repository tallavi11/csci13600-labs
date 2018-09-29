# include <iostream>
#include  <fstream>
#include <cstdlib>
#include <climits>

using namespace std;


double east_storage(string s);




int main()
{
	
	cout << "Enter date: ";
	string time;
	cin >> time;
	while(east_storage(time) == -1.0)
	{
		cout << "The given date was invalid, please re-enter a valid date:";
		cin >> time;
	}
	cout << "East basin storage: " << east_storage(time) << " billion gallons" << endl;

return 1;
}


















double east_storage(string s)
{
	ifstream fin("Current_Reservoir_Levels.tsv");
	if (fin.fail()) 
	{
    	cerr << "File cannot be opened for reading." << endl;
    	exit(1); // exit if failed to open the file
	}
	
	string junk;
	string date;
	
	double eastSt;
	double eastEl;
	double westSt;
	double westEl;
	double result = -1;

	getline(fin, junk);

	while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) 
	{ 
    	// this loop reads the file line-by-line
    	// extracting 5 values on each iteration 
    
    	fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                    //ignorring the remaining columns 

    	// for example, to print the date and East basin storage:
    	if (s == date)
    	{
    		result = (double)eastSt;
    		
    	}

	}
	
	return result;
}