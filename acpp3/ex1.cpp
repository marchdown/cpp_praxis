// #include <stdio>
#include <string>
#include <iomanip>
#include <iostream>
#include <vector>
using std::string; using std::cout; using std::string; using std::cin; using std::endl;
int main(){
std::vector<string> vocab;
string s; 
cout << "Please enter a couple of strings separated by whitespace and terminated by an end-of-file" << endl;
while (cin >> s){
	vocab.push_back(s);
}
typedef std::vector<string>::size_type vec_size;
vec_size size = vocab.size();
if (size > 0) {
	std::cout << "Vocab.size is " << size << ", and the vocab itself contains these words:" << endl;
for(vec_size i = 0; i++; i < size){
	cout << vocab[i]<< endl;
}

cout << "This was the last one" << endl;
}
return 0;
}