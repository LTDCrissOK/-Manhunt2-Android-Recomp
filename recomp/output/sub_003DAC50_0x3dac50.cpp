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

// Function: sub_003DAC50
// Address: 0x3dac50 - 0x3dacb0
void sub_003DAC50_0x3dac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAC50_0x3dac50");
#endif

    switch (ctx->pc) {
        case 0x3dac64u: goto label_3dac64;
        case 0x3dac8cu: goto label_3dac8c;
        default: break;
    }

    ctx->pc = 0x3dac50u;

    // 0x3dac50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dac50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dac54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dac58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3dac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3dac5c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAC5Cu;
    SET_GPR_U32(ctx, 31, 0x3DAC64u);
    ctx->pc = 0x3DAC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAC5Cu;
    // 0x3dac60: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAC5Cu, 0x3DAC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAC64u;
label_3dac64:
    // 0x3dac64: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3dac64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3dac68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3dac68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dac6c: 0x246302d8  addiu       $v1, $v1, 0x2D8
    ctx->pc = 0x3dac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 728));
    // 0x3dac70: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x3dac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3dac74: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3dac74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x3dac78: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3dac78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3dac7c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3dac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3dac80: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3dac80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3dac84: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x3DAC84u;
    SET_GPR_U32(ctx, 31, 0x3DAC8Cu);
    ctx->pc = 0x3DAC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAC84u;
    // 0x3dac88: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x3DAC84u, 0x3DAC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAC8Cu;
label_3dac8c:
    // 0x3dac8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3dac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dac90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3dac90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dac94: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x3dac94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x3dac98: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3dac98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x3dac9c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3dac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x3daca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3daca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3daca4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3daca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3daca8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DACA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DACA8u;
        // 0x3dacac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DACA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DACB0u;
}
