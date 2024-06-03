/*<FH+>************************************************************************/
/*                                                                            */
/* 版权所有: Copyright (C) 沈阳新松自动化股份有限公司                         */
/*                                                                            */
/*                                                                            */
/*  文件名称:rsp_tcp_client_if.h                                                              */
/*  内容摘要:                                                                 */
/*  其它说明:                                                                 */
/*  当前版本:                                                                 */
/*  作    者:QianYizhou                                                       */
/*  完成日期:2013年09月17日                                                   */
/*  修改记录:                                                                 */
/*    修改日期          版本号        修改人        修改内容                  */
/* -------------------------------------------------------------------------- */
/*    2013年09月17日          V1.0        QianYizhou        创建文件          */
/*<FH->************************************************************************/

#ifndef _RSP_TCP_IF_H
#define _RSP_TCP_IF_H

#ifdef  __cplusplus
extern "C"
{
#endif//__cplusplus

/*<FUNC+>**********************************************************************
* 函数名称:     RSP_TCP_ServerInit
* 功能描述:     TCP Server端初始化
* 输入参数:
*               int port                服务器端口号
* 输出参数:                                                              
*               RSP_HANDLE *pServer     服务器资源标识
* 返 回 值:                                                              
*               RSP_RT_SUCCESS  成功
*               其他            错误码
* 操作流程:                                                              
* 其它说明:                                                              
* 修改记录:                                                              
*    修改日期          版本号        修改人        修改内容                  
* -------------------------------------------------------------------------- 
*   2013-9-18           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_TCP_ServerInit( int port, RSP_HANDLE *pServer );

/*<FUNC+>**********************************************************************
* 函数名称:     RSP_TCP_ServerUninit
* 功能描述:     TCP Server端反初始化
* 输入参数:
*               RSP_HANDLE server       资源标识
* 输出参数:                                                              
*               NULL
* 返 回 值:                                                              
*               RSP_RT_SUCCESS  成功
*               其他            错误码
* 操作流程:                                                              
* 其它说明:                                                              
* 修改记录:                                                              
*    修改日期          版本号        修改人        修改内容                  
* -------------------------------------------------------------------------- 
*   2013-9-18           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_TCP_ServerUninit( RSP_HANDLE server );

/*<FUNC+>**********************************************************************
* 函数名称:     RSP_TCP_Accepnt
* 功能描述:     TCP Server接收客户端链接
* 输入参数:
*               RSP_HANDLE server               服务器端资源标识
* 输出参数:                                                              
*               RSP_HANDLE *pClient             连接客户端资源标识
* 返 回 值:                                                              
*               RSP_RT_SUCCESS  成功
*               其他            错误码
* 操作流程:                                                              
* 其它说明:                                                              
* 修改记录:                                                              
*    修改日期          版本号        修改人        修改内容                  
* -------------------------------------------------------------------------- 
*   2013-9-18           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_TCP_Accept( RSP_HANDLE server, RSP_HANDLE *pClient );

/*<FUNC+>**********************************************************************
* 函数名称:     RSP_TCP_ExpelClient
* 功能描述:     TCP Server断开与客户端链接
* 输入参数: 
*               RSP_HANDLE nClientDes              客户端描述符
* 输出参数:                                                              
*               NULL
* 返 回 值:                                                              
*               RSP_RT_SUCCESS  成功
*               其他            错误码
* 操作流程:                                                              
* 其它说明:                                                              
* 修改记录:                                                              
*    修改日期          版本号        修改人        修改内容                  
* -------------------------------------------------------------------------- 
*   2013-10-11           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_TCP_ExpelClient( RSP_HANDLE client );

/*<FUNC+>**********************************************************************
* 函数名称:     RSP_TCP_ClientInit
* 功能描述:     TCP Client端初始化
* 输入参数:
*               NULL
* 输出参数:                                                              
*               RSP_HANDLE *pClient             客户端资源标识
* 返 回 值:                                                              
*               RSP_RT_SUCCESS  成功
*               其他            错误码
* 操作流程:                                                              
* 其它说明:                                                              
* 修改记录:                                                              
*    修改日期          版本号        修改人        修改内容                  
* -------------------------------------------------------------------------- 
*   2013-9-18           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_TCP_ClientInit( RSP_HANDLE *pClient );

/*<FUNC+>**********************************************************************
* 函数名称:     RSP_TCP_ClientUninit
* 功能描述:     TCP Client端反初始化
* 输入参数:
*               RSP_HANDLE client              客户端资源标识
* 输出参数:                                                              
*               NULL
* 返 回 值:                                                              
*               RSP_RT_SUCCESS  成功
*               其他            错误码
* 操作流程:                                                              
* 其它说明:                                                              
* 修改记录:                                                              
*    修改日期          版本号        修改人        修改内容                  
* -------------------------------------------------------------------------- 
*   2013-9-18           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_TCP_ClientUninit( RSP_HANDLE client );

/*<FUNC+>**********************************************************************
* 函数名称:     RSP_TCP_Connect
* 功能描述:     TCP Client连接服务器
* 输入参数:
*               RSP_HANDLE client               客户端资源标识
* 输出参数:                                                              
*               NULL
* 返 回 值:                                                              
*               RSP_RT_SUCCESS  成功
*               其他            错误码
* 操作流程:                                                              
* 其它说明:                                                              
* 修改记录:                                                              
*    修改日期          版本号        修改人        修改内容                  
* -------------------------------------------------------------------------- 
*   2013-9-18           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_TCP_Connect( RSP_HANDLE client, const char *serverIP, unsigned short serverPort );

/*<FUNC+>**********************************************************************
* 函数名称:     RSP_TCP_Send
* 功能描述:     TCP发送数据
* 输入参数:
*               RSP_HANDLE client               客户端资源标识
*               const unsigned char *data       发送数据缓存
*               unsigned long *pLen             发送数据长度
* 输出参数:                                                              
*               unsigned long *pLen             成功发送数据长度
* 返 回 值:                                                              
*               RSP_RT_SUCCESS  成功
*               其他            错误码
* 操作流程:                                                              
* 其它说明:                                                              
* 修改记录:                                                              
*    修改日期          版本号        修改人        修改内容                  
* -------------------------------------------------------------------------- 
*   2013-9-18           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_TCP_Send( RSP_HANDLE client, const unsigned char *data, unsigned long *pLen );

/*<FUNC+>**********************************************************************
* 函数名称:     RSP_TCP_Recv
* 功能描述:     TCP接收数据
* 输入参数:
*               RSP_HANDLE client               客户端资源标识
*               unsigned char *data             接收数据缓存
*               unsigned long *pLen             接收数据长度
* 输出参数:                                                              
*               unsigned char *data             成功接收数据缓存
*               unsigned long *pLen             成功接收数据长度
* 返 回 值:                                                              
*               RSP_RT_SUCCESS  成功
*               其他            错误码
* 操作流程:                                                              
* 其它说明:                                                              
* 修改记录:                                                              
*    修改日期          版本号        修改人        修改内容                  
* -------------------------------------------------------------------------- 
*   2013-9-18           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_TCP_Recv( RSP_HANDLE client, unsigned char *data, unsigned long *pLen );

#ifdef  __cplusplus
}
#endif//__cplusplus

#endif /* end of include guard: _RSP_TCP_IF_H */


