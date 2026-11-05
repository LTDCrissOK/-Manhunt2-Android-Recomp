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

// Function: sub_00166188
// Address: 0x166188 - 0x1661f0
void sub_00166188_0x166188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166188_0x166188");
#endif

    ctx->pc = 0x166188u;

    // 0x166188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16618c: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16618Cu;
    {
        const bool branch_taken_0x16618c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x166190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16618Cu;
        // 0x166190: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16618c) {
            ctx->pc = 0x1661C4u;
            goto label_1661c4;
        }
    }
    ctx->pc = 0x166194u;
    // 0x166194: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x166194u;
    {
        const bool branch_taken_0x166194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166194u;
        // 0x166198: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166194) {
            ctx->pc = 0x1661ACu;
            goto label_1661ac;
        }
    }
    ctx->pc = 0x16619Cu;
    // 0x16619c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x16619Cu;
    {
        const bool branch_taken_0x16619c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1661A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16619Cu;
        // 0x1661a0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16619c) {
            ctx->pc = 0x1661CCu;
            goto label_1661cc;
        }
    }
    ctx->pc = 0x1661A4u;
    // 0x1661a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1661A4u;
    {
        const bool branch_taken_0x1661a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1661a4) {
            ctx->pc = 0x1661E4u;
            goto label_1661e4;
        }
    }
    ctx->pc = 0x1661ACu;
label_1661ac:
    // 0x1661ac: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1661ACu;
    {
        const bool branch_taken_0x1661ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1661B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661ACu;
        // 0x1661b0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661ac) {
            ctx->pc = 0x1661D4u;
            goto label_1661d4;
        }
    }
    ctx->pc = 0x1661B4u;
    // 0x1661b4: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1661B4u;
    {
        const bool branch_taken_0x1661b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1661B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661B4u;
        // 0x1661b8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1661b4) {
            ctx->pc = 0x1661DCu;
            goto label_1661dc;
        }
    }
    ctx->pc = 0x1661BCu;
    // 0x1661bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1661BCu;
    {
        const bool branch_taken_0x1661bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1661bc) {
            ctx->pc = 0x1661E4u;
            goto label_1661e4;
        }
    }
    ctx->pc = 0x1661C4u;
label_1661c4:
    // 0x1661c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1661C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1661C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661C4u;
        // 0x1661c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1661C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1661CCu;
label_1661cc:
    // 0x1661cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1661CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1661D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661CCu;
        // 0x1661d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1661CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1661D4u;
label_1661d4:
    // 0x1661d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1661D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1661D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661D4u;
        // 0x1661d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1661D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1661DCu;
label_1661dc:
    // 0x1661dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1661DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1661E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1661DCu;
        // 0x1661e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1661DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1661E4u;
label_1661e4:
    // 0x1661e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1661E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1661E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1661ECu;
    // 0x1661ec: 0x0  nop
    ctx->pc = 0x1661ecu;
    // NOP
    ctx->pc = 0x1661f0u;
}
