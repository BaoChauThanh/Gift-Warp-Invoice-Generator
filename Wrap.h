#ifndef GIFTWARP_H
#define GIFTWARP_H
#include <iostream>

class GiftWarp {
private:
	double length, width, height, taxRate, pricePerInch;

public:
	GiftWarp();
	GiftWarp(double, double);

	void setLength(double eLength);
	void setWidth(double eWidth);
	void setHeight(double eHeight);
	void setPricePerInch(double ePricePerInch);
	void setTaxRate(double eTaxRate);

	double getLength();
	double getWidth();
	double getHeight();
	double getPricePerInch();
	double getTaxRate();

	double calcSubtotal(double length, double width, double height, double pricePerInch);
	double calcTax(double Subtotal, double taxRate);
	double calcTotal(double Subtotal, double Tax);

};

#endif
