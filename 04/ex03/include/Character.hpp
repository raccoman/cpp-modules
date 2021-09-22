#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <ICharacter.hpp>
#include <vector>

class Character : public ICharacter {
private:
	std::string name;
	AMateria *materials[4];
public:
	Character(Character const &other);
	Character(std::string const &name);
	~Character();
	Character &operator=(Character const &other);
	std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
