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

// Function: sub_00163228
// Address: 0x163228 - 0x163280
void sub_00163228_0x163228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163228_0x163228");
#endif

    ctx->pc = 0x163228u;

    // 0x163228: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x163228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16322c: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16322Cu;
    {
        const bool branch_taken_0x16322c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x163230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16322Cu;
        // 0x163230: 0x28a20005  slti        $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16322c) {
            ctx->pc = 0x163268u;
            goto label_163268;
        }
    }
    ctx->pc = 0x163234u;
    // 0x163234: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163234u;
    {
        const bool branch_taken_0x163234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163234u;
        // 0x163238: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163234) {
            ctx->pc = 0x16324Cu;
            goto label_16324c;
        }
    }
    ctx->pc = 0x16323Cu;
    // 0x16323c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16323Cu;
    {
        const bool branch_taken_0x16323c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x16323c) {
            ctx->pc = 0x163260u;
            goto label_163260;
        }
    }
    ctx->pc = 0x163244u;
    // 0x163244: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x163244u;
    {
        const bool branch_taken_0x163244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163244) {
            ctx->pc = 0x163278u;
            goto label_163278;
        }
    }
    ctx->pc = 0x16324Cu;
label_16324c:
    // 0x16324c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x163250: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x163250u;
    {
        const bool branch_taken_0x163250 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x163254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163250u;
        // 0x163254: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163250) {
            ctx->pc = 0x163270u;
            goto label_163270;
        }
    }
    ctx->pc = 0x163258u;
    // 0x163258: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x163258u;
    {
        const bool branch_taken_0x163258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163258) {
            ctx->pc = 0x163278u;
            goto label_163278;
        }
    }
    ctx->pc = 0x163260u;
label_163260:
    // 0x163260: 0x3e00008  jr          $ra
    ctx->pc = 0x163260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163260u;
        // 0x163264: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163268u;
label_163268:
    // 0x163268: 0x3e00008  jr          $ra
    ctx->pc = 0x163268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163268u;
        // 0x16326c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163270u;
label_163270:
    // 0x163270: 0x3e00008  jr          $ra
    ctx->pc = 0x163270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163270u;
        // 0x163274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163278u;
label_163278:
    // 0x163278: 0x3e00008  jr          $ra
    ctx->pc = 0x163278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163280u;
}
