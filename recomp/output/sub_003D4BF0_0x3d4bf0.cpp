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

// Function: sub_003D4BF0
// Address: 0x3d4bf0 - 0x3d4c18
void sub_003D4BF0_0x3d4bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4BF0_0x3d4bf0");
#endif

    switch (ctx->pc) {
        case 0x3d4bf0u: goto label_3d4bf0;
        case 0x3d4bf4u: goto label_3d4bf4;
        case 0x3d4bf8u: goto label_3d4bf8;
        case 0x3d4bfcu: goto label_3d4bfc;
        case 0x3d4c00u: goto label_3d4c00;
        case 0x3d4c04u: goto label_3d4c04;
        case 0x3d4c08u: goto label_3d4c08;
        case 0x3d4c0cu: goto label_3d4c0c;
        case 0x3d4c10u: goto label_3d4c10;
        case 0x3d4c14u: goto label_3d4c14;
        default: break;
    }

    ctx->pc = 0x3d4bf0u;

label_3d4bf0:
    // 0x3d4bf0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d4bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_3d4bf4:
    // 0x3d4bf4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d4bf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3d4bf8:
    // 0x3d4bf8: 0x8c62ede8  lw          $v0, -0x1218($v1)
    ctx->pc = 0x3d4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962664)));
label_3d4bfc:
    // 0x3d4bfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d4bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d4c00:
    // 0x3d4c00: 0x40f809  jalr        $v0
label_3d4c04:
    if (ctx->pc == 0x3D4C04u) {
        ctx->pc = 0x3D4C08u;
        goto label_3d4c08;
    }
    ctx->pc = 0x3D4C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D4C08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4C00u, 0x3D4C08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D4C08u;
label_3d4c08:
    // 0x3d4c08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d4c08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4c0c:
    // 0x3d4c0c: 0x3e00008  jr          $ra
label_3d4c10:
    if (ctx->pc == 0x3D4C10u) {
        ctx->pc = 0x3D4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C0Cu;
        // 0x3d4c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4C14u;
        goto label_3d4c14;
    }
    ctx->pc = 0x3D4C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4C0Cu;
        // 0x3d4c10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4C14u;
label_3d4c14:
    // 0x3d4c14: 0x0  nop
    ctx->pc = 0x3d4c14u;
    // NOP
    ctx->pc = 0x3d4c18u;
}
