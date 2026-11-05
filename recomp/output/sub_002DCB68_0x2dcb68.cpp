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

// Function: sub_002DCB68
// Address: 0x2dcb68 - 0x2dcbf0
void sub_002DCB68_0x2dcb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCB68_0x2dcb68");
#endif

    switch (ctx->pc) {
        case 0x2dcb90u: goto label_2dcb90;
        default: break;
    }

    ctx->pc = 0x2dcb68u;

    // 0x2dcb68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dcb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dcb6c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2dcb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2dcb70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2dcb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dcb74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dcb74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcb78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dcb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dcb7c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x2dcb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2dcb80: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DCB80u;
    {
        const bool branch_taken_0x2dcb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCB80u;
        // 0x2dcb84: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcb80) {
            ctx->pc = 0x2DCBDCu;
            goto label_2dcbdc;
        }
    }
    ctx->pc = 0x2DCB88u;
    // 0x2dcb88: 0xc0fb7fe  jal         func_3EDFF8
    ctx->pc = 0x2DCB88u;
    SET_GPR_U32(ctx, 31, 0x2DCB90u);
    ctx->pc = 0x2DCB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCB88u;
    // 0x2dcb8c: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EDFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EDFF8u, 0x2DCB88u, 0x2DCB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCB90u;
label_2dcb90:
    // 0x2dcb90: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2dcb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2dcb94: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x2dcb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dcb98: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x2dcb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dcb9c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2dcb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dcba0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2dcba0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2dcba4: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2dcba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dcba8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2dcba8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2dcbac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2dcbacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2dcbb0: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2dcbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2dcbb4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2dcbb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2dcbb8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2dcbb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2dcbbc: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2dcbbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2dcbc0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2dcbc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2dcbc4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2dcbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2dcbc8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2dcbc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dcbcc: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x2dcbccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcbd0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2dcbd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2dcbd4: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x2dcbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2dcbd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2dcbd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dcbdc:
    // 0x2dcbdc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2dcbdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dcbe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dcbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dcbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCBE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCBE4u;
        // 0x2dcbe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCBE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCBECu;
    // 0x2dcbec: 0x0  nop
    ctx->pc = 0x2dcbecu;
    // NOP
    ctx->pc = 0x2dcbf0u;
}
