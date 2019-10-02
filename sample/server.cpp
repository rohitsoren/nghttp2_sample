#include <iostream>
#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <errno.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <string.h>
#include <pthread.h>
#include <array>

#include "nghttp2/nghttp2.h"

using namespace std;

ssize_t m_nghttp2_send_callback(nghttp2_session *session,
                                         const uint8_t *data, size_t length,
                                         int flags, void *user_data)
{
	printf("m_nghttp2_send_callback received\n");
}

ssize_t m_nghttp2_recv_callback(nghttp2_session *session, uint8_t *buf,
                                         size_t length, int flags,
                                         void *user_data)
{
	printf("m_nghttp2_recv_callback received\n");
}

int m_nghttp2_on_frame_recv_callback(nghttp2_session *session,
                                              const nghttp2_frame *frame,
                                              void *user_data)
{
	printf("m_nghttp2_on_frame_recv_callback received\n");
}


int m_nghttp2_on_invalid_frame_recv_callback(
    nghttp2_session *session, const nghttp2_frame *frame, int lib_error_code,
    void *user_data)
{
	printf("m_nghttp2_on_invalid_frame_recv_callback received\n");
}


int m_nghttp2_on_data_chunk_recv_callback(nghttp2_session *session,
                                                   uint8_t flags,
                                                   int32_t stream_id,
                                                   const uint8_t *data,
                                                   size_t len, void *user_data)
{
	printf("m_nghttp2_on_data_chunk_recv_callback received\n");
}


int m_nghttp2_before_frame_send_callback(nghttp2_session *session,
                                                  const nghttp2_frame *frame,
                                                  void *user_data)
{
	printf("m_nghttp2_before_frame_send_callback received\n");
}


int m_nghttp2_on_frame_send_callback(nghttp2_session *session,
                                              const nghttp2_frame *frame,
                                              void *user_data)
{
	printf("m_nghttp2_on_frame_send_callback received\n");
}


int m_nghttp2_on_frame_not_send_callback(nghttp2_session *session,
                                                  const nghttp2_frame *frame,
                                                  int lib_error_code,
                                                  void *user_data)
{
	printf("m_nghttp2_on_frame_not_send_callback received\n");
}


int m_nghttp2_on_stream_close_callback(nghttp2_session *session,
                                                int32_t stream_id,
                                                uint32_t error_code,
                                                void *user_data)
{
	printf("m_nghttp2_on_stream_close_callback received\n");
}


int m_nghttp2_on_begin_headers_callback(nghttp2_session *session,
                                                 const nghttp2_frame *frame,
                                                 void *user_data)
{
	printf("m_nghttp2_on_begin_headers_callback received\n");
}


int m_nghttp2_on_header_callback(nghttp2_session *session,
                                          const nghttp2_frame *frame,
                                          const uint8_t *name, size_t namelen,
                                          const uint8_t *value, size_t valuelen,
                                          uint8_t flags, void *user_data)
{
	printf("m_nghttp2_on_header_callback received\n");
}


int m_nghttp2_on_header_callback2(nghttp2_session *session,
                                           const nghttp2_frame *frame,
                                           nghttp2_rcbuf *name,
                                           nghttp2_rcbuf *value, uint8_t flags,
                                           void *user_data)
{
	printf("m_nghttp2_on_header_callback2 received\n");
}


int m_nghttp2_on_invalid_header_callback(
    nghttp2_session *session, const nghttp2_frame *frame, const uint8_t *name,
    size_t namelen, const uint8_t *value, size_t valuelen, uint8_t flags,
    void *user_data)
{
	printf("m_nghttp2_on_invalid_header_callback received\n");
}


int m_nghttp2_on_invalid_header_callback2(
    nghttp2_session *session, const nghttp2_frame *frame, nghttp2_rcbuf *name,
    nghttp2_rcbuf *value, uint8_t flags, void *user_data)
{
	printf("m_nghttp2_on_invalid_header_callback2 received\n");
}


ssize_t m_nghttp2_select_padding_callback(nghttp2_session *session,
                                                   const nghttp2_frame *frame,
                                                   size_t max_payloadlen,
                                                   void *user_data)
{
	printf("m_nghttp2_select_padding_callback received\n");
}


