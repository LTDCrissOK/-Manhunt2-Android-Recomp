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

// Function: sub_003E26E0
// Address: 0x3e26e0 - 0x3e2710
void sub_003E26E0_0x3e26e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E26E0_0x3e26e0");
#endif

    switch (ctx->pc) {
        case 0x3e26fcu: goto label_3e26fc;
        default: break;
    }

    ctx->pc = 0x3e26e0u;

    // 0x3e26e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e26e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e26e4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e26e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e26e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e26e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e26ec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3e26ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e26f0: 0x24423388  addiu       $v0, $v0, 0x3388
    ctx->pc = 0x3e26f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13192));
    // 0x3e26f4: 0xc0a7622  jal         func_29D888
    ctx->pc = 0x3E26F4u;
    SET_GPR_U32(ctx, 31, 0x3E26FCu);
    ctx->pc = 0x3E26F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E26F4u;
    // 0x3e26f8: 0xac620278  sw          $v0, 0x278($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D888u, 0x3E26F4u, 0x3E26FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E26FCu;
label_3e26fc:
    // 0x3e26fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e26fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e2700: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2700u;
        // 0x3e2704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2708u;
    // 0x3e2708: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e2708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e270c: 0x0  nop
    ctx->pc = 0x3e270cu;
    // NOP
    ctx->pc = 0x3e2710u;
}
