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

// Function: sub_003D8598
// Address: 0x3d8598 - 0x3d85e8
void sub_003D8598_0x3d8598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8598_0x3d8598");
#endif

    switch (ctx->pc) {
        case 0x3d85bcu: goto label_3d85bc;
        case 0x3d85d4u: goto label_3d85d4;
        default: break;
    }

    ctx->pc = 0x3d8598u;

    // 0x3d8598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d8598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d859c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d859cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3d85a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d85a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d85a4: 0x8c627208  lw          $v0, 0x7208($v1)
    ctx->pc = 0x3d85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C7208u));
    // 0x3d85a8: 0x24707208  addiu       $s0, $v1, 0x7208
    ctx->pc = 0x3d85a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29192));
    // 0x3d85ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D85ACu;
    {
        const bool branch_taken_0x3d85ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D85B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D85ACu;
        // 0x3d85b0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d85ac) {
            ctx->pc = 0x3D85D4u;
            goto label_3d85d4;
        }
    }
    ctx->pc = 0x3D85B4u;
    // 0x3d85b4: 0xc0f5e2e  jal         func_3D78B8
    ctx->pc = 0x3D85B4u;
    SET_GPR_U32(ctx, 31, 0x3D85BCu);
    ctx->pc = 0x3D78B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D78B8u, 0x3D85B4u, 0x3D85BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D85BCu;
label_3d85bc:
    // 0x3d85bc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d85bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d85c0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x3d85c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x3d85c4: 0x24a52850  addiu       $a1, $a1, 0x2850
    ctx->pc = 0x3d85c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10320));
    // 0x3d85c8: 0x24c62d68  addiu       $a2, $a2, 0x2D68
    ctx->pc = 0x3d85c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11624));
    // 0x3d85cc: 0xc0f5cb0  jal         func_3D72C0
    ctx->pc = 0x3D85CCu;
    SET_GPR_U32(ctx, 31, 0x3D85D4u);
    ctx->pc = 0x3D85D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D85CCu;
    // 0x3d85d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D72C0u, 0x3D85CCu, 0x3D85D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D85D4u;
label_3d85d4:
    // 0x3d85d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d85d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d85d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d85d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d85dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d85dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d85e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D85E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D85E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D85E0u;
        // 0x3d85e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D85E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D85E8u;
}
