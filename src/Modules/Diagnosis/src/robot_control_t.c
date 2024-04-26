/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by lcm-gen
 **/

#include <string.h>
#include "robot_control_t.h"

static int __robot_control_t_hash_computed;
static int64_t __robot_control_t_hash;

int64_t __robot_control_t_hash_recursive(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __robot_control_t_get_hash)
            return 0;

    const __lcm_hash_ptr cp = { p, (void*)__robot_control_t_get_hash };
    (void) cp;

    int64_t hash = 0x38f63251f9863f70LL
         + __int64_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __int8_t_hash_recursive(&cp)
         + __string_hash_recursive(&cp)
         + __int64_t_hash_recursive(&cp)
         + __byte_hash_recursive(&cp)
        ;

    return (hash<<1) + ((hash>>63)&1);
}

int64_t __robot_control_t_get_hash(void)
{
    if (!__robot_control_t_hash_computed) {
        __robot_control_t_hash = __robot_control_t_hash_recursive(NULL);
        __robot_control_t_hash_computed = 1;
    }

    return __robot_control_t_hash;
}

int __robot_control_t_encode_array(void *buf, int offset, int maxlen, const robot_control_t *p, int elements)
{
    int pos = 0, thislen, element;

    for (element = 0; element < elements; element++) {

        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].utime), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].commandid), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].robotid), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].ndparams), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, p[element].dparams, p[element].ndparams);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].niparams), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, p[element].iparams, p[element].niparams);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].nsparams), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __string_encode_array(buf, offset + pos, maxlen - pos, p[element].sparams, p[element].nsparams);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].nbparams), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __byte_encode_array(buf, offset + pos, maxlen - pos, p[element].bparams, p[element].nbparams);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int robot_control_t_encode(void *buf, int offset, int maxlen, const robot_control_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __robot_control_t_get_hash();

    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    thislen = __robot_control_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int __robot_control_t_encoded_array_size(const robot_control_t *p, int elements)
{
    int size = 0, element;
    for (element = 0; element < elements; element++) {

        size += __int64_t_encoded_array_size(&(p[element].utime), 1);

        size += __int8_t_encoded_array_size(&(p[element].commandid), 1);

        size += __int8_t_encoded_array_size(&(p[element].robotid), 1);

        size += __int8_t_encoded_array_size(&(p[element].ndparams), 1);

        size += __double_encoded_array_size(p[element].dparams, p[element].ndparams);

        size += __int8_t_encoded_array_size(&(p[element].niparams), 1);

        size += __int8_t_encoded_array_size(p[element].iparams, p[element].niparams);

        size += __int8_t_encoded_array_size(&(p[element].nsparams), 1);

        size += __string_encoded_array_size(p[element].sparams, p[element].nsparams);

        size += __int64_t_encoded_array_size(&(p[element].nbparams), 1);

        size += __byte_encoded_array_size(p[element].bparams, p[element].nbparams);

    }
    return size;
}

int robot_control_t_encoded_size(const robot_control_t *p)
{
    return 8 + __robot_control_t_encoded_array_size(p, 1);
}

int __robot_control_t_decode_array(const void *buf, int offset, int maxlen, robot_control_t *p, int elements)
{
    int pos = 0, thislen, element;

    for (element = 0; element < elements; element++) {

        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].utime), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].commandid), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].robotid), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].ndparams), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].dparams = (double*) lcm_malloc(sizeof(double) * p[element].ndparams);
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, p[element].dparams, p[element].ndparams);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].niparams), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].iparams = (int8_t*) lcm_malloc(sizeof(int8_t) * p[element].niparams);
        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, p[element].iparams, p[element].niparams);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int8_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].nsparams), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].sparams = (char**) lcm_malloc(sizeof(char*) * p[element].nsparams);
        thislen = __string_decode_array(buf, offset + pos, maxlen - pos, p[element].sparams, p[element].nsparams);
        if (thislen < 0) return thislen; else pos += thislen;

        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].nbparams), 1);
        if (thislen < 0) return thislen; else pos += thislen;

        p[element].bparams = (uint8_t*) lcm_malloc(sizeof(uint8_t) * p[element].nbparams);
        thislen = __byte_decode_array(buf, offset + pos, maxlen - pos, p[element].bparams, p[element].nbparams);
        if (thislen < 0) return thislen; else pos += thislen;

    }
    return pos;
}

