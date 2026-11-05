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

// Function: sub_002E17F0
// Address: 0x2e17f0 - 0x2e18c0
void sub_002E17F0_0x2e17f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E17F0_0x2e17f0");
#endif

    switch (ctx->pc) {
        case 0x2e17f0u: goto label_2e17f0;
        case 0x2e17f4u: goto label_2e17f4;
        case 0x2e17f8u: goto label_2e17f8;
        case 0x2e17fcu: goto label_2e17fc;
        case 0x2e1800u: goto label_2e1800;
        case 0x2e1804u: goto label_2e1804;
        case 0x2e1808u: goto label_2e1808;
        case 0x2e180cu: goto label_2e180c;
        case 0x2e1810u: goto label_2e1810;
        case 0x2e1814u: goto label_2e1814;
        case 0x2e1818u: goto label_2e1818;
        case 0x2e181cu: goto label_2e181c;
        case 0x2e1820u: goto label_2e1820;
        case 0x2e1824u: goto label_2e1824;
        case 0x2e1828u: goto label_2e1828;
        case 0x2e182cu: goto label_2e182c;
        case 0x2e1830u: goto label_2e1830;
        case 0x2e1834u: goto label_2e1834;
        case 0x2e1838u: goto label_2e1838;
        case 0x2e183cu: goto label_2e183c;
        case 0x2e1840u: goto label_2e1840;
        case 0x2e1844u: goto label_2e1844;
        case 0x2e1848u: goto label_2e1848;
        case 0x2e184cu: goto label_2e184c;
        case 0x2e1850u: goto label_2e1850;
        case 0x2e1854u: goto label_2e1854;
        case 0x2e1858u: goto label_2e1858;
        case 0x2e185cu: goto label_2e185c;
        case 0x2e1860u: goto label_2e1860;
        case 0x2e1864u: goto label_2e1864;
        case 0x2e1868u: goto label_2e1868;
        case 0x2e186cu: goto label_2e186c;
        case 0x2e1870u: goto label_2e1870;
        case 0x2e1874u: goto label_2e1874;
        case 0x2e1878u: goto label_2e1878;
        case 0x2e187cu: goto label_2e187c;
        case 0x2e1880u: goto label_2e1880;
        case 0x2e1884u: goto label_2e1884;
        case 0x2e1888u: goto label_2e1888;
        case 0x2e188cu: goto label_2e188c;
        case 0x2e1890u: goto label_2e1890;
        case 0x2e1894u: goto label_2e1894;
        case 0x2e1898u: goto label_2e1898;
        case 0x2e189cu: goto label_2e189c;
        case 0x2e18a0u: goto label_2e18a0;
        case 0x2e18a4u: goto label_2e18a4;
        case 0x2e18a8u: goto label_2e18a8;
        case 0x2e18acu: goto label_2e18ac;
        case 0x2e18b0u: goto label_2e18b0;
        case 0x2e18b4u: goto label_2e18b4;
        case 0x2e18b8u: goto label_2e18b8;
        case 0x2e18bcu: goto label_2e18bc;
        default: break;
    }

    ctx->pc = 0x2e17f0u;

label_2e17f0:
    // 0x2e17f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e17f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e17f4:
    // 0x2e17f4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2e17f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2e17f8:
    // 0x2e17f8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2e17f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2e17fc:
    // 0x2e17fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e17fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1800:
    // 0x2e1800: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2e1800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2e1804:
    // 0x2e1804: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2e1804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e1808:
    // 0x2e1808: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2e1808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2e180c:
    // 0x2e180c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e180cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e1810:
    // 0x2e1810: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e1810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e1814:
    // 0x2e1814: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e1814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e1818:
    // 0x2e1818: 0xc0f6a96  jal         func_3DAA58
label_2e181c:
    if (ctx->pc == 0x2E181Cu) {
        ctx->pc = 0x2E181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1818u;
        // 0x2e181c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1820u;
        goto label_2e1820;
    }
    ctx->pc = 0x2E1818u;
    SET_GPR_U32(ctx, 31, 0x2E1820u);
    ctx->pc = 0x2E181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1818u;
    // 0x2e181c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E1818u, 0x2E1820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1820u;
