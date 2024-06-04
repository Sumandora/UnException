# UnException

Simple `UnsupportedOperationException` and `UnimplementedException` for C++.

## Example

```c++
void notImplemented() {
	throw UnException::UnimplementedException{};
}

void notSupported() {
	throw UnException::UnsupportedOperationException{};
};
```
