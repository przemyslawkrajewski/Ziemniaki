/*
 * TunnelNode.h
 *
 *  Created on: 4 maj 2018
 *      Author: przemo
 */

#ifndef SRC_TUNNEL_TUNNELNODE_H_
#define SRC_TUNNEL_TUNNELNODE_H_

#include <assert.h>

#include "TunnelElement.h"

class TunnelNode : public TunnelElement
{
public:
	TunnelNode();
	TunnelNode(Point coords, double rad);
	virtual ~TunnelNode();

	virtual Point getCoordinates() { return coordinates;}
	double getRadius() { return radius;}

private:
	virtual Point getNode1Coordinates() {assert(!"Tunnel node can't use getNode1Coordinates() method");}
	virtual Point getNode2Coordinates() {assert(!"Tunnel node can't use getNode2Coordinates() method");}

private:
	Point coordinates;
	double radius;
};

#endif /* SRC_TUNNEL_TUNNELNODE_H_ */
