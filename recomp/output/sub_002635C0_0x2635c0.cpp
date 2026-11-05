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

// Function: sub_002635C0
// Address: 0x2635c0 - 0x2638c0
void sub_002635C0_0x2635c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002635C0_0x2635c0");
#endif

    switch (ctx->pc) {
        case 0x2636a8u: goto label_2636a8;
        case 0x2636ecu: goto label_2636ec;
        case 0x263700u: goto label_263700;
        case 0x263710u: goto label_263710;
        case 0x263748u: goto label_263748;
        case 0x26375cu: goto label_26375c;
        case 0x26376cu: goto label_26376c;
        case 0x2637b0u: goto label_2637b0;
        case 0x2637c0u: goto label_2637c0;
        case 0x2637d4u: goto label_2637d4;
        case 0x2637e4u: goto label_2637e4;
        case 0x263820u: goto label_263820;
        case 0x263854u: goto label_263854;
        case 0x26386cu: goto label_26386c;
        case 0x263874u: goto label_263874;
        case 0x26388cu: goto label_26388c;
        default: break;
    }

    ctx->pc = 0x2635c0u;

    // 0x2635c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2635c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2635c4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2635c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2635c8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2635c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2635cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2635ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2635d0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2635d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2635d4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2635d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2635d8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2635d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2635dc: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2635dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2635e0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2635e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2635e4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2635e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2635e8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2635e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2635ec: 0x8e3300b8  lw          $s3, 0xB8($s1)
    ctx->pc = 0x2635ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2635f0: 0x8e620590  lw          $v0, 0x590($s3)
    ctx->pc = 0x2635f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
    // 0x2635f4: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x2635F4u;
    {
        const bool branch_taken_0x2635f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2635F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2635F4u;
        // 0x2635f8: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2635f4) {
            ctx->pc = 0x263894u;
            goto label_263894;
        }
    }
    ctx->pc = 0x2635FCu;
    // 0x2635fc: 0x8e220288  lw          $v0, 0x288($s1)
    ctx->pc = 0x2635fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x263600: 0x104000a4  beqz        $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x263600u;
    {
        const bool branch_taken_0x263600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263600u;
        // 0x263604: 0x266205a0  addiu       $v0, $s3, 0x5A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263600) {
            ctx->pc = 0x263894u;
            goto label_263894;
        }
    }
    ctx->pc = 0x263608u;
    // 0x263608: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x263608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26360c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x26360cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x263610: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x263610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x263614: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x263614u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x263618: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x263618u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x26361c: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x26361cu;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x263620: 0x46050144  c1          0x50144
    ctx->pc = 0x263620u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x263624: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x263624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x263628: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x263628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26362c: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x26362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x263630: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x263630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263634: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x263634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263638: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x263638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26363c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x26363cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x263640: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x263640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x263644: 0xe643000c  swc1        $f3, 0xC($s2)
    ctx->pc = 0x263644u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x263648: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x263648u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26364c: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x26364cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x263650: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x263650u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x263654: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x263654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x263658: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x263658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x26365c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x26365cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x263660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x263660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263664: 0xa3a00021  sb          $zero, 0x21($sp)
    ctx->pc = 0x263664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x263668: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x263668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x26366c: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x26366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x263670: 0xa3a00022  sb          $zero, 0x22($sp)
    ctx->pc = 0x263670u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x263674: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x263674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x263678: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x263678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26367c: 0x8e250274  lw          $a1, 0x274($s1)
    ctx->pc = 0x26367cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x263680: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x263680u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x263684: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x263684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x263688: 0x8e2600d4  lw          $a2, 0xD4($s1)
    ctx->pc = 0x263688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x26368c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x26368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x263690: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x263690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x263694: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x263694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x263698: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x263698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x26369c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26369cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2636a0: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x2636A0u;
    SET_GPR_U32(ctx, 31, 0x2636A8u);
    ctx->pc = 0x2636A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2636A0u;
    // 0x2636a4: 0xa3a20021  sb          $v0, 0x21($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2636A0u, 0x2636A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2636A8u;
