/*
 * TunnelNode.h
 *
 *  Created on: 4 maj 2018
 *      Author: przemo
 */

#ifndef SRC_TUNNEL_TUNNELNODE_H_
#define SRC_TUNNEL_TUNNELNODE_H_

#include <assert.h>

class TunnelNode
{
public:
	TunnelNode();
	TunnelNode(Point coords, double rad);
	~TunnelNode();

	Point getCoordinates() { return coordinates;}
	double getRadius() { return radius;}

private:
	TunnelLink *link; //TODO temporary
	Point coordinates;
	double radius;
};

#endif /* SRC_TUNNEL_TUNNELNODE_H_ */
