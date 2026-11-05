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

// Function: sub_0020CF30
// Address: 0x20cf30 - 0x20cf78
void sub_0020CF30_0x20cf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CF30_0x20cf30");
#endif

    switch (ctx->pc) {
        case 0x20cf44u: goto label_20cf44;
        case 0x20cf50u: goto label_20cf50;
        default: break;
    }

    ctx->pc = 0x20cf30u;

    // 0x20cf30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20cf34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20cf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20cf38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20cf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20cf3c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x20CF3Cu;
    SET_GPR_U32(ctx, 31, 0x20CF44u);
    ctx->pc = 0x20CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF3Cu;
    // 0x20cf40: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x20CF3Cu, 0x20CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF44u;
label_20cf44:
    // 0x20cf44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20cf44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cf48: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x20CF48u;
    SET_GPR_U32(ctx, 31, 0x20CF50u);
    ctx->pc = 0x20CF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CF48u;
    // 0x20cf4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x20CF48u, 0x20CF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CF50u;
label_20cf50:
    // 0x20cf50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20cf50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cf54: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x20cf58: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x20cf5c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x20cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x20cf60: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x20cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x20cf64: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x20cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x20cf68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20cf68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cf6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20cf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20cf70: 0x3e00008  jr          $ra
    ctx->pc = 0x20CF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CF70u;
        // 0x20cf74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CF78u;
}
