/*
 * TunnelNode.cpp
 *
 *  Created on: 4 maj 2018
 *      Author: przemo
 */

#include "TunnelElement.h"

TunnelNode::TunnelNode()
{
	coordinates.x = 0;
	coordinates.y = 0;
	coordinates.z = 0;
	radius = 1;

}

TunnelNode::~TunnelNode()
{

}

TunnelNode::TunnelNode(Point coords, double rad)
{
	coordinates = coords;
	radius = rad;
}


void TunnelNode::addTunnelLink(TunnelLink *link)
{
	links.push_back(link);

	//Cost to the closest neighbor
	tunnelWaypoints.insert(TunnelWaypointPair(link->getOtherTunnelNode(this),link->getWaypointCost()));

	//Recieving from neighbor costs to other nodes
	//TODO
}
