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

// Function: sub_003B3718
// Address: 0x3b3718 - 0x3b3758
void sub_003B3718_0x3b3718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3718_0x3b3718");
#endif

    switch (ctx->pc) {
        case 0x3b3734u: goto label_3b3734;
        case 0x3b3740u: goto label_3b3740;
        default: break;
    }

    ctx->pc = 0x3b3718u;

    // 0x3b3718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b3718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b371c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b371cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b3720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3724: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b3724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b3728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b3728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b372c: 0xc0ecdba  jal         func_3B36E8
    ctx->pc = 0x3B372Cu;
    SET_GPR_U32(ctx, 31, 0x3B3734u);
    ctx->pc = 0x3B3730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B372Cu;
    // 0x3b3730: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B36E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B36E8u, 0x3B372Cu, 0x3B3734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3734u;
label_3b3734:
    // 0x3b3734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b3734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3738: 0xc0ecdd6  jal         func_3B3758
    ctx->pc = 0x3B3738u;
    SET_GPR_U32(ctx, 31, 0x3B3740u);
    ctx->pc = 0x3B373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3738u;
    // 0x3b373c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3758u, 0x3B3738u, 0x3B3740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3740u;
label_3b3740:
    // 0x3b3740: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b3740u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3744: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b3744u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b3748: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b3748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b374c: 0x80ecdc0  j           func_3B3700
    ctx->pc = 0x3B374Cu;
    ctx->pc = 0x3B3750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B374Cu;
    // 0x3b3750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3700u;
    sub_003B3700_0x3b3700(rdram, ctx, runtime); return;
    ctx->pc = 0x3B3754u;
    // 0x3b3754: 0x0  nop
    ctx->pc = 0x3b3754u;
    // NOP
    ctx->pc = 0x3b3758u;
}
