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

// Function: sub_0024AF18
// Address: 0x24af18 - 0x24af40
void sub_0024AF18_0x24af18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AF18_0x24af18");
#endif

    switch (ctx->pc) {
        case 0x24af30u: goto label_24af30;
        default: break;
    }

    ctx->pc = 0x24af18u;

    // 0x24af18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24af18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24af1c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x24af1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24af20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24af20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24af24: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x24af24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x24af28: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x24AF28u;
    SET_GPR_U32(ctx, 31, 0x24AF30u);
    ctx->pc = 0x24AF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF28u;
    // 0x24af2c: 0x8c840334  lw          $a0, 0x334($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24AF28u, 0x24AF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF30u;
label_24af30:
    // 0x24af30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24af30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24af34: 0x3e00008  jr          $ra
    ctx->pc = 0x24AF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF34u;
        // 0x24af38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AF3Cu;
    // 0x24af3c: 0x0  nop
    ctx->pc = 0x24af3cu;
    // NOP
    ctx->pc = 0x24af40u;
}
