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

// Function: sub_0031A5B0
// Address: 0x31a5b0 - 0x31ab28
void sub_0031A5B0_0x31a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A5B0_0x31a5b0");
#endif

    switch (ctx->pc) {
        case 0x31a600u: goto label_31a600;
        case 0x31a614u: goto label_31a614;
        case 0x31a648u: goto label_31a648;
        case 0x31a688u: goto label_31a688;
        case 0x31a690u: goto label_31a690;
        case 0x31a7d8u: goto label_31a7d8;
        case 0x31a7e4u: goto label_31a7e4;
        case 0x31a800u: goto label_31a800;
        case 0x31a80cu: goto label_31a80c;
        case 0x31a8a8u: goto label_31a8a8;
        case 0x31a8b8u: goto label_31a8b8;
        case 0x31a8e8u: goto label_31a8e8;
        case 0x31a8fcu: goto label_31a8fc;
        case 0x31a9a8u: goto label_31a9a8;
        case 0x31aaa8u: goto label_31aaa8;
        case 0x31aad8u: goto label_31aad8;
        default: break;
    }

    ctx->pc = 0x31a5b0u;

    // 0x31a5b0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x31a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x31a5b4: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x31a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    // 0x31a5b8: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x31a5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x31a5bc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x31a5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x31a5c0: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x31a5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x31a5c4: 0x8e04bd54  lw          $a0, -0x42AC($s0)
    ctx->pc = 0x31a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD54u));
    // 0x31a5c8: 0xffb200c0  sd          $s2, 0xC0($sp)
    ctx->pc = 0x31a5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 18));
    // 0x31a5cc: 0xffb300c8  sd          $s3, 0xC8($sp)
    ctx->pc = 0x31a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 19));
    // 0x31a5d0: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x31a5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
    // 0x31a5d4: 0xffb500d8  sd          $s5, 0xD8($sp)
    ctx->pc = 0x31a5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 21));
    // 0x31a5d8: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x31a5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
    // 0x31a5dc: 0xffb700e8  sd          $s7, 0xE8($sp)
    ctx->pc = 0x31a5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 23));
    // 0x31a5e0: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x31a5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
    // 0x31a5e4: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x31a5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x31a5e8: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x31a5e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x31a5ec: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x31a5ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x31a5f0: 0x1080013f  beqz        $a0, . + 4 + (0x13F << 2)
    ctx->pc = 0x31A5F0u;
    {
        const bool branch_taken_0x31a5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A5F0u;
        // 0x31a5f4: 0xa220bd58  sb          $zero, -0x42A8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4294950232), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a5f0) {
            ctx->pc = 0x31AAF0u;
            goto label_31aaf0;
        }
    }
    ctx->pc = 0x31A5F8u;
    // 0x31a5f8: 0xc0843aa  jal         func_210EA8
    ctx->pc = 0x31A5F8u;
    SET_GPR_U32(ctx, 31, 0x31A600u);
    ctx->pc = 0x210EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210EA8u, 0x31A5F8u, 0x31A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A600u;
label_31a600:
    // 0x31a600: 0x8e05bd54  lw          $a1, -0x42AC($s0)
    ctx->pc = 0x31a600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950228)));
    // 0x31a604: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x31a604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x31a608: 0x248468d0  addiu       $a0, $a0, 0x68D0
    ctx->pc = 0x31a608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26832));
    // 0x31a60c: 0xc0788a0  jal         func_1E2280
    ctx->pc = 0x31A60Cu;
    SET_GPR_U32(ctx, 31, 0x31A614u);
    ctx->pc = 0x31A610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A60Cu;
    // 0x31a610: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x31A60Cu, 0x31A614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A614u;
