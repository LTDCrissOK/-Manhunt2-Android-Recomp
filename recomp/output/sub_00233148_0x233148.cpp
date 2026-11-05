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

// Function: sub_00233148
// Address: 0x233148 - 0x233198
void sub_00233148_0x233148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233148_0x233148");
#endif

    ctx->pc = 0x233148u;

    // 0x233148: 0x8c830334  lw          $v1, 0x334($a0)
    ctx->pc = 0x233148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x23314c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x23314cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x233150: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x233150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x233154: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x233154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x233158: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x233158u;
    {
        const bool branch_taken_0x233158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233158) {
            ctx->pc = 0x23315Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233158u;
            // 0x23315c: 0x8c84036c  lw          $a0, 0x36C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233168u;
            goto label_233168;
        }
    }
    ctx->pc = 0x233160u;
    // 0x233160: 0x3e00008  jr          $ra
    ctx->pc = 0x233160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233160u;
        // 0x233164: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233168u;
label_233168:
    // 0x233168: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x233168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x23316c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x23316cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x233170: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x233170u;
    {
        const bool branch_taken_0x233170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x233174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233170u;
        // 0x233174: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233170) {
            ctx->pc = 0x233184u;
            goto label_233184;
        }
    }
    ctx->pc = 0x233178u;
    // 0x233178: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x233178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x23317c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23317Cu;
    {
        const bool branch_taken_0x23317c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23317c) {
            ctx->pc = 0x23318Cu;
            goto label_23318c;
        }
    }
    ctx->pc = 0x233184u;
label_233184:
    // 0x233184: 0x3e00008  jr          $ra
    ctx->pc = 0x233184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233184u;
        // 0x233188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23318Cu;
label_23318c:
    // 0x23318c: 0x3e00008  jr          $ra
    ctx->pc = 0x23318Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23318Cu;
        // 0x233190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23318Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233194u;
    // 0x233194: 0x0  nop
    ctx->pc = 0x233194u;
    // NOP
    ctx->pc = 0x233198u;
}
