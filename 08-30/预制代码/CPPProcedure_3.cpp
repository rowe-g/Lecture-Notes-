#include <fstream>
using namespace std;

struct Date
{
	int month, day, year;
};

int main()
{
	char s[20] = "I love this game!";
	ofstream myfile;
	myfile.open("myfile.txt");
	myfile << "Hello world!" << endl;
	myfile << 3.1415926 << endl;
	myfile << s << endl;
	myfile.put('A');
	myfile.put('\n');	
	myfile.close();

	Date dt = { 6, 10, 92 };
	ofstream myfile2("myfile2.dat", ios::binary);
	myfile2.write((char *)&dt, sizeof dt);
	myfile2.close();
	
	return 0;
}
