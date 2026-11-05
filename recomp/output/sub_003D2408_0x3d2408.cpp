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

// Function: sub_003D2408
// Address: 0x3d2408 - 0x3d2448
void sub_003D2408_0x3d2408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2408_0x3d2408");
#endif

    switch (ctx->pc) {
        case 0x3d2428u: goto label_3d2428;
        case 0x3d2438u: goto label_3d2438;
        default: break;
    }

    ctx->pc = 0x3d2408u;

    // 0x3d2408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d2408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d240c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d240cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d2410: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x3d2410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3d2414: 0x0  nop
    ctx->pc = 0x3d2414u;
    // NOP
    // 0x3d2418: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3D2418u;
    {
        const bool branch_taken_0x3d2418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2418u;
        // 0x3d241c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2418) {
            ctx->pc = 0x3D2430u;
            goto label_3d2430;
        }
    }
    ctx->pc = 0x3D2420u;
    // 0x3d2420: 0xc0f494e  jal         func_3D2538
    ctx->pc = 0x3D2420u;
    SET_GPR_U32(ctx, 31, 0x3D2428u);
    ctx->pc = 0x3D2424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2420u;
    // 0x3d2424: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2538u, 0x3D2420u, 0x3D2428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2428u;
label_3d2428:
    // 0x3d2428: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D2428u;
    {
        const bool branch_taken_0x3d2428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2428u;
        // 0x3d242c: 0x2102f  dsubu       $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2428) {
            ctx->pc = 0x3D2438u;
            goto label_3d2438;
        }
    }
    ctx->pc = 0x3D2430u;
label_3d2430:
    // 0x3d2430: 0xc0f494e  jal         func_3D2538
    ctx->pc = 0x3D2430u;
    SET_GPR_U32(ctx, 31, 0x3D2438u);
    ctx->pc = 0x3D2538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2538u, 0x3D2430u, 0x3D2438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2438u;
label_3d2438:
    // 0x3d2438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d2438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d243c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D243Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D243Cu;
        // 0x3d2440: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D243Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2444u;
    // 0x3d2444: 0x0  nop
    ctx->pc = 0x3d2444u;
    // NOP
    ctx->pc = 0x3d2448u;
}
