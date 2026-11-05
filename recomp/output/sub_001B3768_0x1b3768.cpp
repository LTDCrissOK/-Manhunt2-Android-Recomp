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

// Function: sub_001B3768
// Address: 0x1b3768 - 0x1b37a8
void sub_001B3768_0x1b3768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3768_0x1b3768");
#endif

    switch (ctx->pc) {
        case 0x1b3780u: goto label_1b3780;
        case 0x1b378cu: goto label_1b378c;
        default: break;
    }

    ctx->pc = 0x1b3768u;

    // 0x1b3768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b3768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b376c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b3770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3774: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b3774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b3778: 0xc06faee  jal         func_1BEBB8
    ctx->pc = 0x1B3778u;
    SET_GPR_U32(ctx, 31, 0x1B3780u);
    ctx->pc = 0x1B377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3778u;
    // 0x1b377c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1B3778u, 0x1B3780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3780u;
label_1b3780:
    // 0x1b3780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3784: 0xc06cdea  jal         func_1B37A8
    ctx->pc = 0x1B3784u;
    SET_GPR_U32(ctx, 31, 0x1B378Cu);
    ctx->pc = 0x1B3788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3784u;
    // 0x1b3788: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x1B3784u, 0x1B378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B378Cu;
label_1b378c:
    // 0x1b378c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b378cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b3790: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b3790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b3794: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1b3794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1b3798: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b3798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b379c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1b379cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1b37a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B37A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B37A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B37A0u;
        // 0x1b37a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B37A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B37A8u;
}
