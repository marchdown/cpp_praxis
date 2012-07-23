#include <iostream>
#include <iomanip>
#include <ios>
#include <string>
using std::cin; 		using std::setprecision;
using std::cout;		using std::string;
using std::endl;		using std::streamsize;

//using namespace std;

int main(/* int argc, char *argv[] */) {
	// Ask for, read and store the student's name.
	cout << "please, enter your first name:";
	string name;
	cin >> name;
	cout << "Hello, " << name << "!" << endl;
	
	// Ask for midterm and final grades
	cout << "Please enter your midterm and final grades";
	double midterm, final;
	cin >> midterm >> final;
	
	// Ask for homework grades
	cout << "Please enter all your homework grades, "
			"Followed by end-of-file (ctrl-d)";
	/*
	vector<double> hw;
	cin >> hw;
	*/
	
	int n = 0;
	double sum = 0;
	//a variable in which to read
	double x;
	
	// invariant:
	// we have read n grades so far, and
	// sum is the sum of the first count grades
	while (cin >> x){
		++n;
		sum += x;
	}
	
	//calculate and write out the result
	streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * sum / n 
		<< setprecision(prec) << endl;
		
	return 0;
}