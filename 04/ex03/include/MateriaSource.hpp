#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <AMateria.hpp>
#include <IMateriaSource.hpp>
#include <vector>

class MateriaSource : public IMateriaSource {
private:
	AMateria *materials[4];
public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria *m);
	AMateria* createMateria(std::string const & type);
};


#endif //MATERIASOURCE_HPP
