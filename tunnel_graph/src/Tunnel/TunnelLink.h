/*
 * TunnelLink.h
 *
 *  Created on: 4 maj 2018
 *      Author: przemo
 */

#ifndef SRC_TUNNEL_TUNNELLINK_H_
#define SRC_TUNNEL_TUNNELLINK_H_

#include <assert.h>
#include <math.h>

#include "TunnelElement.h"

class TunnelLink : public TunnelElement
{
public:
	TunnelLink(TunnelElement *n1, TunnelElement *n2, double w);
	virtual ~TunnelLink();

	virtual Point getNode1Coordinates() {return node1->getCoordinates();}
	virtual Point getNode2Coordinates() {return node2->getCoordinates();}
	double getWidth() {return width;}

private:
	virtual Point getCoordinates() {assert(!"Tunnel link can't use getCoordinates() method");};

private:
	TunnelElement *node1;
	TunnelElement *node2;

	double width;
	double lenght{-1};
};

#endif /* SRC_TUNNEL_TUNNELLINK_H_ */
