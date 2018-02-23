#ifndef _tcp_protocol_h_
#define _tcp_protocol_h_

class tcp_protocol {
public:
	static bool read_header(unsigned char* data, int data_len, int* pkg_size, int* out_header_siz);
	static unsigned char* package(const unsigned char* raw_data, int len, int* pkg_len);
	static void release_package(unsigned char* tp_pkg);
};

#endif // !_tcp_protocol_h_
