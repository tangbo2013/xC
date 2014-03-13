/**
 * 通用平台系统API
 * Copyright (c) 2011 Tiros.
 * @file debug.h
 * @brief 代码调试
 * @author baigb <baigb@tiros.com.cn>
 * @date 2011/09/16
 * @note 不要直接调用tr_函数,应该调用对应的宏定义
 * @par 修改记录
 * @par 修改命名规则 杨小茜 2014/03/12
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
 * @brief 断言的实现
 * @param[in] exp - 断言
 * @return - 无
 */
void xdbg_assert(xbool_t exp);

/**
 * @brief 调试信息输出的实现,请调用宏定义dbgprintf,不要直接调用tr_dbgprintf
 * @param[in] format - 调试信息输出格式
 * @param[in] ... - 可变参序列
 * @return - 无
 */
void xdbg_printf(const char * format, ...);

#ifdef __cplusplus
}
#endif

#endif /* XNDEBUG */

#endif /* _XDEBUG_H_ */

