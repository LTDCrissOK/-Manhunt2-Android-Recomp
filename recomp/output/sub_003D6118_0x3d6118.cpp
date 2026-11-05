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

// Function: sub_003D6118
// Address: 0x3d6118 - 0x3d6168
void sub_003D6118_0x3d6118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6118_0x3d6118");
#endif

    switch (ctx->pc) {
        case 0x3d613cu: goto label_3d613c;
        case 0x3d6154u: goto label_3d6154;
        default: break;
    }

    ctx->pc = 0x3d6118u;

    // 0x3d6118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d6118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d611c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d611cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3d6120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d6120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d6124: 0x8c627148  lw          $v0, 0x7148($v1)
    ctx->pc = 0x3d6124u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C7148u));
    // 0x3d6128: 0x24707148  addiu       $s0, $v1, 0x7148
    ctx->pc = 0x3d6128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29000));
    // 0x3d612c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D612Cu;
    {
        const bool branch_taken_0x3d612c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D612Cu;
        // 0x3d6130: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d612c) {
            ctx->pc = 0x3D6154u;
            goto label_3d6154;
        }
    }
    ctx->pc = 0x3D6134u;
    // 0x3d6134: 0xc0f586c  jal         func_3D61B0
    ctx->pc = 0x3D6134u;
    SET_GPR_U32(ctx, 31, 0x3D613Cu);
    ctx->pc = 0x3D61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61B0u, 0x3D6134u, 0x3D613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D613Cu;
label_3d613c:
    // 0x3d613c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d613cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d6140: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x3d6140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x3d6144: 0x24a52488  addiu       $a1, $a1, 0x2488
    ctx->pc = 0x3d6144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9352));
    // 0x3d6148: 0x24c62d60  addiu       $a2, $a2, 0x2D60
    ctx->pc = 0x3d6148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11616));
    // 0x3d614c: 0xc0f5cb0  jal         func_3D72C0
    ctx->pc = 0x3D614Cu;
    SET_GPR_U32(ctx, 31, 0x3D6154u);
    ctx->pc = 0x3D6150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D614Cu;
    // 0x3d6150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D72C0u, 0x3D614Cu, 0x3D6154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6154u;
label_3d6154:
    // 0x3d6154: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d6154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d6158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d615c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d615cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6160: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6160u;
        // 0x3d6164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D6168u;
}