label_31a614:
    // 0x31a614: 0x50400137  beql        $v0, $zero, . + 4 + (0x137 << 2)
    ctx->pc = 0x31A614u;
    {
        const bool branch_taken_0x31a614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a614) {
            ctx->pc = 0x31A618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A614u;
            // 0x31a618: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AAF4u;
            goto label_31aaf4;
        }
    }
    ctx->pc = 0x31A61Cu;
    // 0x31a61c: 0x8e06bd54  lw          $a2, -0x42AC($s0)
    ctx->pc = 0x31a61cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950228)));
    // 0x31a620: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x31a620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x31a624: 0x24846830  addiu       $a0, $a0, 0x6830
    ctx->pc = 0x31a624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26672));
    // 0x31a628: 0x8cc20104  lw          $v0, 0x104($a2)
    ctx->pc = 0x31a628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    // 0x31a62c: 0x24c800b4  addiu       $t0, $a2, 0xB4
    ctx->pc = 0x31a62cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 180));
    // 0x31a630: 0x8cc500b8  lw          $a1, 0xB8($a2)
    ctx->pc = 0x31a630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x31a634: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x31a634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a638: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x31a638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x31a63c: 0x24a50120  addiu       $a1, $a1, 0x120
    ctx->pc = 0x31a63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x31a640: 0xc077044  jal         func_1DC110
    ctx->pc = 0x31A640u;
    SET_GPR_U32(ctx, 31, 0x31A648u);
    ctx->pc = 0x31A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A640u;
    // 0x31a644: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC110u, 0x31A640u, 0x31A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A648u;
label_31a648:
    // 0x31a648: 0x5040012a  beql        $v0, $zero, . + 4 + (0x12A << 2)
    ctx->pc = 0x31A648u;
    {
        const bool branch_taken_0x31a648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31a648) {
            ctx->pc = 0x31A64Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A648u;
            // 0x31a64c: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AAF4u;
            goto label_31aaf4;
        }
    }
    ctx->pc = 0x31A650u;
    // 0x31a650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a654: 0x8e03bd54  lw          $v1, -0x42AC($s0)
    ctx->pc = 0x31a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950228)));
    // 0x31a658: 0xa222bd58  sb          $v0, -0x42A8($s1)
    ctx->pc = 0x31a658u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4294950232), (uint8_t)GPR_U32(ctx, 2));
    // 0x31a65c: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x31a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x31a660: 0x10400124  beqz        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x31A660u;
    {
        const bool branch_taken_0x31a660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A660u;
        // 0x31a664: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a660) {
            ctx->pc = 0x31AAF4u;
            goto label_31aaf4;
        }
    }
    ctx->pc = 0x31A668u;
    // 0x31a668: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x31a668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x31a66c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x31a66cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x31a670: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A670u;
    {
        const bool branch_taken_0x31a670 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x31a670) {
            ctx->pc = 0x31A680u;
            goto label_31a680;
        }
    }
    ctx->pc = 0x31A678u;
    // 0x31a678: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x31A678u;
    {
        const bool branch_taken_0x31a678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A678u;
        // 0x31a67c: 0xa220bd58  sb          $zero, -0x42A8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 4294950232), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a678) {
            ctx->pc = 0x31AAF0u;
            goto label_31aaf0;
        }
    }
    ctx->pc = 0x31A680u;
label_31a680:
    // 0x31a680: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31A680u;
    SET_GPR_U32(ctx, 31, 0x31A688u);
    ctx->pc = 0x31A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A680u;
    // 0x31a684: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31A680u, 0x31A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A688u;
label_31a688:
    // 0x31a688: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31A688u;
    SET_GPR_U32(ctx, 31, 0x31A690u);
    ctx->pc = 0x31A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A688u;
    // 0x31a68c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31A688u, 0x31A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A690u;
