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

// Function: sub_0011FC80
// Address: 0x11fc80 - 0x11fcd0
void sub_0011FC80_0x11fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FC80_0x11fc80");
#endif

    switch (ctx->pc) {
        case 0x11fc98u: goto label_11fc98;
        default: break;
    }

    ctx->pc = 0x11fc80u;

    // 0x11fc80: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x11fc80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x11fc84: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x11fc84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x11fc88: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x11fc88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11fc8c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11FC8Cu;
    {
        const bool branch_taken_0x11fc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC8Cu;
        // 0x11fc90: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc8c) {
            ctx->pc = 0x11FCC8u;
            goto label_11fcc8;
        }
    }
    ctx->pc = 0x11FC94u;
    // 0x11fc94: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x11fc94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11fc98:
    // 0x11fc98: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x11fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x11fc9c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11fca0: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FCA0u;
    {
        const bool branch_taken_0x11fca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fca0) {
            ctx->pc = 0x11FCA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FCA0u;
            // 0x11fca4: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FCB8u;
            goto label_11fcb8;
        }
    }
    ctx->pc = 0x11FCA8u;
    // 0x11fca8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11fca8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcac: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x11fcacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fcb0: 0x3e00008  jr          $ra
    ctx->pc = 0x11FCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCB0u;
        // 0x11fcb4: 0xac680004  sw          $t0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FCB8u;
label_11fcb8:
    // 0x11fcb8: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x11fcb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x11fcbc: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x11fcbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11fcc0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x11FCC0u;
    {
        const bool branch_taken_0x11fcc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCC0u;
        // 0x11fcc4: 0x53880  sll         $a3, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcc0) {
            ctx->pc = 0x11FC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fc98;
        }
    }
    ctx->pc = 0x11FCC8u;
label_11fcc8:
    // 0x11fcc8: 0x3e00008  jr          $ra
    ctx->pc = 0x11FCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCC8u;
        // 0x11fccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FCD0u;
}
