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

// Function: sub_00319D88
// Address: 0x319d88 - 0x319dc0
void sub_00319D88_0x319d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319D88_0x319d88");
#endif

    switch (ctx->pc) {
        case 0x319d98u: goto label_319d98;
        case 0x319da4u: goto label_319da4;
        case 0x319dacu: goto label_319dac;
        case 0x319db4u: goto label_319db4;
        default: break;
    }

    ctx->pc = 0x319d88u;

    // 0x319d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x319d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x319d8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x319d90: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x319D90u;
    SET_GPR_U32(ctx, 31, 0x319D98u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x319D90u, 0x319D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D98u;
label_319d98:
    // 0x319d98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x319d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d9c: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x319D9Cu;
    SET_GPR_U32(ctx, 31, 0x319DA4u);
    ctx->pc = 0x319DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319D9Cu;
    // 0x319da0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x319D9Cu, 0x319DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319DA4u;
label_319da4:
    // 0x319da4: 0xc0d9cb6  jal         func_3672D8
    ctx->pc = 0x319DA4u;
    SET_GPR_U32(ctx, 31, 0x319DACu);
    ctx->pc = 0x319DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319DA4u;
    // 0x319da8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3672D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3672D8u, 0x319DA4u, 0x319DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319DACu;
label_319dac:
    // 0x319dac: 0xc0c67d6  jal         func_319F58
    ctx->pc = 0x319DACu;
    SET_GPR_U32(ctx, 31, 0x319DB4u);
    ctx->pc = 0x319DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319DACu;
    // 0x319db0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x319DACu, 0x319DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319DB4u;
label_319db4:
    // 0x319db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319db8: 0x3e00008  jr          $ra
    ctx->pc = 0x319DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DB8u;
        // 0x319dbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319DC0u;
}
