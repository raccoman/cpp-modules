#include <MateriaSource.hpp>

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i) materials[i] = nullptr;
}

MateriaSource::~MateriaSource() {
}

void MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; ++i) {
		if (materials[i] == nullptr) {
			materials[i] = m;
			return;
		}
	}
	std::cout << "Can't learn new materials!" << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; ++i) {
		if (materials[i] != nullptr && materials[i]->getType() == type)
			return materials[i]->clone();
	}
	return nullptr;
}