label_31a690:
    // 0x31a690: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x31a690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x31a694: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x31a694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x31a698: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x31a698u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31a69c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x31a69cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a6a0: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x31a6a0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x31a6a4: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x31a6a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x31a6a8: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x31a6a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x31a6ac: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x31a6acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31a6b0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x31a6b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31a6b4: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x31a6b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31a6b8: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x31a6b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31a6bc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x31a6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31a6c0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x31a6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x31a6c4: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x31a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x31a6c8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x31a6c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a6cc: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x31a6ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31a6d0: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x31a6d0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x31a6d4: 0xd8840020  lqc2        $vf4, 0x20($a0)
    ctx->pc = 0x31a6d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x31a6d8: 0xd8850030  lqc2        $vf5, 0x30($a0)
    ctx->pc = 0x31a6d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x31a6dc: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x31a6dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31a6e0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x31a6e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31a6e4: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x31a6e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x31a6e8: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x31a6e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x31a6ec: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x31a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31a6f0: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x31a6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31a6f4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31a6f8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x31a6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a6fc: 0xc44138f0  lwc1        $f1, 0x38F0($v0)
    ctx->pc = 0x31a6fcu;
    { uint32_t bits = FAST_READ32(0x4738F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a700: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x31a700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x31a704: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x31a704u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x31a708: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31a708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a70c: 0x0  nop
    ctx->pc = 0x31a70cu;
    // NOP
    // 0x31a710: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31A710u;
    {
        const bool branch_taken_0x31a710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A710u;
        // 0x31a714: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a710) {
            ctx->pc = 0x31A720u;
            goto label_31a720;
        }
    }
    ctx->pc = 0x31A718u;
    // 0x31a718: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x31a718u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x31a71c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x31a71cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a720:
    // 0x31a720: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x31a720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31a724: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x31a724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a728: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x31a728u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x31a72c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x31a72cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x31a730: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31a730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a734: 0x0  nop
    ctx->pc = 0x31a734u;
    // NOP
    // 0x31a738: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x31A738u;
    {
        const bool branch_taken_0x31a738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A738u;
        // 0x31a73c: 0xc7a20018  lwc1        $f2, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a738) {
            ctx->pc = 0x31A748u;
            goto label_31a748;
        }
    }
    ctx->pc = 0x31A740u;
    // 0x31a740: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x31a740u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x31a744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31a744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a748:
    // 0x31a748: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x31a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a74c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x31a74cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x31a750: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x31a750u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x31a754: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31a754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a758: 0x0  nop
    ctx->pc = 0x31a758u;
    // NOP
    // 0x31a75c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x31A75Cu;
    {
        const bool branch_taken_0x31a75c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31a75c) {
            ctx->pc = 0x31A760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A75Cu;
            // 0x31a760: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A764u;
            goto label_31a764;
        }
    }
    ctx->pc = 0x31A764u;
label_31a764:
    // 0x31a764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31a768: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x31A768u;
    {
        const bool branch_taken_0x31a768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A768u;
        // 0x31a76c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a768) {
            ctx->pc = 0x31A7A0u;
            goto label_31a7a0;
        }
    }
    ctx->pc = 0x31A770u;
    // 0x31a770: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A770u;
    {
        const bool branch_taken_0x31a770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A770u;
        // 0x31a774: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a770) {
            ctx->pc = 0x31A788u;
            goto label_31a788;
        }
    }
    ctx->pc = 0x31A778u;
    // 0x31a778: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31A778u;
    {
        const bool branch_taken_0x31a778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A778u;
        // 0x31a77c: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a778) {
            ctx->pc = 0x31A798u;
            goto label_31a798;
        }
    }
    ctx->pc = 0x31A780u;
    // 0x31a780: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x31A780u;
    {
        const bool branch_taken_0x31a780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A780u;
        // 0x31a784: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a780) {
            ctx->pc = 0x31A7B4u;
            goto label_31a7b4;
        }
    }
    ctx->pc = 0x31A788u;