ssize_t m_nghttp2_data_source_read_length_callback(
    nghttp2_session *session, uint8_t frame_type, int32_t stream_id,
    int32_t session_remote_window_size, int32_t stream_remote_window_size,
    uint32_t remote_max_frame_size, void *user_data)
{
	printf("m_nghttp2_data_source_read_length_callback received\n");
}


int m_nghttp2_on_begin_frame_callback(nghttp2_session *session,
                                               const nghttp2_frame_hd *hd,
                                               void *user_data)
{
	printf("m_nghttp2_on_begin_frame_callback received\n");
}


int m_nghttp2_send_data_callback(nghttp2_session *session,
                                          nghttp2_frame *frame,
                                          const uint8_t *framehd, size_t length,
                                          nghttp2_data_source *source,
                                          void *user_data)
{
	printf("m_nghttp2_send_data_callback received\n");
}


ssize_t m_nghttp2_pack_extension_callback(nghttp2_session *session,
                                                   uint8_t *buf, size_t len,
                                                   const nghttp2_frame *frame,
                                                   void *user_data)
{
	printf("m_nghttp2_pack_extension_callback received\n");
}


int m_nghttp2_unpack_extension_callback(nghttp2_session *session,
                                                 void **payload,
                                                 const nghttp2_frame_hd *hd,
                                                 void *user_data)
{
	printf("m_nghttp2_unpack_extension_callback received\n");
}


int m_nghttp2_on_extension_chunk_recv_callback(
    nghttp2_session *session, const nghttp2_frame_hd *hd, const uint8_t *data,
    size_t len, void *user_data)
{
	printf("m_nghttp2_on_extension_chunk_recv_callback received\n");
}


int m_nghttp2_error_callback(nghttp2_session *session, const char *msg,
                                      size_t len, void *user_data)
{
	printf("m_nghttp2_error_callback received\n");
}


int m_nghttp2_error_callback2(nghttp2_session *session,
                                       int lib_error_code, const char *msg,
                                       size_t len, void *user_data)
{
	printf("m_nghttp2_error_callback2 received\n");
}


void fillCallbacks(nghttp2_session_callbacks* ap_callbacks)
{
	nghttp2_session_callbacks_set_send_callback(ap_callbacks, m_nghttp2_send_callback); 

	nghttp2_session_callbacks_set_recv_callback(ap_callbacks, m_nghttp2_recv_callback); 

	nghttp2_session_callbacks_set_on_frame_recv_callback(ap_callbacks, m_nghttp2_on_frame_recv_callback); 

	nghttp2_session_callbacks_set_on_invalid_frame_recv_callback(ap_callbacks, m_nghttp2_on_invalid_frame_recv_callback); 

	nghttp2_session_callbacks_set_on_data_chunk_recv_callback(ap_callbacks, m_nghttp2_on_data_chunk_recv_callback); 

	nghttp2_session_callbacks_set_before_frame_send_callback(ap_callbacks, m_nghttp2_before_frame_send_callback); 

	nghttp2_session_callbacks_set_on_frame_send_callback(ap_callbacks, m_nghttp2_on_frame_send_callback); 

	nghttp2_session_callbacks_set_on_frame_not_send_callback(ap_callbacks, m_nghttp2_on_frame_not_send_callback); 

	nghttp2_session_callbacks_set_on_stream_close_callback(ap_callbacks, m_nghttp2_on_stream_close_callback); 

	nghttp2_session_callbacks_set_on_begin_headers_callback(ap_callbacks, m_nghttp2_on_begin_headers_callback); 

	nghttp2_session_callbacks_set_on_header_callback(ap_callbacks, m_nghttp2_on_header_callback); 

	nghttp2_session_callbacks_set_on_header_callback2(ap_callbacks, m_nghttp2_on_header_callback2); 

	nghttp2_session_callbacks_set_on_invalid_header_callback(ap_callbacks, m_nghttp2_on_invalid_header_callback); 

	nghttp2_session_callbacks_set_on_invalid_header_callback2(ap_callbacks, m_nghttp2_on_invalid_header_callback2); 

	nghttp2_session_callbacks_set_select_padding_callback(ap_callbacks, m_nghttp2_select_padding_callback); 

	nghttp2_session_callbacks_set_data_source_read_length_callback(ap_callbacks, m_nghttp2_data_source_read_length_callback); 

	nghttp2_session_callbacks_set_on_begin_frame_callback(ap_callbacks, m_nghttp2_on_begin_frame_callback); 

	nghttp2_session_callbacks_set_send_data_callback(ap_callbacks, m_nghttp2_send_data_callback); 

	nghttp2_session_callbacks_set_pack_extension_callback(ap_callbacks, m_nghttp2_pack_extension_callback); 

	nghttp2_session_callbacks_set_unpack_extension_callback(ap_callbacks, m_nghttp2_unpack_extension_callback); 

	nghttp2_session_callbacks_set_on_extension_chunk_recv_callback(ap_callbacks, m_nghttp2_on_extension_chunk_recv_callback); 

	nghttp2_session_callbacks_set_error_callback(ap_callbacks, m_nghttp2_error_callback); 

	nghttp2_session_callbacks_set_error_callback2(ap_callbacks, m_nghttp2_error_callback2); 
}


