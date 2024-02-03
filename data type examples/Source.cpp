#include <string> //needed for std::string
#include <vector> //needed for std::vector

//"standard"
int int_value; //value can be set with std::cin or "variable = <desired content>"
float float_value;
double double_value;
std::string string_name;

//"list" versions
int int_value_list[10]; //10 represents how many values can be store here, reference specific values at n postion using "variable_name[n]" where n represents where in the "list" to get data for, first value is represented by 0 and not a 1
float float_value_list[10]; //same for int
double double_value_list[10]; //same for int
std::string string_value_list[10]; //same for int

//vectors
std::vector<int> vector_int; //will explain vectors better in a different example
std::vector<float> vector_float;
std::vector<double> vector_double;
std::vector<std::string> vector_string;