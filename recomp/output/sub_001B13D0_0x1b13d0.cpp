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

// Function: sub_001B13D0
// Address: 0x1b13d0 - 0x1b1410
void sub_001B13D0_0x1b13d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B13D0_0x1b13d0");
#endif

    switch (ctx->pc) {
        case 0x1b13e8u: goto label_1b13e8;
        case 0x1b13f8u: goto label_1b13f8;
        default: break;
    }

    ctx->pc = 0x1b13d0u;

    // 0x1b13d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b13d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b13d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b13d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b13d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b13d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b13dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b13dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13e0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B13E0u;
    SET_GPR_U32(ctx, 31, 0x1B13E8u);
    ctx->pc = 0x1B13E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13E0u;
    // 0x1b13e4: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B13E0u, 0x1B13E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13E8u;
label_1b13e8:
    // 0x1b13e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B13E8u;
    {
        const bool branch_taken_0x1b13e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b13e8) {
            ctx->pc = 0x1B13ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B13E8u;
            // 0x1b13ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B13FCu;
            goto label_1b13fc;
        }
    }
    ctx->pc = 0x1B13F0u;
    // 0x1b13f0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B13F0u;
    SET_GPR_U32(ctx, 31, 0x1B13F8u);
    ctx->pc = 0x1B13F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13F0u;
    // 0x1b13f4: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B13F0u, 0x1B13F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13F8u;
label_1b13f8:
    // 0x1b13f8: 0x8c420274  lw          $v0, 0x274($v0)
    ctx->pc = 0x1b13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_1b13fc:
    // 0x1b13fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b13fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1400: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b1400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b1404: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1404u;
        // 0x1b1408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B140Cu;
    // 0x1b140c: 0x0  nop
    ctx->pc = 0x1b140cu;
    // NOP
    ctx->pc = 0x1b1410u;
}
