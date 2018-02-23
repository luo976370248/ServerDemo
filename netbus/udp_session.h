#ifndef _udp_session_h_
#define _udp_session_h_

#include "uv.h"
#include "session.h"

class udp_session : session {
public:
	uv_udp_t * udp_handler;
	char c_address[32];
	int c_port;
	const struct sockaddr* addr;

public:
	virtual void close();
	virtual void send_data(unsigned char* body, int len);
	virtual const char* get_address(int* client_port);
	virtual void send_msg(struct cmd_msg* msg);
};



#endif // !_udp_session_h_
