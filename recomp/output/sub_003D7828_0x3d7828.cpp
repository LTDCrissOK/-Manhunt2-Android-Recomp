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

// Function: sub_003D7828
// Address: 0x3d7828 - 0x3d7878
void sub_003D7828_0x3d7828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7828_0x3d7828");
#endif

    switch (ctx->pc) {
        case 0x3d784cu: goto label_3d784c;
        case 0x3d7864u: goto label_3d7864;
        default: break;
    }

    ctx->pc = 0x3d7828u;

    // 0x3d7828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d782c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d782cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3d7830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d7830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d7834: 0x8c6271a8  lw          $v0, 0x71A8($v1)
    ctx->pc = 0x3d7834u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C71A8u));
    // 0x3d7838: 0x247071a8  addiu       $s0, $v1, 0x71A8
    ctx->pc = 0x3d7838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29096));
    // 0x3d783c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D783Cu;
    {
        const bool branch_taken_0x3d783c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D7840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D783Cu;
        // 0x3d7840: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d783c) {
            ctx->pc = 0x3D7864u;
            goto label_3d7864;
        }
    }
    ctx->pc = 0x3D7844u;
    // 0x3d7844: 0xc0f586c  jal         func_3D61B0
    ctx->pc = 0x3D7844u;
    SET_GPR_U32(ctx, 31, 0x3D784Cu);
    ctx->pc = 0x3D61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61B0u, 0x3D7844u, 0x3D784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D784Cu;
label_3d784c:
    // 0x3d784c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d784cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d7850: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x3d7850u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x3d7854: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x3d7854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
    // 0x3d7858: 0x24c62d60  addiu       $a2, $a2, 0x2D60
    ctx->pc = 0x3d7858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11616));
    // 0x3d785c: 0xc0f5cb0  jal         func_3D72C0
    ctx->pc = 0x3D785Cu;
    SET_GPR_U32(ctx, 31, 0x3D7864u);
    ctx->pc = 0x3D7860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D785Cu;
    // 0x3d7860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D72C0u, 0x3D785Cu, 0x3D7864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7864u;
label_3d7864:
    // 0x3d7864: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d7864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d7868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d786c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d786cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7870: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7870u;
        // 0x3d7874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7878u;
}
