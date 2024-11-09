# Lab_Sheet1-unit1

Data Structures Assignment
Table of Contents
Project Description
Technologies Used
Requirements
Installation Instructions
Usage Instructions
How to Run the Code
Documentation
Contributing
License
Project Description
This project implements basic data structures such as static arrays, dynamic arrays, and string operations. It provides a comprehensive analysis of the time and space complexity of these data structures.

Technologies Used
C++ programming language
GitHub for version control
Requirements
To run this project, you need:

A C++ compiler (e.g., GCC)
A text editor or IDE (e.g., Visual Studio Code, CLion)
Git installed on your system

Installation Instructions

1)Clone the Repository:
git clone https://github.com/your-username/your-repository

2)Navigate to the Project Directory:
cd your-repository

-------------------------------------Usage Instructions------------------------
Static Array
The StaticArray class provides methods for insertion, deletion, and traversal of a static array.

StaticArray staticArray(5);
staticArray.insert(1);
staticArray.insert(2);
staticArray.deleteValue(0);
staticArray.traverse();


Dynamic Array
The DynamicArray class provides methods for insertion, deletion, and traversal of a dynamic array.

DynamicArray dynamicArray;
dynamicArray.insert(1);
dynamicArray.insert(2);
dynamicArray.deleteValue(0);
dynamicArray.traverse();

String Operations
The StringOperations class provides methods for string concatenation, substring extraction, and character frequency analysis.

std::string str1 = "Hello";
std::string str2 = "World";
std::string concatenated = StringOperations::concatenate(str1, str2);
std::cout << concatenated << std::endl; // Output: "HelloWorld"



----------------------------How to Run the Code-----------------------------------
1)Compile the Code
g++ -o test test.cpp StaticArray.cpp DynamicArray.cpp StringOperations.cpp

2)Run the Executable:
./test
