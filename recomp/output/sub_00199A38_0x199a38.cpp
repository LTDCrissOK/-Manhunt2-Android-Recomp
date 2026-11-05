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

// Function: sub_00199A38
// Address: 0x199a38 - 0x199a90
void sub_00199A38_0x199a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199A38_0x199a38");
#endif

    ctx->pc = 0x199a38u;

    // 0x199a38: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x199a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x199a3c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x199a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x199a40: 0x8c4308d8  lw          $v1, 0x8D8($v0)
    ctx->pc = 0x199a40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F08D8u));
    // 0x199a44: 0x1064000e  beq         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x199A44u;
    {
        const bool branch_taken_0x199a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x199A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A44u;
        // 0x199a48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a44) {
            ctx->pc = 0x199A80u;
            goto label_199a80;
        }
    }
    ctx->pc = 0x199A4Cu;
    // 0x199a4c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x199a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x199a50: 0x8c4308dc  lw          $v1, 0x8DC($v0)
    ctx->pc = 0x199a50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F08DCu));
    // 0x199a54: 0x1064000a  beq         $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x199A54u;
    {
        const bool branch_taken_0x199a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x199A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A54u;
        // 0x199a58: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a54) {
            ctx->pc = 0x199A80u;
            goto label_199a80;
        }
    }
    ctx->pc = 0x199A5Cu;
    // 0x199a5c: 0x8c4308e0  lw          $v1, 0x8E0($v0)
    ctx->pc = 0x199a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2272)));
    // 0x199a60: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x199A60u;
    {
        const bool branch_taken_0x199a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x199A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A60u;
        // 0x199a64: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a60) {
            ctx->pc = 0x199A80u;
            goto label_199a80;
        }
    }
    ctx->pc = 0x199A68u;
    // 0x199a68: 0x8c4308e4  lw          $v1, 0x8E4($v0)
    ctx->pc = 0x199a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2276)));
    // 0x199a6c: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x199A6Cu;
    {
        const bool branch_taken_0x199a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x199A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A6Cu;
        // 0x199a70: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a6c) {
            ctx->pc = 0x199A80u;
            goto label_199a80;
        }
    }
    ctx->pc = 0x199A74u;
    // 0x199a74: 0x8c4308e8  lw          $v1, 0x8E8($v0)
    ctx->pc = 0x199a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2280)));
    // 0x199a78: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x199A78u;
    {
        const bool branch_taken_0x199a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x199a78) {
            ctx->pc = 0x199A84u;
            goto label_199a84;
        }
    }
    ctx->pc = 0x199A80u;
label_199a80:
    // 0x199a80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199a84:
    // 0x199a84: 0x3e00008  jr          $ra
    ctx->pc = 0x199A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A84u;
        // 0x199a88: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199A8Cu;
    // 0x199a8c: 0x0  nop
    ctx->pc = 0x199a8cu;
    // NOP
    ctx->pc = 0x199a90u;
}
