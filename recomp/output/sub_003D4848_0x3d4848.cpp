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

// Function: sub_003D4848
// Address: 0x3d4848 - 0x3d4888
void sub_003D4848_0x3d4848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4848_0x3d4848");
#endif

    switch (ctx->pc) {
        case 0x3d4860u: goto label_3d4860;
        case 0x3d487cu: goto label_3d487c;
        default: break;
    }

    ctx->pc = 0x3d4848u;

    // 0x3d4848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d4848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d484c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d484cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d4850: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3d4850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3d4854: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x3d4854u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3d4858: 0xc0f51d6  jal         func_3D4758
    ctx->pc = 0x3D4858u;
    SET_GPR_U32(ctx, 31, 0x3D4860u);
    ctx->pc = 0x3D485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4858u;
    // 0x3d485c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4758u, 0x3D4858u, 0x3D4860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4860u;
label_3d4860:
    // 0x3d4860: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x3d4860u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3d4864: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d4864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d4868: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x3d4868u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3d486c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3d486cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d4870: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x3d4870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d4874: 0xc0f5170  jal         func_3D45C0
    ctx->pc = 0x3D4874u;
    SET_GPR_U32(ctx, 31, 0x3D487Cu);
    ctx->pc = 0x3D4878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4874u;
    // 0x3d4878: 0x738ba  dsrl        $a3, $a3, 2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45C0u, 0x3D4874u, 0x3D487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D487Cu;
label_3d487c:
    // 0x3d487c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d487cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d4880: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4880u;
        // 0x3d4884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4888u;
}
