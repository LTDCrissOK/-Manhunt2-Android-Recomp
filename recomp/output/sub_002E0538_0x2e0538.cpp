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

// Function: sub_002E0538
// Address: 0x2e0538 - 0x2e0568
void sub_002E0538_0x2e0538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0538_0x2e0538");
#endif

    switch (ctx->pc) {
        case 0x2e0540u: goto label_2e0540;
        default: break;
    }

    ctx->pc = 0x2e0538u;

    // 0x2e0538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e0538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e053c: 0x24860080  addiu       $a2, $a0, 0x80
    ctx->pc = 0x2e053cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_2e0540:
    // 0x2e0540: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2e0540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e0544: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2e0544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2e0548: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2e0548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2e054c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2e054cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e0550: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x2e0550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2e0554: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E0554u;
    {
        const bool branch_taken_0x2e0554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0554u;
        // 0x2e0558: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0554) {
            ctx->pc = 0x2E0540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0540;
        }
    }
    ctx->pc = 0x2E055Cu;
    // 0x2e055c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E055Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E055Cu;
        // 0x2e0560: 0xac800098  sw          $zero, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E055Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0564u;
    // 0x2e0564: 0x0  nop
    ctx->pc = 0x2e0564u;
    // NOP
    ctx->pc = 0x2e0568u;
}