label_31a788:
    // 0x31a788: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31A788u;
    {
        const bool branch_taken_0x31a788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A788u;
        // 0x31a78c: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a788) {
            ctx->pc = 0x31A7A8u;
            goto label_31a7a8;
        }
    }
    ctx->pc = 0x31A790u;
    // 0x31a790: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31A790u;
    {
        const bool branch_taken_0x31a790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A790u;
        // 0x31a794: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a790) {
            ctx->pc = 0x31A7B4u;
            goto label_31a7b4;
        }
    }
    ctx->pc = 0x31A798u;
label_31a798:
    // 0x31a798: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31A798u;
    {
        const bool branch_taken_0x31a798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A798u;
        // 0x31a79c: 0xe7a40000  swc1        $f4, 0x0($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a798) {
            ctx->pc = 0x31A7ACu;
            goto label_31a7ac;
        }
    }
    ctx->pc = 0x31A7A0u;
label_31a7a0:
    // 0x31a7a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31A7A0u;
    {
        const bool branch_taken_0x31a7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A7A0u;
        // 0x31a7a4: 0xe7a30004  swc1        $f3, 0x4($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a7a0) {
            ctx->pc = 0x31A7ACu;
            goto label_31a7ac;
        }
    }
    ctx->pc = 0x31A7A8u;
label_31a7a8:
    // 0x31a7a8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x31a7a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_31a7ac:
    // 0x31a7ac: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x31a7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x31a7b0: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x31a7b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_31a7b4:
    // 0x31a7b4: 0x2c550001  sltiu       $s5, $v0, 0x1
    ctx->pc = 0x31a7b4u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x31a7b8: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x31a7b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a7bc: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x31a7bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31a7c0: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x31a7c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31a7c4: 0x27b700a0  addiu       $s7, $sp, 0xA0
    ctx->pc = 0x31a7c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x31a7c8: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x31a7c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x31a7cc: 0x3c14005b  lui         $s4, 0x5B
    ctx->pc = 0x31a7ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)91 << 16));
    // 0x31a7d0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x31a7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31a7d4: 0x0  nop
    ctx->pc = 0x31a7d4u;
    // NOP
label_31a7d8:
    // 0x31a7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a7dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31A7DCu;
    SET_GPR_U32(ctx, 31, 0x31A7E4u);
    ctx->pc = 0x31A7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A7DCu;
    // 0x31a7e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31A7DCu, 0x31A7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A7E4u;
label_31a7e4:
    // 0x31a7e4: 0x0  nop
    ctx->pc = 0x31a7e4u;
    // NOP
    // 0x31a7e8: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31A7E8u;
    {
        const bool branch_taken_0x31a7e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x31A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A7E8u;
        // 0x31a7ec: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a7e8) {
            ctx->pc = 0x31A7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a7d8;
        }
    }
    ctx->pc = 0x31A7F0u;
    // 0x31a7f0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x31a7f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a7f4: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x31a7f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31a7f8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x31a7f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31a7fc: 0x0  nop
    ctx->pc = 0x31a7fcu;
    // NOP
label_31a800:
    // 0x31a800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31a800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a804: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31A804u;
    SET_GPR_U32(ctx, 31, 0x31A80Cu);
    ctx->pc = 0x31A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A804u;
    // 0x31a808: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31A804u, 0x31A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A80Cu;
label_31a80c:
    // 0x31a80c: 0x0  nop
    ctx->pc = 0x31a80cu;
    // NOP
    // 0x31a810: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31A810u;
    {
        const bool branch_taken_0x31a810 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x31A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A810u;
        // 0x31a814: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a810) {
            ctx->pc = 0x31A800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a800;
        }
    }
    ctx->pc = 0x31A818u;
    // 0x31a818: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x31a818u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a81c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x31a81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31a820: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A820u;
    {
        const bool branch_taken_0x31a820 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A820u;
        // 0x31a824: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a820) {
            ctx->pc = 0x31A834u;
            goto label_31a834;
        }
    }
    ctx->pc = 0x31A828u;
    // 0x31a828: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x31a828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a82c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31A82Cu;
    {
        const bool branch_taken_0x31a82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A82Cu;
        // 0x31a830: 0xc7a20018  lwc1        $f2, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a82c) {
            ctx->pc = 0x31A83Cu;
            goto label_31a83c;
        }
    }
    ctx->pc = 0x31A834u;
