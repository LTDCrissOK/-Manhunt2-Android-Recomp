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

// Function: sub_0039CA20
// Address: 0x39ca20 - 0x39ca58
void sub_0039CA20_0x39ca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CA20_0x39ca20");
#endif

    ctx->pc = 0x39ca20u;

    // 0x39ca20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39ca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39ca24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39ca28: 0xa0850098  sb          $a1, 0x98($a0)
    ctx->pc = 0x39ca28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 152), (uint8_t)GPR_U32(ctx, 5));
    // 0x39ca2c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x39ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39ca30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39CA30u;
    {
        const bool branch_taken_0x39ca30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA30u;
        // 0x39ca34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ca30) {
            ctx->pc = 0x39CA48u;
            goto label_39ca48;
        }
    }
    ctx->pc = 0x39CA38u;
    // 0x39ca38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ca38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ca3c: 0x80e643a  j           func_3990E8
    ctx->pc = 0x39CA3Cu;
    ctx->pc = 0x39CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CA3Cu;
    // 0x39ca40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3990E8u;
    sub_003990E8_0x3990e8(rdram, ctx, runtime); return;
    ctx->pc = 0x39CA44u;
    // 0x39ca44: 0x0  nop
    ctx->pc = 0x39ca44u;
    // NOP
label_39ca48:
    // 0x39ca48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ca48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ca4c: 0x3e00008  jr          $ra
    ctx->pc = 0x39CA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CA4Cu;
        // 0x39ca50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CA54u;
    // 0x39ca54: 0x0  nop
    ctx->pc = 0x39ca54u;
    // NOP
    ctx->pc = 0x39ca58u;
}
