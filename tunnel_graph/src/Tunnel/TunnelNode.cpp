/*
 * TunnelNode.cpp
 *
 *  Created on: 4 maj 2018
 *      Author: przemo
 */

#include "TunnelNode.h"

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
