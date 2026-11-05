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

// Function: sub_0015B0C8
// Address: 0x15b0c8 - 0x15b128
void sub_0015B0C8_0x15b0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B0C8_0x15b0c8");
#endif

    switch (ctx->pc) {
        case 0x15b0e0u: goto label_15b0e0;
        case 0x15b100u: goto label_15b100;
        default: break;
    }

    ctx->pc = 0x15b0c8u;

    // 0x15b0c8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x15b0c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0cc: 0x91020a20  lbu         $v0, 0xA20($t0)
    ctx->pc = 0x15b0ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2592)));
    // 0x15b0d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B0D0u;
    {
        const bool branch_taken_0x15b0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b0d0) {
            ctx->pc = 0x15B0E8u;
            goto label_15b0e8;
        }
    }
    ctx->pc = 0x15B0D8u;
    // 0x15b0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x15B0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0D8u;
        // 0x15b0dc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B0E0u;
label_15b0e0:
    // 0x15b0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x15B0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0E0u;
        // 0x15b0e4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B0E8u;
label_15b0e8:
    // 0x15b0e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15B0E8u;
    {
        const bool branch_taken_0x15b0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0E8u;
        // 0x15b0ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0e8) {
            ctx->pc = 0x15B120u;
            goto label_15b120;
        }
    }
    ctx->pc = 0x15B0F0u;
    // 0x15b0f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15b0f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b0f4: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x15b0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15b0f8: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x15b0f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15b0fc: 0x0  nop
    ctx->pc = 0x15b0fcu;
    // NOP
label_15b100:
    // 0x15b100: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x15b100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x15b104: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x15b104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x15b108: 0x1065fff5  beq         $v1, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x15B108u;
    {
        const bool branch_taken_0x15b108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x15B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B108u;
        // 0x15b10c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b108) {
            ctx->pc = 0x15B0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b0e0;
        }
    }
    ctx->pc = 0x15B110u;
    // 0x15b110: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x15b110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b114: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x15b114u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x15b118: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x15B118u;
    {
        const bool branch_taken_0x15b118 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B118u;
        // 0x15b11c: 0x871818  mult        $v1, $a0, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b118) {
            ctx->pc = 0x15B100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15b100;
        }
    }
    ctx->pc = 0x15B120u;
label_15b120:
    // 0x15b120: 0x3e00008  jr          $ra
    ctx->pc = 0x15B120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B120u;
        // 0x15b124: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B128u;
}
