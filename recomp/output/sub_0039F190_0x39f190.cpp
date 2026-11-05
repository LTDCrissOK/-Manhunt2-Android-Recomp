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

// Function: sub_0039F190
// Address: 0x39f190 - 0x39f1c0
void sub_0039F190_0x39f190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F190_0x39f190");
#endif

    switch (ctx->pc) {
        case 0x39f1a4u: goto label_39f1a4;
        case 0x39f1acu: goto label_39f1ac;
        default: break;
    }

    ctx->pc = 0x39f190u;

    // 0x39f190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39f190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39f194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39f198: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39f198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39f19c: 0xc0ecbf0  jal         func_3B2FC0
    ctx->pc = 0x39F19Cu;
    SET_GPR_U32(ctx, 31, 0x39F1A4u);
    ctx->pc = 0x39F1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F19Cu;
    // 0x39f1a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC0u, 0x39F19Cu, 0x39F1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F1A4u;
label_39f1a4:
    // 0x39f1a4: 0xc0e7c70  jal         func_39F1C0
    ctx->pc = 0x39F1A4u;
    SET_GPR_U32(ctx, 31, 0x39F1ACu);
    ctx->pc = 0x39F1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F1A4u;
    // 0x39f1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F1C0u, 0x39F1A4u, 0x39F1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F1ACu;
label_39f1ac:
    // 0x39f1ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f1b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39f1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39f1b4: 0x80ecbf2  j           func_3B2FC8
    ctx->pc = 0x39F1B4u;
    ctx->pc = 0x39F1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F1B4u;
    // 0x39f1b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC8u;
    sub_003B2FC8_0x3b2fc8(rdram, ctx, runtime); return;
    ctx->pc = 0x39F1BCu;
    // 0x39f1bc: 0x0  nop
    ctx->pc = 0x39f1bcu;
    // NOP
    ctx->pc = 0x39f1c0u;
}
