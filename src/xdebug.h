/**
 * ͨ��ƽ̨ϵͳAPI
 * Copyright (c) 2011 Tiros.
 * @file debug.h
 * @brief �������
 * @author baigb <baigb@tiros.com.cn>
 * @date 2011/09/16
 * @note ��Ҫֱ�ӵ���tr_����,Ӧ�õ��ö�Ӧ�ĺ궨��
 * @par �޸ļ�¼
 * @par �޸��������� ��С�� 2014/03/12
 */

#ifndef _DEBUG_H_
#define _DEBUG_H_

#include "./xboolean.h"

#ifdef XNDEBUG

#define assert(exp)
#define dbgprintf(format, ...)

#else

#define assert(exp)  	xdbg_assert(exp)
#define dbgprintf      	xdbg_printf

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief ���Ե�ʵ��
 * @param[in] exp - ����
 * @return - ��
 */
void xdbg_assert(xbool_t exp);

/**
 * @brief ������Ϣ�����ʵ��,����ú궨��dbgprintf,��Ҫֱ�ӵ���tr_dbgprintf
 * @param[in] format - ������Ϣ�����ʽ
 * @param[in] ... - �ɱ������
 * @return - ��
 */
void xdbg_printf(const char * format, ...);

#ifdef __cplusplus
}
#endif

#endif /* XNDEBUG */

#endif /* _XDEBUG_H_ */

