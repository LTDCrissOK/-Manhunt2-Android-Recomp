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

// Function: sub_003B3810
// Address: 0x3b3810 - 0x3b3840
void sub_003B3810_0x3b3810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3810_0x3b3810");
#endif

    switch (ctx->pc) {
        case 0x3b3824u: goto label_3b3824;
        case 0x3b382cu: goto label_3b382c;
        default: break;
    }

    ctx->pc = 0x3b3810u;

    // 0x3b3810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b3810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b3814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b3814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3818: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3b3818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3b381c: 0xc0ecdba  jal         func_3B36E8
    ctx->pc = 0x3B381Cu;
    SET_GPR_U32(ctx, 31, 0x3B3824u);
    ctx->pc = 0x3B3820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B381Cu;
    // 0x3b3820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B36E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B36E8u, 0x3B381Cu, 0x3B3824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3824u;
label_3b3824:
    // 0x3b3824: 0xc0ece10  jal         func_3B3840
    ctx->pc = 0x3B3824u;
    SET_GPR_U32(ctx, 31, 0x3B382Cu);
    ctx->pc = 0x3B3828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3824u;
    // 0x3b3828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3840u, 0x3B3824u, 0x3B382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B382Cu;
label_3b382c:
    // 0x3b382c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b382cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3830: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b3830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b3834: 0x80ecdc0  j           func_3B3700
    ctx->pc = 0x3B3834u;
    ctx->pc = 0x3B3838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3834u;
    // 0x3b3838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3700u;
    sub_003B3700_0x3b3700(rdram, ctx, runtime); return;
    ctx->pc = 0x3B383Cu;
    // 0x3b383c: 0x0  nop
    ctx->pc = 0x3b383cu;
    // NOP
    ctx->pc = 0x3b3840u;
}
