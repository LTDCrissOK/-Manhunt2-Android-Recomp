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

// Function: sub_0011CBC0
// Address: 0x11cbc0 - 0x11cbf8
void sub_0011CBC0_0x11cbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CBC0_0x11cbc0");
#endif

    switch (ctx->pc) {
        case 0x11cbdcu: goto label_11cbdc;
        case 0x11cbe8u: goto label_11cbe8;
        default: break;
    }

    ctx->pc = 0x11cbc0u;

    // 0x11cbc0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x11cbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x11cbc4: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x11cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x11cbc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11cbc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbcc: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x11cbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
    // 0x11cbd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11cbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbd4: 0xc09e062  jal         func_278188
    ctx->pc = 0x11CBD4u;
    SET_GPR_U32(ctx, 31, 0x11CBDCu);
    ctx->pc = 0x11CBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBD4u;
    // 0x11cbd8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x11CBD4u, 0x11CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CBDCu;
label_11cbdc:
    // 0x11cbdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11cbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cbe0: 0xc046f70  jal         func_11BDC0
    ctx->pc = 0x11CBE0u;
    SET_GPR_U32(ctx, 31, 0x11CBE8u);
    ctx->pc = 0x11CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBE0u;
    // 0x11cbe4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BDC0u, 0x11CBE0u, 0x11CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CBE8u;
label_11cbe8:
    // 0x11cbe8: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x11cbe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x11cbec: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x11cbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x11cbf0: 0x3e00008  jr          $ra
    ctx->pc = 0x11CBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBF0u;
        // 0x11cbf4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CBF8u;
}
