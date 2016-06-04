#include <iostream>
#include <vector>
#include <list>
#include "../Utils/BaseUtils.h"
#include "../Models/Node.h"
#include "../Models/Map.h"

class PathPlanner {

public:
	PathPlanner();
	std::list<Node*> AStarPath (int nXSourceCoord, int nYSourceCoord, int nXDestCoord, int nYDestCoord, Map *map);
	std::list<Node*> AStarClearListByPrev (std::list<Node*> lstAll);
	std::list<Node*> AStarClearList (std::list<Node*> lstAll, int DestX, int DestY);
	void isInList(Node *p, std::list<Node>& a);

	virtual ~PathPlanner();
};
