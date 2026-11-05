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

// Function: sub_001DB740
// Address: 0x1db740 - 0x1db790
void sub_001DB740_0x1db740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB740_0x1db740");
#endif

    ctx->pc = 0x1db740u;

    // 0x1db740: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1db740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1db744: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DB744u;
    {
        const bool branch_taken_0x1db744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db744) {
            ctx->pc = 0x1DB788u;
            goto label_1db788;
        }
    }
    ctx->pc = 0x1DB74Cu;
    // 0x1db74c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1db74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1db750: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DB750u;
    {
        const bool branch_taken_0x1db750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db750) {
            ctx->pc = 0x1DB754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB750u;
            // 0x1db754: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB758u;
            goto label_1db758;
        }
    }
    ctx->pc = 0x1DB758u;
label_1db758:
    // 0x1db758: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1db758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1db75c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1db75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1db760: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DB760u;
    {
        const bool branch_taken_0x1db760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db760) {
            ctx->pc = 0x1DB764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB760u;
            // 0x1db764: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB768u;
            goto label_1db768;
        }
    }
    ctx->pc = 0x1DB768u;
label_1db768:
    // 0x1db768: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1db768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1db76c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1db76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1db770: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DB770u;
    {
        const bool branch_taken_0x1db770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db770) {
            ctx->pc = 0x1DB774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB770u;
            // 0x1db774: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB778u;
            goto label_1db778;
        }
    }
    ctx->pc = 0x1DB778u;
label_1db778:
    // 0x1db778: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1db778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1db77c: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x1db77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1db780: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DB780u;
    {
        const bool branch_taken_0x1db780 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db780) {
            ctx->pc = 0x1DB784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB780u;
            // 0x1db784: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB788u;
            goto label_1db788;
        }
    }
    ctx->pc = 0x1DB788u;
label_1db788:
    // 0x1db788: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB790u;
}
