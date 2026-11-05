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

// Function: sub_003D6070
// Address: 0x3d6070 - 0x3d60a8
void sub_003D6070_0x3d6070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6070_0x3d6070");
#endif

    switch (ctx->pc) {
        case 0x3d6080u: goto label_3d6080;
        default: break;
    }

    ctx->pc = 0x3d6070u;

    // 0x3d6070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d6070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d6074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d6074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d6078: 0xc0f5306  jal         func_3D4C18
    ctx->pc = 0x3D6078u;
    SET_GPR_U32(ctx, 31, 0x3D6080u);
    ctx->pc = 0x3D4C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4C18u, 0x3D6078u, 0x3D6080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6080u;
label_3d6080:
    // 0x3d6080: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3d6080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d6084: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6084u;
    {
        const bool branch_taken_0x3d6084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6084u;
        // 0x3d6088: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6084) {
            ctx->pc = 0x3D6094u;
            goto label_3d6094;
        }
    }
    ctx->pc = 0x3D608Cu;
    // 0x3d608c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x3d608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3d6090: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x3d6090u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3d6094:
    // 0x3d6094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d6094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d6098: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3d6098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d609c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D609Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D60A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D609Cu;
        // 0x3d60a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D609Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D60A4u;
    // 0x3d60a4: 0x0  nop
    ctx->pc = 0x3d60a4u;
    // NOP
    ctx->pc = 0x3d60a8u;
}
