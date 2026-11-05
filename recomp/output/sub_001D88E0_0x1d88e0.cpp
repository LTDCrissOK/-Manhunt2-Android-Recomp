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

// Function: sub_001D88E0
// Address: 0x1d88e0 - 0x1d8930
void sub_001D88E0_0x1d88e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D88E0_0x1d88e0");
#endif

    switch (ctx->pc) {
        case 0x1d8914u: goto label_1d8914;
        default: break;
    }

    ctx->pc = 0x1d88e0u;

    // 0x1d88e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d88e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d88e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d88e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d88e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d88e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d88ec: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d88ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d88f0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d88f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1d88f4: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x1d88f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1d88f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d88f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d88fc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d88fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d8900: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d8900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d8904: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d8904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1d8908: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d8908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d890c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1D890Cu;
    SET_GPR_U32(ctx, 31, 0x1D8914u);
    ctx->pc = 0x1D8910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D890Cu;
    // 0x1d8910: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1D890Cu, 0x1D8914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8914u;
label_1d8914:
    // 0x1d8914: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d8914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8918: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d8918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d891c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d891cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8920: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8924: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8924u;
        // 0x1d8928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D892Cu;
    // 0x1d892c: 0x0  nop
    ctx->pc = 0x1d892cu;
    // NOP
    ctx->pc = 0x1d8930u;
}
