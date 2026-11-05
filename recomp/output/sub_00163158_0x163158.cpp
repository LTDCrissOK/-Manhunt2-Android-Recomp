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

// Function: sub_00163158
// Address: 0x163158 - 0x163188
void sub_00163158_0x163158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163158_0x163158");
#endif

    switch (ctx->pc) {
        case 0x163160u: goto label_163160;
        default: break;
    }

    ctx->pc = 0x163158u;

    // 0x163158: 0x24840364  addiu       $a0, $a0, 0x364
    ctx->pc = 0x163158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 868));
    // 0x16315c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16315cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163160:
    // 0x163160: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x163160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x163164: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x163164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x163168: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x163168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16316c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x16316cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x163170: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x163170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x163174: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x163174u;
    {
        const bool branch_taken_0x163174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163174u;
        // 0x163178: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163174) {
            ctx->pc = 0x163160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163160;
        }
    }
    ctx->pc = 0x16317Cu;
    // 0x16317c: 0x3e00008  jr          $ra
    ctx->pc = 0x16317Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16317Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163184u;
    // 0x163184: 0x0  nop
    ctx->pc = 0x163184u;
    // NOP
    ctx->pc = 0x163188u;
}
