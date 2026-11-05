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

// Function: sub_0012D1A8
// Address: 0x12d1a8 - 0x12d1c8
void sub_0012D1A8_0x12d1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D1A8_0x12d1a8");
#endif

    switch (ctx->pc) {
        case 0x12d1b8u: goto label_12d1b8;
        default: break;
    }

    ctx->pc = 0x12d1a8u;

    // 0x12d1a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d1ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d1b0: 0xc04c630  jal         func_1318C0
    ctx->pc = 0x12D1B0u;
    SET_GPR_U32(ctx, 31, 0x12D1B8u);
    ctx->pc = 0x12D1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D1B0u;
    // 0x12d1b4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1318C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1318C0u, 0x12D1B0u, 0x12D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D1B8u;
label_12d1b8:
    // 0x12d1b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x12D1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D1BCu;
        // 0x12d1c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D1C4u;
    // 0x12d1c4: 0x0  nop
    ctx->pc = 0x12d1c4u;
    // NOP
    ctx->pc = 0x12d1c8u;
}
