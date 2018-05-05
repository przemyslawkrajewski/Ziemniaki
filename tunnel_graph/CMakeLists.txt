SET(CMAKE_INSTALL_PREFIX .)

PROJECT(tunnel_graph)
cmake_minimum_required (VERSION 2.8)

find_package( OpenCV REQUIRED )

add_executable(tunnel_graph src/main.cpp src/Tunnel/TunnelNode.cpp src/Tunnel/TunnelLink.cpp src/Tunnel/TunnelElement.cpp src/Tunnel/Tunnel.cpp)

include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries( tunnel_graph ${OpenCV_LIBRARIES})