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

// Function: sub_003D83D8
// Address: 0x3d83d8 - 0x3d8428
void sub_003D83D8_0x3d83d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D83D8_0x3d83d8");
#endif

    switch (ctx->pc) {
        case 0x3d83fcu: goto label_3d83fc;
        case 0x3d8414u: goto label_3d8414;
        default: break;
    }

    ctx->pc = 0x3d83d8u;

    // 0x3d83d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d83d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d83dc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d83dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3d83e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d83e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d83e4: 0x8c6271c8  lw          $v0, 0x71C8($v1)
    ctx->pc = 0x3d83e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C71C8u));
    // 0x3d83e8: 0x247071c8  addiu       $s0, $v1, 0x71C8
    ctx->pc = 0x3d83e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29128));
    // 0x3d83ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D83ECu;
    {
        const bool branch_taken_0x3d83ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D83ECu;
        // 0x3d83f0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d83ec) {
            ctx->pc = 0x3D8414u;
            goto label_3d8414;
        }
    }
    ctx->pc = 0x3D83F4u;
    // 0x3d83f4: 0xc0f5e2e  jal         func_3D78B8
    ctx->pc = 0x3D83F4u;
    SET_GPR_U32(ctx, 31, 0x3D83FCu);
    ctx->pc = 0x3D78B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D78B8u, 0x3D83F4u, 0x3D83FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D83FCu;
label_3d83fc:
    // 0x3d83fc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d83fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d8400: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x3d8400u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x3d8404: 0x24a527f0  addiu       $a1, $a1, 0x27F0
    ctx->pc = 0x3d8404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10224));
    // 0x3d8408: 0x24c62d68  addiu       $a2, $a2, 0x2D68
    ctx->pc = 0x3d8408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11624));
    // 0x3d840c: 0xc0f5cb0  jal         func_3D72C0
    ctx->pc = 0x3D840Cu;
    SET_GPR_U32(ctx, 31, 0x3D8414u);
    ctx->pc = 0x3D8410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D840Cu;
    // 0x3d8410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D72C0u, 0x3D840Cu, 0x3D8414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8414u;
label_3d8414:
    // 0x3d8414: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d8414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d8418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d841c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d841cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8420: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8420u;
        // 0x3d8424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8428u;
}
