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

// Function: sub_0025AAA0
// Address: 0x25aaa0 - 0x25aad8
void sub_0025AAA0_0x25aaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025AAA0_0x25aaa0");
#endif

    ctx->pc = 0x25aaa0u;

    // 0x25aaa0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x25aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25aaa4: 0x24020569  addiu       $v0, $zero, 0x569
    ctx->pc = 0x25aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1385));
    // 0x25aaa8: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25AAA8u;
    {
        const bool branch_taken_0x25aaa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAA8u;
        // 0x25aaac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aaa8) {
            ctx->pc = 0x25AACCu;
            goto label_25aacc;
        }
    }
    ctx->pc = 0x25AAB0u;
    // 0x25aab0: 0x2402056d  addiu       $v0, $zero, 0x56D
    ctx->pc = 0x25aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1389));
    // 0x25aab4: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25AAB4u;
    {
        const bool branch_taken_0x25aab4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAB4u;
        // 0x25aab8: 0x2402056c  addiu       $v0, $zero, 0x56C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aab4) {
            ctx->pc = 0x25AACCu;
            goto label_25aacc;
        }
    }
    ctx->pc = 0x25AABCu;
    // 0x25aabc: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25AABCu;
    {
        const bool branch_taken_0x25aabc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AABCu;
        // 0x25aac0: 0x24020570  addiu       $v0, $zero, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aabc) {
            ctx->pc = 0x25AACCu;
            goto label_25aacc;
        }
    }
    ctx->pc = 0x25AAC4u;
    // 0x25aac4: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25AAC4u;
    {
        const bool branch_taken_0x25aac4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x25aac4) {
            ctx->pc = 0x25AAD0u;
            goto label_25aad0;
        }
    }
    ctx->pc = 0x25AACCu;
label_25aacc:
    // 0x25aacc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x25aaccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25aad0:
    // 0x25aad0: 0x3e00008  jr          $ra
    ctx->pc = 0x25AAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25AAD0u;
        // 0x25aad4: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25AAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25AAD8u;
}
