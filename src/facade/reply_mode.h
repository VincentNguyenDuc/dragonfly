// Copyright 2025, DragonflyDB authors.  All rights reserved.
// See LICENSE for licensing terms.
//

#pragma once

#include <cstdint>

namespace facade {

// Reply mode allows filtering replies.
enum class ReplyMode : uint8_t {
  NONE,      // No replies are recorded
  ONLY_ERR,  // Only errors are recorded
  FULL       // All replies are recorded
};

class RedisReplyBuilder;

}  // namespace facade
