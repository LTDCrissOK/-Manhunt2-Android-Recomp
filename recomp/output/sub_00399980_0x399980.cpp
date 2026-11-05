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

// Function: sub_00399980
// Address: 0x399980 - 0x3999b0
void sub_00399980_0x399980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399980_0x399980");
#endif

    switch (ctx->pc) {
        case 0x399994u: goto label_399994;
        case 0x39999cu: goto label_39999c;
        default: break;
    }

    ctx->pc = 0x399980u;

    // 0x399980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399988: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x399988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39998c: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x39998Cu;
    SET_GPR_U32(ctx, 31, 0x399994u);
    ctx->pc = 0x399990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39998Cu;
    // 0x399990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x39998Cu, 0x399994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399994u;
label_399994:
    // 0x399994: 0xc0e666c  jal         func_3999B0
    ctx->pc = 0x399994u;
    SET_GPR_U32(ctx, 31, 0x39999Cu);
    ctx->pc = 0x399998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399994u;
    // 0x399998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3999B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3999B0u, 0x399994u, 0x39999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39999Cu;
label_39999c:
    // 0x39999c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39999cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3999a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3999a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3999a4: 0x80e6a78  j           func_39A9E0
    ctx->pc = 0x3999A4u;
    ctx->pc = 0x3999A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3999A4u;
    // 0x3999a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    sub_0039A9E0_0x39a9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x3999ACu;
    // 0x3999ac: 0x0  nop
    ctx->pc = 0x3999acu;
    // NOP
    ctx->pc = 0x3999b0u;
}
