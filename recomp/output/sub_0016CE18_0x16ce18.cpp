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

// Function: sub_0016CE18
// Address: 0x16ce18 - 0x16ce50
void sub_0016CE18_0x16ce18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CE18_0x16ce18");
#endif

    switch (ctx->pc) {
        case 0x16ce40u: goto label_16ce40;
        default: break;
    }

    ctx->pc = 0x16ce18u;

    // 0x16ce18: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x16ce18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x16ce1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ce1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ce20: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x16ce20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce24: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x16ce24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x16ce28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ce28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ce2c: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x16ce2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ce30: 0xacc00070  sw          $zero, 0x70($a2)
    ctx->pc = 0x16ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 0));
    // 0x16ce34: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x16ce34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ce38: 0xc04f8da  jal         func_13E368
    ctx->pc = 0x16CE38u;
    SET_GPR_U32(ctx, 31, 0x16CE40u);
    ctx->pc = 0x16CE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CE38u;
    // 0x16ce3c: 0xac400074  sw          $zero, 0x74($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E368u, 0x16CE38u, 0x16CE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CE40u;
label_16ce40:
    // 0x16ce40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ce40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ce44: 0x3e00008  jr          $ra
    ctx->pc = 0x16CE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CE44u;
        // 0x16ce48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CE4Cu;
    // 0x16ce4c: 0x0  nop
    ctx->pc = 0x16ce4cu;
    // NOP
    ctx->pc = 0x16ce50u;
}
