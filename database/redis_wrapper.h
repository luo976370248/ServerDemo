#ifndef _mysql_wrapper_h_
#define _mysql_wrapper_h_

#include <hiredis.h>

class redis_wrapper {
public:
	static void connect(char* ip, int port, void(*open_cb)(const char* err, void* context));

	static void close_redis(void* context);

	static void query(void* context, char* cmd, void(*query_cb)(const char* err, redisReply* result));
};


#endif // !_mysql_wrapper_h_
