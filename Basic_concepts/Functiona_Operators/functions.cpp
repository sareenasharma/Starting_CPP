#include<iostream>
#include<string>
using namespace std;

void demo_Variable_Datatypes();
void demo_Input_Output();
void demo_Operators();
void demo_Control_Structures();
int add(int a, int b);//function with return value


int main()
{
	cout << "C++ function"<<endl;
	//1. variables and data types
	demo_Variable_Datatypes();

	//2. input/output
	demo_Input_Output();

	//3. Opetrators
	demo_Operators();

	//4. Control Structures

	demo_Control_Structures();

	//5. function return 
	int result = add(3, 5);
	cout << "Result value is:" << result << endl;



	return 0;
}

//1. variables and data types
void demo_Variable_Datatypes() {
	cout << "In the function of variable and data types" << endl;
	//Integer Types
	int integer = 42; //whole numbers
	short smallInteger = 123; //short range integer
	long largeInteger = 123456L; //Large range Integer

	// Decimal or floating point
	float deciaml = 3.14f; //single precision
	double precise = 3.12159; //double precision

	//character types
	char letter = 'A'; //single character
	string text = "Letter";  //text string

	//boolean type
	bool istrue = true; //true or false

	cout << "Integer:" << integer <<endl;
	cout << "Decimal:" << deciaml << endl;
	cout << "Charcater:" << letter << endl;
	cout << "String:" << text << endl;
	cout << "Boolean:" << istrue << endl;


}

//2. input/output
void demo_Input_Output() {

	cout<<"Demo input and output function"<<endl;

	int useNumber;
	cout << "Enter a number"<<endl;
	//input using cin
	cin >> useNumber;
	//output the input
	cout << "You entered:" << useNumber << endl;


}

//3. Opetrators
void demo_Operators() {
	cout << "Demo Operators function" << endl;
	int a = 10, b = 3;
	cout << "Arithmetic Operators"<<endl;
	cout << "Addition: " << a + b<<"\n";  //13
	cout << "Subtraction: " << a - b<<"\n";//7
	cout << "Multiplication: " << a * b << endl;//30
	cout << "Division : " << a/b << endl;//3
	cout << "Module" << a%b << endl;//1

	//Comparision Operators 

	cout << "\nComparision Operators:\n" << endl;
	cout << "Equal to  :" << (a==b) <<endl;//0 (false)
	cout << "Not equal to: " << (a != b) << endl;//1(true)
	cout << "Greater than: " << (a > b) << endl;//1(true)

	//Logical Operators
	cout << "AND:" << (a && b) <<endl; // 0(false)
	cout << "OR: " << (a|b) << endl; //1(true)
	cout << "NOT:"<<(!a)<<endl;//0(false)

}

//4. Control Structures

void demo_Control_Structures()
{
	cout << "Demo Operators function" << endl;
	int number = 5;
	cout << "if-else statement";
	if (number > 10) {
		cout << "number is greater than 10" << endl;

	}
	else {
		cout << "number is smaller than 10" << endl;
	}

	cout << "for-loop" << endl;
	for (int i = 0; i < number ; i++)
	{
		cout << "Loop iteration: " << i << endl;

	}

	cout << "While-loop" << endl;
	int count = 1;
	while (count <= 3)
	{
		cout << count << endl;
		count++;
	}

	cout << "do while-loop" << endl;
	int j = 1;
	do {
		cout << "do while iteration has started" << endl;
		j++;
	} while (j <= 3);

	cout << "Swtich statement" << endl;
	char grade = 'B';
	switch (grade) {
	case 'A':
		cout << "Excelent!" << endl;
		break;

	case 'B':
		cout << "Good Job!"<<endl;
		break;

	case 'C':
		cout << "Fair!" << endl;
		break;
	default:
		cout << "Invalid Grade!" << endl;
	}
}

//5. add
int add(int a, int b)
{
	return a + b;
}