label_2636a8:
    // 0x2636a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2636a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2636ac: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x2636acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x2636b0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2636B0u;
    {
        const bool branch_taken_0x2636b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2636B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2636B0u;
        // 0x2636b4: 0x2862005c  slti        $v0, $v1, 0x5C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)92) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2636b0) {
            ctx->pc = 0x2636E4u;
            goto label_2636e4;
        }
    }
    ctx->pc = 0x2636B8u;
    // 0x2636b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2636B8u;
    {
        const bool branch_taken_0x2636b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2636BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2636B8u;
        // 0x2636bc: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2636b8) {
            ctx->pc = 0x2636D0u;
            goto label_2636d0;
        }
    }
    ctx->pc = 0x2636C0u;
    // 0x2636c0: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2636C0u;
    {
        const bool branch_taken_0x2636c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2636c0) {
            ctx->pc = 0x263740u;
            goto label_263740;
        }
    }
    ctx->pc = 0x2636C8u;
    // 0x2636c8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x2636C8u;
    {
        const bool branch_taken_0x2636c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2636c8) {
            ctx->pc = 0x26386Cu;
            goto label_26386c;
        }
    }
    ctx->pc = 0x2636D0u;
label_2636d0:
    // 0x2636d0: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x2636d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x2636d4: 0x10620038  beq         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2636D4u;
    {
        const bool branch_taken_0x2636d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2636d4) {
            ctx->pc = 0x2637B8u;
            goto label_2637b8;
        }
    }
    ctx->pc = 0x2636DCu;
    // 0x2636dc: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2636DCu;
    {
        const bool branch_taken_0x2636dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2636dc) {
            ctx->pc = 0x26386Cu;
            goto label_26386c;
        }
    }
    ctx->pc = 0x2636E4u;
label_2636e4:
    // 0x2636e4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2636E4u;
    SET_GPR_U32(ctx, 31, 0x2636ECu);
    ctx->pc = 0x2636E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2636E4u;
    // 0x2636e8: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2636E4u, 0x2636ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2636ECu;
label_2636ec:
    // 0x2636ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2636ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2636f0: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2636f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2636f4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2636f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2636f8: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2636F8u;
    SET_GPR_U32(ctx, 31, 0x263700u);
    ctx->pc = 0x2636FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2636F8u;
    // 0x2636fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2636F8u, 0x263700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263700u;
label_263700:
    // 0x263700: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x263700u;
    {
        const bool branch_taken_0x263700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263700) {
            ctx->pc = 0x263704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263700u;
            // 0x263704: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263714u;
            goto label_263714;
        }
    }
    ctx->pc = 0x263708u;
    // 0x263708: 0xc0c4900  jal         func_312400
    ctx->pc = 0x263708u;
    SET_GPR_U32(ctx, 31, 0x263710u);
    ctx->pc = 0x26370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263708u;
    // 0x26370c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x263708u, 0x263710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263710u;
label_263710:
    // 0x263710: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x263710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_263714:
    // 0x263714: 0x26090080  addiu       $t1, $s0, 0x80
    ctx->pc = 0x263714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x263718: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x263718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x26371c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26371cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263720: 0x8e270288  lw          $a3, 0x288($s1)
    ctx->pc = 0x263720u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x263724: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x263724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263728: 0xc66c05dc  lwc1        $f12, 0x5DC($s3)
    ctx->pc = 0x263728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26372c: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x26372cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263730: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x263730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x263734: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x263734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x263738: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x263738u;
    {
        const bool branch_taken_0x263738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263738u;
        // 0x26373c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263738) {
            ctx->pc = 0x263798u;
            goto label_263798;
        }
    }
    ctx->pc = 0x263740u;
label_263740:
    // 0x263740: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x263740u;
    SET_GPR_U32(ctx, 31, 0x263748u);
    ctx->pc = 0x263744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263740u;
    // 0x263744: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x263740u, 0x263748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263748u;
label_263748:
    // 0x263748: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x263748u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26374c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x26374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x263750: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x263750u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263754: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x263754u;
    SET_GPR_U32(ctx, 31, 0x26375Cu);
    ctx->pc = 0x263758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263754u;
    // 0x263758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x263754u, 0x26375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26375Cu;
