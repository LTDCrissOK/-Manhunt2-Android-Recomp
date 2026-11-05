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

// Function: sub_003D3DF0
// Address: 0x3d3df0 - 0x3d3e58
void sub_003D3DF0_0x3d3df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3DF0_0x3d3df0");
#endif

    switch (ctx->pc) {
        case 0x3d3e10u: goto label_3d3e10;
        case 0x3d3e20u: goto label_3d3e20;
        case 0x3d3e3cu: goto label_3d3e3c;
        case 0x3d3e44u: goto label_3d3e44;
        default: break;
    }

    ctx->pc = 0x3d3df0u;

    // 0x3d3df0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3d3df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3d3df4: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x3d3df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x3d3df8: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x3d3df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x3d3dfc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3d3dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3d3e00: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x3d3e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x3d3e04: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3d3e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3d3e08: 0xc0f4eae  jal         func_3D3AB8
    ctx->pc = 0x3D3E08u;
    SET_GPR_U32(ctx, 31, 0x3D3E10u);
    ctx->pc = 0x3D3E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E08u;
    // 0x3d3e0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3AB8u, 0x3D3E08u, 0x3D3E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E10u;
label_3d3e10:
    // 0x3d3e10: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3d3e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3d3e14: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x3d3e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x3d3e18: 0xc0f4eae  jal         func_3D3AB8
    ctx->pc = 0x3D3E18u;
    SET_GPR_U32(ctx, 31, 0x3D3E20u);
    ctx->pc = 0x3D3E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E18u;
    // 0x3d3e1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3AB8u, 0x3D3E18u, 0x3D3E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E20u;
label_3d3e20:
    // 0x3d3e20: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x3d3e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3d3e24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d3e24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3e28: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3d3e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3d3e2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d3e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3e30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3d3e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3d3e34: 0xc0f4ed6  jal         func_3D3B58
    ctx->pc = 0x3D3E34u;
    SET_GPR_U32(ctx, 31, 0x3D3E3Cu);
    ctx->pc = 0x3D3E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E34u;
    // 0x3d3e38: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3B58u, 0x3D3E34u, 0x3D3E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E3Cu;
label_3d3e3c:
    // 0x3d3e3c: 0xc0f4e62  jal         func_3D3988
    ctx->pc = 0x3D3E3Cu;
    SET_GPR_U32(ctx, 31, 0x3D3E44u);
    ctx->pc = 0x3D3E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E3Cu;
    // 0x3d3e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3988u, 0x3D3E3Cu, 0x3D3E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E44u;
label_3d3e44:
    // 0x3d3e44: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3d3e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d3e48: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x3d3e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d3e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3E4Cu;
        // 0x3d3e50: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3E54u;
    // 0x3d3e54: 0x0  nop
    ctx->pc = 0x3d3e54u;
    // NOP
    ctx->pc = 0x3d3e58u;
}
