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

// Function: sub_0039F610
// Address: 0x39f610 - 0x39f640
void sub_0039F610_0x39f610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F610_0x39f610");
#endif

    switch (ctx->pc) {
        case 0x39f624u: goto label_39f624;
        case 0x39f62cu: goto label_39f62c;
        default: break;
    }

    ctx->pc = 0x39f610u;

    // 0x39f610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39f610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39f614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39f614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39f618: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39f618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39f61c: 0xc0ecbf0  jal         func_3B2FC0
    ctx->pc = 0x39F61Cu;
    SET_GPR_U32(ctx, 31, 0x39F624u);
    ctx->pc = 0x39F620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F61Cu;
    // 0x39f620: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC0u, 0x39F61Cu, 0x39F624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F624u;
label_39f624:
    // 0x39f624: 0xc0e7d90  jal         func_39F640
    ctx->pc = 0x39F624u;
    SET_GPR_U32(ctx, 31, 0x39F62Cu);
    ctx->pc = 0x39F628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F624u;
    // 0x39f628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F640u, 0x39F624u, 0x39F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F62Cu;
label_39f62c:
    // 0x39f62c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f62cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f630: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39f630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39f634: 0x80ecbf2  j           func_3B2FC8
    ctx->pc = 0x39F634u;
    ctx->pc = 0x39F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F634u;
    // 0x39f638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC8u;
    sub_003B2FC8_0x3b2fc8(rdram, ctx, runtime); return;
    ctx->pc = 0x39F63Cu;
    // 0x39f63c: 0x0  nop
    ctx->pc = 0x39f63cu;
    // NOP
    ctx->pc = 0x39f640u;
}
