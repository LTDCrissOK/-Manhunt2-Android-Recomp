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

// Function: sub_002412C0
// Address: 0x2412c0 - 0x2412e8
void sub_002412C0_0x2412c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002412C0_0x2412c0");
#endif

    switch (ctx->pc) {
        case 0x2412c0u: goto label_2412c0;
        case 0x2412c4u: goto label_2412c4;
        case 0x2412c8u: goto label_2412c8;
        case 0x2412ccu: goto label_2412cc;
        case 0x2412d0u: goto label_2412d0;
        case 0x2412d4u: goto label_2412d4;
        case 0x2412d8u: goto label_2412d8;
        case 0x2412dcu: goto label_2412dc;
        case 0x2412e0u: goto label_2412e0;
        case 0x2412e4u: goto label_2412e4;
        default: break;
    }

    ctx->pc = 0x2412c0u;

label_2412c0:
    // 0x2412c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2412c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2412c4:
    // 0x2412c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2412c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2412c8:
    // 0x2412c8: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2412c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2412cc:
    // 0x2412cc: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x2412ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_2412d0:
    // 0x2412d0: 0x40f809  jalr        $v0
label_2412d4:
    if (ctx->pc == 0x2412D4u) {
        ctx->pc = 0x2412D8u;
        goto label_2412d8;
    }
    ctx->pc = 0x2412D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2412D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2412D0u, 0x2412D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2412D8u;
label_2412d8:
    // 0x2412d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2412d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2412dc:
    // 0x2412dc: 0x3e00008  jr          $ra
label_2412e0:
    if (ctx->pc == 0x2412E0u) {
        ctx->pc = 0x2412E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412DCu;
        // 0x2412e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2412E4u;
        goto label_2412e4;
    }
    ctx->pc = 0x2412DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2412E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2412DCu;
        // 0x2412e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2412DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2412E4u;
label_2412e4:
    // 0x2412e4: 0x0  nop
    ctx->pc = 0x2412e4u;
    // NOP
    ctx->pc = 0x2412e8u;
}
