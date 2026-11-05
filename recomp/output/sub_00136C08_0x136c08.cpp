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

// Function: sub_00136C08
// Address: 0x136c08 - 0x136c38
void sub_00136C08_0x136c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136C08_0x136c08");
#endif

    switch (ctx->pc) {
        case 0x136c10u: goto label_136c10;
        default: break;
    }

    ctx->pc = 0x136c08u;

    // 0x136c08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x136c08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136c0c: 0x24860470  addiu       $a2, $a0, 0x470
    ctx->pc = 0x136c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
label_136c10:
    // 0x136c10: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x136c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x136c14: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x136c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x136c18: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x136c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x136c1c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x136c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x136c20: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x136c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x136c24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x136C24u;
    {
        const bool branch_taken_0x136c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C24u;
        // 0x136c28: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c24) {
            ctx->pc = 0x136C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136c10;
        }
    }
    ctx->pc = 0x136C2Cu;
    // 0x136c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x136C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C2Cu;
        // 0x136c30: 0xa08004b0  sb          $zero, 0x4B0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 1200), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136C34u;
    // 0x136c34: 0x0  nop
    ctx->pc = 0x136c34u;
    // NOP
    ctx->pc = 0x136c38u;
}
