/*
 * Copyright (c) 2014-2016, Freescale Semiconductor, Inc.
 * Copyright 2016 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/*
 * Generated by erpcgen 1.8.0 on Thu Oct  8 16:38:34 2020.
 *
 * AUTOGENERATED - DO NOT EDIT
 */


#if !defined(_erpc_matrix_multiply_server_h_)
#define _erpc_matrix_multiply_server_h_

#ifdef __cplusplus
#include "erpc_server.h"
#include "erpc_codec.h"
extern "C"
{
#include "erpc_matrix_multiply.h"
#include <stdint.h>
#include <stdbool.h>
}

#if 10801 != ERPC_VERSION_NUMBER
#error "The generated shim code version is different to the rest of eRPC code."
#endif


/*!
 * @brief Service subclass for MatrixMultiplyService.
 */
class MatrixMultiplyService_service : public erpc::Service
{
public:
    MatrixMultiplyService_service() : Service(kMatrixMultiplyService_service_id) {}

    /*! @brief Call the correct server shim based on method unique ID. */
    virtual erpc_status_t handleInvocation(uint32_t methodId, uint32_t sequence, erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory);

private:
    /*! @brief Server shim for erpcMatrixMultiply of MatrixMultiplyService interface. */
    erpc_status_t erpcMatrixMultiply_shim(erpc::Codec * codec, erpc::MessageBufferFactory *messageFactory, uint32_t sequence);
};

extern "C" {
#else
#include "erpc_matrix_multiply.h"
#endif // __cplusplus

typedef void * erpc_service_t;

erpc_service_t create_MatrixMultiplyService_service(void);

void destroy_MatrixMultiplyService_service(void);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _erpc_matrix_multiply_server_h_
