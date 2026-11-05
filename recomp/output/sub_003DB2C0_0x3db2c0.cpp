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

// Function: sub_003DB2C0
// Address: 0x3db2c0 - 0x3db2e8
void sub_003DB2C0_0x3db2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB2C0_0x3db2c0");
#endif

    switch (ctx->pc) {
        case 0x3db2d0u: goto label_3db2d0;
        case 0x3db2d8u: goto label_3db2d8;
        default: break;
    }

    ctx->pc = 0x3db2c0u;

    // 0x3db2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db2c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db2c8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB2C8u;
    SET_GPR_U32(ctx, 31, 0x3DB2D0u);
    ctx->pc = 0x3DB2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB2C8u;
    // 0x3db2cc: 0x240402c0  addiu       $a0, $zero, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB2C8u, 0x3DB2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB2D0u;
label_3db2d0:
    // 0x3db2d0: 0xc05bf58  jal         func_16FD60
    ctx->pc = 0x3DB2D0u;
    SET_GPR_U32(ctx, 31, 0x3DB2D8u);
    ctx->pc = 0x3DB2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB2D0u;
    // 0x3db2d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FD60u, 0x3DB2D0u, 0x3DB2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB2D8u;
label_3db2d8:
    // 0x3db2d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db2dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB2DCu;
        // 0x3db2e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB2E4u;
    // 0x3db2e4: 0x0  nop
    ctx->pc = 0x3db2e4u;
    // NOP
    ctx->pc = 0x3db2e8u;
}
