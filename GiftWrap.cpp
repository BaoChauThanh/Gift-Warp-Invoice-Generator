#include <string>
#include <iostream>
#include "Wrap.h"
using namespace std;


double Area, tax, total;

GiftWarp::GiftWarp()
{
    length = 1;
    width = 1;
    height = 1;
    pricePerInch = 0.0036;
    taxRate = 0.08;
}

GiftWarp::GiftWarp(double Price, double Tax)
{
    length = 1;
    width = 1;
    height = 1;
    pricePerInch = Price;
    taxRate = Tax;

    if (Price < 0)
    {
        pricePerInch = 0.0036;
    }

    else if (Tax < 0 || Tax > 1)
    {
        taxRate = 0.08;
    }
}

void GiftWarp::setLength(double eLength)
{
    if (eLength >= 0)
    {
        length = eLength;
    }
}

void GiftWarp::setWidth(double eWidth)
{
    if (eWidth >= 0)
    {
        width = eWidth;
    }
}

void GiftWarp::setHeight(double eHeight)
{
    if (eHeight >= 0)
    {
        height = eHeight;
    }
}

void GiftWarp::setPricePerInch(double ePricePerInch)
{
    if (ePricePerInch >= 0)
    {
        pricePerInch = ePricePerInch;
    }
}

void GiftWarp::setTaxRate(double eTaxRate)
{
    if (eTaxRate >= 0 || eTaxRate <= 1)
    {
        taxRate = eTaxRate;
    }
}

double GiftWarp::getLength()
{
    return length;
}

double GiftWarp::getWidth()
{
    return width;
}

double GiftWarp::getHeight()
{
    return height;
}

double GiftWarp::getPricePerInch()
{
    return pricePerInch;
}

double GiftWarp::getTaxRate()
{
    return taxRate;
}

double GiftWarp::calcSubtotal(double length, double width, double height, double pricePerInch)
{
    Area = (2 * length * width) + (2 * length * height) + (2 * width * height);
    return Area * pricePerInch;
}

double GiftWarp::calcTax(double Subtotal, double taxRate)
{
    tax = Subtotal * taxRate;
    return tax;
}

double GiftWarp::calcTotal(double Subtotal, double Tax)
{
    total = Subtotal + tax;
    return total;
}





