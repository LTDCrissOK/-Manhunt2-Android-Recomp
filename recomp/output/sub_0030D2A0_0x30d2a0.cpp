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

// Function: sub_0030D2A0
// Address: 0x30d2a0 - 0x30d2d8
void sub_0030D2A0_0x30d2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D2A0_0x30d2a0");
#endif

    switch (ctx->pc) {
        case 0x30d2b0u: goto label_30d2b0;
        case 0x30d2c0u: goto label_30d2c0;
        default: break;
    }

    ctx->pc = 0x30d2a0u;

    // 0x30d2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30d2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30d2a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30d2a8: 0xc0c3482  jal         func_30D208
    ctx->pc = 0x30D2A8u;
    SET_GPR_U32(ctx, 31, 0x30D2B0u);
    ctx->pc = 0x30D208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D208u, 0x30D2A8u, 0x30D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D2B0u;
label_30d2b0:
    // 0x30d2b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30D2B0u;
    {
        const bool branch_taken_0x30d2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30d2b0) {
            ctx->pc = 0x30D2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30D2B0u;
            // 0x30d2b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30D2C8u;
            goto label_30d2c8;
        }
    }
    ctx->pc = 0x30D2B8u;
    // 0x30d2b8: 0xc0c31d0  jal         func_30C740
    ctx->pc = 0x30D2B8u;
    SET_GPR_U32(ctx, 31, 0x30D2C0u);
    ctx->pc = 0x30D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D2B8u;
    // 0x30d2bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x30D2B8u, 0x30D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D2C0u;
label_30d2c0:
    // 0x30d2c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30D2C0u;
    {
        const bool branch_taken_0x30d2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2C0u;
        // 0x30d2c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d2c0) {
            ctx->pc = 0x30D2CCu;
            goto label_30d2cc;
        }
    }
    ctx->pc = 0x30D2C8u;
label_30d2c8:
    // 0x30d2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30d2cc:
    // 0x30d2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x30D2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D2CCu;
        // 0x30d2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D2D4u;
    // 0x30d2d4: 0x0  nop
    ctx->pc = 0x30d2d4u;
    // NOP
    ctx->pc = 0x30d2d8u;
}
