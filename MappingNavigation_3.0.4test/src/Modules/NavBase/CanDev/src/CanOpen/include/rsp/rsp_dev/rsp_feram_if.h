/*<FH+>************************************************************************/
/*                                                                            */
/* 版权所有: Copyright (C) 沈阳新松自动化股份有限公司                         */
/*                                                                            */
/*                                                                            */
/*  文件名称:rsp_feram_if.h                                                              */
/*  内容摘要:                                                                 */
/*  其它说明:                                                                 */
/*  当前版本:                                                                 */
/*  作    者:QianYizhou                                                       */
/*  完成日期:2013年09月18日                                                   */
/*  修改记录:                                                                 */
/*    修改日期          版本号        修改人        修改内容                  */
/* -------------------------------------------------------------------------- */
/*    2013年09月18日          V1.0        QianYizhou        创建文件          */
/*<FH->************************************************************************/

#ifndef _RSP_FERAM_IF_H
#define _RSP_FERAM_IF_H

#ifdef  __cplusplus
extern "C"
{
#endif//__cplusplus

/*<FUNC+>**********************************************************************
* 函数名称:     RSP_Feram_Open                                                             
* 功能描述:     铁电设备初始化
* 输入参数:
*               NULL
* 输出参数:                                                              
*               void** pAddr    铁电首地址
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
int RSP_Feram_Open( void** pAddr );

/*<FUNC+>**********************************************************************
* 函数名称:     RSP_Feram_Close                                                             
* 功能描述:     铁电设备反初始化
* 输入参数:
*               NULL
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
int RSP_Feram_Close( void );

/*<FUNC+>**********************************************************************
* 函数名称:     RSP_Feram_Read                                                             
* 功能描述:     读取铁电设备内容
* 输入参数:
*               unsigned int pos    偏移位置
*               unsigned int len    读取内容长度
*               注意：铁电可读写范围：0～512KB
* 输出参数:                                                              
*               unsigned char *pBuf 读取内容缓存
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
int RSP_Feram_Read( unsigned int pos, unsigned char *pBuf, unsigned int len );

/*<FUNC+>**********************************************************************
* 函数名称:     RSP_Feram_Write
* 功能描述:     向铁电设备写入内容
* 输入参数:
*               unsigned int pos    偏移位置
*               unsigned char *pBuf 写入内容缓存
*               unsigned int len    写入内容长度
*               注意：铁电可读写范围：0～512KB
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
int RSP_Feram_Write( unsigned int pos, const unsigned char *pBuf, unsigned int len );

/*<FUNC+>**********************************************************************
* 函数名称: RSP_Feram_Sync                                                             
* 功能描述: sync feram manually
* 输入参数: 
*               NULL
* 输出参数:
*               NULL
* 返 回 值:
*               true    have synced to feram
*               false   have NOT synced to feram
* 操作流程:                                                              
* 其它说明:                                                              
* 修改记录:                                                              
*    修改日期          版本号        修改人        修改内容                  
* -------------------------------------------------------------------------- 
*<FUNC->**********************************************************************/
bool RSP_Feram_Sync( void );
#ifdef  __cplusplus
}
#endif//__cplusplus


#endif//_RSP_FERAM_IF_H

