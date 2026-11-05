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

// Function: sub_003D7228
// Address: 0x3d7228 - 0x3d7258
void sub_003D7228_0x3d7228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7228_0x3d7228");
#endif

    switch (ctx->pc) {
        case 0x3d724cu: goto label_3d724c;
        default: break;
    }

    ctx->pc = 0x3d7228u;

    // 0x3d7228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d7228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d722c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d722cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d7230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d7230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d7234: 0x24422648  addiu       $v0, $v0, 0x2648
    ctx->pc = 0x3d7234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9800));
    // 0x3d7238: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3d7238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3d723c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D723Cu;
    {
        const bool branch_taken_0x3d723c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D723Cu;
        // 0x3d7240: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d723c) {
            ctx->pc = 0x3D724Cu;
            goto label_3d724c;
        }
    }
    ctx->pc = 0x3D7244u;
    // 0x3d7244: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3D7244u;
    SET_GPR_U32(ctx, 31, 0x3D724Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3D7244u, 0x3D724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D724Cu;
label_3d724c:
    // 0x3d724c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d724cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7250: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7250u;
        // 0x3d7254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7258u;
}
