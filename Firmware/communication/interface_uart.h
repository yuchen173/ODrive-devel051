#ifndef __INTERFACE_UART_HPP
#define __INTERFACE_UART_HPP

#ifdef __cplusplus
#include "fibre/protocol.hpp"
extern StreamSink* uart_stream_output_ptr;

extern "C" {
#endif

#include <cmsis_os.h>
#include "usart.h"

extern osThreadId uart_thread;
extern const uint32_t stack_size_uart_thread;

void start_uart_server(UART_HandleTypeDef* huart);
void uart_poll(void);

#ifdef __cplusplus
}
#endif

#endif // __INTERFACE_UART_HPP
