/**
 * @file type02.c
 * @author Choi, Gunhee
 * @brief 
 * @version 0.1
 * @date 2022-03-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>

// /inlcude/uapi/asm-generic/int-ll64.h
typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;

#ifdef __GNUC__
__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
#else
typedef __signed__ long long __s64;
typedef unsigned long long __u64;
#endif
// /inlcude/uapi/asm-generic/int-ll64.h

typedef __s8 s8;
typedef __u8 u8;
typedef __s16 s16;
typedef __u16 u16;
typedef __s32 s32;
typedef __u32 u32;
typedef __s64 s64;
typedef __u64 u64;

int main()
{
    printf("s8 = %lu bytes\n", sizeof(s8));
    printf("u8 = %lu bytes\n", sizeof(u8));
    printf("s16 = %lu bytes\n", sizeof(s16));
    printf("u16 = %lu bytes\n", sizeof(u8));
    printf("s32 = %lu bytes\n", sizeof(s32));
    printf("u32 = %lu bytes\n", sizeof(u32));
    printf("s64 = %lu bytes\n", sizeof(s64));
    printf("u64 = %lu bytes\n", sizeof(u64));

    return 0;
}