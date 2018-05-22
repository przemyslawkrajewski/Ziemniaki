/*
 * TunnelNode.h
 *
 *  Created on: 4 maj 2018
 *      Author: przemo
 */

#ifndef SRC_TUNNEL_TUNNELNODE_H_
#define SRC_TUNNEL_TUNNELNODE_H_

#include <list>
#include <map>

class TunnelNode
{
public:
	using TunnelLinks = std::list<TunnelLink*>;

	using TunnelWaypointPair =  std::pair<TunnelNode*,WaypointCost>;
	using TunnelWaypoints =  std::map<TunnelNode*,WaypointCost>;

	TunnelNode();
	TunnelNode(Point coords, double rad);
	~TunnelNode();

	Point getCoordinates() { return coordinates;}
	double getRadius() { return radius;}
	TunnelWaypoints* getTunnelWaypoints() {return &tunnelWaypoints;}

	void addTunnelLink(TunnelLink *link);


private:
	TunnelWaypoints tunnelWaypoints;
	TunnelLinks links;
	Point coordinates;
	double radius;
};

#endif /* SRC_TUNNEL_TUNNELNODE_H_ */
