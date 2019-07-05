//
// Created by root on 30/06/19.
//

#ifndef DPPML_MLSP_H
#define DPPML_MLSP_H

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include "HEAAN.h"

using namespace std;



class MLSP {
public:
    int sock = 0, valread;
    struct sockaddr_in serv_addr;
    char *hello = "Hello from client";
    char buffer[1024] = {0};
    int port = 8080;
    char *csp_ip = "127.0.0.1";
    MLSP();
    void send_message();
    bool send_file(int sock, char* path);
    void test_send_file();
    void test_key_exchange();


    bool read_file(int sock, char* path);
    bool read_long(int sock, long *value);


};


#endif //DPPML_MLSP_H
