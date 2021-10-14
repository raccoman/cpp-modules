#include <mutantstack.hpp>
#include <vector>
#include <array>
#include <list>
#include <iterator>

int main( void ) {

	std::cout << "           ************ Vector TEST ************" << std::endl;
	std::vector<int> int_vec;
	int_vec.push_back(1);
	int_vec.push_back(2);
	int_vec.push_back(3);
	int_vec.push_back(4);
	std::cout << "Int Vector: {";
	for (size_t i = 0; i < int_vec.size(); i++)
		std::cout << int_vec.at(i) << " ";
	std::cout << "}" << std::endl;
	std::cout << "Finding element 1..." << std::endl;
	try
	{
		std::cout << "Found element at position " << std::distance(int_vec.begin(), easyfind(int_vec, 1))  << std::endl;
	}
	catch (std::exception &error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << "Finding element 3..." << std::endl;
	try
	{
		std::cout << "Found element at position " << std::distance(int_vec.begin(), easyfind(int_vec, 3)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "           ************ Array TEST ************" << std::endl;
	std::array<int, 4> int_arr = {1, 2, 3, 4};
	std::cout << "Int Array: {";
	for (size_t i = 0; i < int_arr.size(); i++)
		std::cout << int_arr.at(i) << " ";
	std::cout << "}" << std::endl;
	std::cout << "Finding element 1..." << std::endl;
	try
	{
		std::cout << "Found element at position " << std::distance(int_arr.begin(), easyfind(int_arr, 1)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Finding element 3..." << std::endl;
	try
	{
		std::cout << "Found element at position " << std::distance(int_arr.begin(), easyfind(int_arr, 3)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "           ************ List TEST ************" << std::endl;
	std::list<int> int_list;
	int_list.push_back(1);
	int_list.push_back(2);
	int_list.push_back(3);
	int_list.push_back(4);
	int_list.push_front(42);
	int_list.push_back(42);
	std::cout << "Int List: {";
	for (std::list<int>::iterator lst_iter = int_list.begin(); lst_iter != int_list.end(); lst_iter++)
		std::cout << *lst_iter << " ";
	std::cout << "}" << std::endl;
	std::cout << "Finding element 1..." << std::endl;
	try
	{
		std::cout << "Found element at position " << std::distance(int_list.begin(), easyfind(int_list, 1)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Finding element 3..." << std::endl;
	try
	{
		std::cout << "Found element at position " << std::distance(int_list.begin(), easyfind(int_list, 3)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}