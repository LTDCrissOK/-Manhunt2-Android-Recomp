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

// Function: sub_003A18C0
// Address: 0x3a18c0 - 0x3a18f0
void sub_003A18C0_0x3a18c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A18C0_0x3a18c0");
#endif

    switch (ctx->pc) {
        case 0x3a18d4u: goto label_3a18d4;
        case 0x3a18dcu: goto label_3a18dc;
        default: break;
    }

    ctx->pc = 0x3a18c0u;

    // 0x3a18c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a18c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a18c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a18c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a18c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a18c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a18cc: 0xc0ecbe4  jal         func_3B2F90
    ctx->pc = 0x3A18CCu;
    SET_GPR_U32(ctx, 31, 0x3A18D4u);
    ctx->pc = 0x3A18D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A18CCu;
    // 0x3a18d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x3A18CCu, 0x3A18D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A18D4u;
label_3a18d4:
    // 0x3a18d4: 0xc0e863c  jal         func_3A18F0
    ctx->pc = 0x3A18D4u;
    SET_GPR_U32(ctx, 31, 0x3A18DCu);
    ctx->pc = 0x3A18D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A18D4u;
    // 0x3a18d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A18F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A18F0u, 0x3A18D4u, 0x3A18DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A18DCu;
label_3a18dc:
    // 0x3a18dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a18dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a18e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a18e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a18e4: 0x80ecbea  j           func_3B2FA8
    ctx->pc = 0x3A18E4u;
    ctx->pc = 0x3A18E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A18E4u;
    // 0x3a18e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FA8u;
    sub_003B2FA8_0x3b2fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A18ECu;
    // 0x3a18ec: 0x0  nop
    ctx->pc = 0x3a18ecu;
    // NOP
    ctx->pc = 0x3a18f0u;
}
