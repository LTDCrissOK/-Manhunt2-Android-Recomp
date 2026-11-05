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

// Function: sub_0010E8E8
// Address: 0x10e8e8 - 0x10e918
void sub_0010E8E8_0x10e8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E8E8_0x10e8e8");
#endif

    switch (ctx->pc) {
        case 0x10e8e8u: goto label_10e8e8;
        case 0x10e8ecu: goto label_10e8ec;
        case 0x10e8f0u: goto label_10e8f0;
        case 0x10e8f4u: goto label_10e8f4;
        case 0x10e8f8u: goto label_10e8f8;
        case 0x10e8fcu: goto label_10e8fc;
        case 0x10e900u: goto label_10e900;
        case 0x10e904u: goto label_10e904;
        case 0x10e908u: goto label_10e908;
        case 0x10e90cu: goto label_10e90c;
        case 0x10e910u: goto label_10e910;
        case 0x10e914u: goto label_10e914;
        default: break;
    }

    ctx->pc = 0x10e8e8u;

label_10e8e8:
    // 0x10e8e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e8ec:
    // 0x10e8ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e8f0:
    // 0x10e8f0: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e8f4:
    // 0x10e8f4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_10e8f8:
    if (ctx->pc == 0x10E8F8u) {
        ctx->pc = 0x10E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8F4u;
        // 0x10e8f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E8FCu;
        goto label_10e8fc;
    }
    ctx->pc = 0x10E8F4u;
    {
        const bool branch_taken_0x10e8f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8F4u;
        // 0x10e8f8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8f4) {
            ctx->pc = 0x10E910u;
            goto label_10e910;
        }
    }
    ctx->pc = 0x10E8FCu;
label_10e8fc:
    // 0x10e8fc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e900:
    // 0x10e900: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x10e900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_10e904:
    // 0x10e904: 0x40f809  jalr        $v0
label_10e908:
    if (ctx->pc == 0x10E908u) {
        ctx->pc = 0x10E90Cu;
        goto label_10e90c;
    }
    ctx->pc = 0x10E904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E90Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E904u, 0x10E90Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E90Cu;
label_10e90c:
    // 0x10e90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e910:
    // 0x10e910: 0x3e00008  jr          $ra
label_10e914:
    if (ctx->pc == 0x10E914u) {
        ctx->pc = 0x10E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E910u;
        // 0x10e914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E918u;
        goto label_fallthrough_0x10e910;
    }
    ctx->pc = 0x10E910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E910u;
        // 0x10e914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e910:
    ctx->pc = 0x10E918u;
}
