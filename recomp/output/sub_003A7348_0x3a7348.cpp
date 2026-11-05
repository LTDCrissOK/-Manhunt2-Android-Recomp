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

// Function: sub_003A7348
// Address: 0x3a7348 - 0x3a7388
void sub_003A7348_0x3a7348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7348_0x3a7348");
#endif

    switch (ctx->pc) {
        case 0x3a7364u: goto label_3a7364;
        case 0x3a7370u: goto label_3a7370;
        default: break;
    }

    ctx->pc = 0x3a7348u;

    // 0x3a7348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a7348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a734c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a734cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a7350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a7354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a7358: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a7358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a735c: 0xc0e9d26  jal         func_3A7498
    ctx->pc = 0x3A735Cu;
    SET_GPR_U32(ctx, 31, 0x3A7364u);
    ctx->pc = 0x3A7360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A735Cu;
    // 0x3a7360: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7498u, 0x3A735Cu, 0x3A7364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7364u;
label_3a7364:
    // 0x3a7364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7368: 0xc0e9ce2  jal         func_3A7388
    ctx->pc = 0x3A7368u;
    SET_GPR_U32(ctx, 31, 0x3A7370u);
    ctx->pc = 0x3A736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7368u;
    // 0x3a736c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7388u, 0x3A7368u, 0x3A7370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7370u;
label_3a7370:
    // 0x3a7370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a7370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7374: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a7374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7378: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a7378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a737c: 0x80e9d28  j           func_3A74A0
    ctx->pc = 0x3A737Cu;
    ctx->pc = 0x3A7380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A737Cu;
    // 0x3a7380: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74A0u;
    sub_003A74A0_0x3a74a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A7384u;
    // 0x3a7384: 0x0  nop
    ctx->pc = 0x3a7384u;
    // NOP
    ctx->pc = 0x3a7388u;
}
