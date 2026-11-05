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

// Function: sub_003A7178
// Address: 0x3a7178 - 0x3a71a8
void sub_003A7178_0x3a7178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7178_0x3a7178");
#endif

    switch (ctx->pc) {
        case 0x3a718cu: goto label_3a718c;
        case 0x3a7194u: goto label_3a7194;
        default: break;
    }

    ctx->pc = 0x3a7178u;

    // 0x3a7178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a7178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a717c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a717cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a7180: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a7180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a7184: 0xc0e9d26  jal         func_3A7498
    ctx->pc = 0x3A7184u;
    SET_GPR_U32(ctx, 31, 0x3A718Cu);
    ctx->pc = 0x3A7188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7184u;
    // 0x3a7188: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7498u, 0x3A7184u, 0x3A718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A718Cu;
label_3a718c:
    // 0x3a718c: 0xc0e9c6a  jal         func_3A71A8
    ctx->pc = 0x3A718Cu;
    SET_GPR_U32(ctx, 31, 0x3A7194u);
    ctx->pc = 0x3A7190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A718Cu;
    // 0x3a7190: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A71A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A71A8u, 0x3A718Cu, 0x3A7194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7194u;
label_3a7194:
    // 0x3a7194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a7194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7198: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a7198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a719c: 0x80e9d28  j           func_3A74A0
    ctx->pc = 0x3A719Cu;
    ctx->pc = 0x3A71A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A719Cu;
    // 0x3a71a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74A0u;
    sub_003A74A0_0x3a74a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A71A4u;
    // 0x3a71a4: 0x0  nop
    ctx->pc = 0x3a71a4u;
    // NOP
    ctx->pc = 0x3a71a8u;
}
