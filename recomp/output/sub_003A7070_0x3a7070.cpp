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

// Function: sub_003A7070
// Address: 0x3a7070 - 0x3a70a0
void sub_003A7070_0x3a7070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7070_0x3a7070");
#endif

    switch (ctx->pc) {
        case 0x3a7084u: goto label_3a7084;
        case 0x3a708cu: goto label_3a708c;
        default: break;
    }

    ctx->pc = 0x3a7070u;

    // 0x3a7070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a7070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a7074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a7074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a7078: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a7078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a707c: 0xc0e9d26  jal         func_3A7498
    ctx->pc = 0x3A707Cu;
    SET_GPR_U32(ctx, 31, 0x3A7084u);
    ctx->pc = 0x3A7080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A707Cu;
    // 0x3a7080: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7498u, 0x3A707Cu, 0x3A7084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7084u;
label_3a7084:
    // 0x3a7084: 0xc0e9c28  jal         func_3A70A0
    ctx->pc = 0x3A7084u;
    SET_GPR_U32(ctx, 31, 0x3A708Cu);
    ctx->pc = 0x3A7088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7084u;
    // 0x3a7088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A70A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A70A0u, 0x3A7084u, 0x3A708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A708Cu;
label_3a708c:
    // 0x3a708c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a708cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7090: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a7090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7094: 0x80e9d28  j           func_3A74A0
    ctx->pc = 0x3A7094u;
    ctx->pc = 0x3A7098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7094u;
    // 0x3a7098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74A0u;
    sub_003A74A0_0x3a74a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A709Cu;
    // 0x3a709c: 0x0  nop
    ctx->pc = 0x3a709cu;
    // NOP
    ctx->pc = 0x3a70a0u;
}
