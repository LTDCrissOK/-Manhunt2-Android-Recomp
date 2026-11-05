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

// Function: sub_002D6430
// Address: 0x2d6430 - 0x2d6480
void sub_002D6430_0x2d6430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6430_0x2d6430");
#endif

    switch (ctx->pc) {
        case 0x2d6458u: goto label_2d6458;
        default: break;
    }

    ctx->pc = 0x2d6430u;

    // 0x2d6430: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x2d6430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d6434: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x2d6434u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2d6438: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2d6438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2d643c: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x2d643cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2d6440: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x2d6440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2d6444: 0x1880000c  blez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D6444u;
    {
        const bool branch_taken_0x2d6444 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2D6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6444u;
        // 0x2d6448: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6444) {
            ctx->pc = 0x2D6478u;
            goto label_2d6478;
        }
    }
    ctx->pc = 0x2D644Cu;
    // 0x2d644c: 0x24e20098  addiu       $v0, $a3, 0x98
    ctx->pc = 0x2d644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 152));
    // 0x2d6450: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2d6450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2d6454: 0x0  nop
    ctx->pc = 0x2d6454u;
    // NOP
label_2d6458:
    // 0x2d6458: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2d6458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d645c: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D645Cu;
    {
        const bool branch_taken_0x2d645c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2D6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D645Cu;
        // 0x2d6460: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d645c) {
            ctx->pc = 0x2D646Cu;
            goto label_2d646c;
        }
    }
    ctx->pc = 0x2D6464u;
    // 0x2d6464: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6464u;
        // 0x2d6468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D646Cu;
label_2d646c:
    // 0x2d646c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2d646cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2d6470: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D6470u;
    {
        const bool branch_taken_0x2d6470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6470u;
        // 0x2d6474: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6470) {
            ctx->pc = 0x2D6458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6458;
        }
    }
    ctx->pc = 0x2D6478u;
label_2d6478:
    // 0x2d6478: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6478u;
        // 0x2d647c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6480u;
}
