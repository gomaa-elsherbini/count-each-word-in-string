#include <iostream>
#include <string>
using namespace std;




string readString()
{
	string str;
	cout << "\nEnter a string?\n";
	getline(cin, str);
	return str;
}

int countWordInString(string str)
{
	//       Mohammad   Abu-Hadhoud     Programming           Advices          
	string delim = " ";
	int pos = 0;
	string word = "";
	int counter = 0;

	cout << "\n=========\n";
	while ((pos = str.find(delim)) != std::string::npos)
	{
		word = str.substr(0, pos);
		if (word != "")
		{
			counter++;
		}
		str.erase(0, pos + delim.length());
	}
	if (str != "")
	{
		counter++;
	}
	return counter;
}

int main()
{
	string str = readString();
	//Mohammad Abu-Hadhoud Programming Advices

	cout<<"The Number of words in your string is: "<<countWordInString(str);



	system("pause>0");
	return main();

}