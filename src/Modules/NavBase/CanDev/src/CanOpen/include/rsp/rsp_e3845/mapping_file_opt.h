/*<FH+>************************************************************************/
/*                                                                            */
/* 版权所有: Copyright (C) 沈阳新松自动化股份有限公司                         */
/*                                                                            */
/*                                                                            */
/*  文件名称:fileCmp.h                                                              */
/*  内容摘要:                                                                 */
/*  其它说明:                                                                 */
/*  当前版本:                                                                 */
/*  作    者:QianYizhou                                                       */
/*  完成日期:2013年05月09日                                                   */
/*  修改记录:                                                                 */
/*    修改日期          版本号        修改人        修改内容                  */
/* -------------------------------------------------------------------------- */
/*    2013年05月09日          V4.0        QianYizhou        创建文件          */
/*<FH->************************************************************************/

#ifndef _MAPPING_FILE_OPT_H
#define _MAPPING_FILE_OPT_H
#ifdef __cplusplus
extern "C"
{
#endif
/******************************************************************************/
/*               #include（依次为标准库头文件、非标准库头文件）               */
/******************************************************************************/
#include <stdlib.h>

/******************************************************************************/
/*                                 常量定义                                   */
/******************************************************************************/

/******************************************************************************/
/*                                全局宏定义                                  */
/******************************************************************************/
#define FILECMP_SUCCESS     ( 0 )
#define FILECMP_FAILED      ( -1 )

/******************************************************************************/
/*                              全局数据类型声明                              */
/******************************************************************************/
typedef struct CMP_FILE_DEVICE {
    char *cmpFileName;      /* 映射文件文件名 */
    int nFd;
    size_t len;       /* 映射长度 */
    void *pMappingAddr;     /* 映射地址 */
}T_CMP_FILE_DEVICE,
*PTCMP_FILE_DEVICE;

/******************************************************************************/
/*                                全局变量声明                                */
/******************************************************************************/

/******************************************************************************/
/*                                外部引用定义                                */
/******************************************************************************/

/******************************************************************************/
/*                                全局函数原型                                */
/******************************************************************************/

/*******************************************************************************
* Function:     initCmpFile
* Description:  初始化比对文件
* Calls:        
* Called By:    
* Input:        PTCMP_FILE_DEVICE ptMappingFileDev
*                   char *cmpFileName   比对文件的文件名指针
*                   const size_t len    映射长度
* Output:       PTCMP_FILE_DEVICE ptMappingFileDev
*                   void *pMappingAddr  文件映射的内存地址
* Return:       int : 0：成功； 非0：失败
* Others:       
*******************************************************************************/
int initCmpFile( PTCMP_FILE_DEVICE ptMappingFileDev );

/*******************************************************************************
* Function:     uninitCmpFile
* Description:  反初始化比对文件
* Calls:        
* Called By:    
* Input:        PTCMP_FILE_DEVICE ptMappingFileDev
*                   const size_t len    映射长度
*                   void *pMappingAddr  文件映射的内存地址
* Output:       
* Return:       int : 0：成功； 非0：失败
* Others:       
*******************************************************************************/
int uninitCmpFile( PTCMP_FILE_DEVICE ptMappingFileDev );

/*******************************************************************************
* Function:     syncCmpFile
* Description:  将内存中内容刷入文件
* Calls:        
* Called By:    
* Input:        PTCMP_FILE_DEVICE ptMappingFileDev
*                   const size_t len    映射长度
*                   void *pMappingAddr  文件映射的内存地址
* Output:       
* Return:       int : 0：成功； 非0：失败
* Others:       
*******************************************************************************/
int syncCmpFile( PTCMP_FILE_DEVICE ptMappingFileDev );

#ifdef __cplusplus
}
#endif
#endif /* endif _MAPPING_FILE_OPT_H */
