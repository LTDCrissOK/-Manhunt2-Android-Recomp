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

// Function: sub_003D4A04
// Address: 0x3d4a04 - 0x3d4a0c
void sub_003D4A04_0x3d4a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4A04_0x3d4a04");
#endif

    ctx->pc = 0x3d4a04u;

    // 0x3d4a04: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x3D4A04u;
    {
        const bool branch_taken_0x3d4a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4a04) {
            ctx->pc = 0x3D49B8u;
            return;
        }
    }
    ctx->pc = 0x3D4A0Cu;
}
