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

// Function: sub_001084A0
// Address: 0x1084a0 - 0x1084d8
void sub_001084A0_0x1084a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001084A0_0x1084a0");
#endif

    switch (ctx->pc) {
        case 0x1084c8u: goto label_1084c8;
        default: break;
    }

    ctx->pc = 0x1084a0u;

    // 0x1084a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1084a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1084a4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1084a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1084a8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1084a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1084ac: 0x24428738  addiu       $v0, $v0, -0x78C8
    ctx->pc = 0x1084acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936376));
    // 0x1084b0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1084B0u;
    {
        const bool branch_taken_0x1084b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1084B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084B0u;
        // 0x1084b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084b0) {
            ctx->pc = 0x1084C8u;
            goto label_1084c8;
        }
    }
    ctx->pc = 0x1084B8u;
    // 0x1084b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1084B8u;
    {
        const bool branch_taken_0x1084b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1084BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084B8u;
        // 0x1084bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1084b8) {
            ctx->pc = 0x1084CCu;
            goto label_1084cc;
        }
    }
    ctx->pc = 0x1084C0u;
    // 0x1084c0: 0xc045e7a  jal         func_1179E8
    ctx->pc = 0x1084C0u;
    SET_GPR_U32(ctx, 31, 0x1084C8u);
    ctx->pc = 0x1084C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1084C0u;
    // 0x1084c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1179E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1179E8u, 0x1084C0u, 0x1084C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1084C8u;
label_1084c8:
    // 0x1084c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1084c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1084cc:
    // 0x1084cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1084CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1084D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1084CCu;
        // 0x1084d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1084CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1084D4u;
    // 0x1084d4: 0x0  nop
    ctx->pc = 0x1084d4u;
    // NOP
    ctx->pc = 0x1084d8u;
}
