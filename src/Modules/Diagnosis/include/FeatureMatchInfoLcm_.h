/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <stdint.h>
#include <stdlib.h>
#include <lcm/lcm_coretypes.h>
#include <lcm/lcm.h>

#ifndef _FeatureMatchInfoLcm__h
#define _FeatureMatchInfoLcm__h

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _FeatureMatchInfoLcm_ FeatureMatchInfoLcm_;
struct _FeatureMatchInfoLcm_
{
    int32_t    type_;
    int32_t    result_;
    float      NewPstfX_;
    float      NewPstfY_;
    float      NewPstfAngle_;
    float      matchRatio_;
    int32_t    matchNum_;
    float      InitPstfX_;
    float      InitPstfY_;
    float      InitPstfAngle_;
    int32_t    nPoint_;
    float      *Point_;
    int32_t    nLine_;
    float      *Line_;
    int32_t    nPointPair_;
    float      *PointPair_;
    int32_t    nLinePair_;
    float      *LinePair_;
};

FeatureMatchInfoLcm_   *FeatureMatchInfoLcm__copy(const FeatureMatchInfoLcm_ *p);
void FeatureMatchInfoLcm__destroy(FeatureMatchInfoLcm_ *p);

typedef struct _FeatureMatchInfoLcm__subscription_t FeatureMatchInfoLcm__subscription_t;
typedef void(*FeatureMatchInfoLcm__handler_t)(const lcm_recv_buf_t *rbuf,
             const char *channel, const FeatureMatchInfoLcm_ *msg, void *user);

int FeatureMatchInfoLcm__publish(lcm_t *lcm, const char *channel, const FeatureMatchInfoLcm_ *p);
FeatureMatchInfoLcm__subscription_t* FeatureMatchInfoLcm__subscribe(lcm_t *lcm, const char *channel, FeatureMatchInfoLcm__handler_t f, void *userdata);
int FeatureMatchInfoLcm__unsubscribe(lcm_t *lcm, FeatureMatchInfoLcm__subscription_t* hid);
int FeatureMatchInfoLcm__subscription_set_queue_capacity(FeatureMatchInfoLcm__subscription_t* subs,
                              int num_messages);


int  FeatureMatchInfoLcm__encode(void *buf, int offset, int maxlen, const FeatureMatchInfoLcm_ *p);
int  FeatureMatchInfoLcm__decode(const void *buf, int offset, int maxlen, FeatureMatchInfoLcm_ *p);
int  FeatureMatchInfoLcm__decode_cleanup(FeatureMatchInfoLcm_ *p);
int  FeatureMatchInfoLcm__encoded_size(const FeatureMatchInfoLcm_ *p);

// LCM support functions. Users should not call these
int64_t __FeatureMatchInfoLcm__get_hash(void);
int64_t __FeatureMatchInfoLcm__hash_recursive(const __lcm_hash_ptr *p);
int     __FeatureMatchInfoLcm__encode_array(void *buf, int offset, int maxlen, const FeatureMatchInfoLcm_ *p, int elements);
int     __FeatureMatchInfoLcm__decode_array(const void *buf, int offset, int maxlen, FeatureMatchInfoLcm_ *p, int elements);
int     __FeatureMatchInfoLcm__decode_array_cleanup(FeatureMatchInfoLcm_ *p, int elements);
int     __FeatureMatchInfoLcm__encoded_array_size(const FeatureMatchInfoLcm_ *p, int elements);
int     __FeatureMatchInfoLcm__clone_array(const FeatureMatchInfoLcm_ *p, FeatureMatchInfoLcm_ *q, int elements);

#ifdef __cplusplus
}
#endif

#endif
