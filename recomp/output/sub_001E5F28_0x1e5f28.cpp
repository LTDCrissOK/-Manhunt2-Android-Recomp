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

// Function: sub_001E5F28
// Address: 0x1e5f28 - 0x1e5ff8
void sub_001E5F28_0x1e5f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5F28_0x1e5f28");
#endif

    switch (ctx->pc) {
        case 0x1e5f70u: goto label_1e5f70;
        case 0x1e5f7cu: goto label_1e5f7c;
        default: break;
    }

    ctx->pc = 0x1e5f28u;

    // 0x1e5f28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5f2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e5f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e5f30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e5f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e5f34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e5f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e5f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e5f3c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e5f3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5f44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e5f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e5f48: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1e5f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1e5f4c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e5f50: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E5F50u;
    {
        const bool branch_taken_0x1e5f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F50u;
        // 0x1e5f54: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f50) {
            ctx->pc = 0x1E5FD4u;
            goto label_1e5fd4;
        }
    }
    ctx->pc = 0x1E5F58u;
    // 0x1e5f58: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e5f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e5f5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e5f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f60: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E5F60u;
    {
        const bool branch_taken_0x1e5f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F60u;
        // 0x1e5f64: 0xae33000c  sw          $s3, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f60) {
            ctx->pc = 0x1E5FCCu;
            goto label_1e5fcc;
        }
    }
    ctx->pc = 0x1E5F68u;
    // 0x1e5f68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e5f68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f6c: 0x0  nop
    ctx->pc = 0x1e5f6cu;
    // NOP
label_1e5f70:
    // 0x1e5f70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e5f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f74: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1E5F74u;
    SET_GPR_U32(ctx, 31, 0x1E5F7Cu);
    ctx->pc = 0x1E5F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5F74u;
    // 0x1e5f78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1E5F74u, 0x1E5F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F7Cu;
label_1e5f7c:
    // 0x1e5f7c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1e5f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e5f80: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1e5f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e5f84: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1e5f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1e5f88: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e5f88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5f8c: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1e5f8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e5f90: 0xda630010  lqc2        $vf3, 0x10($s3)
    ctx->pc = 0x1e5f90u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1e5f94: 0xda640020  lqc2        $vf4, 0x20($s3)
    ctx->pc = 0x1e5f94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1e5f98: 0xda650030  lqc2        $vf5, 0x30($s3)
    ctx->pc = 0x1e5f98u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1e5f9c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1e5f9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e5fa0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1e5fa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e5fa4: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x1e5fa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1e5fa8: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x1e5fa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5fac: 0xf8810010  sqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1e5facu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5fb0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e5fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5fb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e5fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e5fb8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1e5fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1e5fbc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e5fc0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1e5fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5fc4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1E5FC4u;
    {
        const bool branch_taken_0x1e5fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FC4u;
        // 0x1e5fc8: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5fc4) {
            ctx->pc = 0x1E5F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5f70;
        }
    }
    ctx->pc = 0x1E5FCCu;
label_1e5fcc:
    // 0x1e5fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5fd0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1e5fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1e5fd4:
    // 0x1e5fd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5fd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5fd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5fdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e5fdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5fe0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e5fe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5fe4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e5fe4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5fe8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1e5fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e5fec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5FECu;
        // 0x1e5ff0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5FF4u;
    // 0x1e5ff4: 0x0  nop
    ctx->pc = 0x1e5ff4u;
    // NOP
    ctx->pc = 0x1e5ff8u;
}
