/*
 * TunnelLink.cpp
 *
 *  Created on: 4 maj 2018
 *      Author: przemo
 */

#include "TunnelElement.h"

TunnelLink::TunnelLink(TunnelNode *n1, TunnelNode *n2, double w)
{
	nodes = std::pair<TunnelNode*,TunnelNode*>(n1,n2);
	width = w;

	double dx = (n1->getCoordinates().x - n2->getCoordinates().x);
	double dy = (n1->getCoordinates().y - n2->getCoordinates().y);
	double dz = (n1->getCoordinates().z - n2->getCoordinates().z);
	lenght = sqrt( pow(dx,2.0) + pow(dy,2.0) +  pow(dz,2.0) );
}

TunnelLink::~TunnelLink()
{

}

WaypointCost TunnelLink::getWaypointCost()
{
	return width != 0 ? lenght/width : -1;
}

TunnelNode* TunnelLink::getOtherTunnelNode(TunnelNode* oppositeNode)
{
	if(oppositeNode != nodes.first) return nodes.first;
	else return nodes.second;
}
