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

// Function: sub_0010E628
// Address: 0x10e628 - 0x10e658
void sub_0010E628_0x10e628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E628_0x10e628");
#endif

    switch (ctx->pc) {
        case 0x10e628u: goto label_10e628;
        case 0x10e62cu: goto label_10e62c;
        case 0x10e630u: goto label_10e630;
        case 0x10e634u: goto label_10e634;
        case 0x10e638u: goto label_10e638;
        case 0x10e63cu: goto label_10e63c;
        case 0x10e640u: goto label_10e640;
        case 0x10e644u: goto label_10e644;
        case 0x10e648u: goto label_10e648;
        case 0x10e64cu: goto label_10e64c;
        case 0x10e650u: goto label_10e650;
        case 0x10e654u: goto label_10e654;
        default: break;
    }

    ctx->pc = 0x10e628u;

label_10e628:
    // 0x10e628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e62c:
    // 0x10e62c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e630:
    // 0x10e630: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e634:
    // 0x10e634: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_10e638:
    if (ctx->pc == 0x10E638u) {
        ctx->pc = 0x10E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E634u;
        // 0x10e638: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E63Cu;
        goto label_10e63c;
    }
    ctx->pc = 0x10E634u;
    {
        const bool branch_taken_0x10e634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E634u;
        // 0x10e638: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e634) {
            ctx->pc = 0x10E650u;
            goto label_10e650;
        }
    }
    ctx->pc = 0x10E63Cu;
label_10e63c:
    // 0x10e63c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e640:
    // 0x10e640: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x10e640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_10e644:
    // 0x10e644: 0x40f809  jalr        $v0
label_10e648:
    if (ctx->pc == 0x10E648u) {
        ctx->pc = 0x10E64Cu;
        goto label_10e64c;
    }
    ctx->pc = 0x10E644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E64Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E644u, 0x10E64Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E64Cu;
label_10e64c:
    // 0x10e64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e650:
    // 0x10e650: 0x3e00008  jr          $ra
label_10e654:
    if (ctx->pc == 0x10E654u) {
        ctx->pc = 0x10E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E650u;
        // 0x10e654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E658u;
        goto label_fallthrough_0x10e650;
    }
    ctx->pc = 0x10E650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E650u;
        // 0x10e654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e650:
    ctx->pc = 0x10E658u;
}
