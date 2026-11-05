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

// Function: sub_0013E1E8
// Address: 0x13e1e8 - 0x13e260
void sub_0013E1E8_0x13e1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E1E8_0x13e1e8");
#endif

    switch (ctx->pc) {
        case 0x13e1fcu: goto label_13e1fc;
        case 0x13e210u: goto label_13e210;
        default: break;
    }

    ctx->pc = 0x13e1e8u;

    // 0x13e1e8: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x13e1e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x13e1ec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E1ECu;
    {
        const bool branch_taken_0x13e1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E1ECu;
        // 0x13e1f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e1ec) {
            ctx->pc = 0x13E204u;
            goto label_13e204;
        }
    }
    ctx->pc = 0x13E1F4u;
    // 0x13e1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13E1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E1F4u;
        // 0x13e1f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E1FCu;
label_13e1fc:
    // 0x13e1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x13E1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E1FCu;
        // 0x13e200: 0x90820009  lbu         $v0, 0x9($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E204u;
label_13e204:
    // 0x13e204: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13e204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e208: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13e208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13e20c: 0x0  nop
    ctx->pc = 0x13e20cu;
    // NOP
label_13e210:
    // 0x13e210: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x13e210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x13e214: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13e214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13e218: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13e218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13e21c: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x13E21Cu;
    {
        const bool branch_taken_0x13e21c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E21Cu;
        // 0x13e220: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e21c) {
            ctx->pc = 0x13E240u;
            goto label_13e240;
        }
    }
    ctx->pc = 0x13E224u;
    // 0x13e224: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x13e224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x13e228: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13e228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13e22c: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x13e22cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13e230: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x13e230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x13e234: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x13e234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x13e238: 0x10e3fff0  beq         $a3, $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x13E238u;
    {
        const bool branch_taken_0x13e238 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x13e238) {
            ctx->pc = 0x13E1FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e1fc;
        }
    }
    ctx->pc = 0x13E240u;
label_13e240:
    // 0x13e240: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x13e240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x13e244: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x13e244u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13e248: 0x2d030010  sltiu       $v1, $t0, 0x10
    ctx->pc = 0x13e248u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x13e24c: 0x5460fff0  bnel        $v1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x13E24Cu;
    {
        const bool branch_taken_0x13e24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e24c) {
            ctx->pc = 0x13E250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E24Cu;
            // 0x13e250: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e210;
        }
    }
    ctx->pc = 0x13E254u;
    // 0x13e254: 0x3e00008  jr          $ra
    ctx->pc = 0x13E254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E254u;
        // 0x13e258: 0x90820009  lbu         $v0, 0x9($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E25Cu;
    // 0x13e25c: 0x0  nop
    ctx->pc = 0x13e25cu;
    // NOP
    ctx->pc = 0x13e260u;
}