label_26375c:
    // 0x26375c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26375Cu;
    {
        const bool branch_taken_0x26375c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26375c) {
            ctx->pc = 0x263760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26375Cu;
            // 0x263760: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263770u;
            goto label_263770;
        }
    }
    ctx->pc = 0x263764u;
    // 0x263764: 0xc0c4900  jal         func_312400
    ctx->pc = 0x263764u;
    SET_GPR_U32(ctx, 31, 0x26376Cu);
    ctx->pc = 0x263768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263764u;
    // 0x263768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x263764u, 0x26376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26376Cu;
label_26376c:
    // 0x26376c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26376cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_263770:
    // 0x263770: 0x26090080  addiu       $t1, $s0, 0x80
    ctx->pc = 0x263770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x263774: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x263774u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x263778: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x263778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26377c: 0x8e270288  lw          $a3, 0x288($s1)
    ctx->pc = 0x26377cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x263780: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x263780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263784: 0xc66c05dc  lwc1        $f12, 0x5DC($s3)
    ctx->pc = 0x263784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263788: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x263788u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26378c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x26378cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x263790: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x263790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x263794: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x263794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_263798:
    // 0x263798: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x263798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x26379c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x26379cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2637a0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2637a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2637a4: 0x266b05c0  addiu       $t3, $s3, 0x5C0
    ctx->pc = 0x2637a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 1472));
    // 0x2637a8: 0xc0d1d7e  jal         func_3475F8
    ctx->pc = 0x2637A8u;
    SET_GPR_U32(ctx, 31, 0x2637B0u);
    ctx->pc = 0x2637ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2637A8u;
    // 0x2637ac: 0x46007c06  mov.s       $f16, $f15 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3475F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3475F8u, 0x2637A8u, 0x2637B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637B0u;
label_2637b0:
    // 0x2637b0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2637B0u;
    {
        const bool branch_taken_0x2637b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2637B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2637B0u;
        // 0x2637b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2637b0) {
            ctx->pc = 0x26386Cu;
            goto label_26386c;
        }
    }
    ctx->pc = 0x2637B8u;
label_2637b8:
    // 0x2637b8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2637B8u;
    SET_GPR_U32(ctx, 31, 0x2637C0u);
    ctx->pc = 0x2637BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2637B8u;
    // 0x2637bc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2637B8u, 0x2637C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637C0u;
label_2637c0:
    // 0x2637c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2637c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637c4: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2637c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2637c8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2637c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2637cc: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2637CCu;
    SET_GPR_U32(ctx, 31, 0x2637D4u);
    ctx->pc = 0x2637D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2637CCu;
    // 0x2637d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2637CCu, 0x2637D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637D4u;
label_2637d4:
    // 0x2637d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2637D4u;
    {
        const bool branch_taken_0x2637d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2637d4) {
            ctx->pc = 0x2637D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2637D4u;
            // 0x2637d8: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2637E8u;
            goto label_2637e8;
        }
    }
    ctx->pc = 0x2637DCu;
    // 0x2637dc: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2637DCu;
    SET_GPR_U32(ctx, 31, 0x2637E4u);
    ctx->pc = 0x2637E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2637DCu;
    // 0x2637e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2637DCu, 0x2637E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2637E4u;
label_2637e4:
    // 0x2637e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2637e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2637e8:
    // 0x2637e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2637e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637ec: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2637ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2637f0: 0x26090080  addiu       $t1, $s0, 0x80
    ctx->pc = 0x2637f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2637f4: 0xc66c05dc  lwc1        $f12, 0x5DC($s3)
    ctx->pc = 0x2637f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2637f8: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2637f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2637fc: 0x8e270288  lw          $a3, 0x288($s1)
    ctx->pc = 0x2637fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x263800: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x263800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x263804: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x263804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x263808: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x263808u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26380c: 0x266b05c0  addiu       $t3, $s3, 0x5C0
    ctx->pc = 0x26380cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 1472));
    // 0x263810: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x263810u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x263814: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x263814u;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x263818: 0xc0d1d7e  jal         func_3475F8
    ctx->pc = 0x263818u;
    SET_GPR_U32(ctx, 31, 0x263820u);
    ctx->pc = 0x26381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263818u;
    // 0x26381c: 0x46006c06  mov.s       $f16, $f13 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3475F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3475F8u, 0x263818u, 0x263820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263820u;
