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

// Function: sub_003D4CD0
// Address: 0x3d4cd0 - 0x3d4cf8
void sub_003D4CD0_0x3d4cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4CD0_0x3d4cd0");
#endif

    switch (ctx->pc) {
        case 0x3d4cd0u: goto label_3d4cd0;
        case 0x3d4cd4u: goto label_3d4cd4;
        case 0x3d4cd8u: goto label_3d4cd8;
        case 0x3d4cdcu: goto label_3d4cdc;
        case 0x3d4ce0u: goto label_3d4ce0;
        case 0x3d4ce4u: goto label_3d4ce4;
        case 0x3d4ce8u: goto label_3d4ce8;
        case 0x3d4cecu: goto label_3d4cec;
        case 0x3d4cf0u: goto label_3d4cf0;
        case 0x3d4cf4u: goto label_3d4cf4;
        default: break;
    }

    ctx->pc = 0x3d4cd0u;

label_3d4cd0:
    // 0x3d4cd0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d4cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_3d4cd4:
    // 0x3d4cd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d4cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3d4cd8:
    // 0x3d4cd8: 0x8c62ede8  lw          $v0, -0x1218($v1)
    ctx->pc = 0x3d4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962664)));
label_3d4cdc:
    // 0x3d4cdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d4cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d4ce0:
    // 0x3d4ce0: 0x40f809  jalr        $v0
label_3d4ce4:
    if (ctx->pc == 0x3D4CE4u) {
        ctx->pc = 0x3D4CE8u;
        goto label_3d4ce8;
    }
    ctx->pc = 0x3D4CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4CE8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4CE0u, 0x3D4CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4CE8u;
label_3d4ce8:
    // 0x3d4ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d4ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4cec:
    // 0x3d4cec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3d4cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3d4cf0:
    // 0x3d4cf0: 0x3e00008  jr          $ra
label_3d4cf4:
    if (ctx->pc == 0x3D4CF4u) {
        ctx->pc = 0x3D4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4CF0u;
        // 0x3d4cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4CF8u;
        goto label_fallthrough_0x3d4cf0;
    }
    ctx->pc = 0x3D4CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4CF0u;
        // 0x3d4cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d4cf0:
    ctx->pc = 0x3D4CF8u;
}