void* handleClientConnection(void *arg)
{
	int conn_fd = *((int*)arg);
	nghttp2_session_callbacks* lp_callbacks;
	nghttp2_session *lp_session;
	int l_ret;

	printf("handleClientConnection fd=<%d> received\n", conn_fd);

	nghttp2_session_callbacks_new(&lp_callbacks);
	fillCallbacks(lp_callbacks);
	l_ret = nghttp2_session_server_new2(&lp_session, lp_callbacks, (void*)&conn_fd, NULL);

	if(l_ret != 0)
	{
		printf("ERROR! handleClientConnection->nghttp2_session_server_new2 returned failure l_ret = <%d>, errno = <%d>\n", l_ret, errno);
		return NULL;
	}

	std::array<nghttp2_settings_entry, 4> settings;

}

void startServer()
{
	struct sockaddr_in address, client_addr;
	socklen_t addr_len;
	int client_conn;
	int sock_fd = socket(AF_INET, SOCK_STREAM, 0);
	memset((void*)&address, 0, sizeof(address));
	memset((void*)&client_addr, 0, sizeof(client_addr));

	if( sock_fd <= 0)
	{
		printf("ERROR! startServer->socket failed errno=<%d> sock_fd=<%d>\n", errno, sock_fd);
		return ;
	}
	address.sin_family = AF_INET;
	int l_ret = inet_pton(AF_INET, "127.0.0.1", &(address.sin_addr.s_addr));
	if(l_ret <= 0)
	{
		printf("ERROR! startServer->inet_pton failed errno=<%d> sock_fd=<%d>\n", errno, sock_fd);
		close(sock_fd);
		return ;
	}
	address.sin_port = htons(8087);

	l_ret = bind(sock_fd, (struct sockaddr*)&address, sizeof(address));
	if(l_ret < 0)
	{
		printf("ERROR! startServer->bind failed errno=<%d> sock_fd=<%d>\n", errno, sock_fd);
		close(sock_fd);
		return ;
	}

	l_ret = listen(sock_fd, 5);
	if(l_ret < 0)
	{
		printf("ERROR! startServer->listen failed errno=<%d> sock_fd=<%d>\n", errno, sock_fd);
		close(sock_fd);
		return ;
	}

	pthread_t tid;
	pthread_attr_t attr;
	while(1)
	{
		client_conn = accept(sock_fd, (struct sockaddr*)&client_addr, &addr_len);
		if(client_conn <= 0)
		{
			printf("ERROR! startServer->accept failed errno=<%d> sock_fd=<%d>\n", errno, sock_fd);
			continue ;
		}
		printf("startServer connection = <%d> received\n", client_conn);

		l_ret = pthread_attr_init(&attr);
		if(l_ret != 0)
		{
			printf("ERROR! startServer->pthread_attr_init failed errno=<%d> sock_fd=<%d>\n", errno, sock_fd);
			close(client_conn);
			continue ;
		}

		l_ret = pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
		if(l_ret != 0)
		{
			printf("ERROR! startServer->pthread_attr_setdetachstate failed errno=<%d> sock_fd=<%d>\n", errno, sock_fd);
			close(client_conn);
			continue ;
		}

		l_ret = pthread_create(&tid, &attr, &handleClientConnection, &client_conn);
		if(l_ret != 0)
		{
			printf("ERROR! startServer->pthread_create failed errno=<%d> sock_fd=<%d>\n", errno, sock_fd);
			close(client_conn);
			continue ;
		}
	}

	

	close(sock_fd);
}

int main()
{
	startServer();
	return 0;
}
