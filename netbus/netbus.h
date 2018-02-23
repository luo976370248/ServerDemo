#ifndef _netbus_h_
#define _netbus_h_

class netbus {
public:
	static netbus* instance();

public:
	void init();
	void start_tcp_server(int port);
	void start_ws_server(int port);
	void start_udp_server(int port);
	void run();
};

#endif // !_netbus_h_
