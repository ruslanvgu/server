#pragma once
#include <vector>
#include <iostream>
#include <thread>
#include <sys/socket.h>

namespace RK{
	class ManagerConnection
	{
		std::vector<std::thread> pullConnection;
		int sock, sockNew;
	public:
		ManagerConnection();
		~ManagerConnection();

		

	};
}