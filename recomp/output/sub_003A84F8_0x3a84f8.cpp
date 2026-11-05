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

// Function: sub_003A84F8
// Address: 0x3a84f8 - 0x3a8520
void sub_003A84F8_0x3a84f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A84F8_0x3a84f8");
#endif

    switch (ctx->pc) {
        case 0x3a84f8u: goto label_3a84f8;
        case 0x3a84fcu: goto label_3a84fc;
        case 0x3a8500u: goto label_3a8500;
        case 0x3a8504u: goto label_3a8504;
        case 0x3a8508u: goto label_3a8508;
        case 0x3a850cu: goto label_3a850c;
        case 0x3a8510u: goto label_3a8510;
        case 0x3a8514u: goto label_3a8514;
        case 0x3a8518u: goto label_3a8518;
        case 0x3a851cu: goto label_3a851c;
        default: break;
    }

    ctx->pc = 0x3a84f8u;

label_3a84f8:
    // 0x3a84f8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_3a84fc:
    // 0x3a84fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a84fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a8500:
    // 0x3a8500: 0x8c42ada4  lw          $v0, -0x525C($v0)
    ctx->pc = 0x3a8500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946212)));
label_3a8504:
    // 0x3a8504: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3a8508:
    if (ctx->pc == 0x3A8508u) {
        ctx->pc = 0x3A8508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8504u;
        // 0x3a8508: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A850Cu;
        goto label_3a850c;
    }
    ctx->pc = 0x3A8504u;
    {
        const bool branch_taken_0x3a8504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8504u;
        // 0x3a8508: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8504) {
            ctx->pc = 0x3A8514u;
            goto label_3a8514;
        }
    }
    ctx->pc = 0x3A850Cu;
label_3a850c:
    // 0x3a850c: 0x40f809  jalr        $v0
label_3a8510:
    if (ctx->pc == 0x3A8510u) {
        ctx->pc = 0x3A8514u;
        goto label_3a8514;
    }
    ctx->pc = 0x3A850Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A8514u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A850Cu, 0x3A8514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A8514u;
label_3a8514:
    // 0x3a8514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a8514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a8518:
    // 0x3a8518: 0x3e00008  jr          $ra
label_3a851c:
    if (ctx->pc == 0x3A851Cu) {
        ctx->pc = 0x3A851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8518u;
        // 0x3a851c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A8520u;
        goto label_fallthrough_0x3a8518;
    }
    ctx->pc = 0x3A8518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8518u;
        // 0x3a851c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a8518:
    ctx->pc = 0x3A8520u;
}