label_31a834:
    // 0x31a834: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x31a834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a838: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x31a838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31a83c:
    // 0x31a83c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x31a83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x31a840: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x31a840u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x31a844: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x31a844u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x31a848: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x31a848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x31a84c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x31a84cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x31a850: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x31a850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31a854: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x31a854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x31a858: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x31a858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31a85c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A85Cu;
    {
        const bool branch_taken_0x31a85c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A85Cu;
        // 0x31a860: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a85c) {
            ctx->pc = 0x31A870u;
            goto label_31a870;
        }
    }
    ctx->pc = 0x31A864u;
    // 0x31a864: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x31a864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a868: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31A868u;
    {
        const bool branch_taken_0x31a868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A868u;
        // 0x31a86c: 0xc7a20008  lwc1        $f2, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a868) {
            ctx->pc = 0x31A878u;
            goto label_31a878;
        }
    }
    ctx->pc = 0x31A870u;
label_31a870:
    // 0x31a870: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x31a870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a874: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x31a874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31a878:
    // 0x31a878: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x31a878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x31a87c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x31a87cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x31a880: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x31a880u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x31a884: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x31a884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x31a888: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x31a888u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x31a88c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x31a88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x31a890: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31a890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31a894: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x31a894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x31a898: 0x26750040  addiu       $s5, $s3, 0x40
    ctx->pc = 0x31a898u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x31a89c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x31a89cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a8a0: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x31a8a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a8a4: 0x0  nop
    ctx->pc = 0x31a8a4u;
    // NOP
label_31a8a8:
    // 0x31a8a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31a8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a8ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31a8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a8b0: 0xc0c63f8  jal         func_318FE0
    ctx->pc = 0x31A8B0u;
    SET_GPR_U32(ctx, 31, 0x31A8B8u);
    ctx->pc = 0x31A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A8B0u;
    // 0x31a8b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x318FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x318FE0u, 0x31A8B0u, 0x31A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A8B8u;
label_31a8b8:
    // 0x31a8b8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x31a8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x31a8bc: 0x8c71bd48  lw          $s1, -0x42B8($v1)
    ctx->pc = 0x31a8bcu;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x31a8c0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x31A8C0u;
    {
        const bool branch_taken_0x31a8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A8C0u;
        // 0x31a8c4: 0xc62100f0  lwc1        $f1, 0xF0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a8c0) {
            ctx->pc = 0x31A958u;
            goto label_31a958;
        }
    }
    ctx->pc = 0x31A8C8u;
    // 0x31a8c8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x31a8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a8cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31a8ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a8d0: 0x0  nop
    ctx->pc = 0x31a8d0u;
    // NOP
    // 0x31a8d4: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
    ctx->pc = 0x31A8D4u;
    {
        const bool branch_taken_0x31a8d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31a8d4) {
            ctx->pc = 0x31A8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A8D4u;
            // 0x31a8d8: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A95Cu;
            goto label_31a95c;
        }
    }
    ctx->pc = 0x31A8DCu;
    // 0x31a8dc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x31a8dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x31a8e0: 0xc0c2d8e  jal         func_30B638
    ctx->pc = 0x31A8E0u;
    SET_GPR_U32(ctx, 31, 0x31A8E8u);
    ctx->pc = 0x31A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A8E0u;
    // 0x31a8e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B638u, 0x31A8E0u, 0x31A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A8E8u;
label_31a8e8:
    // 0x31a8e8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x31a8e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x31a8ec: 0x0  nop
    ctx->pc = 0x31a8ecu;
    // NOP
    // 0x31a8f0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x31a8f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x31a8f4: 0xc0c2d92  jal         func_30B648
    ctx->pc = 0x31A8F4u;
    SET_GPR_U32(ctx, 31, 0x31A8FCu);
    ctx->pc = 0x31A8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A8F4u;
    // 0x31a8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B648u, 0x31A8F4u, 0x31A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A8FCu;
