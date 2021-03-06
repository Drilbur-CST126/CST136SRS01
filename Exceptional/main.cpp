// Exceptional.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "gsl.h"
#include "RangeInt.h"

void testLower(RangeInt rangeInt, const RangeInt& rangeIntCopy, const long double lower)
{
	std::cout << lower << ": ";
	try
	{
		rangeInt.setLower(lower);
		std::cout << "All good here!" << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
		Expects(rangeInt == rangeIntCopy);
	}
}

void testLower(RangeInt rangeInt, const RangeInt& rangeIntCopy, const std::string lower)
{
	std::cout << lower << ": ";
	try
	{
		rangeInt.setLower(lower);
		std::cout << "All good here!" << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
		Expects(rangeInt == rangeIntCopy);
	}
}

void testUpper(RangeInt rangeInt, const RangeInt& rangeIntCopy, const long double upper)
{
	std::cout << upper << ": ";
	try
	{
		rangeInt.setUpper(upper);
		std::cout << "All good here!" << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
		Expects(rangeInt == rangeIntCopy);
	}
}

void testUpper(RangeInt rangeInt, const RangeInt& rangeIntCopy, const std::string upper)
{
	std::cout << upper << ": ";
	try
	{
		rangeInt.setUpper(upper);
		std::cout << "All good here!" << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
		Expects(rangeInt == rangeIntCopy);
	}
}

void testValue(RangeInt rangeInt, const RangeInt& rangeIntCopy, const long double value)
{
	std::cout << value << ": ";
	try
	{
		rangeInt.setValue(value);
		std::cout << "All good here!" << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
		Expects(rangeInt == rangeIntCopy);
	}
}

void testValue(RangeInt rangeInt, const RangeInt& rangeIntCopy, const std::string value)
{
	std::cout << value << ": ";
	try
	{
		rangeInt.setValue(value);
		std::cout << "All good here!" << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
		Expects(rangeInt == rangeIntCopy);
	}
}

int main()
{
	const RangeInt rangeInt;
	const auto rangeIntCopy{ rangeInt };

	std::cout << "LOWER TESTING:" << std::endl;
	testLower(rangeInt, rangeIntCopy, 5'000'000'000);
	testLower(rangeInt, rangeIntCopy, -5'000'000'000);
	testLower(rangeInt, rangeIntCopy, 5.1);
	testLower(rangeInt, rangeIntCopy, 5.0);
	testLower(rangeInt, rangeIntCopy, 6);
	testLower(rangeInt, rangeIntCopy, "-7.0");
	testLower(rangeInt, rangeIntCopy, "Hello");
	testLower(rangeInt, rangeIntCopy, 50'001);
	testLower(rangeInt, rangeIntCopy, std::numeric_limits<int>::max() - 1);
	testLower(rangeInt, rangeIntCopy, std::numeric_limits<int>::max());
	std::cout << std::endl;

	std::cout << "UPPER TESTING:" << std::endl;
	testUpper(rangeInt, rangeIntCopy, 5'000'000'000);
	testUpper(rangeInt, rangeIntCopy, -5'000'000'000);
	testUpper(rangeInt, rangeIntCopy, 5.1);
	testUpper(rangeInt, rangeIntCopy, 5.0);
	testUpper(rangeInt, rangeIntCopy, 6);
	testUpper(rangeInt, rangeIntCopy, "7.0");
	testUpper(rangeInt, rangeIntCopy, "Hello");
	testUpper(rangeInt, rangeIntCopy, -50'001);
	testUpper(rangeInt, rangeIntCopy, std::numeric_limits<int>::min() + 1);
	testUpper(rangeInt, rangeIntCopy, std::numeric_limits<int>::min());
	std::cout << std::endl;

	std::cout << "VALUE TESTING:" << std::endl;
	testValue(rangeInt, rangeIntCopy, 5'000'000'000);
	testValue(rangeInt, rangeIntCopy, -5'000'000'000);
	testValue(rangeInt, rangeIntCopy, 5.1);
	testValue(rangeInt, rangeIntCopy, 5.0);
	testValue(rangeInt, rangeIntCopy, 6);
	testValue(rangeInt, rangeIntCopy, "4.0");
	testValue(rangeInt, rangeIntCopy, "Hello");
	testValue(rangeInt, rangeIntCopy, 50'000);
	testValue(rangeInt, rangeIntCopy, 50'001);
	testValue(rangeInt, rangeIntCopy, -50'000);
	testValue(rangeInt, rangeIntCopy, -50'001);
	std::cout << std::endl;

    return 0;
}

