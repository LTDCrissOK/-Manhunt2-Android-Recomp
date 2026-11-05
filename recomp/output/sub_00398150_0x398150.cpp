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

// Function: sub_00398150
// Address: 0x398150 - 0x398180
void sub_00398150_0x398150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398150_0x398150");
#endif

    switch (ctx->pc) {
        case 0x398168u: goto label_398168;
        default: break;
    }

    ctx->pc = 0x398150u;

    // 0x398150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x398150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x398154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x398158: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x398158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39815c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39815cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x398160: 0xc0eb5f4  jal         func_3AD7D0
    ctx->pc = 0x398160u;
    SET_GPR_U32(ctx, 31, 0x398168u);
    ctx->pc = 0x398164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398160u;
    // 0x398164: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD7D0u, 0x398160u, 0x398168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398168u;
label_398168:
    // 0x398168: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x398168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x39816c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39816cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x398170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x398170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398174: 0x80eb55e  j           func_3AD578
    ctx->pc = 0x398174u;
    ctx->pc = 0x398178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398174u;
    // 0x398178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD578u, 0x398174u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39817Cu;
    // 0x39817c: 0x0  nop
    ctx->pc = 0x39817cu;
    // NOP
    ctx->pc = 0x398180u;
}