label_31a8fc:
    // 0x31a8fc: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x31a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x31a900: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x31a900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31a904: 0x0  nop
    ctx->pc = 0x31a904u;
    // NOP
    // 0x31a908: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x31a908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31a90c: 0xae2000ec  sw          $zero, 0xEC($s1)
    ctx->pc = 0x31a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
    // 0x31a910: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x31a910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a914: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x31a914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a918: 0x0  nop
    ctx->pc = 0x31a918u;
    // NOP
    // 0x31a91c: 0x0  nop
    ctx->pc = 0x31a91cu;
    // NOP
    // 0x31a920: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x31a920u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x31a924: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x31a924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31a928: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x31a928u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x31a92c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x31a92cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x31a930: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x31a930u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x31a934: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31a934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31a938: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x31a938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x31a93c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x31a93cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x31a940: 0xc62000e8  lwc1        $f0, 0xE8($s1)
    ctx->pc = 0x31a940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a944: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31a944u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31a948: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x31a948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x31a94c: 0xc62000ec  lwc1        $f0, 0xEC($s1)
    ctx->pc = 0x31a94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a950: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x31a950u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x31a954: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x31a954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_31a958:
    // 0x31a958: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x31a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31a95c:
    // 0x31a95c: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x31a95cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x31a960: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x31a960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x31a964: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x31a964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x31a968: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x31a968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x31a96c: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x31A96Cu;
    {
        const bool branch_taken_0x31a96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A96Cu;
        // 0x31a970: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a96c) {
            ctx->pc = 0x31A8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a8a8;
        }
    }
    ctx->pc = 0x31A974u;
    // 0x31a974: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31a974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31a978: 0x268321d0  addiu       $v1, $s4, 0x21D0
    ctx->pc = 0x31a978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 8656));
    // 0x31a97c: 0xc44138f0  lwc1        $f1, 0x38F0($v0)
    ctx->pc = 0x31a97cu;
    { uint32_t bits = FAST_READ32(0x4738F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a980: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x31a980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a984: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x31a984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x31a988: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x31a988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a98c: 0xc44038f4  lwc1        $f0, 0x38F4($v0)
    ctx->pc = 0x31a98cu;
    { uint32_t bits = FAST_READ32(0x4738F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a990: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31a990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31a994: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x31a994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x31a998: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x31a998u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a99c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x31a99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x31a9a0: 0xe68121d0  swc1        $f1, 0x21D0($s4)
    ctx->pc = 0x31a9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8656), bits); }
    // 0x31a9a4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x31a9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_31a9a8:
    // 0x31a9a8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x31a9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a9ac: 0xc4c021d0  lwc1        $f0, 0x21D0($a2)
    ctx->pc = 0x31a9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a9b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31a9b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a9b4: 0x0  nop
    ctx->pc = 0x31a9b4u;
    // NOP
    // 0x31a9b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x31A9B8u;
    {
        const bool branch_taken_0x31a9b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31a9b8) {
            ctx->pc = 0x31A9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A9B8u;
            // 0x31a9bc: 0xe68121d0  swc1        $f1, 0x21D0($s4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8656), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A9C0u;
            goto label_31a9c0;
        }
    }
    ctx->pc = 0x31A9C0u;
label_31a9c0:
    // 0x31a9c0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x31a9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a9c4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x31a9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a9c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31a9c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a9cc: 0x0  nop
    ctx->pc = 0x31a9ccu;
    // NOP
    // 0x31a9d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x31A9D0u;
    {
        const bool branch_taken_0x31a9d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31a9d0) {
            ctx->pc = 0x31A9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A9D0u;
            // 0x31a9d4: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A9D8u;
            goto label_31a9d8;
        }
    }
    ctx->pc = 0x31A9D8u;
