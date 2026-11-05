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

// Function: sub_001907B0
// Address: 0x1907b0 - 0x190808
void sub_001907B0_0x1907b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001907B0_0x1907b0");
#endif

    switch (ctx->pc) {
        case 0x1907f0u: goto label_1907f0;
        default: break;
    }

    ctx->pc = 0x1907b0u;

    // 0x1907b0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1907b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1907b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1907b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1907b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1907b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1907bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1907bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1907c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1907c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1907c4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1907c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1907c8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1907c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1907cc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x1907ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
    // 0x1907d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1907d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1907d4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1907d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1907d8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1907d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1907dc: 0x7c800060  sq          $zero, 0x60($a0)
    ctx->pc = 0x1907dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 0));
    // 0x1907e0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1907e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1907e4: 0xf8810050  sqc2        $vf1, 0x50($a0)
    ctx->pc = 0x1907e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1907e8: 0xc064202  jal         func_190808
    ctx->pc = 0x1907E8u;
    SET_GPR_U32(ctx, 31, 0x1907F0u);
    ctx->pc = 0x1907ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1907E8u;
    // 0x1907ec: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x190808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190808u, 0x1907E8u, 0x1907F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1907F0u;
label_1907f0:
    // 0x1907f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1907f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1907f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1907F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1907F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907F4u;
        // 0x1907f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1907F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1907FCu;
    // 0x1907fc: 0x0  nop
    ctx->pc = 0x1907fcu;
    // NOP
    // 0x190800: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x190800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x190804: 0x0  nop
    ctx->pc = 0x190804u;
    // NOP
    ctx->pc = 0x190808u;
}
