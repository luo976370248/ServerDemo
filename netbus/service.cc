#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "session.h"

#include "service.h"

bool service::on_session_recv_cmd(session* s, struct cmd_msg* msg) {
	return false;
}

void service::on_session_disconnect(session* s) {

}