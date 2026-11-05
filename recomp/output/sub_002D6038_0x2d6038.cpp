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

// Function: sub_002D6038
// Address: 0x2d6038 - 0x2d60c0
void sub_002D6038_0x2d6038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6038_0x2d6038");
#endif

    ctx->pc = 0x2d6038u;

    // 0x2d6038: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2d6038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d603c: 0x240301c4  addiu       $v1, $zero, 0x1C4
    ctx->pc = 0x2d603cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x2d6040: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x2d6040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x2d6044: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2d6044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6048: 0x8ce40028  lw          $a0, 0x28($a3)
    ctx->pc = 0x2d6048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x2d604c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2d604cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d6050: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d6050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d6054: 0x8ce5002c  lw          $a1, 0x2C($a3)
    ctx->pc = 0x2d6054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x2d6058: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2d6058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d605c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2d605cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6060: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2d6060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d6064: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d6064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d6068: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2d6068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2d606c: 0x14460002  bne         $v0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D606Cu;
    {
        const bool branch_taken_0x2d606c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2D6070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D606Cu;
        // 0x2d6070: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d606c) {
            ctx->pc = 0x2D6078u;
            goto label_2d6078;
        }
    }
    ctx->pc = 0x2D6074u;
    // 0x2d6074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6078:
    // 0x2d6078: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d6078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d607c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D607Cu;
    {
        const bool branch_taken_0x2d607c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d607c) {
            ctx->pc = 0x2D60B4u;
            goto label_2d60b4;
        }
    }
    ctx->pc = 0x2D6084u;
    // 0x2d6084: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D6084u;
    {
        const bool branch_taken_0x2d6084 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6084u;
        // 0x2d6088: 0x240301c4  addiu       $v1, $zero, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6084) {
            ctx->pc = 0x2D60A0u;
            goto label_2d60a0;
        }
    }
    ctx->pc = 0x2D608Cu;
    // 0x2d608c: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x2d608cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x2d6090: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2d6090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d6094: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d6094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d6098: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6098u;
        // 0x2d609c: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D60A0u;
label_2d60a0:
    // 0x2d60a0: 0x8ce2002c  lw          $v0, 0x2C($a3)
    ctx->pc = 0x2d60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x2d60a4: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x2d60a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d60a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d60a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d60ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D60ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D60B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60ACu;
        // 0x2d60b0: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D60ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D60B4u;
label_2d60b4:
    // 0x2d60b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D60B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D60B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60B4u;
        // 0x2d60b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D60B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D60BCu;
    // 0x2d60bc: 0x0  nop
    ctx->pc = 0x2d60bcu;
    // NOP
    ctx->pc = 0x2d60c0u;
}
