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

// Function: sub_001BCE88
// Address: 0x1bce88 - 0x1bceb0
void sub_001BCE88_0x1bce88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCE88_0x1bce88");
#endif

    switch (ctx->pc) {
        case 0x1bce88u: goto label_1bce88;
        case 0x1bce8cu: goto label_1bce8c;
        case 0x1bce90u: goto label_1bce90;
        case 0x1bce94u: goto label_1bce94;
        case 0x1bce98u: goto label_1bce98;
        case 0x1bce9cu: goto label_1bce9c;
        case 0x1bcea0u: goto label_1bcea0;
        case 0x1bcea4u: goto label_1bcea4;
        case 0x1bcea8u: goto label_1bcea8;
        case 0x1bceacu: goto label_1bceac;
        default: break;
    }

    ctx->pc = 0x1bce88u;

label_1bce88:
    // 0x1bce88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bce88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bce8c:
    // 0x1bce8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bce8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1bce90:
    // 0x1bce90: 0x8c830394  lw          $v1, 0x394($a0)
    ctx->pc = 0x1bce90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 916)));
label_1bce94:
    // 0x1bce94: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1bce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1bce98:
    // 0x1bce98: 0x40f809  jalr        $v0
label_1bce9c:
    if (ctx->pc == 0x1BCE9Cu) {
        ctx->pc = 0x1BCEA0u;
        goto label_1bcea0;
    }
    ctx->pc = 0x1BCE98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BCEA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCE98u, 0x1BCEA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BCEA0u;
label_1bcea0:
    // 0x1bcea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bcea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bcea4:
    // 0x1bcea4: 0x3e00008  jr          $ra
label_1bcea8:
    if (ctx->pc == 0x1BCEA8u) {
        ctx->pc = 0x1BCEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEA4u;
        // 0x1bcea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCEACu;
        goto label_1bceac;
    }
    ctx->pc = 0x1BCEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCEA4u;
        // 0x1bcea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCEACu;
label_1bceac:
    // 0x1bceac: 0x0  nop
    ctx->pc = 0x1bceacu;
    // NOP
    ctx->pc = 0x1bceb0u;
}
