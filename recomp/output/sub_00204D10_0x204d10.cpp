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

// Function: sub_00204D10
// Address: 0x204d10 - 0x204d48
void sub_00204D10_0x204d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204D10_0x204d10");
#endif

    switch (ctx->pc) {
        case 0x204d28u: goto label_204d28;
        default: break;
    }

    ctx->pc = 0x204d10u;

    // 0x204d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204d14: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x204d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x204d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204d1c: 0x8c851b90  lw          $a1, 0x1B90($a0)
    ctx->pc = 0x204d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7056)));
    // 0x204d20: 0xc07fe78  jal         func_1FF9E0
    ctx->pc = 0x204D20u;
    SET_GPR_U32(ctx, 31, 0x204D28u);
    ctx->pc = 0x204D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204D20u;
    // 0x204d24: 0x24449b28  addiu       $a0, $v0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9E0u, 0x204D20u, 0x204D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D28u;
label_204d28:
    // 0x204d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x204D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D2Cu;
        // 0x204d30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x204D34u;
    // 0x204d34: 0x0  nop
    ctx->pc = 0x204d34u;
    // NOP
    // 0x204d38: 0x27bd03f0  addiu       $sp, $sp, 0x3F0
    ctx->pc = 0x204d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
    // 0x204d3c: 0x0  nop
    ctx->pc = 0x204d3cu;
    // NOP
    // 0x204d40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x204d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x204d44: 0x0  nop
    ctx->pc = 0x204d44u;
    // NOP
    ctx->pc = 0x204d48u;
}
