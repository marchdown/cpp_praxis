#include <iostream>
#include <iomanip>
#include <ios>
#include <string>
#include <vector>
#include <algorithm>

using std::cin; 		using std::setprecision;
using std::cout;		using std::string;
using std::endl;		using std::streamsize;
using std::vector;
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

	// vector of homework grades, plus a variable to hold number of grades.
	vector<double> hw;
	typedef vector<double>::size_type vec_sz;
	vec_sz size;

	//a variable in which to read
	double x;
	
	// invariant:
	// we have read n grades so far, and
	// sum is the sum of the first count grades
	while (cin >> x){
	  hw.push_back(x);
	}
	
	size = hw.size();
	// check that hw is not empty
	if (size == 0) {
	  cout << endl << "You must enter grades. "
	    "Please try again." << endl;
	  return 1;
	  //	  throw();
	}

	sort(hw.begin(), hw.end());
	vec_sz mid = size/2;
	double median;
	median = size % 2 == 0 ? (hw[mid] + hw[mid-1]) / 2 : hw[mid];

	//calculate and write out the result
	 streamsize prec = cout.precision();
	cout << "Your final grade is " << setprecision(3)
		<< 0.2 * midterm + 0.4 * final + 0.4 * median
		<< setprecision(prec) << endl;
		
	//	cout << "Thank you. " <<endl;
	return 0;
}
