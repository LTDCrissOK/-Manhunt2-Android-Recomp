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

// Function: sub_003964B8
// Address: 0x3964b8 - 0x3964e8
void sub_003964B8_0x3964b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003964B8_0x3964b8");
#endif

    switch (ctx->pc) {
        case 0x3964ccu: goto label_3964cc;
        case 0x3964d4u: goto label_3964d4;
        default: break;
    }

    ctx->pc = 0x3964b8u;

    // 0x3964b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3964b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3964bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3964bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3964c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3964c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3964c4: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x3964C4u;
    SET_GPR_U32(ctx, 31, 0x3964CCu);
    ctx->pc = 0x3964C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3964C4u;
    // 0x3964c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x3964C4u, 0x3964CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3964CCu;
label_3964cc:
    // 0x3964cc: 0xc0e593a  jal         func_3964E8
    ctx->pc = 0x3964CCu;
    SET_GPR_U32(ctx, 31, 0x3964D4u);
    ctx->pc = 0x3964D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3964CCu;
    // 0x3964d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3964E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3964E8u, 0x3964CCu, 0x3964D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3964D4u;
label_3964d4:
    // 0x3964d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3964d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3964d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3964d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3964dc: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x3964DCu;
    ctx->pc = 0x3964E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3964DCu;
    // 0x3964e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x3964E4u;
    // 0x3964e4: 0x0  nop
    ctx->pc = 0x3964e4u;
    // NOP
    ctx->pc = 0x3964e8u;
}
