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

// Function: sub_0010A588
// Address: 0x10a588 - 0x10a5e0
void sub_0010A588_0x10a588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A588_0x10a588");
#endif

    switch (ctx->pc) {
        case 0x10a5b0u: goto label_10a5b0;
        default: break;
    }

    ctx->pc = 0x10a588u;

    // 0x10a588: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x10a588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x10a58c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10a590: 0x244200cd  addiu       $v0, $v0, 0xCD
    ctx->pc = 0x10a590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 205));
    // 0x10a594: 0x824821  addu        $t1, $a0, $v0
    ctx->pc = 0x10a594u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10a598: 0x91280010  lbu         $t0, 0x10($t1)
    ctx->pc = 0x10a598u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x10a59c: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x10A59Cu;
    {
        const bool branch_taken_0x10a59c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A59Cu;
        // 0x10a5a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a59c) {
            ctx->pc = 0x10A5D8u;
            goto label_10a5d8;
        }
    }
    ctx->pc = 0x10A5A4u;
    // 0x10a5a4: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x10A5A4u;
    {
        const bool branch_taken_0x10a5a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5A4u;
        // 0x10a5a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a5a4) {
            ctx->pc = 0x10A5D0u;
            goto label_10a5d0;
        }
    }
    ctx->pc = 0x10A5ACu;
    // 0x10a5ac: 0x0  nop
    ctx->pc = 0x10a5acu;
    // NOP
label_10a5b0:
    // 0x10a5b0: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x10a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x10a5b4: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x10a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x10a5b8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x10a5b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10a5bc: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x10a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x10a5c0: 0x308700ff  andi        $a3, $a0, 0xFF
    ctx->pc = 0x10a5c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x10a5c4: 0xe8102b  sltu        $v0, $a3, $t0
    ctx->pc = 0x10a5c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x10a5c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10A5C8u;
    {
        const bool branch_taken_0x10a5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5C8u;
        // 0x10a5cc: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a5c8) {
            ctx->pc = 0x10A5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a5b0;
        }
    }
    ctx->pc = 0x10A5D0u;
label_10a5d0:
    // 0x10a5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5D0u;
        // 0x10a5d4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A5D8u;
label_10a5d8:
    // 0x10a5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10A5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A5E0u;
}
