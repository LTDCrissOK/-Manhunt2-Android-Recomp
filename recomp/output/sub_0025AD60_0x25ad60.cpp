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

// Function: sub_0025AD60
// Address: 0x25ad60 - 0x25ad70
void sub_0025AD60_0x25ad60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AD60_0x25ad60");
#endif

    ctx->pc = 0x25ad60u;

    // 0x25ad60: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x25ad60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x25ad64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x25ad64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ad68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25AD68u;
    {
        const bool branch_taken_0x25ad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ad68) {
            ctx->pc = 0x25AD7Cu;
            return;
        }
    }
    ctx->pc = 0x25AD70u;
}