label_263820:
    // 0x263820: 0x8e240234  lw          $a0, 0x234($s1)
    ctx->pc = 0x263820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x263824: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x263824u;
    {
        const bool branch_taken_0x263824 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x263828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263824u;
        // 0x263828: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263824) {
            ctx->pc = 0x26386Cu;
            goto label_26386c;
        }
    }
    ctx->pc = 0x26382Cu;
    // 0x26382c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x26382cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x263830: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x263830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x263834: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x263834u;
    {
        const bool branch_taken_0x263834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263834) {
            ctx->pc = 0x26386Cu;
            goto label_26386c;
        }
    }
    ctx->pc = 0x26383Cu;
    // 0x26383c: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x26383Cu;
    {
        const bool branch_taken_0x26383c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x263840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26383Cu;
        // 0x263840: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26383c) {
            ctx->pc = 0x26385Cu;
            goto label_26385c;
        }
    }
    ctx->pc = 0x263844u;
    // 0x263844: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x263844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x263848: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x263848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x26384c: 0xc0466b6  jal         func_119AD8
    ctx->pc = 0x26384Cu;
    SET_GPR_U32(ctx, 31, 0x263854u);
    ctx->pc = 0x263850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26384Cu;
    // 0x263850: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119AD8u, 0x26384Cu, 0x263854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263854u;
label_263854:
    // 0x263854: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x263854u;
    {
        const bool branch_taken_0x263854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263854) {
            ctx->pc = 0x26386Cu;
            goto label_26386c;
        }
    }
    ctx->pc = 0x26385Cu;
label_26385c:
    // 0x26385c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x26385cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x263860: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x263860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x263864: 0xc0466b6  jal         func_119AD8
    ctx->pc = 0x263864u;
    SET_GPR_U32(ctx, 31, 0x26386Cu);
    ctx->pc = 0x263868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263864u;
    // 0x263868: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119AD8u, 0x263864u, 0x26386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26386Cu;
label_26386c:
    // 0x26386c: 0xc0d438a  jal         func_350E28
    ctx->pc = 0x26386Cu;
    SET_GPR_U32(ctx, 31, 0x263874u);
    ctx->pc = 0x263870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26386Cu;
    // 0x263870: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350E28u, 0x26386Cu, 0x263874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263874u;
label_263874:
    // 0x263874: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x263874u;
    {
        const bool branch_taken_0x263874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263874) {
            ctx->pc = 0x26388Cu;
            goto label_26388c;
        }
    }
    ctx->pc = 0x26387Cu;
    // 0x26387c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26387Cu;
    {
        const bool branch_taken_0x26387c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x263880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26387Cu;
        // 0x263880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26387c) {
            ctx->pc = 0x26388Cu;
            goto label_26388c;
        }
    }
    ctx->pc = 0x263884u;
    // 0x263884: 0xc0d1e40  jal         func_347900
    ctx->pc = 0x263884u;
    SET_GPR_U32(ctx, 31, 0x26388Cu);
    ctx->pc = 0x263888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x263884u;
    // 0x263888: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347900u, 0x263884u, 0x26388Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26388Cu;
label_26388c:
    // 0x26388c: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26388Cu;
    {
        const bool branch_taken_0x26388c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x26388c) {
            ctx->pc = 0x263890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26388Cu;
            // 0x263890: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263894u;
            goto label_263894;
        }
    }
    ctx->pc = 0x263894u;
label_263894:
    // 0x263894: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x263894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263898: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x263898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26389c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x26389cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2638a0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2638a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2638a4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2638a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2638a8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2638a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2638ac: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2638acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2638b0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2638b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2638b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2638B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2638B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638B4u;
        // 0x2638b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2638B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2638BCu;
    // 0x2638bc: 0x0  nop
    ctx->pc = 0x2638bcu;
    // NOP
    ctx->pc = 0x2638c0u;
}
