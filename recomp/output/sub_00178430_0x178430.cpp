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

// Function: sub_00178430
// Address: 0x178430 - 0x1784a0
void sub_00178430_0x178430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178430_0x178430");
#endif

    switch (ctx->pc) {
        case 0x17843cu: goto label_17843c;
        case 0x178444u: goto label_178444;
        case 0x178460u: goto label_178460;
        default: break;
    }

    ctx->pc = 0x178430u;

    // 0x178430: 0x90820158  lbu         $v0, 0x158($a0)
    ctx->pc = 0x178430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x178434: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x178434u;
    {
        const bool branch_taken_0x178434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178434u;
        // 0x178438: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178434) {
            ctx->pc = 0x17844Cu;
            goto label_17844c;
        }
    }
    ctx->pc = 0x17843Cu;
label_17843c:
    // 0x17843c: 0x3e00008  jr          $ra
    ctx->pc = 0x17843Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17843Cu;
        // 0x178440: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17843Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178444u;
label_178444:
    // 0x178444: 0x3e00008  jr          $ra
    ctx->pc = 0x178444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178444u;
        // 0x178448: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17844Cu;
label_17844c:
    // 0x17844c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17844cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178450: 0x248800d8  addiu       $t0, $a0, 0xD8
    ctx->pc = 0x178450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x178454: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x178454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x178458: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x178458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x17845c: 0x0  nop
    ctx->pc = 0x17845cu;
    // NOP
label_178460:
    // 0x178460: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x178460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x178464: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x178464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178468: 0x50490007  beql        $v0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x178468u;
    {
        const bool branch_taken_0x178468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x178468) {
            ctx->pc = 0x17846Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178468u;
            // 0x17846c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178488u;
            goto label_178488;
        }
    }
    ctx->pc = 0x178470u;
    // 0x178470: 0x1045fff4  beq         $v0, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x178470u;
    {
        const bool branch_taken_0x178470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x178474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178470u;
        // 0x178474: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178470) {
            ctx->pc = 0x178444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178444;
        }
    }
    ctx->pc = 0x178478u;
    // 0x178478: 0x90830158  lbu         $v1, 0x158($a0)
    ctx->pc = 0x178478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x17847c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x17847cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x178480: 0x10e3ffee  beq         $a3, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x178480u;
    {
        const bool branch_taken_0x178480 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x178484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178480u;
        // 0x178484: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178480) {
            ctx->pc = 0x17843Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17843c;
        }
    }
    ctx->pc = 0x178488u;
label_178488:
    // 0x178488: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x178488u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17848c: 0x2cc30010  sltiu       $v1, $a2, 0x10
    ctx->pc = 0x17848cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x178490: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x178490u;
    {
        const bool branch_taken_0x178490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178490u;
        // 0x178494: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178490) {
            ctx->pc = 0x178460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178460;
        }
    }
    ctx->pc = 0x178498u;
    // 0x178498: 0x3e00008  jr          $ra
    ctx->pc = 0x178498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178498u;
        // 0x17849c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1784A0u;
}
