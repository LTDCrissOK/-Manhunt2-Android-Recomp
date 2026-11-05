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

// Function: sub_003D0498
// Address: 0x3d0498 - 0x3d04c8
void sub_003D0498_0x3d0498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0498_0x3d0498");
#endif

    switch (ctx->pc) {
        case 0x3d04acu: goto label_3d04ac;
        default: break;
    }

    ctx->pc = 0x3d0498u;

    // 0x3d0498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d0498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d049c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d04a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d04a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d04a4: 0xc0f4124  jal         func_3D0490
    ctx->pc = 0x3D04A4u;
    SET_GPR_U32(ctx, 31, 0x3D04ACu);
    ctx->pc = 0x3D04A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D04A4u;
    // 0x3d04a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0490u, 0x3D04A4u, 0x3D04ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D04ACu;
label_3d04ac:
    // 0x3d04ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d04acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d04b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d04b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d04b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d04b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d04b8: 0x80f2570  j           func_3C95C0
    ctx->pc = 0x3D04B8u;
    ctx->pc = 0x3D04BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D04B8u;
    // 0x3d04bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C95C0u, 0x3D04B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3D04C0u;
    // 0x3d04c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3d04c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3d04c4: 0x0  nop
    ctx->pc = 0x3d04c4u;
    // NOP
    ctx->pc = 0x3d04c8u;
}
