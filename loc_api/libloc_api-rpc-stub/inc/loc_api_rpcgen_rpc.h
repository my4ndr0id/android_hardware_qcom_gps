/* Copyright (c) 2011, Code Aurora Forum. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 *     * Neither the name of Code Aurora Forum, Inc. nor the names of its
 *       contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _LOC_API_RPC_H_RPCGEN
#define _LOC_API_RPC_H_RPCGEN

#include "librpc.h"
#include "commondefs_rpcgen_rpc.h"
#include "loc_api_rpcgen_common_rpc.h"

#include <pthread.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef struct {
    u_int rpc_loc_api_api_versions_return_type_len;
    rpc_uint32 *rpc_loc_api_api_versions_return_type_val;
} rpc_loc_api_api_versions_return_type;

typedef rpc_uint32 rpc_loc_event_cb_f_type;

struct rpc_loc_open_args {
    rpc_loc_event_mask_type event_reg_mask;
    rpc_loc_event_cb_f_type event_callback;
};
typedef struct rpc_loc_open_args rpc_loc_open_args;

struct rpc_loc_close_args {
    rpc_loc_client_handle_type handle;
};
typedef struct rpc_loc_close_args rpc_loc_close_args;

struct rpc_loc_start_fix_args {
    rpc_loc_client_handle_type handle;
};
typedef struct rpc_loc_start_fix_args rpc_loc_start_fix_args;

struct rpc_loc_stop_fix_args {
    rpc_loc_client_handle_type handle;
};
typedef struct rpc_loc_stop_fix_args rpc_loc_stop_fix_args;

struct rpc_loc_ioctl_args {
    rpc_loc_client_handle_type handle;
    rpc_loc_ioctl_e_type ioctl_type;
    rpc_loc_ioctl_data_u_type *ioctl_data;
};
typedef struct rpc_loc_ioctl_args rpc_loc_ioctl_args;

struct rpc_loc_api_api_version_s_args {
    rpc_boolean len_not_null;
};
typedef struct rpc_loc_api_api_version_s_args rpc_loc_api_api_version_s_args;

struct rpc_loc_api_rpc_glue_code_info_remote_rets {
    rpc_uint32 toolvers;
    rpc_uint32 features;
    rpc_uint32 proghash;
    rpc_uint32 cbproghash;
};
typedef struct rpc_loc_api_rpc_glue_code_info_remote_rets rpc_loc_api_rpc_glue_code_info_remote_rets;

struct rpc_loc_open_rets {
    rpc_loc_client_handle_type loc_open_result;
};
typedef struct rpc_loc_open_rets rpc_loc_open_rets;

struct rpc_loc_close_rets {
    rpc_int32 loc_close_result;
};
typedef struct rpc_loc_close_rets rpc_loc_close_rets;

struct rpc_loc_start_fix_rets {
    rpc_int32 loc_start_fix_result;
};
typedef struct rpc_loc_start_fix_rets rpc_loc_start_fix_rets;

struct rpc_loc_stop_fix_rets {
    rpc_int32 loc_stop_fix_result;
};
typedef struct rpc_loc_stop_fix_rets rpc_loc_stop_fix_rets;

struct rpc_loc_ioctl_rets {
    rpc_int32 loc_ioctl_result;
};
typedef struct rpc_loc_ioctl_rets rpc_loc_ioctl_rets;

struct rpc_loc_api_api_versions_rets {
    rpc_loc_api_api_versions_return_type loc_api_api_versions_result;
    rpc_uint32 *len;
};
typedef struct rpc_loc_api_api_versions_rets rpc_loc_api_api_versions_rets;
#define LOC_APIVERS 0x00050001

#define LOC_APIPROG 0x3000008c
#define LOC_APIVERS_0001 0x00050001

#if defined(__STDC__) || defined(__cplusplus)
#define rpc_loc_api_null 0
extern  enum clnt_stat rpc_loc_api_null_0x00050001(void *, void *, CLIENT *);
extern  bool_t rpc_loc_api_null_0x00050001_svc(void *, void *, struct svc_req *);
#define rpc_loc_api_rpc_glue_code_info_remote 1
extern  enum clnt_stat rpc_loc_api_rpc_glue_code_info_remote_0x00050001(void *, rpc_loc_api_rpc_glue_code_info_remote_rets *, CLIENT *);
extern  bool_t rpc_loc_api_rpc_glue_code_info_remote_0x00050001_svc(void *, rpc_loc_api_rpc_glue_code_info_remote_rets *, struct svc_req *);
#define rpc_loc_open 2
extern  enum clnt_stat rpc_loc_open_0x00050001(rpc_loc_open_args *, rpc_loc_open_rets *, CLIENT *);
extern  bool_t rpc_loc_open_0x00050001_svc(rpc_loc_open_args *, rpc_loc_open_rets *, struct svc_req *);
#define rpc_loc_close 3
extern  enum clnt_stat rpc_loc_close_0x00050001(rpc_loc_close_args *, rpc_loc_close_rets *, CLIENT *);
extern  bool_t rpc_loc_close_0x00050001_svc(rpc_loc_close_args *, rpc_loc_close_rets *, struct svc_req *);
#define rpc_loc_start_fix 4
extern  enum clnt_stat rpc_loc_start_fix_0x00050001(rpc_loc_start_fix_args *, rpc_loc_start_fix_rets *, CLIENT *);
extern  bool_t rpc_loc_start_fix_0x00050001_svc(rpc_loc_start_fix_args *, rpc_loc_start_fix_rets *, struct svc_req *);
#define rpc_loc_stop_fix 5
extern  enum clnt_stat rpc_loc_stop_fix_0x00050001(rpc_loc_stop_fix_args *, rpc_loc_stop_fix_rets *, CLIENT *);
extern  bool_t rpc_loc_stop_fix_0x00050001_svc(rpc_loc_stop_fix_args *, rpc_loc_stop_fix_rets *, struct svc_req *);
#define rpc_loc_ioctl 6
extern  enum clnt_stat rpc_loc_ioctl_0x00050001(rpc_loc_ioctl_args *, rpc_loc_ioctl_rets *, CLIENT *);
extern  bool_t rpc_loc_ioctl_0x00050001_svc(rpc_loc_ioctl_args *, rpc_loc_ioctl_rets *, struct svc_req *);
#define rpc_loc_api_api_versions 0xFFFFFFFF
extern  enum clnt_stat rpc_loc_api_api_versions_0x00050001(void *, rpc_loc_api_api_versions_rets *, CLIENT *);
extern  bool_t rpc_loc_api_api_versions_0x00050001_svc(void *, rpc_loc_api_api_versions_rets *, struct svc_req *);
extern int loc_apiprog_0x00050001_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define rpc_loc_api_null 0
extern  enum clnt_stat rpc_loc_api_null_0x00050001();
extern  bool_t rpc_loc_api_null_0x00050001_svc();
#define rpc_loc_api_rpc_glue_code_info_remote 1
extern  enum clnt_stat rpc_loc_api_rpc_glue_code_info_remote_0x00050001();
extern  bool_t rpc_loc_api_rpc_glue_code_info_remote_0x00050001_svc();
#define rpc_loc_open 2
extern  enum clnt_stat rpc_loc_open_0x00050001();
extern  bool_t rpc_loc_open_0x00050001_svc();
#define rpc_loc_close 3
extern  enum clnt_stat rpc_loc_close_0x00050001();
extern  bool_t rpc_loc_close_0x00050001_svc();
#define rpc_loc_start_fix 4
extern  enum clnt_stat rpc_loc_start_fix_0x00050001();
extern  bool_t rpc_loc_start_fix_0x00050001_svc();
#define rpc_loc_stop_fix 5
extern  enum clnt_stat rpc_loc_stop_fix_0x00050001();
extern  bool_t rpc_loc_stop_fix_0x00050001_svc();
#define rpc_loc_ioctl 6
extern  enum clnt_stat rpc_loc_ioctl_0x00050001();
extern  bool_t rpc_loc_ioctl_0x00050001_svc();
#define rpc_loc_api_api_versions 0xFFFFFFFF
extern  enum clnt_stat rpc_loc_api_api_versions_0x00050001();
extern  bool_t rpc_loc_api_api_versions_0x00050001_svc();
extern int loc_apiprog_0x00050001_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_rpc_loc_api_api_versions_return_type (XDR *, rpc_loc_api_api_versions_return_type*);
extern  bool_t xdr_rpc_loc_event_cb_f_type (XDR *, rpc_loc_event_cb_f_type*);
extern  bool_t xdr_rpc_loc_open_args (XDR *, rpc_loc_open_args*);
extern  bool_t xdr_rpc_loc_close_args (XDR *, rpc_loc_close_args*);
extern  bool_t xdr_rpc_loc_start_fix_args (XDR *, rpc_loc_start_fix_args*);
extern  bool_t xdr_rpc_loc_stop_fix_args (XDR *, rpc_loc_stop_fix_args*);
extern  bool_t xdr_rpc_loc_ioctl_args (XDR *, rpc_loc_ioctl_args*);
extern  bool_t xdr_rpc_loc_api_api_version_s_args (XDR *, rpc_loc_api_api_version_s_args*);
extern  bool_t xdr_rpc_loc_api_rpc_glue_code_info_remote_rets (XDR *, rpc_loc_api_rpc_glue_code_info_remote_rets*);
extern  bool_t xdr_rpc_loc_open_rets (XDR *, rpc_loc_open_rets*);
extern  bool_t xdr_rpc_loc_close_rets (XDR *, rpc_loc_close_rets*);
extern  bool_t xdr_rpc_loc_start_fix_rets (XDR *, rpc_loc_start_fix_rets*);
extern  bool_t xdr_rpc_loc_stop_fix_rets (XDR *, rpc_loc_stop_fix_rets*);
extern  bool_t xdr_rpc_loc_ioctl_rets (XDR *, rpc_loc_ioctl_rets*);
extern  bool_t xdr_rpc_loc_api_api_versions_rets (XDR *, rpc_loc_api_api_versions_rets*);

#else /* K&R C */
extern bool_t xdr_rpc_loc_api_api_versions_return_type ();
extern bool_t xdr_rpc_loc_event_cb_f_type ();
extern bool_t xdr_rpc_loc_open_args ();
extern bool_t xdr_rpc_loc_close_args ();
extern bool_t xdr_rpc_loc_start_fix_args ();
extern bool_t xdr_rpc_loc_stop_fix_args ();
extern bool_t xdr_rpc_loc_ioctl_args ();
extern bool_t xdr_rpc_loc_api_api_version_s_args ();
extern bool_t xdr_rpc_loc_api_rpc_glue_code_info_remote_rets ();
extern bool_t xdr_rpc_loc_open_rets ();
extern bool_t xdr_rpc_loc_close_rets ();
extern bool_t xdr_rpc_loc_start_fix_rets ();
extern bool_t xdr_rpc_loc_stop_fix_rets ();
extern bool_t xdr_rpc_loc_ioctl_rets ();
extern bool_t xdr_rpc_loc_api_api_versions_rets ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_LOC_API_RPC_H_RPCGEN */
