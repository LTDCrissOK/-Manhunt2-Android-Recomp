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

// Function: sub_001784A0
// Address: 0x1784a0 - 0x178510
void sub_001784A0_0x1784a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001784A0_0x1784a0");
#endif

    switch (ctx->pc) {
        case 0x1784acu: goto label_1784ac;
        case 0x1784b4u: goto label_1784b4;
        case 0x1784d0u: goto label_1784d0;
        default: break;
    }

    ctx->pc = 0x1784a0u;

    // 0x1784a0: 0x90820158  lbu         $v0, 0x158($a0)
    ctx->pc = 0x1784a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x1784a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1784A4u;
    {
        const bool branch_taken_0x1784a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1784A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1784A4u;
        // 0x1784a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784a4) {
            ctx->pc = 0x1784C0u;
            goto label_1784c0;
        }
    }
    ctx->pc = 0x1784ACu;
label_1784ac:
    // 0x1784ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1784ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1784B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1784ACu;
        // 0x1784b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1784ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1784B4u;
label_1784b4:
    // 0x1784b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1784b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1784b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1784B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1784BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1784B8u;
        // 0x1784bc: 0x8c6200dc  lw          $v0, 0xDC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1784B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1784C0u;
label_1784c0:
    // 0x1784c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1784c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784c4: 0x248800d8  addiu       $t0, $a0, 0xD8
    ctx->pc = 0x1784c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x1784c8: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x1784c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1784cc: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x1784ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_1784d0:
    // 0x1784d0: 0x1031021  addu        $v0, $t0, $v1
    ctx->pc = 0x1784d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1784d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1784d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1784d8: 0x50490007  beql        $v0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1784D8u;
    {
        const bool branch_taken_0x1784d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x1784d8) {
            ctx->pc = 0x1784DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1784D8u;
            // 0x1784dc: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1784F8u;
            goto label_1784f8;
        }
    }
    ctx->pc = 0x1784E0u;
    // 0x1784e0: 0x1045fff4  beq         $v0, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1784E0u;
    {
        const bool branch_taken_0x1784e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1784E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1784E0u;
        // 0x1784e4: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784e0) {
            ctx->pc = 0x1784B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1784b4;
        }
    }
    ctx->pc = 0x1784E8u;
    // 0x1784e8: 0x90830158  lbu         $v1, 0x158($a0)
    ctx->pc = 0x1784e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x1784ec: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1784ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1784f0: 0x10e3ffee  beq         $a3, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1784F0u;
    {
        const bool branch_taken_0x1784f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1784F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1784F0u;
        // 0x1784f4: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1784f0) {
            ctx->pc = 0x1784ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1784ac;
        }
    }
    ctx->pc = 0x1784F8u;
label_1784f8:
    // 0x1784f8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1784f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1784fc: 0x2cc30010  sltiu       $v1, $a2, 0x10
    ctx->pc = 0x1784fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x178500: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x178500u;
    {
        const bool branch_taken_0x178500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178500u;
        // 0x178504: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178500) {
            ctx->pc = 0x1784D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1784d0;
        }
    }
    ctx->pc = 0x178508u;
    // 0x178508: 0x3e00008  jr          $ra
    ctx->pc = 0x178508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178508u;
        // 0x17850c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178510u;
}
