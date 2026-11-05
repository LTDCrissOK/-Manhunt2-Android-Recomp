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

// Function: sub_003095E8
// Address: 0x3095e8 - 0x309630
void sub_003095E8_0x3095e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003095E8_0x3095e8");
#endif

    ctx->pc = 0x3095e8u;

    // 0x3095e8: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x3095e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3095ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3095ECu;
    {
        const bool branch_taken_0x3095ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3095F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3095ECu;
        // 0x3095f0: 0x8c8612dc  lw          $a2, 0x12DC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3095ec) {
            ctx->pc = 0x3095FCu;
            goto label_3095fc;
        }
    }
    ctx->pc = 0x3095F4u;
    // 0x3095f4: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x3095f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3095f8: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x3095f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_3095fc:
    // 0x3095fc: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x3095fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x309600: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x309600u;
    {
        const bool branch_taken_0x309600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x309600) {
            ctx->pc = 0x309604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309600u;
            // 0x309604: 0xac8512dc  sw          $a1, 0x12DC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4828), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309614u;
            goto label_309614;
        }
    }
    ctx->pc = 0x309608u;
    // 0x309608: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x309608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x30960c: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x30960cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x309610: 0xac8512dc  sw          $a1, 0x12DC($a0)
    ctx->pc = 0x309610u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4828), GPR_U32(ctx, 5));
label_309614:
    // 0x309614: 0x248212c0  addiu       $v0, $a0, 0x12C0
    ctx->pc = 0x309614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
    // 0x309618: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x309618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x30961c: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x30961Cu;
    {
        const bool branch_taken_0x30961c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x309620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30961Cu;
        // 0x309620: 0xaca6001c  sw          $a2, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30961c) {
            ctx->pc = 0x309628u;
            goto label_309628;
        }
    }
    ctx->pc = 0x309624u;
    // 0x309624: 0xacc50020  sw          $a1, 0x20($a2)
    ctx->pc = 0x309624u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 5));
label_309628:
    // 0x309628: 0x3e00008  jr          $ra
    ctx->pc = 0x309628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309630u;
}
