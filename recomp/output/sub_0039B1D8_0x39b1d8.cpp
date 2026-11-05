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

// Function: sub_0039B1D8
// Address: 0x39b1d8 - 0x39b200
void sub_0039B1D8_0x39b1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B1D8_0x39b1d8");
#endif

    switch (ctx->pc) {
        case 0x39b1d8u: goto label_39b1d8;
        case 0x39b1dcu: goto label_39b1dc;
        case 0x39b1e0u: goto label_39b1e0;
        case 0x39b1e4u: goto label_39b1e4;
        case 0x39b1e8u: goto label_39b1e8;
        case 0x39b1ecu: goto label_39b1ec;
        case 0x39b1f0u: goto label_39b1f0;
        case 0x39b1f4u: goto label_39b1f4;
        case 0x39b1f8u: goto label_39b1f8;
        case 0x39b1fcu: goto label_39b1fc;
        default: break;
    }

    ctx->pc = 0x39b1d8u;

label_39b1d8:
    // 0x39b1d8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_39b1dc:
    // 0x39b1dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39b1dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39b1e0:
    // 0x39b1e0: 0x8c42ada4  lw          $v0, -0x525C($v0)
    ctx->pc = 0x39b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946212)));
label_39b1e4:
    // 0x39b1e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39b1e8:
    if (ctx->pc == 0x39B1E8u) {
        ctx->pc = 0x39B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1E4u;
        // 0x39b1e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B1ECu;
        goto label_39b1ec;
    }
    ctx->pc = 0x39B1E4u;
    {
        const bool branch_taken_0x39b1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1E4u;
        // 0x39b1e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b1e4) {
            ctx->pc = 0x39B1F4u;
            goto label_39b1f4;
        }
    }
    ctx->pc = 0x39B1ECu;
label_39b1ec:
    // 0x39b1ec: 0x40f809  jalr        $v0
label_39b1f0:
    if (ctx->pc == 0x39B1F0u) {
        ctx->pc = 0x39B1F4u;
        goto label_39b1f4;
    }
    ctx->pc = 0x39B1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39B1F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B1ECu, 0x39B1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B1F4u;
label_39b1f4:
    // 0x39b1f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39b1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39b1f8:
    // 0x39b1f8: 0x3e00008  jr          $ra
label_39b1fc:
    if (ctx->pc == 0x39B1FCu) {
        ctx->pc = 0x39B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1F8u;
        // 0x39b1fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B200u;
        goto label_fallthrough_0x39b1f8;
    }
    ctx->pc = 0x39B1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B1F8u;
        // 0x39b1fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39b1f8:
    ctx->pc = 0x39B200u;
}
