#include <iostream>

int main()
{

	int second;
	int hours = second / 3600;
	int minutes = (second - hours * 3600) / 60;
	std::cout << "Num of second :" << std::endl;
	std::cin >> second;
	std::cout << "Hours :" << second / 3600 << std::endl;





	int diameter;

	std::cout << "Enter diametr: ";
	std::cin >> diameter;

	int radius = diameter / 2.0;
	const int  PI = 3.14;


	int area = PI * (radius, 2);

	int perimeter = 2 * PI * radius;


	std::cout << "S = " << area << std::endl;
	std::cout << "P =  " << perimeter << std::endl;


	int a, b;
	std::cout << "Enter two numbers : " << std::endl;
	std::cin >> a >> b;
	std::cout << "Sum of num :" << a + b << std::endl;
	std::cout << "Dob of num :" << a * b << std::endl;
	std::cout << "Arfm of num :" << (a + b) / 2 << std::endl;


	int a, b, c;
	std::cout << "Enter three numbers : " << std::endl;
	std::cin >> a >> b >> c;
	std::cout << "Sum of num :" << a + b + c << std::endl;
	std::cout << "Dob of num :" << a * b * c << std::endl;
	std::cout << "Arfm of num :" << (a + b + c) / 3 << std::endl;


	int nout;
	int numbers;
	int actions;
	std::cout << "Cost of macbook : " << std::endl;
	std::cin >> nout;
	std::cout << "Num macbook : " << std::endl;
	std::cin >> numbers;
	std::cout << "Action on macbook : " << std::endl;
	std::cin >> actions;
	int sum = nout + numbers;
	int sum2 = sum * (1 - actions / 100);
	std::cout << "Sum of nout : " << sum2 << std::endl;







}
