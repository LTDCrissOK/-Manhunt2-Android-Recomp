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

// Function: sub_003A70E0
// Address: 0x3a70e0 - 0x3a7110
void sub_003A70E0_0x3a70e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A70E0_0x3a70e0");
#endif

    switch (ctx->pc) {
        case 0x3a70f4u: goto label_3a70f4;
        case 0x3a70fcu: goto label_3a70fc;
        default: break;
    }

    ctx->pc = 0x3a70e0u;

    // 0x3a70e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a70e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a70e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a70e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a70e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a70e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a70ec: 0xc0e9d26  jal         func_3A7498
    ctx->pc = 0x3A70ECu;
    SET_GPR_U32(ctx, 31, 0x3A70F4u);
    ctx->pc = 0x3A70F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A70ECu;
    // 0x3a70f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7498u, 0x3A70ECu, 0x3A70F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A70F4u;
label_3a70f4:
    // 0x3a70f4: 0xc0e9c44  jal         func_3A7110
    ctx->pc = 0x3A70F4u;
    SET_GPR_U32(ctx, 31, 0x3A70FCu);
    ctx->pc = 0x3A70F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A70F4u;
    // 0x3a70f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7110u, 0x3A70F4u, 0x3A70FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A70FCu;
label_3a70fc:
    // 0x3a70fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a70fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7100: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a7100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7104: 0x80e9d28  j           func_3A74A0
    ctx->pc = 0x3A7104u;
    ctx->pc = 0x3A7108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7104u;
    // 0x3a7108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74A0u;
    sub_003A74A0_0x3a74a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A710Cu;
    // 0x3a710c: 0x0  nop
    ctx->pc = 0x3a710cu;
    // NOP
    ctx->pc = 0x3a7110u;
}
