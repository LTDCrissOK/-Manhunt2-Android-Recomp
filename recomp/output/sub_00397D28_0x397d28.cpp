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

// Function: sub_00397D28
// Address: 0x397d28 - 0x397d58
void sub_00397D28_0x397d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397D28_0x397d28");
#endif

    switch (ctx->pc) {
        case 0x397d40u: goto label_397d40;
        default: break;
    }

    ctx->pc = 0x397d28u;

    // 0x397d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397d2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x397d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397d34: 0x80ea72e  j           func_3A9CB8
    ctx->pc = 0x397D34u;
    ctx->pc = 0x397D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397D34u;
    // 0x397d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9CB8u, 0x397D34u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x397D3Cu;
    // 0x397d3c: 0x0  nop
    ctx->pc = 0x397d3cu;
    // NOP
label_397d40:
    // 0x397d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x397d48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397d4c: 0x80ea74c  j           func_3A9D30
    ctx->pc = 0x397D4Cu;
    ctx->pc = 0x397D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397D4Cu;
    // 0x397d50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9D30u, 0x397D4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x397D54u;
    // 0x397d54: 0x0  nop
    ctx->pc = 0x397d54u;
    // NOP
    ctx->pc = 0x397d58u;
}
