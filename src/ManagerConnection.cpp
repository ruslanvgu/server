#include "ManagerConnection.h"

RK::ManagerConnection::ManagerConnection()
{
	sock = socket(AF_INET, SOCK_STREAM, 0);
	if(sock < 0){
		perror("ERROR CREATE SOCKET");
		exit(1);
	}

	addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = inet_addr(host);

    if(bind(sock, (struct sockaddr*)&addr, sizeof(addr)) < 0){
        perror("error bind");
        exit(2);
    }

	unsigned int max_thread = std::thread::hardware_concurrency();
	pullConnection.capacity(max_thread);
	while(1){

		if(data_comming)
			if(pullConnection.size() < max_thread)
				pullConnection.push_back(std::thread(function_process,data));
			else
				wait_free_thread
	}

}

RK::ManagerConnection::~ManagerConnection()
{
	
}