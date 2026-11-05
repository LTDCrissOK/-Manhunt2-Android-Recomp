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

// Function: sub_003D4380
// Address: 0x3d4380 - 0x3d43d0
void sub_003D4380_0x3d4380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4380_0x3d4380");
#endif

    switch (ctx->pc) {
        case 0x3d43a0u: goto label_3d43a0;
        case 0x3d43b0u: goto label_3d43b0;
        case 0x3d43bcu: goto label_3d43bc;
        default: break;
    }

    ctx->pc = 0x3d4380u;

    // 0x3d4380: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3d4380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3d4384: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x3d4384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x3d4388: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x3d4388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x3d438c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x3d438cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3d4390: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x3d4390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x3d4394: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x3d4394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x3d4398: 0xc0f4eae  jal         func_3D3AB8
    ctx->pc = 0x3D4398u;
    SET_GPR_U32(ctx, 31, 0x3D43A0u);
    ctx->pc = 0x3D439Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4398u;
    // 0x3d439c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3AB8u, 0x3D4398u, 0x3D43A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D43A0u;
label_3d43a0:
    // 0x3d43a0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3d43a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3d43a4: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x3d43a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x3d43a8: 0xc0f4eae  jal         func_3D3AB8
    ctx->pc = 0x3D43A8u;
    SET_GPR_U32(ctx, 31, 0x3D43B0u);
    ctx->pc = 0x3D43ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D43A8u;
    // 0x3d43ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3AB8u, 0x3D43A8u, 0x3D43B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D43B0u;
label_3d43b0:
    // 0x3d43b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d43b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d43b4: 0xc0f509a  jal         func_3D4268
    ctx->pc = 0x3D43B4u;
    SET_GPR_U32(ctx, 31, 0x3D43BCu);
    ctx->pc = 0x3D43B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D43B4u;
    // 0x3d43b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4268u, 0x3D43B4u, 0x3D43BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D43BCu;
label_3d43bc:
    // 0x3d43bc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3d43bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d43c0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x3d43c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d43c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D43C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D43C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D43C4u;
        // 0x3d43c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D43C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D43CCu;
    // 0x3d43cc: 0x0  nop
    ctx->pc = 0x3d43ccu;
    // NOP
    ctx->pc = 0x3d43d0u;
}
