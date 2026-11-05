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

// Function: sub_0024C978
// Address: 0x24c978 - 0x24ca98
void sub_0024C978_0x24c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C978_0x24c978");
#endif

    switch (ctx->pc) {
        case 0x24c9acu: goto label_24c9ac;
        case 0x24c9c0u: goto label_24c9c0;
        case 0x24c9c8u: goto label_24c9c8;
        case 0x24c9d8u: goto label_24c9d8;
        case 0x24c9f0u: goto label_24c9f0;
        case 0x24ca00u: goto label_24ca00;
        case 0x24ca3cu: goto label_24ca3c;
        default: break;
    }

    ctx->pc = 0x24c978u;

    // 0x24c978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c97c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c980: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24c980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24c984: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c98c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x24c98cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c990: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x24c990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x24c994: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x24c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24c998: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x24c998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x24c99c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x24c99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24c9a0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x24c9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24c9a4: 0xc0797ca  jal         func_1E5F28
    ctx->pc = 0x24C9A4u;
    SET_GPR_U32(ctx, 31, 0x24C9ACu);
    ctx->pc = 0x24C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9A4u;
    // 0x24c9a8: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5F28u, 0x24C9A4u, 0x24C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9ACu;
label_24c9ac:
    // 0x24c9ac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x24c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24c9b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x24c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24c9b4: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x24C9B4u;
    {
        const bool branch_taken_0x24c9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c9b4) {
            ctx->pc = 0x24C9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C9B4u;
            // 0x24c9b8: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24CA28u;
            goto label_24ca28;
        }
    }
    ctx->pc = 0x24C9BCu;
    // 0x24c9bc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x24c9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_24c9c0:
    // 0x24c9c0: 0xc079848  jal         func_1E6120
    ctx->pc = 0x24C9C0u;
    SET_GPR_U32(ctx, 31, 0x24C9C8u);
    ctx->pc = 0x24C9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9C0u;
    // 0x24c9c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x24C9C0u, 0x24C9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9C8u;
label_24c9c8:
    // 0x24c9c8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x24c9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24c9cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c9d0: 0xc079848  jal         func_1E6120
    ctx->pc = 0x24C9D0u;
    SET_GPR_U32(ctx, 31, 0x24C9D8u);
    ctx->pc = 0x24C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9D0u;
    // 0x24c9d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x24C9D0u, 0x24C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9D8u;
label_24c9d8:
    // 0x24c9d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x24c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x24c9dc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24c9dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24c9e0: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x24c9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24c9e4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x24c9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24c9e8: 0xc079848  jal         func_1E6120
    ctx->pc = 0x24C9E8u;
    SET_GPR_U32(ctx, 31, 0x24C9F0u);
    ctx->pc = 0x24C9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9E8u;
    // 0x24c9ec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x24C9E8u, 0x24C9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C9F0u;
label_24c9f0:
    // 0x24c9f0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x24c9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x24c9f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c9f8: 0xc079848  jal         func_1E6120
    ctx->pc = 0x24C9F8u;
    SET_GPR_U32(ctx, 31, 0x24CA00u);
    ctx->pc = 0x24C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9F8u;
    // 0x24c9fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x24C9F8u, 0x24CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA00u;
label_24ca00:
    // 0x24ca00: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x24ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x24ca04: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24ca04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ca08: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x24ca08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ca0c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x24ca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24ca10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x24ca10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x24ca14: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24ca14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24ca18: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x24ca18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24ca1c: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
    ctx->pc = 0x24CA1Cu;
    {
        const bool branch_taken_0x24ca1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24ca1c) {
            ctx->pc = 0x24CA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CA1Cu;
            // 0x24ca20: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c9c0;
        }
    }
    ctx->pc = 0x24CA24u;
    // 0x24ca24: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x24ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_24ca28:
    // 0x24ca28: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x24ca28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x24ca2c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x24ca2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x24ca30: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x24ca30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24ca34: 0xc079482  jal         func_1E5208
    ctx->pc = 0x24CA34u;
    SET_GPR_U32(ctx, 31, 0x24CA3Cu);
    ctx->pc = 0x24CA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CA34u;
    // 0x24ca38: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5208u, 0x24CA34u, 0x24CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CA3Cu;
label_24ca3c:
    // 0x24ca3c: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x24ca3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x24ca40: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x24ca40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24ca44: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x24ca44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x24ca48: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x24ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x24ca4c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24ca4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24ca50: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x24ca50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24ca54: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x24ca54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x24ca58: 0xd8840020  lqc2        $vf4, 0x20($a0)
    ctx->pc = 0x24ca58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x24ca5c: 0xd8850030  lqc2        $vf5, 0x30($a0)
    ctx->pc = 0x24ca5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x24ca60: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x24ca60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24ca64: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x24ca64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24ca68: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x24ca68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24ca6c: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x24ca6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24ca70: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x24ca70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ca74: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x24ca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ca78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ca78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ca7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24ca7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ca80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24ca80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ca84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x24ca84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24ca88: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x24ca88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x24ca8c: 0x3e00008  jr          $ra
    ctx->pc = 0x24CA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA8Cu;
        // 0x24ca90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CA94u;
    // 0x24ca94: 0x0  nop
    ctx->pc = 0x24ca94u;
    // NOP
    ctx->pc = 0x24ca98u;
}
