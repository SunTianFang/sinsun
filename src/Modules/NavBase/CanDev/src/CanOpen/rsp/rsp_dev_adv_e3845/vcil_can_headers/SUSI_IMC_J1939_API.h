#ifndef _SUSI_IMC_J1939_API_H
#define _SUSI_IMC_J1939_API_H

#include "SUSI_IMC_Types.h"

DLLAPI USHORT SUSI_IMC_J1939_Read ( IN UINT port, OUT PIMC_J1939_MSG_OBJECT object );
DLLAPI USHORT SUSI_IMC_J1939_Write ( IN UINT port, IN PIMC_J1939_MSG_OBJECT object );
DLLAPI USHORT SUSI_IMC_J1939_SetEvent( IN UINT port, void* hEvent );
DLLAPI USHORT SUSI_IMC_J1939_AddMessageFilter(IN UINT port, UINT pgn );
DLLAPI USHORT SUSI_IMC_J1939_GetMessageFilter(IN UINT port, OUT UINT* total, UINT* pgn );
DLLAPI USHORT SUSI_IMC_J1939_RemoveMessageFilter(IN UINT port, UINT pgn );
DLLAPI USHORT SUSI_IMC_J1939_RemoveAllMessageFilter ( IN UINT port );
DLLAPI USHORT SUSI_IMC_J1939_SetTransmitConfig(IN UINT port, IN IMC_J1939_TRANSMIT_CONFIG transmit_config);
DLLAPI USHORT SUSI_IMC_J1939_GetTransmitConfig(IN UINT port, OUT PIMC_J1939_TRANSMIT_CONFIG ptransmit_config);

#endif
