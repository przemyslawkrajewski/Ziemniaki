/*
 * TunnelElement.h
 *
 *  Created on: 4 maj 2018
 *      Author: przemo
 */

#ifndef SRC_TUNNEL_TUNNELELEMENT_H_
#define SRC_TUNNEL_TUNNELELEMENT_H_

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

class TunnelElement
{
public:
	enum Resource {Food,Coal};

public:
	TunnelElement();
	virtual ~TunnelElement();

	virtual Point getCoordinates() = 0;
	virtual Point getNode1Coordinates() = 0;
	virtual Point getNode2Coordinates() = 0;
};

#endif /* SRC_TUNNEL_TUNNELELEMENT_H_ */
