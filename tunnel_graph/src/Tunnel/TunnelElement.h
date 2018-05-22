/*
 * TunnelElement.h
 *
 *  Created on: 4 maj 2018
 *      Author: przemo
 */

#ifndef SRC_TUNNEL_TUNNELELEMENT_H_
#define SRC_TUNNEL_TUNNELELEMENT_H_

class TunnelLink;
class TunnelNode;

using WaypointCost = double;

struct Point
{
	Point()
	{
		x = 0;
		y = 0;
		z = 0;
	}

	Point(double nx, double ny, double nz)
	{
		x = nx;
		y = ny;
		z = nz;
	}

	double x;
	double y;
	double z;
};

#include "TunnelNode.h"
#include "TunnelLink.h"

#endif /* SRC_TUNNEL_TUNNELELEMENT_H_ */
