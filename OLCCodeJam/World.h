#ifndef __WORLD_H_
#define __WORLD_H_

#include <vector>

enum class TileType
{
	TOWN,
	WORLD,
	DUNGEON
};

enum class IndividualType
{
	PLAYER,
	ENEMY,
	NPC
};

enum class ItemType
{
	WEAPON,
	ARMOR,
	CONSUMABLE
};

class World
{
public:
	World();
	~World();

private:

};

#endif // WORLD_H_
