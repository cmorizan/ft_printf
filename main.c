
// // ＜＜printfの実装の流れ＞＞
// // 1.va_argの実装
// // 2.%なしの実装
// // 3.入力部分の実装(%部分)
// // 4.出力部分を1つづつ(%)

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

// // int ft_printf(const char *fmt, ...)
// // {
// // 	va_list ap;
// // 	char c; //文字　→　４バイトずつ格納なので読み込みはint 
// 	// char *s; //文字列
// 	// char *p;
// 	// int d;

// // 	va_start(ap, fmt);
// // 	c = (char)va_arg(ap, int);
// // 	s = (char *)va_arg(ap, char *);
// // 	// p=()
// // 	// d = (int)va_arg(ap, int);

// // 	va_end(ap);
// // 	printf("%c", c);
// // 	return (0);
// // }

int main(void)
{
	char c;
	c = 'a';

	ft_printf("%c", c);
}
