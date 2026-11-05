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

// Function: sub_003D4B38
// Address: 0x3d4b38 - 0x3d4b60
void sub_003D4B38_0x3d4b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4B38_0x3d4b38");
#endif

    switch (ctx->pc) {
        case 0x3d4b38u: goto label_3d4b38;
        case 0x3d4b3cu: goto label_3d4b3c;
        case 0x3d4b40u: goto label_3d4b40;
        case 0x3d4b44u: goto label_3d4b44;
        case 0x3d4b48u: goto label_3d4b48;
        case 0x3d4b4cu: goto label_3d4b4c;
        case 0x3d4b50u: goto label_3d4b50;
        case 0x3d4b54u: goto label_3d4b54;
        case 0x3d4b58u: goto label_3d4b58;
        case 0x3d4b5cu: goto label_3d4b5c;
        default: break;
    }

    ctx->pc = 0x3d4b38u;

label_3d4b38:
    // 0x3d4b38: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3d4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3d4b3c:
    // 0x3d4b3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d4b3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3d4b40:
    // 0x3d4b40: 0x8c43ede4  lw          $v1, -0x121C($v0)
    ctx->pc = 0x3d4b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962660)));
label_3d4b44:
    // 0x3d4b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d4b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d4b48:
    // 0x3d4b48: 0x60f809  jalr        $v1
label_3d4b4c:
    if (ctx->pc == 0x3D4B4Cu) {
        ctx->pc = 0x3D4B50u;
        goto label_3d4b50;
    }
    ctx->pc = 0x3D4B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D4B50u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4B48u, 0x3D4B50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4B50u;
label_3d4b50:
    // 0x3d4b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d4b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4b54:
    // 0x3d4b54: 0x3e00008  jr          $ra
label_3d4b58:
    if (ctx->pc == 0x3D4B58u) {
        ctx->pc = 0x3D4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B54u;
        // 0x3d4b58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4B5Cu;
        goto label_3d4b5c;
    }
    ctx->pc = 0x3D4B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4B54u;
        // 0x3d4b58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4B5Cu;
label_3d4b5c:
    // 0x3d4b5c: 0x0  nop
    ctx->pc = 0x3d4b5cu;
    // NOP
    ctx->pc = 0x3d4b60u;
}
