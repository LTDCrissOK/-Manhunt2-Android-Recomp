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

// Function: sub_00114398
// Address: 0x114398 - 0x1143f0
void sub_00114398_0x114398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114398_0x114398");
#endif

    switch (ctx->pc) {
        case 0x1143acu: goto label_1143ac;
        case 0x1143c8u: goto label_1143c8;
        default: break;
    }

    ctx->pc = 0x114398u;

    // 0x114398: 0x908301b4  lbu         $v1, 0x1B4($a0)
    ctx->pc = 0x114398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x11439c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11439Cu;
    {
        const bool branch_taken_0x11439c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11439c) {
            ctx->pc = 0x1143ACu;
            goto label_1143ac;
        }
    }
    ctx->pc = 0x1143A4u;
    // 0x1143a4: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1143A4u;
    {
        const bool branch_taken_0x1143a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1143a4) {
            ctx->pc = 0x1143A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1143A4u;
            // 0x1143a8: 0x8c820154  lw          $v0, 0x154($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1143B4u;
            goto label_1143b4;
        }
    }
    ctx->pc = 0x1143ACu;
label_1143ac:
    // 0x1143ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1143ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1143B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143ACu;
        // 0x1143b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1143ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1143B4u;
label_1143b4:
    // 0x1143b4: 0x1045000b  beq         $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1143B4u;
    {
        const bool branch_taken_0x1143b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1143B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143B4u;
        // 0x1143b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143b4) {
            ctx->pc = 0x1143E4u;
            goto label_1143e4;
        }
    }
    ctx->pc = 0x1143BCu;
    // 0x1143bc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1143bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1143c0: 0x24840154  addiu       $a0, $a0, 0x154
    ctx->pc = 0x1143c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 340));
    // 0x1143c4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1143c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1143c8:
    // 0x1143c8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1143c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1143cc: 0x10c7fff7  beq         $a2, $a3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1143CCu;
    {
        const bool branch_taken_0x1143cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x1143D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143CCu;
        // 0x1143d0: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143cc) {
            ctx->pc = 0x1143ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1143ac;
        }
    }
    ctx->pc = 0x1143D4u;
    // 0x1143d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1143d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1143d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1143d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1143dc: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1143DCu;
    {
        const bool branch_taken_0x1143dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1143E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143DCu;
        // 0x1143e0: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1143dc) {
            ctx->pc = 0x1143C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1143c8;
        }
    }
    ctx->pc = 0x1143E4u;
label_1143e4:
    // 0x1143e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1143E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1143E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1143E4u;
        // 0x1143e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1143E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1143ECu;
    // 0x1143ec: 0x0  nop
    ctx->pc = 0x1143ecu;
    // NOP
    ctx->pc = 0x1143f0u;
}
