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

// Function: sub_001050D0
// Address: 0x1050d0 - 0x105120
void sub_001050D0_0x1050d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001050D0_0x1050d0");
#endif

    switch (ctx->pc) {
        case 0x1050e4u: goto label_1050e4;
        case 0x1050f0u: goto label_1050f0;
        default: break;
    }

    ctx->pc = 0x1050d0u;

    // 0x1050d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1050d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1050d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1050d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1050d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1050d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1050dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1050DCu;
    SET_GPR_U32(ctx, 31, 0x1050E4u);
    ctx->pc = 0x1050E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1050DCu;
    // 0x1050e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1050DCu, 0x1050E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050E4u;
label_1050e4:
    // 0x1050e4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1050e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1050e8: 0xc040000  jal         func_100000
    ctx->pc = 0x1050E8u;
    SET_GPR_U32(ctx, 31, 0x1050F0u);
    ctx->pc = 0x1050ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1050E8u;
    // 0x1050ec: 0x26040018  addiu       $a0, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100000u, 0x1050E8u, 0x1050F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1050F0u;
label_1050f0:
    // 0x1050f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1050f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050f4: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x1050f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x1050f8: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x1050f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x1050fc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1050fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x105100: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x105100u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x105104: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x105104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x105108: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x105108u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x10510c: 0xa200003a  sb          $zero, 0x3A($s0)
    ctx->pc = 0x10510cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 0));
    // 0x105110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105114: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x105114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105118: 0x3e00008  jr          $ra
    ctx->pc = 0x105118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105118u;
        // 0x10511c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105120u;
}