label_2e1820:
    // 0x2e1820: 0xc0f6a96  jal         func_3DAA58
label_2e1824:
    if (ctx->pc == 0x2E1824u) {
        ctx->pc = 0x2E1824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1820u;
        // 0x2e1824: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1828u;
        goto label_2e1828;
    }
    ctx->pc = 0x2E1820u;
    SET_GPR_U32(ctx, 31, 0x2E1828u);
    ctx->pc = 0x2E1824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1820u;
    // 0x2e1824: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E1820u, 0x2E1828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1828u;
label_2e1828:
    // 0x2e1828: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x2e1828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_2e182c:
    // 0x2e182c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2e182cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2e1830:
    // 0x2e1830: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e1830u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1834:
    // 0x2e1834: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2e1834u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2e1838:
    // 0x2e1838: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2e1838u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2e183c:
    // 0x2e183c: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2e183cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2e1840:
    // 0x2e1840: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2e1840u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e1844:
    // 0x2e1844: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2e1844u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e1848:
    // 0x2e1848: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2e1848u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e184c:
    // 0x2e184c: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2e184cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_2e1850:
    // 0x2e1850: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2e1850u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2e1854:
    // 0x2e1854: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e1854u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1858:
    // 0x2e1858: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2e1858u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2e185c:
    // 0x2e185c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2e185cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2e1860:
    // 0x2e1860: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2e1860u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2e1864:
    // 0x2e1864: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2e1864u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e1868:
    // 0x2e1868: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2e1868u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e186c:
    // 0x2e186c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2e186cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e1870:
    // 0x2e1870: 0xfba50010  sqc2        $vf5, 0x10($sp)
    ctx->pc = 0x2e1870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_2e1874:
    // 0x2e1874: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2e1874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e1878:
    // 0x2e1878: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x2e1878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_2e187c:
    // 0x2e187c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2e187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2e1880:
    // 0x2e1880: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2e1884:
    if (ctx->pc == 0x2E1884u) {
        ctx->pc = 0x2E1884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1880u;
        // 0x2e1884: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1888u;
        goto label_2e1888;
    }
    ctx->pc = 0x2E1880u;
    {
        const bool branch_taken_0x2e1880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1880u;
        // 0x2e1884: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1880) {
            ctx->pc = 0x2E18A8u;
            goto label_2e18a8;
        }
    }
    ctx->pc = 0x2E1888u;
label_2e1888:
    // 0x2e1888: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x2e1888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_2e188c:
    // 0x2e188c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e188cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e1890:
    // 0x2e1890: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e1890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e1894:
    // 0x2e1894: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e1894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e1898:
    // 0x2e1898: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2e1898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2e189c:
    // 0x2e189c: 0x40f809  jalr        $v0
label_2e18a0:
    if (ctx->pc == 0x2E18A0u) {
        ctx->pc = 0x2E18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E189Cu;
        // 0x2e18a0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E18A4u;
        goto label_2e18a4;
    }
    ctx->pc = 0x2E189Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E18A4u);
        ctx->pc = 0x2E18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E189Cu;
        // 0x2e18a0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E189Cu, 0x2E18A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E18A4u;
label_2e18a4:
    // 0x2e18a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2e18a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e18a8:
    // 0x2e18a8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2e18a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2e18ac:
    // 0x2e18ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2e18acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2e18b0:
    // 0x2e18b0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2e18b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2e18b4:
    // 0x2e18b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e18b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e18b8:
    // 0x2e18b8: 0x3e00008  jr          $ra
label_2e18bc:
    if (ctx->pc == 0x2E18BCu) {
        ctx->pc = 0x2E18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18B8u;
        // 0x2e18bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E18C0u;
        goto label_fallthrough_0x2e18b8;
    }
    ctx->pc = 0x2E18B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E18BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E18B8u;
        // 0x2e18bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E18B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e18b8:
    ctx->pc = 0x2E18C0u;
}
