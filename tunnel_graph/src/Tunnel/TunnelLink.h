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
#include <utility>

class TunnelLink
{
public:
	using NodesPair = std::pair<TunnelNode*,TunnelNode*>;

	TunnelLink(TunnelNode *n1, TunnelNode *n2, double w);
	~TunnelLink();

	double getWidth() {return width;}
	NodesPair* getNodes() { return &nodes;}

private:
	NodesPair nodes;

	double width;
	double lenght{-1};
};

#endif /* SRC_TUNNEL_TUNNELLINK_H_ */
