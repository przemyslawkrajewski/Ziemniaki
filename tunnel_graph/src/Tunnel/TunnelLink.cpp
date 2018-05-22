/*
 * TunnelLink.cpp
 *
 *  Created on: 4 maj 2018
 *      Author: przemo
 */

#include "TunnelElement.h"

TunnelLink::TunnelLink(TunnelNode *n1, TunnelNode *n2, double w)
{
	nodes = std::pair<TunnelNode*,TunnelNode*>(n1,n2);
	width = w;
}

TunnelLink::~TunnelLink()
{

}
