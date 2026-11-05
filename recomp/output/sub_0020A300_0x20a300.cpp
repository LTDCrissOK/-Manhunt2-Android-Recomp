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

// Function: sub_0020A300
// Address: 0x20a300 - 0x20a340
void sub_0020A300_0x20a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A300_0x20a300");
#endif

    switch (ctx->pc) {
        case 0x20a334u: goto label_20a334;
        default: break;
    }

    ctx->pc = 0x20a300u;

    // 0x20a300: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x20a300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x20a304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a30c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20a30cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a310: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x20a310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x20a314: 0x460c0836  c.le.s      $f1, $f12
    ctx->pc = 0x20a314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a318: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a318u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20a31c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x20a31cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x20a320: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x20A320u;
    {
        const bool branch_taken_0x20a320 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A320u;
        // 0x20a324: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a320) {
            ctx->pc = 0x20A32Cu;
            goto label_20a32c;
        }
    }
    ctx->pc = 0x20A328u;
    // 0x20a328: 0x24a50168  addiu       $a1, $a1, 0x168
    ctx->pc = 0x20a328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 360));
label_20a32c:
    // 0x20a32c: 0xc0828d0  jal         func_20A340
    ctx->pc = 0x20A32Cu;
    SET_GPR_U32(ctx, 31, 0x20A334u);
    ctx->pc = 0x20A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A340u, 0x20A32Cu, 0x20A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A334u;
label_20a334:
    // 0x20a334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a338: 0x3e00008  jr          $ra
    ctx->pc = 0x20A338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A338u;
        // 0x20a33c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A340u;
}
