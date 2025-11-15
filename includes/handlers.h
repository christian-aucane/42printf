#ifndef HANDLERS_H
# define HANDLERS_H

# include "utils.h"
# include <stdarg.h>
# include <stdint.h>

typedef void		(*t_handler_func)(va_list *args, int *count);

void				handle_char(va_list *arg_ptr, int *chars_count);
void				handle_string(va_list *arg_ptr, int *chars_count);
void				handle_ptr(va_list *arg_ptr, int *chars_count);
void				handle_int(va_list *arg_ptr, int *chars_count);
void				handle_uint(va_list *arg_ptr, int *chars_count);
void				handle_hex(va_list *arg_ptr, int *chars_count);
void				handle_heX(va_list *arg_ptr, int *chars_count);
void				handle_percent(va_list *arg_ptr, int *chars_count);

typedef struct s_flag_handler
{
	char			flag;
	t_handler_func	func;
}					t_flag_handler;

#endif
