#include <cstdlib> // random numbers header file//
#include <ctime> // used to get date and time information
#include <iostream>
int main()
{
	srand(time(0)); //initialise random num generator using time
	int roll = 0; //declare a variable to keep store the random number
	int count = 0;
	int input = 1;
	float tries = 0;
	float rolls = 0;
	while (input != 0)
	{
		
		roll = rand() % 6 + 1;
		count++;
		if(roll == 6)
		{
			std::cout << "It took you " << count << " rolls to get a 6\n";
			std::cout << "Do you want to continue this miserable task? Press 0\n";
			std::cin >> input;
			tries++;
			rolls += count;
			count = 0;
		}
	}

	std::cout << "Rolls and tries " << rolls <<" : " << tries << std::endl;

	float average = rolls / tries;
	std::cout << "Average rolls it takes to get a 6 is: " << average << std::endl;

}