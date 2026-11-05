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

// Function: sub_001E6078
// Address: 0x1e6078 - 0x1e60c0
void sub_001E6078_0x1e6078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6078_0x1e6078");
#endif

    switch (ctx->pc) {
        case 0x1e6090u: goto label_1e6090;
        default: break;
    }

    ctx->pc = 0x1e6078u;

    // 0x1e6078: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e6078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e607c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1e607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1e6080: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E6080u;
    {
        const bool branch_taken_0x1e6080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6080u;
        // 0x1e6084: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6080) {
            ctx->pc = 0x1E60B4u;
            goto label_1e60b4;
        }
    }
    ctx->pc = 0x1E6088u;
    // 0x1e6088: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e6088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e608c: 0x0  nop
    ctx->pc = 0x1e608cu;
    // NOP
label_1e6090:
    // 0x1e6090: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1e6090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1e6094: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e6094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e6098: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1e6098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1e609c: 0x78830040  lq          $v1, 0x40($a0)
    ctx->pc = 0x1e609cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1e60a0: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x1e60a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x1e60a4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1e60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1e60a8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e60a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e60ac: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E60ACu;
    {
        const bool branch_taken_0x1e60ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E60B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60ACu;
        // 0x1e60b0: 0x24e70050  addiu       $a3, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60ac) {
            ctx->pc = 0x1E6090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e6090;
        }
    }
    ctx->pc = 0x1E60B4u;
label_1e60b4:
    // 0x1e60b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E60B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E60B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E60BCu;
    // 0x1e60bc: 0x0  nop
    ctx->pc = 0x1e60bcu;
    // NOP
    ctx->pc = 0x1e60c0u;
}
