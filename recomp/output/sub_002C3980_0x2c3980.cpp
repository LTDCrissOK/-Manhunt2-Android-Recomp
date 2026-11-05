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

// Function: sub_002C3980
// Address: 0x2c3980 - 0x2c39f8
void sub_002C3980_0x2c3980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3980_0x2c3980");
#endif

    switch (ctx->pc) {
        case 0x2c39ccu: goto label_2c39cc;
        default: break;
    }

    ctx->pc = 0x2c3980u;

    // 0x2c3980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c3984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c3984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c3988: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c3988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2c398c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c398cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3990: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2c3990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c3994: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c3994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c3998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c399c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2c399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c39a0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C39A0u;
    {
        const bool branch_taken_0x2c39a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C39A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39A0u;
        // 0x2c39a4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39a0) {
            ctx->pc = 0x2C39E0u;
            goto label_2c39e0;
        }
    }
    ctx->pc = 0x2C39A8u;
    // 0x2c39a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c39a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c39ac: 0x0  nop
    ctx->pc = 0x2c39acu;
    // NOP
    // 0x2c39b0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2c39b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c39b4: 0x0  nop
    ctx->pc = 0x2c39b4u;
    // NOP
    // 0x2c39b8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2C39B8u;
    {
        const bool branch_taken_0x2c39b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39B8u;
        // 0x2c39bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c39b8) {
            ctx->pc = 0x2C39E0u;
            goto label_2c39e0;
        }
    }
    ctx->pc = 0x2C39C0u;
    // 0x2c39c0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c39c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c39c4: 0xc0fb35c  jal         func_3ECD70
    ctx->pc = 0x2C39C4u;
    SET_GPR_U32(ctx, 31, 0x2C39CCu);
    ctx->pc = 0x2C39C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C39C4u;
    // 0x2c39c8: 0x24845304  addiu       $a0, $a0, 0x5304 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ECD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ECD70u, 0x2C39C4u, 0x2C39CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C39CCu;
label_2c39cc:
    // 0x2c39cc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2c39ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2c39d0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2c39d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c39d4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c39d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c39d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2c39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2c39dc: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x2c39dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2c39e0:
    // 0x2c39e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c39e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c39e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c39e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c39e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c39e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c39ec: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2c39ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c39f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C39F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C39F0u;
        // 0x2c39f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C39F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C39F8u;
}
