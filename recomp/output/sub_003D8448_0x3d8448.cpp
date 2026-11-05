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

// Function: sub_003D8448
// Address: 0x3d8448 - 0x3d8498
void sub_003D8448_0x3d8448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8448_0x3d8448");
#endif

    switch (ctx->pc) {
        case 0x3d846cu: goto label_3d846c;
        case 0x3d8484u: goto label_3d8484;
        default: break;
    }

    ctx->pc = 0x3d8448u;

    // 0x3d8448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d8448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d844c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d844cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3d8450: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d8450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d8454: 0x8c6271d8  lw          $v0, 0x71D8($v1)
    ctx->pc = 0x3d8454u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C71D8u));
    // 0x3d8458: 0x247071d8  addiu       $s0, $v1, 0x71D8
    ctx->pc = 0x3d8458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29144));
    // 0x3d845c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D845Cu;
    {
        const bool branch_taken_0x3d845c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D845Cu;
        // 0x3d8460: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d845c) {
            ctx->pc = 0x3D8484u;
            goto label_3d8484;
        }
    }
    ctx->pc = 0x3D8464u;
    // 0x3d8464: 0xc0f5e2e  jal         func_3D78B8
    ctx->pc = 0x3D8464u;
    SET_GPR_U32(ctx, 31, 0x3D846Cu);
    ctx->pc = 0x3D78B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D78B8u, 0x3D8464u, 0x3D846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D846Cu;
label_3d846c:
    // 0x3d846c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d846cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d8470: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x3d8470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x3d8474: 0x24a52808  addiu       $a1, $a1, 0x2808
    ctx->pc = 0x3d8474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10248));
    // 0x3d8478: 0x24c62d68  addiu       $a2, $a2, 0x2D68
    ctx->pc = 0x3d8478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11624));
    // 0x3d847c: 0xc0f5cb0  jal         func_3D72C0
    ctx->pc = 0x3D847Cu;
    SET_GPR_U32(ctx, 31, 0x3D8484u);
    ctx->pc = 0x3D8480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D847Cu;
    // 0x3d8480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D72C0u, 0x3D847Cu, 0x3D8484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8484u;
label_3d8484:
    // 0x3d8484: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d8484u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d8488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d848c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d848cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8490: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8490u;
        // 0x3d8494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8498u;
}
