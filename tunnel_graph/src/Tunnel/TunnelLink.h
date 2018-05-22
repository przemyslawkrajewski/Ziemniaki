/*
 * TunnelLink.h
 *
 *  Created on: 4 maj 2018
 *      Author: przemo
 */

#ifndef SRC_TUNNEL_TUNNELLINK_H_
#define SRC_TUNNEL_TUNNELLINK_H_

#include <math.h>
#include <utility>

class TunnelLink
{
public:
	using TunnelNodes = std::pair<TunnelNode*,TunnelNode*>;

	TunnelLink(TunnelNode *n1, TunnelNode *n2, double w);
	~TunnelLink();

	double getWidth() {return width;}
	TunnelNodes* getNodes() { return &nodes;}
	TunnelNode* getOtherTunnelNode(TunnelNode* oppositeNode);
	WaypointCost getWaypointCost();

private:
	TunnelNodes nodes;

	double width;
	double lenght{-1};
};

#endif /* SRC_TUNNEL_TUNNELLINK_H_ */
