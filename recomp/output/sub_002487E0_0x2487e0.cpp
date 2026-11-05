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

// Function: sub_002487E0
// Address: 0x2487e0 - 0x248820
void sub_002487E0_0x2487e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002487E0_0x2487e0");
#endif

    switch (ctx->pc) {
        case 0x2487fcu: goto label_2487fc;
        case 0x248804u: goto label_248804;
        default: break;
    }

    ctx->pc = 0x2487e0u;

    // 0x2487e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2487e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2487e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2487e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2487e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2487e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2487ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2487ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2487f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2487f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2487f4: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x2487F4u;
    SET_GPR_U32(ctx, 31, 0x2487FCu);
    ctx->pc = 0x2487F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2487F4u;
    // 0x2487f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x2487F4u, 0x2487FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487FCu;
label_2487fc:
    // 0x2487fc: 0xc0921f0  jal         func_2487C0
    ctx->pc = 0x2487FCu;
    SET_GPR_U32(ctx, 31, 0x248804u);
    ctx->pc = 0x248800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2487FCu;
    // 0x248800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2487C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2487C0u, 0x2487FCu, 0x248804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248804u;
label_248804:
    // 0x248804: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248808: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x248808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24880c: 0xae020190  sw          $v0, 0x190($s0)
    ctx->pc = 0x24880cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 2));
    // 0x248810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248814: 0x3e00008  jr          $ra
    ctx->pc = 0x248814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248814u;
        // 0x248818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24881Cu;
    // 0x24881c: 0x0  nop
    ctx->pc = 0x24881cu;
    // NOP
    ctx->pc = 0x248820u;
}
