#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{  
	ifstream infile("input.txt");

	string str1,str2;
	int result;

	if(infile.fail())
		cout << "Input file \"input.txt\" opening failed" << endl;
	
	else
	{
		infile>>str1>>str2; //read the first two strings
		cout<<str1<<" "<<"COMES FIRST"<<endl;
		while(str2!="end") //judge whether end
		{

			if(str1<str2) cout<<str2<<" "<<"AFTER"<<" "<<str1<<endl;
			else if(str1==str2) cout<<str2<<" "<<"SAME AS"<<" "<<str1<<endl;
			else cout<<str2<<" "<<"BEFORE"<<" "<<str1<<endl;
			str1=str2;
			infile>>str2; //keep reading
		}
	}
	return 0;
}