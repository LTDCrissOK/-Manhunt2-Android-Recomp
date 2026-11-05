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

// Function: sub_003D7790
// Address: 0x3d7790 - 0x3d77e0
void sub_003D7790_0x3d7790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7790_0x3d7790");
#endif

    switch (ctx->pc) {
        case 0x3d77b4u: goto label_3d77b4;
        case 0x3d77ccu: goto label_3d77cc;
        default: break;
    }

    ctx->pc = 0x3d7790u;

    // 0x3d7790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d7794: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d7794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3d7798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d7798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d779c: 0x8c627198  lw          $v0, 0x7198($v1)
    ctx->pc = 0x3d779cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C7198u));
    // 0x3d77a0: 0x24707198  addiu       $s0, $v1, 0x7198
    ctx->pc = 0x3d77a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29080));
    // 0x3d77a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D77A4u;
    {
        const bool branch_taken_0x3d77a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D77A4u;
        // 0x3d77a8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d77a4) {
            ctx->pc = 0x3D77CCu;
            goto label_3d77cc;
        }
    }
    ctx->pc = 0x3D77ACu;
    // 0x3d77ac: 0xc0f586c  jal         func_3D61B0
    ctx->pc = 0x3D77ACu;
    SET_GPR_U32(ctx, 31, 0x3D77B4u);
    ctx->pc = 0x3D61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61B0u, 0x3D77ACu, 0x3D77B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D77B4u;
label_3d77b4:
    // 0x3d77b4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d77b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d77b8: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x3d77b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x3d77bc: 0x24a526a0  addiu       $a1, $a1, 0x26A0
    ctx->pc = 0x3d77bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9888));
    // 0x3d77c0: 0x24c62d60  addiu       $a2, $a2, 0x2D60
    ctx->pc = 0x3d77c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11616));
    // 0x3d77c4: 0xc0f5cb0  jal         func_3D72C0
    ctx->pc = 0x3D77C4u;
    SET_GPR_U32(ctx, 31, 0x3D77CCu);
    ctx->pc = 0x3D77C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D77C4u;
    // 0x3d77c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D72C0u, 0x3D77C4u, 0x3D77CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D77CCu;
label_3d77cc:
    // 0x3d77cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d77ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d77d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d77d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d77d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d77d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d77d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D77D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D77D8u;
        // 0x3d77dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D77D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D77E0u;
}
