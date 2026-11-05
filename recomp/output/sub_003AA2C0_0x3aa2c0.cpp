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

// Function: sub_003AA2C0
// Address: 0x3aa2c0 - 0x3aa2f8
void sub_003AA2C0_0x3aa2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA2C0_0x3aa2c0");
#endif

    switch (ctx->pc) {
        case 0x3aa2d4u: goto label_3aa2d4;
        case 0x3aa2dcu: goto label_3aa2dc;
        case 0x3aa2e4u: goto label_3aa2e4;
        default: break;
    }

    ctx->pc = 0x3aa2c0u;

    // 0x3aa2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aa2c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aa2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aa2c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3aa2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3aa2cc: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AA2CCu;
    SET_GPR_U32(ctx, 31, 0x3AA2D4u);
    ctx->pc = 0x3AA2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA2CCu;
    // 0x3aa2d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AA2CCu, 0x3AA2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA2D4u;
label_3aa2d4:
    // 0x3aa2d4: 0xc0ea8be  jal         func_3AA2F8
    ctx->pc = 0x3AA2D4u;
    SET_GPR_U32(ctx, 31, 0x3AA2DCu);
    ctx->pc = 0x3AA2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA2D4u;
    // 0x3aa2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA2F8u, 0x3AA2D4u, 0x3AA2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA2DCu;
label_3aa2dc:
    // 0x3aa2dc: 0xc0ea7de  jal         func_3A9F78
    ctx->pc = 0x3AA2DCu;
    SET_GPR_U32(ctx, 31, 0x3AA2E4u);
    ctx->pc = 0x3AA2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA2DCu;
    // 0x3aa2e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F78u, 0x3AA2DCu, 0x3AA2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA2E4u;
label_3aa2e4:
    // 0x3aa2e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aa2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aa2e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3aa2e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa2ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3AA2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA2F0u;
        // 0x3aa2f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA2F8u;
}
