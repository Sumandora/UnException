#include "UnException.hpp"

class MyClass {
public:
	virtual void notImplemented()
	{
		throw UnException::UnimplementedException{};
	}

	virtual void notSupported()
	{
		throw UnException::UnsupportedOperationException{};
	};
};

class MyOwnClass : public MyClass {
public:
	void notImplemented() override
	{
	}

	void notSupported() override
	{
	}
};

int main()
{
	auto* c = new MyClass{};

	try {
		c->notImplemented();
		delete c;
		return 1;
	} catch (UnException::UnimplementedException& e) {
	}
	try {
		c->notSupported();
		delete c;
		return 1;
	} catch (UnException::UnsupportedOperationException& e) {
	}

	delete c;
	c = new MyOwnClass{};

	try {
		c->notImplemented();
	} catch (UnException::UnimplementedException& e) {
		delete c;
		return 1;
	}
	try {
		c->notSupported();
	} catch (UnException::UnsupportedOperationException& e) {
		delete c;
		return 1;
	}

	delete c;
	return 0;
}