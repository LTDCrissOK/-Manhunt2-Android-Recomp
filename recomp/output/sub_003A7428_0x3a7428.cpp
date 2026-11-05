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

// Function: sub_003A7428
// Address: 0x3a7428 - 0x3a7468
void sub_003A7428_0x3a7428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7428_0x3a7428");
#endif

    switch (ctx->pc) {
        case 0x3a7444u: goto label_3a7444;
        case 0x3a7450u: goto label_3a7450;
        default: break;
    }

    ctx->pc = 0x3a7428u;

    // 0x3a7428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a7428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a742c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a742cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a7430: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7434: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a7434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a7438: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a7438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a743c: 0xc0e9d26  jal         func_3A7498
    ctx->pc = 0x3A743Cu;
    SET_GPR_U32(ctx, 31, 0x3A7444u);
    ctx->pc = 0x3A7440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A743Cu;
    // 0x3a7440: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7498u, 0x3A743Cu, 0x3A7444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7444u;
label_3a7444:
    // 0x3a7444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7448: 0xc0e9d1a  jal         func_3A7468
    ctx->pc = 0x3A7448u;
    SET_GPR_U32(ctx, 31, 0x3A7450u);
    ctx->pc = 0x3A744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7448u;
    // 0x3a744c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7468u, 0x3A7448u, 0x3A7450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7450u;
label_3a7450:
    // 0x3a7450: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a7450u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7454: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a7454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7458: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a7458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a745c: 0x80e9d28  j           func_3A74A0
    ctx->pc = 0x3A745Cu;
    ctx->pc = 0x3A7460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A745Cu;
    // 0x3a7460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74A0u;
    sub_003A74A0_0x3a74a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A7464u;
    // 0x3a7464: 0x0  nop
    ctx->pc = 0x3a7464u;
    // NOP
    ctx->pc = 0x3a7468u;
}
