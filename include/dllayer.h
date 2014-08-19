/*
 * =====================================================================================
 *
 *       Filename:  dllayer.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月19日 14时40分14秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  jianxi sun (jianxi), ycsunjane@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef __DLLLAYER_H__
#define __DLLLAYER_H__

void dll_init(char *nic);
int dll_brdcast(char *data, int size);
int dll_sendpkt(char *dmac, char *data, int size);
int dll_rcv(char *data, int size);

#endif /* __DLLAYER_H__ */