label_31a9d8:
    // 0x31a9d8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x31a9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a9dc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x31a9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a9e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31a9e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a9e4: 0x0  nop
    ctx->pc = 0x31a9e4u;
    // NOP
    // 0x31a9e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x31A9E8u;
    {
        const bool branch_taken_0x31a9e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31a9e8) {
            ctx->pc = 0x31A9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A9E8u;
            // 0x31a9ec: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A9F0u;
            goto label_31a9f0;
        }
    }
    ctx->pc = 0x31A9F0u;
label_31a9f0:
    // 0x31a9f0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x31a9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31a9f4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x31a9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a9f8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31a9f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a9fc: 0x0  nop
    ctx->pc = 0x31a9fcu;
    // NOP
    // 0x31aa00: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x31AA00u;
    {
        const bool branch_taken_0x31aa00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31aa00) {
            ctx->pc = 0x31AA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AA00u;
            // 0x31aa04: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AA08u;
            goto label_31aa08;
        }
    }
    ctx->pc = 0x31AA08u;
label_31aa08:
    // 0x31aa08: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x31aa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x31aa0c: 0x4a1ffe6  bgez        $a1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x31AA0Cu;
    {
        const bool branch_taken_0x31aa0c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x31AA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA0Cu;
        // 0x31aa10: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa0c) {
            ctx->pc = 0x31A9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a9a8;
        }
    }
    ctx->pc = 0x31AA14u;
    // 0x31aa14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x31aa14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31aa18: 0x268221d0  addiu       $v0, $s4, 0x21D0
    ctx->pc = 0x31aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8656));
    // 0x31aa1c: 0xc68021d0  lwc1        $f0, 0x21D0($s4)
    ctx->pc = 0x31aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31aa20: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31aa20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31aa24: 0x0  nop
    ctx->pc = 0x31aa24u;
    // NOP
    // 0x31aa28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31AA28u;
    {
        const bool branch_taken_0x31aa28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA28u;
        // 0x31aa2c: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa28) {
            ctx->pc = 0x31AA34u;
            goto label_31aa34;
        }
    }
    ctx->pc = 0x31AA30u;
    // 0x31aa30: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x31aa30u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_31aa34:
    // 0x31aa34: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x31aa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31aa38: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x31aa38u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x31aa3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31aa3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31aa40: 0x0  nop
    ctx->pc = 0x31aa40u;
    // NOP
    // 0x31aa44: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31AA44u;
    {
        const bool branch_taken_0x31aa44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31AA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA44u;
        // 0x31aa48: 0xe68221d0  swc1        $f2, 0x21D0($s4) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8656), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa44) {
            ctx->pc = 0x31AA50u;
            goto label_31aa50;
        }
    }
    ctx->pc = 0x31AA4Cu;
    // 0x31aa4c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x31aa4cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_31aa50:
    // 0x31aa50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31aa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31aa54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31aa54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31aa58: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31aa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31aa5c: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x31aa5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x31aa60: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31aa60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31aa64: 0x0  nop
    ctx->pc = 0x31aa64u;
    // NOP
    // 0x31aa68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31AA68u;
    {
        const bool branch_taken_0x31aa68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA68u;
        // 0x31aa6c: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa68) {
            ctx->pc = 0x31AA74u;
            goto label_31aa74;
        }
    }
    ctx->pc = 0x31AA70u;
    // 0x31aa70: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x31aa70u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_31aa74:
    // 0x31aa74: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x31aa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31aa78: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x31aa78u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x31aa7c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31aa7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31aa80: 0x0  nop
    ctx->pc = 0x31aa80u;
    // NOP
    // 0x31aa84: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31AA84u;
    {
        const bool branch_taken_0x31aa84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AA84u;
        // 0x31aa88: 0xe4430008  swc1        $f3, 0x8($v0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aa84) {
            ctx->pc = 0x31AA90u;
            goto label_31aa90;
        }
    }
    ctx->pc = 0x31AA8Cu;
    // 0x31aa8c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x31aa8cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_31aa90:
    // 0x31aa90: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x31aa90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x31aa94: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x31aa94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aa98: 0x5262000a  beql        $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x31AA98u;
    {
        const bool branch_taken_0x31aa98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x31aa98) {
            ctx->pc = 0x31AA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AA98u;
            // 0x31aa9c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AAC4u;
            goto label_31aac4;
        }
    }
    ctx->pc = 0x31AAA0u;
    // 0x31aaa0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x31aaa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aaa4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x31aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_31aaa8:
    // 0x31aaa8: 0x0  nop
    ctx->pc = 0x31aaa8u;
    // NOP
    // 0x31aaac: 0x0  nop
    ctx->pc = 0x31aaacu;
    // NOP
    // 0x31aab0: 0x0  nop
    ctx->pc = 0x31aab0u;
    // NOP
    // 0x31aab4: 0x0  nop
    ctx->pc = 0x31aab4u;
    // NOP
    // 0x31aab8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31AAB8u;
    {
        const bool branch_taken_0x31aab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AAB8u;
        // 0x31aabc: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31aab8) {
            ctx->pc = 0x31AAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31aaa8;
        }
    }
    ctx->pc = 0x31AAC0u;
    // 0x31aac0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x31aac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31aac4:
    // 0x31aac4: 0x53c2000b  beql        $fp, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31AAC4u;
    {
        const bool branch_taken_0x31aac4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x31aac4) {
            ctx->pc = 0x31AAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AAC4u;
            // 0x31aac8: 0xdfb000b0  ld          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AAF4u;
            goto label_31aaf4;
        }
    }
    ctx->pc = 0x31AACCu;
    // 0x31aacc: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x31aaccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31aad0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x31aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x31aad4: 0x0  nop
    ctx->pc = 0x31aad4u;
    // NOP
