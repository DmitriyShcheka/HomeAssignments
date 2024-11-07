/* Churkin Kirill st129364@student.spbu.ru
	task 4
*/


#include <iostream>
#include "ClassDecepticon.h"


Decepticon::Decepticon(): _mask(0), _speed(0) {}
Decepticon::Decepticon(uint mask, uint speed): _mask(mask), _speed(speed) {}
bool Decepticon::transform()
{
    return true;
};

bool Decepticon::running()
{
    return true;
};

void Decepticon::setMask(uint mask)
{
    _mask=mask;
};

uint Decepticon::getMask() const
{
    return _mask;
};

void Decepticon::setSpeed(uint speed)
{
    _speed=speed;
};

uint Decepticon::getSpeed() const
{
    return _speed;
};
Decepticon::~Decepticon() {}

std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon)
{
    os << "Decepticon:" << std::endl << "Mask: " << decepticon.getMask() << std::endl
       << "Speed: " << decepticon.getSpeed() << std::endl;
    return os;
};

bool Decepticon::operator>(const Decepticon& other) const
{
    return _speed > other._speed;
};

bool Decepticon::operator<(const Decepticon& other) const
{
    return _speed < other._speed;
};
