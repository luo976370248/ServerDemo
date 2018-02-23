#ifndef _session_h_
#define _session_h_

class session {
public:
	virtual void close() = 0;
	virtual void send_data(unsigned char* bodu, int len) = 0;
	virtual const char* get_address(int* client_port) = 0;
	virtual void send_msg(struct cmd_msg* msg) = 0;
};

#endif // !_session_h_
