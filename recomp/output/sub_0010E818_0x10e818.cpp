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

// Function: sub_0010E818
// Address: 0x10e818 - 0x10e848
void sub_0010E818_0x10e818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E818_0x10e818");
#endif

    switch (ctx->pc) {
        case 0x10e818u: goto label_10e818;
        case 0x10e81cu: goto label_10e81c;
        case 0x10e820u: goto label_10e820;
        case 0x10e824u: goto label_10e824;
        case 0x10e828u: goto label_10e828;
        case 0x10e82cu: goto label_10e82c;
        case 0x10e830u: goto label_10e830;
        case 0x10e834u: goto label_10e834;
        case 0x10e838u: goto label_10e838;
        case 0x10e83cu: goto label_10e83c;
        case 0x10e840u: goto label_10e840;
        case 0x10e844u: goto label_10e844;
        default: break;
    }

    ctx->pc = 0x10e818u;

label_10e818:
    // 0x10e818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e81c:
    // 0x10e81c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e820:
    // 0x10e820: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e824:
    // 0x10e824: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_10e828:
    if (ctx->pc == 0x10E828u) {
        ctx->pc = 0x10E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E824u;
        // 0x10e828: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E82Cu;
        goto label_10e82c;
    }
    ctx->pc = 0x10E824u;
    {
        const bool branch_taken_0x10e824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E824u;
        // 0x10e828: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e824) {
            ctx->pc = 0x10E840u;
            goto label_10e840;
        }
    }
    ctx->pc = 0x10E82Cu;
label_10e82c:
    // 0x10e82c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e830:
    // 0x10e830: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x10e830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_10e834:
    // 0x10e834: 0x40f809  jalr        $v0
label_10e838:
    if (ctx->pc == 0x10E838u) {
        ctx->pc = 0x10E83Cu;
        goto label_10e83c;
    }
    ctx->pc = 0x10E834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E83Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E834u, 0x10E83Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E83Cu;
label_10e83c:
    // 0x10e83c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e840:
    // 0x10e840: 0x3e00008  jr          $ra
label_10e844:
    if (ctx->pc == 0x10E844u) {
        ctx->pc = 0x10E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E840u;
        // 0x10e844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E848u;
        goto label_fallthrough_0x10e840;
    }
    ctx->pc = 0x10E840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E840u;
        // 0x10e844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e840:
    ctx->pc = 0x10E848u;
}
