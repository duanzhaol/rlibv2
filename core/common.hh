/**
 * This file provides common utilities and definiation of RLib
 */

#pragma once

#include <cstdint>
#include <tuple>
#include <infiniband/verbs.h>

#include "./utils/option.hh"
#include "./utils/logging.hh"

namespace rdmaio
{

// some constants definiations
// connection status
enum IOStatus
{
  SUCC = 0,
  TIMEOUT = 1,
  WRONG_ARG = 2,
  ERR = 3,
  NOT_READY = 4,
  UNKNOWN = 5,
  WRONG_ID = 6,
  WRONG_REPLY = 7,
  NOT_CONNECT = 8,
  EJECT = 9,
  REPEAT_CREATE = 10
};

using u64 = uint64_t;
using u32 = uint32_t;
using u16 = uint16_t;
using i64 = int64_t;
using u8 = uint8_t;
using i8 = int8_t;
using usize = unsigned int;

/**
 * Programmer can register simple request handler to RdmaCtrl.
 * The request can be bound to an ID.
 * This function serves as the pre-link part of the system.
 * So only simple function request handling is supported.
 * For example, we use this to serve the QP and MR information to other nodes.
 */
enum RESERVED_REQ_ID
{
  REQ_RC = 0,
  REQ_UD = 1,
  REQ_UC = 2,
  REQ_MR = 3,
  FREE = 4
};

enum
{
  MAX_RDMA_INLINE_SIZE = 64
};

} // namespace rdmaio
