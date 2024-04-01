#ifndef UNEXCEPTION_HPP
#define UNEXCEPTION_HPP

#include <stdexcept>

namespace UnException {
	class UnsupportedOperationException : public std::exception {
		using std::exception::exception;
	};
	class UnimplementedException : public std::exception {
		using std::exception::exception;
	};
}

#endif