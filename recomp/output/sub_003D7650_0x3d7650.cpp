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

// Function: sub_003D7650
// Address: 0x3d7650 - 0x3d76a0
void sub_003D7650_0x3d7650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7650_0x3d7650");
#endif

    switch (ctx->pc) {
        case 0x3d7674u: goto label_3d7674;
        case 0x3d768cu: goto label_3d768c;
        default: break;
    }

    ctx->pc = 0x3d7650u;

    // 0x3d7650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d7654: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d7654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3d7658: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d7658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d765c: 0x8c627188  lw          $v0, 0x7188($v1)
    ctx->pc = 0x3d765cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C7188u));
    // 0x3d7660: 0x24707188  addiu       $s0, $v1, 0x7188
    ctx->pc = 0x3d7660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29064));
    // 0x3d7664: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D7664u;
    {
        const bool branch_taken_0x3d7664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7664u;
        // 0x3d7668: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7664) {
            ctx->pc = 0x3D768Cu;
            goto label_3d768c;
        }
    }
    ctx->pc = 0x3D766Cu;
    // 0x3d766c: 0xc0f5db6  jal         func_3D76D8
    ctx->pc = 0x3D766Cu;
    SET_GPR_U32(ctx, 31, 0x3D7674u);
    ctx->pc = 0x3D76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D76D8u, 0x3D766Cu, 0x3D7674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7674u;
label_3d7674:
    // 0x3d7674: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d7674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d7678: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x3d7678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x3d767c: 0x24a52670  addiu       $a1, $a1, 0x2670
    ctx->pc = 0x3d767cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9840));
    // 0x3d7680: 0x24c67178  addiu       $a2, $a2, 0x7178
    ctx->pc = 0x3d7680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29048));
    // 0x3d7684: 0xc0f5cb0  jal         func_3D72C0
    ctx->pc = 0x3D7684u;
    SET_GPR_U32(ctx, 31, 0x3D768Cu);
    ctx->pc = 0x3D7688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7684u;
    // 0x3d7688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D72C0u, 0x3D7684u, 0x3D768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D768Cu;
label_3d768c:
    // 0x3d768c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d768cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7690: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d7690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d7694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d7694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7698: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7698u;
        // 0x3d769c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D76A0u;
}
