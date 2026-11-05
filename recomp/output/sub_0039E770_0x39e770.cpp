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

// Function: sub_0039E770
// Address: 0x39e770 - 0x39e7b8
void sub_0039E770_0x39e770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E770_0x39e770");
#endif

    switch (ctx->pc) {
        case 0x39e784u: goto label_39e784;
        case 0x39e790u: goto label_39e790;
        case 0x39e79cu: goto label_39e79c;
        default: break;
    }

    ctx->pc = 0x39e770u;

    // 0x39e770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39e770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39e774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39e778: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39e778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39e77c: 0xc0e7958  jal         func_39E560
    ctx->pc = 0x39E77Cu;
    SET_GPR_U32(ctx, 31, 0x39E784u);
    ctx->pc = 0x39E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E77Cu;
    // 0x39e780: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E560u, 0x39E77Cu, 0x39E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E784u;
label_39e784:
    // 0x39e784: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x39e784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x39e788: 0xc0ec4d6  jal         func_3B1358
    ctx->pc = 0x39E788u;
    SET_GPR_U32(ctx, 31, 0x39E790u);
    ctx->pc = 0x39E78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E788u;
    // 0x39e78c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1358u, 0x39E788u, 0x39E790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E790u;
label_39e790:
    // 0x39e790: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39e790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x39e794: 0xc0ec73e  jal         func_3B1CF8
    ctx->pc = 0x39E794u;
    SET_GPR_U32(ctx, 31, 0x39E79Cu);
    ctx->pc = 0x39E798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E794u;
    // 0x39e798: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1CF8u, 0x39E794u, 0x39E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E79Cu;
label_39e79c:
    // 0x39e79c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e7a0: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x39e7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x39e7a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39e7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e7a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e7a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x39E7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E7ACu;
        // 0x39e7b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E7B4u;
    // 0x39e7b4: 0x0  nop
    ctx->pc = 0x39e7b4u;
    // NOP
    ctx->pc = 0x39e7b8u;
}
