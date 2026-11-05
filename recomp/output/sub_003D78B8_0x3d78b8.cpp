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

// Function: sub_003D78B8
// Address: 0x3d78b8 - 0x3d78f8
void sub_003D78B8_0x3d78b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D78B8_0x3d78b8");
#endif

    switch (ctx->pc) {
        case 0x3d78e4u: goto label_3d78e4;
        default: break;
    }

    ctx->pc = 0x3d78b8u;

    // 0x3d78b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d78b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d78bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3d78bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3d78c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d78c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d78c4: 0x8c622d68  lw          $v0, 0x2D68($v1)
    ctx->pc = 0x3d78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482D68u));
    // 0x3d78c8: 0x24702d68  addiu       $s0, $v1, 0x2D68
    ctx->pc = 0x3d78c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 11624));
    // 0x3d78cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D78CCu;
    {
        const bool branch_taken_0x3d78cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78CCu;
        // 0x3d78d0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d78cc) {
            ctx->pc = 0x3D78E4u;
            goto label_3d78e4;
        }
    }
    ctx->pc = 0x3D78D4u;
    // 0x3d78d4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d78d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d78d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d78d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d78dc: 0xc0f5cb8  jal         func_3D72E0
    ctx->pc = 0x3D78DCu;
    SET_GPR_U32(ctx, 31, 0x3D78E4u);
    ctx->pc = 0x3D78E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D78DCu;
    // 0x3d78e0: 0x24a526c0  addiu       $a1, $a1, 0x26C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D72E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D72E0u, 0x3D78DCu, 0x3D78E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D78E4u;
label_3d78e4:
    // 0x3d78e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d78e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d78e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d78e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d78ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d78ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d78f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D78F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D78F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D78F0u;
        // 0x3d78f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D78F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D78F8u;
}
