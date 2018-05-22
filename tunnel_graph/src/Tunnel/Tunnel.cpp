/*
 * Tunnel.cpp
 *
 *  Created on: 5 maj 2018
 *      Author: przemo
 */

#include "Tunnel.h"


Tunnel::Tunnel()
{
	//Temporary for testing
	tunnelNodes.push_back(TunnelNode(Point(50,200,0),10));
	tunnelNodes.push_back(TunnelNode(Point(200,50,0),10));
	tunnelNodes.push_back(TunnelNode(Point(200,400,0),10));
	tunnelNodes.push_back(TunnelNode(Point(400,200,0),10));
	tunnelNodes.push_back(TunnelNode(Point(600,50,0),10));

	std::vector<TunnelNode*> ptrs;
	for(auto it = tunnelNodes.begin(); it != tunnelNodes.end() ;it++)
	{
		ptrs.push_back(&(*it));
	}

	tunnelLinks.push_back(TunnelLink(ptrs[0],ptrs[1],5));
	tunnelLinks.push_back(TunnelLink(ptrs[0],ptrs[2],5));
	tunnelLinks.push_back(TunnelLink(ptrs[1],ptrs[2],5));
	tunnelLinks.push_back(TunnelLink(ptrs[1],ptrs[3],5));
	tunnelLinks.push_back(TunnelLink(ptrs[2],ptrs[3],5));
	tunnelLinks.push_back(TunnelLink(ptrs[4],ptrs[3],5));
}

//TODO to remove later
void Tunnel::printTunnels()
{
	cv::Mat img;
	img = cv::Mat(1000, 800, CV_8UC3);


	for(int y = 0 ; y < img.rows ; y++)
	{
		uchar* ptr = img.ptr((int)y);
		for(int x = 0 ; x < img.cols*3 ; x++)
		{
			*ptr=0;
			ptr = ptr+1;
		}
	}

	for(auto it = tunnelNodes.begin(); it != tunnelNodes.end() ;it++)
	{
		cv::Point p;
		p.x = it->getCoordinates().x;
		p.y = it->getCoordinates().y;
		cv::circle(img, p,it->getRadius(), cv::Scalar(255,255,255), CV_FILLED);
	}

	for(auto it = tunnelLinks.begin(); it != tunnelLinks.end() ;it++)
	{
		cv::Point p1;
		p1.x = it->getNode1Coordinates().x;
		p1.y = it->getNode1Coordinates().y;

		cv::Point p2;
		p2.x = it->getNode2Coordinates().x;
		p2.y = it->getNode2Coordinates().y;
		cv::line(img, p1, p2, cv::Scalar(255,255,255), it->getWidth());
	}

	imshow("Tunnels", img);
	cv::waitKey(20000);
}
