#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char* argv[]) {
	string word = "donaudampfschifffahrtsgesellschaft";
	string played = "";
	char input;
	int tries = 10;

	for (int i = 0; i < word.length(); i++)
	{
		played += '_';
	}

	cout << endl << played;
		
	do
	{
		cout << "\n\nGib einen Buchstaben ein: \n";
		cin >> input;
		input = tolower(input);

		for (int i = 0; i < word.length(); i++)
		{
			if (word.at(i) == input)
			{
				played.at(i) = input;

			}
		}
		if (word.find(input) == std::string::npos)
		{
			tries--;
		}

		cout << "du hast noch " << tries << " versuche\n";
		cout << played << endl;

	} while (tries>0 && played.find('_') != std::string::npos);

}