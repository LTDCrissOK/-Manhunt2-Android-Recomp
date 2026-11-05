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

// Function: sub_00152F00
// Address: 0x152f00 - 0x152f30
void sub_00152F00_0x152f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152F00_0x152f00");
#endif

    switch (ctx->pc) {
        case 0x152f20u: goto label_152f20;
        default: break;
    }

    ctx->pc = 0x152f00u;

    // 0x152f00: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x152f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x152f04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152f04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152f08: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x152f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x152f0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152f10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152f14: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x152f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x152f18: 0xc04d8b4  jal         func_1362D0
    ctx->pc = 0x152F18u;
    SET_GPR_U32(ctx, 31, 0x152F20u);
    ctx->pc = 0x152F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152F18u;
    // 0x152f1c: 0xac4304e0  sw          $v1, 0x4E0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1248), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1362D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362D0u, 0x152F18u, 0x152F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F20u;
label_152f20:
    // 0x152f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152f24: 0x3e00008  jr          $ra
    ctx->pc = 0x152F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152F24u;
        // 0x152f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152F2Cu;
    // 0x152f2c: 0x0  nop
    ctx->pc = 0x152f2cu;
    // NOP
    ctx->pc = 0x152f30u;
}
