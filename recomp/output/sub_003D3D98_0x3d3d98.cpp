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

// Function: sub_003D3D98
// Address: 0x3d3d98 - 0x3d3df0
void sub_003D3D98_0x3d3d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3D98_0x3d3d98");
#endif

    switch (ctx->pc) {
        case 0x3d3db8u: goto label_3d3db8;
        case 0x3d3dc8u: goto label_3d3dc8;
        case 0x3d3dd8u: goto label_3d3dd8;
        case 0x3d3de0u: goto label_3d3de0;
        default: break;
    }

    ctx->pc = 0x3d3d98u;

    // 0x3d3d98: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3d3d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3d3d9c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x3d3d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x3d3da0: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x3d3da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x3d3da4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3d3da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3d3da8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x3d3da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x3d3dac: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3d3dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x3d3db0: 0xc0f4eae  jal         func_3D3AB8
    ctx->pc = 0x3D3DB0u;
    SET_GPR_U32(ctx, 31, 0x3D3DB8u);
    ctx->pc = 0x3D3DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3DB0u;
    // 0x3d3db4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3AB8u, 0x3D3DB0u, 0x3D3DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3DB8u;
label_3d3db8:
    // 0x3d3db8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3d3db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3d3dbc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x3d3dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x3d3dc0: 0xc0f4eae  jal         func_3D3AB8
    ctx->pc = 0x3D3DC0u;
    SET_GPR_U32(ctx, 31, 0x3D3DC8u);
    ctx->pc = 0x3D3DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3DC0u;
    // 0x3d3dc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3AB8u, 0x3D3DC0u, 0x3D3DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3DC8u;
label_3d3dc8:
    // 0x3d3dc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d3dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3dcc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3d3dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3d3dd0: 0xc0f4ed6  jal         func_3D3B58
    ctx->pc = 0x3D3DD0u;
    SET_GPR_U32(ctx, 31, 0x3D3DD8u);
    ctx->pc = 0x3D3DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3DD0u;
    // 0x3d3dd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3B58u, 0x3D3DD0u, 0x3D3DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3DD8u;
label_3d3dd8:
    // 0x3d3dd8: 0xc0f4e62  jal         func_3D3988
    ctx->pc = 0x3D3DD8u;
    SET_GPR_U32(ctx, 31, 0x3D3DE0u);
    ctx->pc = 0x3D3DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3DD8u;
    // 0x3d3ddc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3988u, 0x3D3DD8u, 0x3D3DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3DE0u;
label_3d3de0:
    // 0x3d3de0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3d3de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d3de4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x3d3de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d3de8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3DE8u;
        // 0x3d3dec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D3DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D3DF0u;
}
