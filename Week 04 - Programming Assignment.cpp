#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//const string File = "Constitution_of_the_United_States.html"; //Constant file so i can change when needed fast

int main()
{
	ifstream fs;
	string File;
	string count;//Takes the input from the file

	int na = 0;//integers for the number of times the specified character is found
	int ne = 0;
	int ni = 0;
	int no = 0;
	int nu = 0;
	int nt = 0;//t, r, n because they are the remaining letters of my name
	int nr = 0;
	int nn = 0;
	int vow = 0;


	cout << "Please enter the file name: " << endl; //User specifys the file name, if file name is wrong an error will show.
	getline(cin, File);// I could not figure out how to use arguments so i made this to atleast show it works

	fs.open(File);
	if (!fs) {
		cout << "Error, could not open file: " << File << endl;
		system("pause");
		return -1;
	}
	
	ifstream Ofile(File);//opens and reads the file
	if (Ofile.is_open()) // if file is open it will do below
	{
		while (getline(Ofile, count)) // gets the text in the file chosen
		{
			cout << count << endl;
	for (unsigned int n = 0; n < count.length(); n++)//used unsigned to not count spaces
		if (count.at(n) == 'a' || count.at(n) == 'A')  { //if the file has an a or A it will +1 to na, same goes for if statements below but for their specified characters (like e, i, o, and u)
			na++;// = na + 1
		}
	for (unsigned int n = 0; n < count.length(); n++)
		if (count.at(n) == 'e' || count.at(n) == 'E') {
			ne++;
		}
	for (unsigned int n = 0; n < count.length(); n++)
		if (count.at(n) == 'i' || count.at(n) == 'I') {
			ni++;
		}
	for (unsigned int n = 0; n < count.length(); n++)
		if (count.at(n) == 'o' || count.at(n) == 'O') {
			no++;
		}
	for (unsigned int n = 0; n < count.length(); n++)
		if (count.at(n) == 'u' || count.at(n) == 'U') {
			nu++;
		}
	for (unsigned int n = 0; n < count.length(); n++)
		if (count.at(n) == 't' || count.at(n) == 'T') {
			nt++;
		}
	for (unsigned int n = 0; n < count.length(); n++)
		if (count.at(n) == 'r' || count.at(n) == 'R') {
			nr++;
		}
	for (unsigned int n = 0; n < count.length(); n++)
		if (count.at(n) == 'n' || count.at(n) == 'N') {
			nn++;
		}
		}
		Ofile.close(); //Closed the document
	}
	
	//for (unsigned int n = 0; n < count.length(); n++)
	//	if (count.at(n) == 'a') {
	//		na++;
	//	}

	cout << "************************************************************" << endl;
	cout << "************Welcome to my Letter Count Program**************" << endl;
	cout << "************************************************************" << endl;
	cout << " " << endl;
	cout << "Analyzing file " << File << "..." <<endl; // I use this to check if the right file is being used
	cout << " " << endl;

	vow = na + ne + ni + no + nu;//Equation to get total total vowels
	cout << "The number of A's: ........................................." << na << endl;//prints the number of A's
	cout << "The number of E's: ........................................." << ne << endl;//prints the number of E's
	cout << "The number of I's: ........................................." << ni << endl;//prints the number of I's
	cout << "The number of O's: ........................................." << no << endl;//prints the number of O's
	cout << "The number of U's: ........................................." << nu << endl;//prints the number of U's
	cout << "The number of T's: ........................................." << nt << endl;//prints the number of U's
	cout << "The number of R's: ........................................." << nr << endl;//prints the number of U's
	cout << "The number of N's: ........................................." << nn << endl;//prints the number of U's
	cout << "The vowel count is: ........................................" << vow << endl; //prints the number of vowels in total

	system("pause");
	return 0;





   
}


