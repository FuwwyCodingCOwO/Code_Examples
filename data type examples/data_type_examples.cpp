//C++ data types
char name;
char name[];
char* name;

int name;
int name[];
int* name;

float name;
float name[];
float* name;

//extra data types included in default headers
#include <string>
#include <vector>
//data type for vector uses int, float, char, and std::string
//Only the top one as in "int name" and not "int* name" or "int name[]"
std::vector<datatype> name;
std::string name;