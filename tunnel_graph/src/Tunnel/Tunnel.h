/*
 * Tunnel.h
 *
 *  Created on: 5 maj 2018
 *      Author: przemo
 */

#ifndef SRC_TUNNEL_TUNNEL_H_
#define SRC_TUNNEL_TUNNEL_H_

#include <opencv2/opencv.hpp>
#include <list>

#include "TunnelElement.h"

class Tunnel
{
public:
	Tunnel();



	void printTunnels();

private:
	std::list<TunnelNode> tunnelNodes;
	std::list<TunnelLink> tunnelLinks;
};

#endif /* SRC_TUNNEL_TUNNEL_H_ */
