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

// Function: sub_003E0340
// Address: 0x3e0340 - 0x3e0360
void sub_003E0340_0x3e0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0340_0x3e0340");
#endif

    switch (ctx->pc) {
        case 0x3e0354u: goto label_3e0354;
        case 0x3e035cu: goto label_3e035c;
        default: break;
    }

    ctx->pc = 0x3e0340u;

    // 0x3e0340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e0340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e0344: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x3e0344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x3e0348: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e0348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e034c: 0xc0efe64  jal         func_3BF990
    ctx->pc = 0x3E034Cu;
    SET_GPR_U32(ctx, 31, 0x3E0354u);
    ctx->pc = 0x3E0350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E034Cu;
    // 0x3e0350: 0x2484a9f0  addiu       $a0, $a0, -0x5610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF990u, 0x3E034Cu, 0x3E0354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0354u;
label_3e0354:
    // 0x3e0354: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x3E0354u;
    SET_GPR_U32(ctx, 31, 0x3E035Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x3E0354u, 0x3E035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E035Cu;
label_3e035c:
    // 0x3e035c: 0x0  nop
    ctx->pc = 0x3e035cu;
    // NOP
    ctx->pc = 0x3e0360u;
}
