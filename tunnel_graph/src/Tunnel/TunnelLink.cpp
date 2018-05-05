/*
 * TunnelLink.cpp
 *
 *  Created on: 4 maj 2018
 *      Author: przemo
 */

#include "TunnelLink.h"

TunnelLink::TunnelLink(TunnelElement *n1, TunnelElement *n2, double w)
{
	node1 = n1;
	node2 = n2;
	width = w;
}

TunnelLink::~TunnelLink()
{

}
