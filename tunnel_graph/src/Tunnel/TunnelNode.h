/*
 * TunnelNode.h
 *
 *  Created on: 4 maj 2018
 *      Author: przemo
 */

#ifndef SRC_TUNNEL_TUNNELNODE_H_
#define SRC_TUNNEL_TUNNELNODE_H_

#include <vector>

#include "TunnelElement.h"

//TODO should be protected
class TunnelNode : public TunnelElement
{
public:
	TunnelNode();
	TunnelNode(Point coords, double rad);
	virtual ~TunnelNode();

	virtual Point getCoordinates() { return coordinates;}
	double getRadius() { return radius;}
private:
	Point coordinates;
	double radius;
};

#endif /* SRC_TUNNEL_TUNNELNODE_H_ */
