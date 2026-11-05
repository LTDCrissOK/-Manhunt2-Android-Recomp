#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D4AF8
// Address: 0x3d4af8 - 0x3d4b00
void sub_003D4AF8_0x3d4af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4AF8_0x3d4af8");
#endif

    ctx->pc = 0x3d4af8u;

    // 0x3d4af8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x3D4AF8u;
    {
        const bool branch_taken_0x3d4af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4af8) {
            ctx->pc = 0x3D4AB8u;
            return;
        }
    }
    ctx->pc = 0x3D4B00u;
}
