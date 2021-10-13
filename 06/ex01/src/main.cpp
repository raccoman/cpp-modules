#include <stdint.h>
#include <iostream>

typedef struct	s_data {

	int a;
	double b;

}				Data;

uintptr_t	serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main() {

	Data* ptr = new Data;

	std::cout << "Size of: " << sizeof(ptr) << std::endl;
	std::cout << "Deserialized: " << ptr << std::endl;
	uintptr_t serialized = serialize(ptr);
	std::cout << "Serialized: " << serialized << std::endl;
	std::cout << "Deserialized: " << deserialize(serialized) << std::endl;

	delete ptr;
}