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

// Function: sub_002C5A00
// Address: 0x2c5a00 - 0x2c5a28
void sub_002C5A00_0x2c5a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5A00_0x2c5a00");
#endif

    ctx->pc = 0x2c5a00u;

    // 0x2c5a00: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2c5a00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c5a04: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2c5a04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2c5a08: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2c5a08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2c5a0c: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x2c5a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x2c5a10: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x2c5a10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2c5a14: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x2c5a14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x2c5a18: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x2c5a18u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2c5a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A1Cu;
        // 0x2c5a20: 0x7c830030  sq          $v1, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5A24u;
    // 0x2c5a24: 0x0  nop
    ctx->pc = 0x2c5a24u;
    // NOP
    ctx->pc = 0x2c5a28u;
}
