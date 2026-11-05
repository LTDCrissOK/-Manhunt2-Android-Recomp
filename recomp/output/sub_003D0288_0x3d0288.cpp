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

// Function: sub_003D0288
// Address: 0x3d0288 - 0x3d02e0
void sub_003D0288_0x3d0288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0288_0x3d0288");
#endif

    switch (ctx->pc) {
        case 0x3d0298u: goto label_3d0298;
        case 0x3d02a0u: goto label_3d02a0;
        case 0x3d02a8u: goto label_3d02a8;
        case 0x3d02b0u: goto label_3d02b0;
        case 0x3d02b8u: goto label_3d02b8;
        case 0x3d02c0u: goto label_3d02c0;
        case 0x3d02c8u: goto label_3d02c8;
        case 0x3d02d0u: goto label_3d02d0;
        default: break;
    }

    ctx->pc = 0x3d0288u;

    // 0x3d0288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d0288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d028c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d028cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d0290: 0xc0f4020  jal         func_3D0080
    ctx->pc = 0x3D0290u;
    SET_GPR_U32(ctx, 31, 0x3D0298u);
    ctx->pc = 0x3D0080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0080u, 0x3D0290u, 0x3D0298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D0298u;
label_3d0298:
    // 0x3d0298: 0xc0f405e  jal         func_3D0178
    ctx->pc = 0x3D0298u;
    SET_GPR_U32(ctx, 31, 0x3D02A0u);
    ctx->pc = 0x3D0178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0178u, 0x3D0298u, 0x3D02A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D02A0u;
label_3d02a0:
    // 0x3d02a0: 0xc0f414c  jal         func_3D0530
    ctx->pc = 0x3D02A0u;
    SET_GPR_U32(ctx, 31, 0x3D02A8u);
    ctx->pc = 0x3D0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0530u, 0x3D02A0u, 0x3D02A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D02A8u;
label_3d02a8:
    // 0x3d02a8: 0xc0f41aa  jal         func_3D06A8
    ctx->pc = 0x3D02A8u;
    SET_GPR_U32(ctx, 31, 0x3D02B0u);
    ctx->pc = 0x3D02ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D02A8u;
    // 0x3d02ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D06A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D06A8u, 0x3D02A8u, 0x3D02B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D02B0u;
label_3d02b0:
    // 0x3d02b0: 0xc0f4202  jal         func_3D0808
    ctx->pc = 0x3D02B0u;
    SET_GPR_U32(ctx, 31, 0x3D02B8u);
    ctx->pc = 0x3D0808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0808u, 0x3D02B0u, 0x3D02B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D02B8u;
label_3d02b8:
    // 0x3d02b8: 0xc0f2988  jal         func_3CA620
    ctx->pc = 0x3D02B8u;
    SET_GPR_U32(ctx, 31, 0x3D02C0u);
    ctx->pc = 0x3CA620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA620u, 0x3D02B8u, 0x3D02C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D02C0u;
label_3d02c0:
    // 0x3d02c0: 0xc0f40ec  jal         func_3D03B0
    ctx->pc = 0x3D02C0u;
    SET_GPR_U32(ctx, 31, 0x3D02C8u);
    ctx->pc = 0x3D03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D03B0u, 0x3D02C0u, 0x3D02C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D02C8u;
label_3d02c8:
    // 0x3d02c8: 0xc0f45d6  jal         func_3D1758
    ctx->pc = 0x3D02C8u;
    SET_GPR_U32(ctx, 31, 0x3D02D0u);
    ctx->pc = 0x3D1758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1758u, 0x3D02C8u, 0x3D02D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D02D0u;
label_3d02d0:
    // 0x3d02d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d02d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d02d4: 0x80f452c  j           func_3D14B0
    ctx->pc = 0x3D02D4u;
    ctx->pc = 0x3D02D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D02D4u;
    // 0x3d02d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D14B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D14B0u, 0x3D02D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3D02DCu;
    // 0x3d02dc: 0x0  nop
    ctx->pc = 0x3d02dcu;
    // NOP
    ctx->pc = 0x3d02e0u;
}
