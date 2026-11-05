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

// Function: sub_0010E5C0
// Address: 0x10e5c0 - 0x10e5f0
void sub_0010E5C0_0x10e5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E5C0_0x10e5c0");
#endif

    switch (ctx->pc) {
        case 0x10e5c0u: goto label_10e5c0;
        case 0x10e5c4u: goto label_10e5c4;
        case 0x10e5c8u: goto label_10e5c8;
        case 0x10e5ccu: goto label_10e5cc;
        case 0x10e5d0u: goto label_10e5d0;
        case 0x10e5d4u: goto label_10e5d4;
        case 0x10e5d8u: goto label_10e5d8;
        case 0x10e5dcu: goto label_10e5dc;
        case 0x10e5e0u: goto label_10e5e0;
        case 0x10e5e4u: goto label_10e5e4;
        case 0x10e5e8u: goto label_10e5e8;
        case 0x10e5ecu: goto label_10e5ec;
        default: break;
    }

    ctx->pc = 0x10e5c0u;

label_10e5c0:
    // 0x10e5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10e5c4:
    // 0x10e5c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10e5c8:
    // 0x10e5c8: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_10e5cc:
    // 0x10e5cc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_10e5d0:
    if (ctx->pc == 0x10E5D0u) {
        ctx->pc = 0x10E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5CCu;
        // 0x10e5d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E5D4u;
        goto label_10e5d4;
    }
    ctx->pc = 0x10E5CCu;
    {
        const bool branch_taken_0x10e5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5CCu;
        // 0x10e5d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e5cc) {
            ctx->pc = 0x10E5E8u;
            goto label_10e5e8;
        }
    }
    ctx->pc = 0x10E5D4u;
label_10e5d4:
    // 0x10e5d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x10e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e5d8:
    // 0x10e5d8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x10e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_10e5dc:
    // 0x10e5dc: 0x40f809  jalr        $v0
label_10e5e0:
    if (ctx->pc == 0x10E5E0u) {
        ctx->pc = 0x10E5E4u;
        goto label_10e5e4;
    }
    ctx->pc = 0x10E5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10E5E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E5DCu, 0x10E5E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E5E4u;
label_10e5e4:
    // 0x10e5e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e5e8:
    // 0x10e5e8: 0x3e00008  jr          $ra
label_10e5ec:
    if (ctx->pc == 0x10E5ECu) {
        ctx->pc = 0x10E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5E8u;
        // 0x10e5ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E5F0u;
        goto label_fallthrough_0x10e5e8;
    }
    ctx->pc = 0x10E5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E5E8u;
        // 0x10e5ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e5e8:
    ctx->pc = 0x10E5F0u;
}
