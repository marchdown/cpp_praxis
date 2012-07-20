// -*- coding: windows-1251
#include <iostream>
#include <string>

int main()
{

  std::cout << "Please, introduce yourself:\t";

  std::string name;
  std::cin >> name;

  const std::string greeting = "Hello, " + name + "!";

  //  std::cout << greeting << std::endl;
  

  const int pad = 1;
  const int rows_needed = pad * 2 + 3;

  std::cout << std::endl;
  
  int rows_printed = 0;
const std::string::size_type columns_needed = greeting.size() + (pad + 1) * 2;

  while (rows_printed != rows_needed) { //invariant: already printed rows_printed rows 
    if (rows_printed == 0 or rows_printed == rows_needed-1){
      std::cout << std::string(greeting.size()+(pad + 1)*2, '*'); // invariant broken
          } else if (rows_printed == (rows_needed/2)) 
				{
					std::cout << "*" << std::string(pad, ' ') << greeting << std::string(pad, ' ') << "*";
				}
		else {
              int c = 0; // columns printed
              while (c != columns_needed) {
    //            if (c == 0 or c == (columns_needed - 1)) {
	              if (c == 0 or c == (columns_needed - 1)) {
                  std::cout << "*";}
				  else {// if (c < pad or (columns_needed - c) < pad) {
                  std::cout << " ";
                }
                ++c;
              }   
    }
      std::cout << std::endl;
    ++rows_printed; // invariant restored
  }

	return 0;
}

