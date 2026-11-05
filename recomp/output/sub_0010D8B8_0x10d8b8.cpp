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

// Function: sub_0010D8B8
// Address: 0x10d8b8 - 0x10d918
void sub_0010D8B8_0x10d8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D8B8_0x10d8b8");
#endif

    switch (ctx->pc) {
        case 0x10d8e0u: goto label_10d8e0;
        default: break;
    }

    ctx->pc = 0x10d8b8u;

    // 0x10d8b8: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x10d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x10d8bc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x10d8bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x10d8c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10d8c4: 0x244200cd  addiu       $v0, $v0, 0xCD
    ctx->pc = 0x10d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 205));
    // 0x10d8c8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x10d8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10d8cc: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x10d8ccu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10d8d0: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x10D8D0u;
    {
        const bool branch_taken_0x10d8d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8D0u;
        // 0x10d8d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8d0) {
            ctx->pc = 0x10D8FCu;
            goto label_10d8fc;
        }
    }
    ctx->pc = 0x10D8D8u;
    // 0x10d8d8: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x10d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x10d8dc: 0x0  nop
    ctx->pc = 0x10d8dcu;
    // NOP
label_10d8e0:
    // 0x10d8e0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x10d8e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d8e4: 0x10660009  beq         $v1, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D8E4u;
    {
        const bool branch_taken_0x10d8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x10D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8E4u;
        // 0x10d8e8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8e4) {
            ctx->pc = 0x10D90Cu;
            goto label_10d90c;
        }
    }
    ctx->pc = 0x10D8ECu;
    // 0x10d8ec: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x10d8ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x10d8f0: 0xa7182b  sltu        $v1, $a1, $a3
    ctx->pc = 0x10d8f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x10d8f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10D8F4u;
    {
        const bool branch_taken_0x10d8f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D8F4u;
        // 0x10d8f8: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d8f4) {
            ctx->pc = 0x10D8E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d8e0;
        }
    }
    ctx->pc = 0x10D8FCu;
label_10d8fc:
    // 0x10d8fc: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x10d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x10d900: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x10d900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x10d904: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x10d904u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x10d908: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x10d908u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
label_10d90c:
    // 0x10d90c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D914u;
    // 0x10d914: 0x0  nop
    ctx->pc = 0x10d914u;
    // NOP
    ctx->pc = 0x10d918u;
}
