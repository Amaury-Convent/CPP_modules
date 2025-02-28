#pragma once

#include <string>
#include <iostream>
#include <stdint.h>

typedef struct s_data
{
	std::string str;
	int lettres;

} Data;


class Serialize
{
	public:
		Serialize();
		~Serialize();
		Serialize(const Serialize &src);

		Serialize &operator=(const Serialize &src);

		uintptr_t serialize(Data *ptr);
		Data *unserialize(uintptr_t raw);


};