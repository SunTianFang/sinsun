/*<FH+>***********************************************************************
*                                                                            
* ��Ȩ����: Copyright (C) ���������Զ����ɷ����޹�˾                         
*                                                                            
*                                                                            
*  �ļ�����: rsp_am_if.h                                                   
*  ����ժҪ: RSP(Robot Software Platform) Alarm Module ͷ�ļ�
*  ����˵��:                                                             
*  ��ǰ�汾:                                                             
*  ��    ��:                                                               
*  �������:                                                               
*  �޸ļ�¼:                                                                 
*    �޸�����          �汾��        �޸���        �޸�����                  
* -------------------------------------------------------------------------- 
*   2014-3-19           V1.0        QianYizhou      Create
*<FH->************************************************************************/
#ifndef __RSP_AM_IF_H
#define __RSP_AM_IF_H

#include "rsp.h"

#ifdef  __cplusplus
extern "C"
{
#endif//__cplusplus

/*<FUNC+>**********************************************************************
* ��������:     RSP_AM_Init
* ��������:     RSP Alarm Module ��ʼ��
* �������: 
*               unsigned long bufSize   post code�Ļ����С
* �������:
*               RSP_HANDLE *pHandle     AMģ����
* �� �� ֵ:     
*               RSP_RT_SUCCESS:         �ɹ�
*               ������                  ������
* ��������:                                                              
* ����˵��:                                                              
*               ���bufSize����code��info�Ĵ�С���ƣ�����postcode�Ļ����С
*               ��ģ���code��info�Ĵ�С������
* �޸ļ�¼:                                                              
*    �޸�����          �汾��        �޸���        �޸�����                  
* -------------------------------------------------------------------------- 
*   2014-3-17           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_AM_Init( unsigned long bufSize, RSP_HANDLE *pHandle );

/*<FUNC+>**********************************************************************
* ��������:     RSP_AM_Uninit
* ��������:     RSP Alarm Module ����ʼ��
* �������: 
*               RSP_HANDLE *pHandle     AMģ����
* �������:
*               NULL
* �� �� ֵ:     
*               RSP_RT_SUCCESS:         �ɹ�
*               ������                  ������
* ��������:                                                              
* ����˵��:                                                              
* �޸ļ�¼:                                                              
*    �޸�����          �汾��        �޸���        �޸�����                  
* -------------------------------------------------------------------------- 
*   2014-3-17           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_AM_Uninit( RSP_HANDLE handle );

/*<FUNC+>**********************************************************************
* ��������:     RSP_AM_Register
* ��������:     ��amģ��ע��code��info 
* �������: 
*               RSP_HANDLE  handle      AMģ����
*               int code                ��ֵ���е�Key
*               const char *info        ��ֵ���е�value
* �������:
*               NULL
* �� �� ֵ:     
*               RSP_RT_SUCCESS:         �ɹ�
*               ������                  ������
* ��������:                                                              
* ����˵��:                                                              
*               ����е�info����Ϊ�ֲ�����
*               ��ͬ����key��ע�᲻ͬ��value�������¸�key��value
* �޸ļ�¼:                                                              
*    �޸�����          �汾��        �޸���        �޸�����                  
* -------------------------------------------------------------------------- 
*   2014-3-17           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_AM_Register( RSP_HANDLE handle, int code, const char *info );

/*<FUNC+>**********************************************************************
* ��������:     RSP_AM_UnRegister
* ��������:     ע��key-value��
* �������: 
*               RSP_HANDLE  handle      AMģ����
*               int code                ��ֵ���е�Key
* �������:
*               NULL
* �� �� ֵ:     
*               RSP_RT_SUCCESS:         �ɹ�
*               ������                  ������
* ��������:                                                              
* ����˵��:                                                              
*               ��module��code�����ڣ�Ҳ������RSP_RT_SUCCESS
* �޸ļ�¼:                                                              
*    �޸�����          �汾��        �޸���        �޸�����                  
* -------------------------------------------------------------------------- 
*   2014-3-17           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_AM_UnRegister( RSP_HANDLE handle, int code );

/*<FUNC+>**********************************************************************
* ��������:     RSP_AM_Update
* ��������:     ��amģ�����code��info 
* �������: 
*               RSP_HANDLE  handle      AMģ����
*               int code                ��ֵ���е�Key
*               const char *info        ��ֵ���е�value
* �������:
*               NULL
* �� �� ֵ:     
*               RSP_RT_SUCCESS:         �ɹ�
*               ������                  ������
* ��������:                                                              
* ����˵��:                                                              
*               ����е�info����Ϊ�ֲ�����
*               ��key�����ڣ�����module����key-value
* �޸ļ�¼:                                                              
*    �޸�����          �汾��        �޸���        �޸�����                  
* -------------------------------------------------------------------------- 
*   2014-3-17           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_AM_Update( RSP_HANDLE handle, int code, const char *info );

/*<FUNC+>**********************************************************************
* ��������:     RSP_AM_Find
* ��������:     ����am��key��Ӧ��value
* �������: 
*               RSP_HANDLE  handle      AMģ����
*               int code                ��ֵ���е�Key
* �������:
*               const char **info       ָ���ֵ���е�valueָ��
* �� �� ֵ:     
*               RSP_RT_SUCCESS:         �ɹ�
*               ������                  ������
* ��������:                                                              
* ����˵��:                                                              
* �޸ļ�¼:                                                              
*    �޸�����          �汾��        �޸���        �޸�����                  
* -------------------------------------------------------------------------- 
*   2014-3-17           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_AM_Find( RSP_HANDLE handle, int code, const char **info );

/*<FUNC+>**********************************************************************
* ��������:     RSP_AM_Check
* ��������:     ���am��ָ��key�Ƿ����
* �������: 
*               RSP_HANDLE  handle      AMģ����
*               int code                ��ֵ���е�Key
* �������:
*               int *pResult            ָʾcode�Ƿ����
*                                       1: ���ڣ� 0�� ������
* �� �� ֵ:     
*               RSP_RT_SUCCESS:         �ɹ�
*               ������                  ������
* ��������:                                                              
* ����˵��:                                                              
* �޸ļ�¼:                                                              
*    �޸�����          �汾��        �޸���        �޸�����                  
* -------------------------------------------------------------------------- 
*   2014-3-17           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_AM_Check( RSP_HANDLE handle, int code, int *pResult );

/*<FUNC+>**********************************************************************
* ��������:     RSP_AM_Size
* ��������:     ��ȡamģ�鵱ǰkey-value�Ĺ�ģ 
* �������: 
*               RSP_HANDLE handle       AMģ����
* �������:
*               int *pSize              amģ�鵱ǰkey-value�Ĺ�ģ
* �� �� ֵ:     
*               RSP_RT_SUCCESS:         �ɹ�
*               ������                  ������
* ��������:                                                              
* ����˵��:                                                              
* �޸ļ�¼:                                                              
*    �޸�����          �汾��        �޸���        �޸�����                  
* -------------------------------------------------------------------------- 
*   2014-3-17           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_AM_Size( RSP_HANDLE handle, int *pSize );

//int RSP_AM_Foreach( RSP_HANDLE handle, RSP_AM_Func func, RSP_AM_POINTER *data );

/*<FUNC+>**********************************************************************
* ��������:     RSP_AM_PostCode
* ��������:     ��amģ��Ͷ��code 
* �������: 
*               RSP_HANDLE handle       AMģ����
*               int code                key
* �������:
*               NULL
* �� �� ֵ:     
*               RSP_RT_SUCCESS:         �ɹ�
*               ������                  ������
* ��������:                                                              
* ����˵��:                                                              
*               ����post code�Ĵ�С���ܵ�RSP_AM_Init���bufSize������
* �޸ļ�¼:                                                              
*    �޸�����          �汾��        �޸���        �޸�����                  
* -------------------------------------------------------------------------- 
*   2014-3-17           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_AM_PostCode( RSP_HANDLE handle, int code );

/*<FUNC+>**********************************************************************
* ��������:     RSP_AM_GetCurrentInfo
* ��������:     ��ȡ��ǰͶ�ݵ�code����Ӧ��info
* �������: 
*               RSP_HANDLE handle       AMģ����
* �������:
*               const char **info       ָ���ֵ���е�valueָ��
* �� �� ֵ:     
*               RSP_RT_SUCCESS:         �ɹ�
*               ������                  ������
* ��������:                                                              
* ����˵��:                                                              
*               ��Ҫ���ϻ�ȡͶ�ݵ�infoʱ����Ҫ���ȵ���RSP_AM_GetCurrentInfoһ�Σ�
*               ��Ҫ���ϻ�ȡͶ�ݵ�infoʱ����Ҫ���ȵ���RSP_AM_GetCurrentInfoһ�Σ�
*               ����postcode����ʱ���ýӿ��Զ����¼���code���Ӧ��info
* �޸ļ�¼:                                                              
*    �޸�����          �汾��        �޸���        �޸�����                  
* -------------------------------------------------------------------------- 
*   2014-3-17           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_AM_GetCurrentInfo( RSP_HANDLE handle, const char **info );

/*<FUNC+>**********************************************************************
* ��������:     RSP_AM_GetPrevInfo
* ��������:     ��ȡ��һ��Ͷ�ݵ�code����Ӧ��info
* �������: 
*               RSP_HANDLE handle       AMģ����
* �������:
*               const char **info       ָ���ֵ���е�valueָ��
* �� �� ֵ:     
*               RSP_RT_SUCCESS:         �ɹ�
*               ������                  ������
* ��������:                                                              
* ����˵��:                                                              
*               ��Ҫ���ϻ�ȡͶ�ݵ�infoʱ����Ҫ���ȵ���RSP_AM_GetCurrentInfoһ�Σ�
*               �ٵ���RSP_AM_GetPrevInfo
* �޸ļ�¼:                                                              
*    �޸�����          �汾��        �޸���        �޸�����                  
* -------------------------------------------------------------------------- 
*   2014-3-17           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_AM_GetPrevInfo( RSP_HANDLE handle, const char **info );

/*<FUNC+>**********************************************************************
* ��������:     RSP_AM_GetNextInfo
* ��������:     ��ȡ��һ��Ͷ�ݵ�code����Ӧ��info
* �������: 
*               RSP_HANDLE handle       AMģ����
* �������:
*               const char **info       ָ���ֵ���е�valueָ��
* �� �� ֵ:     
*               RSP_RT_SUCCESS:         �ɹ�
*               ������                  ������
* ��������:                                                              
* ����˵��:                                                              
*               ��Ҫ���»�ȡͶ�ݵ�infoʱ����Ҫ���ȵ���RSP_AM_GetCurrentInfoһ�Σ�
*               �ٵ���RSP_AM_GetNextInfo
* �޸ļ�¼:                                                              
*    �޸�����          �汾��        �޸���        �޸�����                  
* -------------------------------------------------------------------------- 
*   2014-3-17           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_AM_GetNextInfo( RSP_HANDLE handle, const char **info );

/*<FUNC+>**********************************************************************
* ��������:     RSP_AM_ClearAllInfo
* ��������:     �����ǰbuf�����е�postcode
* �������: 
*               RSP_HANDLE handle     AMģ����
* �������:
*               NULL
* �� �� ֵ:     
*               RSP_RT_SUCCESS:         �ɹ�
*               ������                  ������
* ��������:                                                              
* ����˵��:                                                              
* �޸ļ�¼:                                                              
*    �޸�����          �汾��        �޸���        �޸�����                  
* -------------------------------------------------------------------------- 
*   2014-3-17           V1.0        QianYizhou      create
*<FUNC->**********************************************************************/
int RSP_AM_ClearAllInfo( RSP_HANDLE handle );


#ifdef  __cplusplus
}
#endif//__cplusplus

#endif /* end of include guard: __RSP_AM_IF_H */
