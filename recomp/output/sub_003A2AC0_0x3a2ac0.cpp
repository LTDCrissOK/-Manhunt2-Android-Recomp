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

// Function: sub_003A2AC0
// Address: 0x3a2ac0 - 0x3a2ae8
void sub_003A2AC0_0x3a2ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2AC0_0x3a2ac0");
#endif

    switch (ctx->pc) {
        case 0x3a2ad0u: goto label_3a2ad0;
        case 0x3a2ad8u: goto label_3a2ad8;
        default: break;
    }

    ctx->pc = 0x3a2ac0u;

    // 0x3a2ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a2ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a2ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a2ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a2ac8: 0xc0e8d0c  jal         func_3A3430
    ctx->pc = 0x3A2AC8u;
    SET_GPR_U32(ctx, 31, 0x3A2AD0u);
    ctx->pc = 0x3A2ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2AC8u;
    // 0x3a2acc: 0x24041300  addiu       $a0, $zero, 0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3430u, 0x3A2AC8u, 0x3A2AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2AD0u;
label_3a2ad0:
    // 0x3a2ad0: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x3A2AD0u;
    SET_GPR_U32(ctx, 31, 0x3A2AD8u);
    ctx->pc = 0x3A2AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2AD0u;
    // 0x3a2ad4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x3A2AD0u, 0x3A2AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2AD8u;
label_3a2ad8:
    // 0x3a2ad8: 0x24041301  addiu       $a0, $zero, 0x1301
    ctx->pc = 0x3a2ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4865));
    // 0x3a2adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a2adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a2ae0: 0x80e8d0c  j           func_3A3430
    ctx->pc = 0x3A2AE0u;
    ctx->pc = 0x3A2AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2AE0u;
    // 0x3a2ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3430u;
    sub_003A3430_0x3a3430(rdram, ctx, runtime); return;
    ctx->pc = 0x3A2AE8u;
}
