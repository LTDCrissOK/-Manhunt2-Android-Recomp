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

// Function: sub_001796F0
// Address: 0x1796f0 - 0x179768
void sub_001796F0_0x1796f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001796F0_0x1796f0");
#endif

    switch (ctx->pc) {
        case 0x179704u: goto label_179704;
        case 0x179718u: goto label_179718;
        default: break;
    }

    ctx->pc = 0x1796f0u;

    // 0x1796f0: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x1796f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x1796f4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1796F4u;
    {
        const bool branch_taken_0x1796f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1796F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796F4u;
        // 0x1796f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1796f4) {
            ctx->pc = 0x17970Cu;
            goto label_17970c;
        }
    }
    ctx->pc = 0x1796FCu;
    // 0x1796fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1796FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1796FCu;
        // 0x179700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1796FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179704u;
label_179704:
    // 0x179704: 0x3e00008  jr          $ra
    ctx->pc = 0x179704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179704u;
        // 0x179708: 0x90820009  lbu         $v0, 0x9($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17970Cu;
label_17970c:
    // 0x17970c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17970cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179710: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x179710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x179714: 0x0  nop
    ctx->pc = 0x179714u;
    // NOP
label_179718:
    // 0x179718: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x179718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x17971c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17971cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x179720: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x179720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179724: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x179724u;
    {
        const bool branch_taken_0x179724 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x179728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179724u;
        // 0x179728: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179724) {
            ctx->pc = 0x179748u;
            goto label_179748;
        }
    }
    ctx->pc = 0x17972Cu;
    // 0x17972c: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x17972cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x179730: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x179730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x179734: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x179734u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x179738: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x179738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x17973c: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x17973cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x179740: 0x10e3fff0  beq         $a3, $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x179740u;
    {
        const bool branch_taken_0x179740 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x179740) {
            ctx->pc = 0x179704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179704;
        }
    }
    ctx->pc = 0x179748u;
label_179748:
    // 0x179748: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x179748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x17974c: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x17974cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x179750: 0x2d030010  sltiu       $v1, $t0, 0x10
    ctx->pc = 0x179750u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x179754: 0x5460fff0  bnel        $v1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x179754u;
    {
        const bool branch_taken_0x179754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179754) {
            ctx->pc = 0x179758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179754u;
            // 0x179758: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179718;
        }
    }
    ctx->pc = 0x17975Cu;
    // 0x17975c: 0x3e00008  jr          $ra
    ctx->pc = 0x17975Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17975Cu;
        // 0x179760: 0x90820009  lbu         $v0, 0x9($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17975Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179764u;
    // 0x179764: 0x0  nop
    ctx->pc = 0x179764u;
    // NOP
    ctx->pc = 0x179768u;
}
