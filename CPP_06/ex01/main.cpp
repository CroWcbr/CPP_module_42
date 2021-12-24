#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data	*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

void	print_data(Data *tmp, std::string str)
{
	std::cout << str << std::endl;
	std::cout << "\tData: " << tmp << std::endl;
	std::cout << "\tName: " << tmp->name << std::endl;
	std::cout << "\tAge: " << tmp->age << std::endl;
}

int main ()
{
	Data* data1 = new Data();
	Data* data2;

	data1->age = 21;
	data1->name = "test";
	print_data(data1, "Origin data:");
	
	uintptr_t raw = serialize(data1);
	std::cout << "Serialize raw: " << raw << std::endl;

	data2 = deserialize(raw);
	print_data(data2, "Deserialized data:");	

	delete data1;
	return 0;
}
