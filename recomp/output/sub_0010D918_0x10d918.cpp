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

// Function: sub_0010D918
// Address: 0x10d918 - 0x10d9b0
void sub_0010D918_0x10d918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D918_0x10d918");
#endif

    switch (ctx->pc) {
        case 0x10d940u: goto label_10d940;
        case 0x10d968u: goto label_10d968;
        default: break;
    }

    ctx->pc = 0x10d918u;

    // 0x10d918: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x10d918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x10d91c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x10d91cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x10d920: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10d920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10d924: 0x244200cd  addiu       $v0, $v0, 0xCD
    ctx->pc = 0x10d924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 205));
    // 0x10d928: 0x824021  addu        $t0, $a0, $v0
    ctx->pc = 0x10d928u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10d92c: 0x91090010  lbu         $t1, 0x10($t0)
    ctx->pc = 0x10d92cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x10d930: 0x1120001d  beqz        $t1, . + 4 + (0x1D << 2)
    ctx->pc = 0x10D930u;
    {
        const bool branch_taken_0x10d930 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D930u;
        // 0x10d934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d930) {
            ctx->pc = 0x10D9A8u;
            goto label_10d9a8;
        }
    }
    ctx->pc = 0x10D938u;
    // 0x10d938: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x10d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x10d93c: 0x0  nop
    ctx->pc = 0x10d93cu;
    // NOP
label_10d940:
    // 0x10d940: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x10d940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d944: 0x14660014  bne         $v1, $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x10D944u;
    {
        const bool branch_taken_0x10d944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x10D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D944u;
        // 0x10d948: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d944) {
            ctx->pc = 0x10D998u;
            goto label_10d998;
        }
    }
    ctx->pc = 0x10D94Cu;
    // 0x10d94c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x10d94cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d950: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x10d950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x10d954: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x10d954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10d958: 0xc9182b  sltu        $v1, $a2, $t1
    ctx->pc = 0x10d958u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x10d95c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x10D95Cu;
    {
        const bool branch_taken_0x10d95c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D95Cu;
        // 0x10d960: 0x252affff  addiu       $t2, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d95c) {
            ctx->pc = 0x10D990u;
            goto label_10d990;
        }
    }
    ctx->pc = 0x10D964u;
    // 0x10d964: 0x0  nop
    ctx->pc = 0x10d964u;
    // NOP
label_10d968:
    // 0x10d968: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x10d968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x10d96c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x10d96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x10d970: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x10d970u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d974: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x10d974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x10d978: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x10d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x10d97c: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x10d97cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10d980: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x10d980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x10d984: 0xc9102b  sltu        $v0, $a2, $t1
    ctx->pc = 0x10d984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x10d988: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x10D988u;
    {
        const bool branch_taken_0x10d988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D988u;
        // 0x10d98c: 0x30a700ff  andi        $a3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d988) {
            ctx->pc = 0x10D968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d968;
        }
    }
    ctx->pc = 0x10D990u;
label_10d990:
    // 0x10d990: 0x3e00008  jr          $ra
    ctx->pc = 0x10D990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D990u;
        // 0x10d994: 0xa10a0010  sb          $t2, 0x10($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D998u;
label_10d998:
    // 0x10d998: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x10d998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10d99c: 0xa9182b  sltu        $v1, $a1, $t1
    ctx->pc = 0x10d99cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x10d9a0: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x10D9A0u;
    {
        const bool branch_taken_0x10d9a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9A0u;
        // 0x10d9a4: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9a0) {
            ctx->pc = 0x10D940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d940;
        }
    }
    ctx->pc = 0x10D9A8u;
label_10d9a8:
    // 0x10d9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10D9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D9B0u;
}
