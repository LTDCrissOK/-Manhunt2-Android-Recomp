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

// Function: sub_003D48E0
// Address: 0x3d48e0 - 0x3d48e8
void sub_003D48E0_0x3d48e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D48E0_0x3d48e0");
#endif

    ctx->pc = 0x3d48e0u;

    // 0x3d48e0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x3D48E0u;
    {
        const bool branch_taken_0x3d48e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d48e0) {
            ctx->pc = 0x3D48A8u;
            return;
        }
    }
    ctx->pc = 0x3D48E8u;
}
