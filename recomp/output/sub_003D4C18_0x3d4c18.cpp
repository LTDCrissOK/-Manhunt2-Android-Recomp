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

// Function: sub_003D4C18
// Address: 0x3d4c18 - 0x3d4c40
void sub_003D4C18_0x3d4c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4C18_0x3d4c18");
#endif

    switch (ctx->pc) {
        case 0x3d4c18u: goto label_3d4c18;
        case 0x3d4c1cu: goto label_3d4c1c;
        case 0x3d4c20u: goto label_3d4c20;
        case 0x3d4c24u: goto label_3d4c24;
        case 0x3d4c28u: goto label_3d4c28;
        case 0x3d4c2cu: goto label_3d4c2c;
        case 0x3d4c30u: goto label_3d4c30;
        case 0x3d4c34u: goto label_3d4c34;
        case 0x3d4c38u: goto label_3d4c38;
        case 0x3d4c3cu: goto label_3d4c3c;
        default: break;
    }

    ctx->pc = 0x3d4c18u;

label_3d4c18:
    // 0x3d4c18: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d4c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_3d4c1c:
    // 0x3d4c1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d4c1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3d4c20:
    // 0x3d4c20: 0x8c62ede8  lw          $v0, -0x1218($v1)
    ctx->pc = 0x3d4c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962664)));
label_3d4c24:
    // 0x3d4c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d4c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d4c28:
    // 0x3d4c28: 0x40f809  jalr        $v0
label_3d4c2c:
    if (ctx->pc == 0x3D4C2Cu) {
        ctx->pc = 0x3D4C30u;
        goto label_3d4c30;
    }
    ctx->pc = 0x3D4C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4C30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4C28u, 0x3D4C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4C30u;
label_3d4c30:
    // 0x3d4c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d4c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4c34:
    // 0x3d4c34: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3d4c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3d4c38:
    // 0x3d4c38: 0x3e00008  jr          $ra
label_3d4c3c:
    if (ctx->pc == 0x3D4C3Cu) {
        ctx->pc = 0x3D4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C38u;
        // 0x3d4c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4C40u;
        goto label_fallthrough_0x3d4c38;
    }
    ctx->pc = 0x3D4C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C38u;
        // 0x3d4c3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d4c38:
    ctx->pc = 0x3D4C40u;
}
