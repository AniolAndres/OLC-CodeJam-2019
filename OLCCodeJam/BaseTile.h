#ifndef __BASETILE_H_
#define __BASETILE_H_

#include "World.h"

class BaseTile
{
public:
	BaseTile();
	virtual ~BaseTile();

private:

	TileType tileType;

};

#endif // __BASETILE_H_