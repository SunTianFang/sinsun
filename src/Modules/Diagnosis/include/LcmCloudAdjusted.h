/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <stdint.h>
#include <stdlib.h>
#include <lcm/lcm_coretypes.h>
#include <lcm/lcm.h>

#ifndef _LcmCloudAdjusted_h
#define _LcmCloudAdjusted_h

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _LcmCloudAdjusted LcmCloudAdjusted;
struct _LcmCloudAdjusted
{
    int32_t    nSize;
    float      *ptX_;
    float      *ptY_;
    int32_t    nIntensitySize;
    int32_t    *Intensity_;
    float      InitPstfX_;
    float      InitPstfY_;
    float      InitPstfAngle_;
};

LcmCloudAdjusted   *LcmCloudAdjusted_copy(const LcmCloudAdjusted *p);
void LcmCloudAdjusted_destroy(LcmCloudAdjusted *p);

typedef struct _LcmCloudAdjusted_subscription_t LcmCloudAdjusted_subscription_t;
typedef void(*LcmCloudAdjusted_handler_t)(const lcm_recv_buf_t *rbuf,
             const char *channel, const LcmCloudAdjusted *msg, void *user);

int LcmCloudAdjusted_publish(lcm_t *lcm, const char *channel, const LcmCloudAdjusted *p);
LcmCloudAdjusted_subscription_t* LcmCloudAdjusted_subscribe(lcm_t *lcm, const char *channel, LcmCloudAdjusted_handler_t f, void *userdata);
int LcmCloudAdjusted_unsubscribe(lcm_t *lcm, LcmCloudAdjusted_subscription_t* hid);
int LcmCloudAdjusted_subscription_set_queue_capacity(LcmCloudAdjusted_subscription_t* subs,
                              int num_messages);


int  LcmCloudAdjusted_encode(void *buf, int offset, int maxlen, const LcmCloudAdjusted *p);
int  LcmCloudAdjusted_decode(const void *buf, int offset, int maxlen, LcmCloudAdjusted *p);
int  LcmCloudAdjusted_decode_cleanup(LcmCloudAdjusted *p);
int  LcmCloudAdjusted_encoded_size(const LcmCloudAdjusted *p);

// LCM support functions. Users should not call these
int64_t __LcmCloudAdjusted_get_hash(void);
int64_t __LcmCloudAdjusted_hash_recursive(const __lcm_hash_ptr *p);
int     __LcmCloudAdjusted_encode_array(void *buf, int offset, int maxlen, const LcmCloudAdjusted *p, int elements);
int     __LcmCloudAdjusted_decode_array(const void *buf, int offset, int maxlen, LcmCloudAdjusted *p, int elements);
int     __LcmCloudAdjusted_decode_array_cleanup(LcmCloudAdjusted *p, int elements);
int     __LcmCloudAdjusted_encoded_array_size(const LcmCloudAdjusted *p, int elements);
int     __LcmCloudAdjusted_clone_array(const LcmCloudAdjusted *p, LcmCloudAdjusted *q, int elements);

#ifdef __cplusplus
}
#endif

#endif