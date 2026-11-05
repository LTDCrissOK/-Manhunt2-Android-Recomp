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

// Function: sub_003CAA40
// Address: 0x3caa40 - 0x3caa80
void sub_003CAA40_0x3caa40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CAA40_0x3caa40");
#endif

    ctx->pc = 0x3caa40u;

    // 0x3caa40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3caa40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3caa44: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3caa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3caa48: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x3caa48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3caa4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3caa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3caa50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3caa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3caa54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3caa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3caa58: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3caa58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x3caa5c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3caa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3caa60: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3caa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3caa64: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CAA64u;
    {
        const bool branch_taken_0x3caa64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CAA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA64u;
        // 0x3caa68: 0xaca4000c  sw          $a0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caa64) {
            ctx->pc = 0x3CAA74u;
            goto label_3caa74;
        }
    }
    ctx->pc = 0x3CAA6Cu;
    // 0x3caa6c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x3caa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3caa70: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x3caa70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_3caa74:
    // 0x3caa74: 0x3e00008  jr          $ra
    ctx->pc = 0x3CAA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAA74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CAA7Cu;
    // 0x3caa7c: 0x0  nop
    ctx->pc = 0x3caa7cu;
    // NOP
    ctx->pc = 0x3caa80u;
}
