#pragma once
#include <iostream>

class IArray abstract
{
public:
	virtual bool HasItem(const int& val) const = 0;
	virtual const int* GetSet() const = 0;
	virtual unsigned int GetSize() const = 0;
	virtual ~IArray() {};

	virtual IArray* Add(IArray* r) = 0;
	virtual float Foreach(const unsigned int& index) = 0;

	virtual std::ostream& Print(std::ostream& out) const = 0;
	virtual std::istream& Insert(std::istream& in) = 0;
};
