#include <Karen.hpp>

Karen::Karen(void) : _level(levelDebug) {
}

Karen::Karen(Karen::filterLevel level) : _level(level) {
}

Karen::Karen(const std::string &level) {
	this->_level = this->getLevelFromString(level);
}

Karen::~Karen(void) {
}

Karen::filterLevel Karen::getLevelFromString(std::string level) {
	std::string complaintLevels[] = {
			"ERROR",
			"WARNING",
			"INFO",
			"DEBUG"
	};

	std::transform(level.begin(), level.end(), level.begin(), ::toupper);
	for (int i = 0; i < 4; i++) {
		if (level == complaintLevels[i])
			return ((filterLevel) i);
	}
	return (Karen::levelInsignificant);
}

void Karen::complain(const std::string &level) {
	this->complain(this->getLevelFromString(level));
}

void Karen::complain(Karen::filterLevel level) {
	if (level <= this->_level) {
		switch (level) {
			case Karen::levelError:
				this->error();
				break;
			case Karen::levelWarning:
				this->warning();
				break;
			case Karen::levelInfo:
				this->info();
				break;
			case Karen::levelDebug:
				this->debug();
				break;
			default:
				this->defaultMessage();
		}
	}
}

void Karen::defaultMessage(void) {
	std::cout << "[ Probably complaining about insignificant problems ]"
			  << std::endl;
}

void Karen::debug(void) {
	std::cout << "[DEBUG]" << std::endl << "I love to get extra bacon for my 7X"
										   "L-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
			  << std::endl << std::endl;
}

void Karen::info(void) {
	std::cout << "[INFO]" << std::endl << "I cannot believe adding extra bacon "
										  "cost more money. You don’t put enough! If you did I would not have to "
										  "ask for it!" << std::endl << std::endl;
}

void Karen::warning(void) {
	std::cout << "[WARNING]" << std::endl << "I think I deserve to have some ex"
											 "tra bacon for free. I’ve been coming here for years and you just start"
											 "ed working here last month." << std::endl << std::endl;
}

void Karen::error(void) {
	std::cout << "[ERROR]" << std::endl << "This is unacceptable, I want to spe"
										   "ak to the manager now." << std::endl << std::endl;
}

Karen::filterLevel Karen::getLevel(void) const {
	return (this->_level);
}

bool Karen::setLevel(const filterLevel &newLevel) {
	this->_level = newLevel;
	return (true);
}
