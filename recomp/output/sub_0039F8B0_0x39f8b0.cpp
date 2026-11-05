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

// Function: sub_0039F8B0
// Address: 0x39f8b0 - 0x39f8f0
void sub_0039F8B0_0x39f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F8B0_0x39f8b0");
#endif

    switch (ctx->pc) {
        case 0x39f8ccu: goto label_39f8cc;
        case 0x39f8d8u: goto label_39f8d8;
        default: break;
    }

    ctx->pc = 0x39f8b0u;

    // 0x39f8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39f8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39f8b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39f8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39f8b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39f8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f8bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39f8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39f8c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39f8c4: 0xc0ecbf0  jal         func_3B2FC0
    ctx->pc = 0x39F8C4u;
    SET_GPR_U32(ctx, 31, 0x39F8CCu);
    ctx->pc = 0x39F8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F8C4u;
    // 0x39f8c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC0u, 0x39F8C4u, 0x39F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F8CCu;
label_39f8cc:
    // 0x39f8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f8d0: 0xc0e7e3c  jal         func_39F8F0
    ctx->pc = 0x39F8D0u;
    SET_GPR_U32(ctx, 31, 0x39F8D8u);
    ctx->pc = 0x39F8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F8D0u;
    // 0x39f8d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F8F0u, 0x39F8D0u, 0x39F8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F8D8u;
label_39f8d8:
    // 0x39f8d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f8d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f8dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39f8dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39f8e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39f8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f8e4: 0x80ecbf2  j           func_3B2FC8
    ctx->pc = 0x39F8E4u;
    ctx->pc = 0x39F8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F8E4u;
    // 0x39f8e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC8u;
    sub_003B2FC8_0x3b2fc8(rdram, ctx, runtime); return;
    ctx->pc = 0x39F8ECu;
    // 0x39f8ec: 0x0  nop
    ctx->pc = 0x39f8ecu;
    // NOP
    ctx->pc = 0x39f8f0u;
}
