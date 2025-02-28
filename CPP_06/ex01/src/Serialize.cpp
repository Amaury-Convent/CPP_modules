#include "../include/Serialize.hpp"


Serialize::Serialize()
{}

Serialize::~Serialize()
{}
Serialize::Serialize(Serialize const & src)
{
	*this = src;
}

Serialize & Serialize::operator=(const Serialize &sc)
{
	if (this == &sc)
		return *this;
	return *this;
}
uintptr_t	Serialize::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serialize::unserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}