int __robot_control_t_decode_array_cleanup(robot_control_t *p, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {

        __int64_t_decode_array_cleanup(&(p[element].utime), 1);

        __int8_t_decode_array_cleanup(&(p[element].commandid), 1);

        __int8_t_decode_array_cleanup(&(p[element].robotid), 1);

        __int8_t_decode_array_cleanup(&(p[element].ndparams), 1);

        __double_decode_array_cleanup(p[element].dparams, p[element].ndparams);
        if (p[element].dparams) free(p[element].dparams);

        __int8_t_decode_array_cleanup(&(p[element].niparams), 1);

        __int8_t_decode_array_cleanup(p[element].iparams, p[element].niparams);
        if (p[element].iparams) free(p[element].iparams);

        __int8_t_decode_array_cleanup(&(p[element].nsparams), 1);

        __string_decode_array_cleanup(p[element].sparams, p[element].nsparams);
        if (p[element].sparams) free(p[element].sparams);

        __int64_t_decode_array_cleanup(&(p[element].nbparams), 1);

        __byte_decode_array_cleanup(p[element].bparams, p[element].nbparams);
        if (p[element].bparams) free(p[element].bparams);

    }
    return 0;
}

int robot_control_t_decode(const void *buf, int offset, int maxlen, robot_control_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __robot_control_t_get_hash();

    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;

    thislen = __robot_control_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;

    return pos;
}

int robot_control_t_decode_cleanup(robot_control_t *p)
{
    return __robot_control_t_decode_array_cleanup(p, 1);
}

int __robot_control_t_clone_array(const robot_control_t *p, robot_control_t *q, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {

        __int64_t_clone_array(&(p[element].utime), &(q[element].utime), 1);

        __int8_t_clone_array(&(p[element].commandid), &(q[element].commandid), 1);

        __int8_t_clone_array(&(p[element].robotid), &(q[element].robotid), 1);

        __int8_t_clone_array(&(p[element].ndparams), &(q[element].ndparams), 1);

        q[element].dparams = (double*) lcm_malloc(sizeof(double) * q[element].ndparams);
        __double_clone_array(p[element].dparams, q[element].dparams, p[element].ndparams);

        __int8_t_clone_array(&(p[element].niparams), &(q[element].niparams), 1);

        q[element].iparams = (int8_t*) lcm_malloc(sizeof(int8_t) * q[element].niparams);
        __int8_t_clone_array(p[element].iparams, q[element].iparams, p[element].niparams);

        __int8_t_clone_array(&(p[element].nsparams), &(q[element].nsparams), 1);

        q[element].sparams = (char**) lcm_malloc(sizeof(char*) * q[element].nsparams);
        __string_clone_array(p[element].sparams, q[element].sparams, p[element].nsparams);

        __int64_t_clone_array(&(p[element].nbparams), &(q[element].nbparams), 1);

        q[element].bparams = (uint8_t*) lcm_malloc(sizeof(uint8_t) * q[element].nbparams);
        __byte_clone_array(p[element].bparams, q[element].bparams, p[element].nbparams);

    }
    return 0;
}

robot_control_t *robot_control_t_copy(const robot_control_t *p)
{
    robot_control_t *q = (robot_control_t*) malloc(sizeof(robot_control_t));
    __robot_control_t_clone_array(p, q, 1);
    return q;
}

void robot_control_t_destroy(robot_control_t *p)
{
    __robot_control_t_decode_array_cleanup(p, 1);
    free(p);
}

int robot_control_t_publish(lcm_t *lc, const char *channel, const robot_control_t *p)
{
      int max_data_size = robot_control_t_encoded_size (p);
      uint8_t *buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = robot_control_t_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = lcm_publish (lc, channel, buf, data_size);
      free (buf);
      return status;
}

struct _robot_control_t_subscription_t {
    robot_control_t_handler_t user_handler;
    void *userdata;
    lcm_subscription_t *lc_h;
};
static
void robot_control_t_handler_stub (const lcm_recv_buf_t *rbuf,
                            const char *channel, void *userdata)
{
    int status;
    robot_control_t p;
    memset(&p, 0, sizeof(robot_control_t));
    status = robot_control_t_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding robot_control_t!!!\n", status);
        return;
    }

    robot_control_t_subscription_t *h = (robot_control_t_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    robot_control_t_decode_cleanup (&p);
}

robot_control_t_subscription_t* robot_control_t_subscribe (lcm_t *lcm,
                    const char *channel,
                    robot_control_t_handler_t f, void *userdata)
{
    robot_control_t_subscription_t *n = (robot_control_t_subscription_t*)
                       malloc(sizeof(robot_control_t_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->lc_h = lcm_subscribe (lcm, channel,
                                 robot_control_t_handler_stub, n);
    if (n->lc_h == NULL) {
        fprintf (stderr,"couldn't reg robot_control_t LCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int robot_control_t_subscription_set_queue_capacity (robot_control_t_subscription_t* subs,
                              int num_messages)
{
    return lcm_subscription_set_queue_capacity (subs->lc_h, num_messages);
}

int robot_control_t_unsubscribe(lcm_t *lcm, robot_control_t_subscription_t* hid)
{
    int status = lcm_unsubscribe (lcm, hid->lc_h);
    if (0 != status) {
        fprintf(stderr,
           "couldn't unsubscribe robot_control_t_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

