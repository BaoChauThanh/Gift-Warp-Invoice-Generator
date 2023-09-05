//Bao Chau
//CSIS 135 - Online Class
//Homework 7 - Part 3

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cctype>
#include "Wrap.h"

using namespace std;

int main()
{
	string name = "Sally’s Gifts";
	char selections;
	double length, width, height = 0;
	GiftWarp Gift;
	double pricePerInch = 0.0025;
	double taxRate = 0.0925;

	double subtotal, tax, total;
	GiftWarp(pricePerInch, taxRate);
	do
	{
		cout << "GIFT WRAP INVOICE GENERATOR\n"
			<< "-------------------------------\n"
			<< "a)Generate Gift Wrap Invoice\n"
			<< "q)Quit\n";
		cin >> selections;
		if (selections == 'a' || selections == 'A')
		{
			cout << "Enter Length: ";
			cin >> length;
			Gift.setLength(length);

			cout << "Enter Width: ";
			cin >> width;
			Gift.setWidth(width);

			cout << "Enter Heigth: ";
			cin >> height;
			Gift.setHeight(height);

			subtotal = Gift.calcSubtotal(length, width, height, pricePerInch);
			tax = Gift.calcTax(subtotal, taxRate);
			total = Gift.calcTotal(subtotal, tax);


			cout << "GIFT WRAP INVOICE - " << name
				<< "\n----------------------------------"
				<< "\nBox Length : " << length
				<< "\nBox Width : " << width
				<< "\nBox Height : " << height
				<< "\nPrice Per Inch : " << pricePerInch << "\n"
				<< "\nSUBTOTAL : " << subtotal
				<< "\nTAX : " << tax
				<< "\n----------"
				<< "\nTOTAL : " << total << "\n";
		}
			
		else if (selections == 'q' || selections == 'Q')
		{
			cout << "Thank you for using the Program";
		}

		else
		{
			cout << "Invalid Selections";
		}
	} while (selections != 'q' && selections != 'Q');
	return 0;
}