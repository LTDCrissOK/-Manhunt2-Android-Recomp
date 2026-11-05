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

// Function: sub_0010ED88
// Address: 0x10ed88 - 0x10edb8
void sub_0010ED88_0x10ed88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ED88_0x10ed88");
#endif

    switch (ctx->pc) {
        case 0x10ed88u: goto label_10ed88;
        case 0x10ed8cu: goto label_10ed8c;
        case 0x10ed90u: goto label_10ed90;
        case 0x10ed94u: goto label_10ed94;
        case 0x10ed98u: goto label_10ed98;
        case 0x10ed9cu: goto label_10ed9c;
        case 0x10eda0u: goto label_10eda0;
        case 0x10eda4u: goto label_10eda4;
        case 0x10eda8u: goto label_10eda8;
        case 0x10edacu: goto label_10edac;
        case 0x10edb0u: goto label_10edb0;
        case 0x10edb4u: goto label_10edb4;
        default: break;
    }

    ctx->pc = 0x10ed88u;

label_10ed88:
    // 0x10ed88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ed88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10ed8c:
    // 0x10ed8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ed8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10ed90:
    // 0x10ed90: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10ed90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10ed94:
    // 0x10ed94: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_10ed98:
    if (ctx->pc == 0x10ED98u) {
        ctx->pc = 0x10ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED94u;
        // 0x10ed98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ED9Cu;
        goto label_10ed9c;
    }
    ctx->pc = 0x10ED94u;
    {
        const bool branch_taken_0x10ed94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ED94u;
        // 0x10ed98: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ed94) {
            ctx->pc = 0x10EDB0u;
            goto label_10edb0;
        }
    }
    ctx->pc = 0x10ED9Cu;
label_10ed9c:
    // 0x10ed9c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10ed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10eda0:
    // 0x10eda0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x10eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_10eda4:
    // 0x10eda4: 0x40f809  jalr        $v0
label_10eda8:
    if (ctx->pc == 0x10EDA8u) {
        ctx->pc = 0x10EDACu;
        goto label_10edac;
    }
    ctx->pc = 0x10EDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10EDACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EDA4u, 0x10EDACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10EDACu;
label_10edac:
    // 0x10edac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10edacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10edb0:
    // 0x10edb0: 0x3e00008  jr          $ra
label_10edb4:
    if (ctx->pc == 0x10EDB4u) {
        ctx->pc = 0x10EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDB0u;
        // 0x10edb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10EDB8u;
        goto label_fallthrough_0x10edb0;
    }
    ctx->pc = 0x10EDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDB0u;
        // 0x10edb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10edb0:
    ctx->pc = 0x10EDB8u;
}