label_31aad8:
    // 0x31aad8: 0x0  nop
    ctx->pc = 0x31aad8u;
    // NOP
    // 0x31aadc: 0x0  nop
    ctx->pc = 0x31aadcu;
    // NOP
    // 0x31aae0: 0x0  nop
    ctx->pc = 0x31aae0u;
    // NOP
    // 0x31aae4: 0x0  nop
    ctx->pc = 0x31aae4u;
    // NOP
    // 0x31aae8: 0x5462fffb  bnel        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31AAE8u;
    {
        const bool branch_taken_0x31aae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31aae8) {
            ctx->pc = 0x31AAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AAE8u;
            // 0x31aaec: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31aad8;
        }
    }
    ctx->pc = 0x31AAF0u;
label_31aaf0:
    // 0x31aaf0: 0xdfb000b0  ld          $s0, 0xB0($sp)
    ctx->pc = 0x31aaf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_31aaf4:
    // 0x31aaf4: 0xdfb100b8  ld          $s1, 0xB8($sp)
    ctx->pc = 0x31aaf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x31aaf8: 0xdfb200c0  ld          $s2, 0xC0($sp)
    ctx->pc = 0x31aaf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x31aafc: 0xdfb300c8  ld          $s3, 0xC8($sp)
    ctx->pc = 0x31aafcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31ab00: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x31ab00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x31ab04: 0xdfb500d8  ld          $s5, 0xD8($sp)
    ctx->pc = 0x31ab04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x31ab08: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x31ab08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x31ab0c: 0xdfb700e8  ld          $s7, 0xE8($sp)
    ctx->pc = 0x31ab0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x31ab10: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x31ab10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x31ab14: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x31ab14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x31ab18: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x31ab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31ab1c: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x31ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31ab20: 0x3e00008  jr          $ra
    ctx->pc = 0x31AB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AB20u;
        // 0x31ab24: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AB28u;
}
