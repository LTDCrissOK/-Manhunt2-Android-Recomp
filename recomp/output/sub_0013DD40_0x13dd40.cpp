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

// Function: sub_0013DD40
// Address: 0x13dd40 - 0x13ddb8
void sub_0013DD40_0x13dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DD40_0x13dd40");
#endif

    switch (ctx->pc) {
        case 0x13dd4cu: goto label_13dd4c;
        case 0x13dd54u: goto label_13dd54;
        case 0x13dd78u: goto label_13dd78;
        default: break;
    }

    ctx->pc = 0x13dd40u;

    // 0x13dd40: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x13dd40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x13dd44: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DD44u;
    {
        const bool branch_taken_0x13dd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dd44) {
            ctx->pc = 0x13DD48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DD44u;
            // 0x13dd48: 0x90820008  lbu         $v0, 0x8($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DD5Cu;
            goto label_13dd5c;
        }
    }
    ctx->pc = 0x13DD4Cu;
label_13dd4c:
    // 0x13dd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x13DD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD4Cu;
        // 0x13dd50: 0x90820008  lbu         $v0, 0x8($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DD54u;
label_13dd54:
    // 0x13dd54: 0x3e00008  jr          $ra
    ctx->pc = 0x13DD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD54u;
        // 0x13dd58: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DD5Cu;
label_13dd5c:
    // 0x13dd5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13dd5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dd60: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13DD60u;
    {
        const bool branch_taken_0x13dd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD60u;
        // 0x13dd64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd60) {
            ctx->pc = 0x13DDB0u;
            goto label_13ddb0;
        }
    }
    ctx->pc = 0x13DD68u;
    // 0x13dd68: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x13dd68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13dd6c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x13dd6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dd70: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x13dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13dd74: 0x0  nop
    ctx->pc = 0x13dd74u;
    // NOP
label_13dd78:
    // 0x13dd78: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x13dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x13dd7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13dd80: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13DD80u;
    {
        const bool branch_taken_0x13dd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dd80) {
            ctx->pc = 0x13DD84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DD80u;
            // 0x13dd84: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DDA0u;
            goto label_13dda0;
        }
    }
    ctx->pc = 0x13DD88u;
    // 0x13dd88: 0x1045fff2  beq         $v0, $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x13DD88u;
    {
        const bool branch_taken_0x13dd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x13DD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD88u;
        // 0x13dd8c: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd88) {
            ctx->pc = 0x13DD54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13dd54;
        }
    }
    ctx->pc = 0x13DD90u;
    // 0x13dd90: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x13dd90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x13dd94: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x13dd94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13dd98: 0x10e3ffec  beq         $a3, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13DD98u;
    {
        const bool branch_taken_0x13dd98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x13DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD98u;
        // 0x13dd9c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd98) {
            ctx->pc = 0x13DD4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13dd4c;
        }
    }
    ctx->pc = 0x13DDA0u;
label_13dda0:
    // 0x13dda0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x13dda0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13dda4: 0xc8182b  sltu        $v1, $a2, $t0
    ctx->pc = 0x13dda4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x13dda8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x13DDA8u;
    {
        const bool branch_taken_0x13dda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDA8u;
        // 0x13ddac: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dda8) {
            ctx->pc = 0x13DD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13dd78;
        }
    }
    ctx->pc = 0x13DDB0u;
label_13ddb0:
    // 0x13ddb0: 0x3e00008  jr          $ra
    ctx->pc = 0x13DDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDB0u;
        // 0x13ddb4: 0x90820008  lbu         $v0, 0x8($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DDB8u;
}
