#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): _countMateria(0)
{
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	this->_countMateria = 0;
	for(int i = 0; i < src._countMateria; i++)
        this->learnMateria(src._allMateria[i]->clone());
}


MateriaSource::~MateriaSource()
{
	this->_deleteMateria();
}

MateriaSource &				MateriaSource::operator=( MateriaSource const & rhs )
{
	this->_deleteMateria();

	this->_countMateria = 0;
	for(int i = 0; i < rhs._countMateria; i++)
        this->learnMateria(rhs._allMateria[i]->clone());

	return *this;
}

void				MateriaSource::learnMateria(AMateria* materia)
{
    if(!materia || this->_countMateria == 4 || this->_findMateria(materia->getType()) != -1)
        return ;
	this->_allMateria[this->_countMateria] = materia->clone();
	this->_countMateria += 1;
}

AMateria*			MateriaSource::createMateria(std::string const & type)
{
	int index = this->_findMateria(type);
	if (index < 0)
		return 0;
	return this->_allMateria[index]->clone();
}

int				MateriaSource::_findMateria(std::string const & type)
{
	for(int i = 0; i < this->_countMateria; i++)
	{
		if(this->_allMateria[i]->getType() == type)
			return i;
	}
	return -1;
}

void			MateriaSource::_deleteMateria()
{
	for(int i = 0; i < this->_countMateria; i++)
		delete this->_allMateria[i];
}