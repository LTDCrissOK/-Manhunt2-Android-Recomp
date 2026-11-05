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

// Function: sub_00395A90
// Address: 0x395a90 - 0x395ac8
void sub_00395A90_0x395a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395A90_0x395a90");
#endif

    switch (ctx->pc) {
        case 0x395aa4u: goto label_395aa4;
        case 0x395aacu: goto label_395aac;
        case 0x395ab4u: goto label_395ab4;
        default: break;
    }

    ctx->pc = 0x395a90u;

    // 0x395a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395a94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x395a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x395a98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x395a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x395a9c: 0xc0e5796  jal         func_395E58
    ctx->pc = 0x395A9Cu;
    SET_GPR_U32(ctx, 31, 0x395AA4u);
    ctx->pc = 0x395AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395A9Cu;
    // 0x395aa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E58u, 0x395A9Cu, 0x395AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395AA4u;
label_395aa4:
    // 0x395aa4: 0xc0e56b2  jal         func_395AC8
    ctx->pc = 0x395AA4u;
    SET_GPR_U32(ctx, 31, 0x395AACu);
    ctx->pc = 0x395AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395AA4u;
    // 0x395aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395AC8u, 0x395AA4u, 0x395AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395AACu;
label_395aac:
    // 0x395aac: 0xc0e579c  jal         func_395E70
    ctx->pc = 0x395AACu;
    SET_GPR_U32(ctx, 31, 0x395AB4u);
    ctx->pc = 0x395AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395AACu;
    // 0x395ab0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E70u, 0x395AACu, 0x395AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395AB4u;
label_395ab4:
    // 0x395ab4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x395ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x395ab8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x395ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395abc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x395AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395AC0u;
        // 0x395ac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395AC8u;
}
