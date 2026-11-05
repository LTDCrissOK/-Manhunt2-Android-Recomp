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

// Function: sub_002388E8
// Address: 0x2388e8 - 0x238ad0
void sub_002388E8_0x2388e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002388E8_0x2388e8");
#endif

    switch (ctx->pc) {
        case 0x2388e8u: goto label_2388e8;
        case 0x2388ecu: goto label_2388ec;
        case 0x2388f0u: goto label_2388f0;
        case 0x2388f4u: goto label_2388f4;
        case 0x2388f8u: goto label_2388f8;
        case 0x2388fcu: goto label_2388fc;
        case 0x238900u: goto label_238900;
        case 0x238904u: goto label_238904;
        case 0x238908u: goto label_238908;
        case 0x23890cu: goto label_23890c;
        case 0x238910u: goto label_238910;
        case 0x238914u: goto label_238914;
        case 0x238918u: goto label_238918;
        case 0x23891cu: goto label_23891c;
        case 0x238920u: goto label_238920;
        case 0x238924u: goto label_238924;
        case 0x238928u: goto label_238928;
        case 0x23892cu: goto label_23892c;
        case 0x238930u: goto label_238930;
        case 0x238934u: goto label_238934;
        case 0x238938u: goto label_238938;
        case 0x23893cu: goto label_23893c;
        case 0x238940u: goto label_238940;
        case 0x238944u: goto label_238944;
        case 0x238948u: goto label_238948;
        case 0x23894cu: goto label_23894c;
        case 0x238950u: goto label_238950;
        case 0x238954u: goto label_238954;
        case 0x238958u: goto label_238958;
        case 0x23895cu: goto label_23895c;
        case 0x238960u: goto label_238960;
        case 0x238964u: goto label_238964;
        case 0x238968u: goto label_238968;
        case 0x23896cu: goto label_23896c;
        case 0x238970u: goto label_238970;
        case 0x238974u: goto label_238974;
        case 0x238978u: goto label_238978;
        case 0x23897cu: goto label_23897c;
        case 0x238980u: goto label_238980;
        case 0x238984u: goto label_238984;
        case 0x238988u: goto label_238988;
        case 0x23898cu: goto label_23898c;
        case 0x238990u: goto label_238990;
        case 0x238994u: goto label_238994;
        case 0x238998u: goto label_238998;
        case 0x23899cu: goto label_23899c;
        case 0x2389a0u: goto label_2389a0;
        case 0x2389a4u: goto label_2389a4;
        case 0x2389a8u: goto label_2389a8;
        case 0x2389acu: goto label_2389ac;
        case 0x2389b0u: goto label_2389b0;
        case 0x2389b4u: goto label_2389b4;
        case 0x2389b8u: goto label_2389b8;
        case 0x2389bcu: goto label_2389bc;
        case 0x2389c0u: goto label_2389c0;
        case 0x2389c4u: goto label_2389c4;
        case 0x2389c8u: goto label_2389c8;
        case 0x2389ccu: goto label_2389cc;
        case 0x2389d0u: goto label_2389d0;
        case 0x2389d4u: goto label_2389d4;
        case 0x2389d8u: goto label_2389d8;
        case 0x2389dcu: goto label_2389dc;
        case 0x2389e0u: goto label_2389e0;
        case 0x2389e4u: goto label_2389e4;
        case 0x2389e8u: goto label_2389e8;
        case 0x2389ecu: goto label_2389ec;
        case 0x2389f0u: goto label_2389f0;
        case 0x2389f4u: goto label_2389f4;
        case 0x2389f8u: goto label_2389f8;
        case 0x2389fcu: goto label_2389fc;
        case 0x238a00u: goto label_238a00;
        case 0x238a04u: goto label_238a04;
        case 0x238a08u: goto label_238a08;
        case 0x238a0cu: goto label_238a0c;
        case 0x238a10u: goto label_238a10;
        case 0x238a14u: goto label_238a14;
        case 0x238a18u: goto label_238a18;
        case 0x238a1cu: goto label_238a1c;
        case 0x238a20u: goto label_238a20;
        case 0x238a24u: goto label_238a24;
        case 0x238a28u: goto label_238a28;
        case 0x238a2cu: goto label_238a2c;
        case 0x238a30u: goto label_238a30;
        case 0x238a34u: goto label_238a34;
        case 0x238a38u: goto label_238a38;
        case 0x238a3cu: goto label_238a3c;
        case 0x238a40u: goto label_238a40;
        case 0x238a44u: goto label_238a44;
        case 0x238a48u: goto label_238a48;
        case 0x238a4cu: goto label_238a4c;
        case 0x238a50u: goto label_238a50;
        case 0x238a54u: goto label_238a54;
        case 0x238a58u: goto label_238a58;
        case 0x238a5cu: goto label_238a5c;
        case 0x238a60u: goto label_238a60;
        case 0x238a64u: goto label_238a64;
        case 0x238a68u: goto label_238a68;
        case 0x238a6cu: goto label_238a6c;
        case 0x238a70u: goto label_238a70;
        case 0x238a74u: goto label_238a74;
        case 0x238a78u: goto label_238a78;
        case 0x238a7cu: goto label_238a7c;
        case 0x238a80u: goto label_238a80;
        case 0x238a84u: goto label_238a84;
        case 0x238a88u: goto label_238a88;
        case 0x238a8cu: goto label_238a8c;
        case 0x238a90u: goto label_238a90;
        case 0x238a94u: goto label_238a94;
        case 0x238a98u: goto label_238a98;
        case 0x238a9cu: goto label_238a9c;
        case 0x238aa0u: goto label_238aa0;
        case 0x238aa4u: goto label_238aa4;
        case 0x238aa8u: goto label_238aa8;
        case 0x238aacu: goto label_238aac;
        case 0x238ab0u: goto label_238ab0;
        case 0x238ab4u: goto label_238ab4;
        case 0x238ab8u: goto label_238ab8;
        case 0x238abcu: goto label_238abc;
        case 0x238ac0u: goto label_238ac0;
        case 0x238ac4u: goto label_238ac4;
        case 0x238ac8u: goto label_238ac8;
        case 0x238accu: goto label_238acc;
        default: break;
    }

    ctx->pc = 0x2388e8u;

label_2388e8:
    // 0x2388e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2388e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2388ec:
    // 0x2388ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2388ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2388f0:
    // 0x2388f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2388f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2388f4:
    // 0x2388f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2388f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2388f8:
    // 0x2388f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2388f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2388fc:
    // 0x2388fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2388fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_238900:
    // 0x238900: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x238900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_238904:
    // 0x238904: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x238904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_238908:
    // 0x238908: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x238908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_23890c:
    // 0x23890c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x23890cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_238910:
    // 0x238910: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x238910u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_238914:
    // 0x238914: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x238914u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_238918:
    // 0x238918: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x238918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_23891c:
    // 0x23891c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x23891cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_238920:
    // 0x238920: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_238924:
    if (ctx->pc == 0x238924u) {
        ctx->pc = 0x238924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238920u;
        // 0x238924: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238928u;
        goto label_238928;
    }
    ctx->pc = 0x238920u;
    {
        const bool branch_taken_0x238920 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x238924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238920u;
        // 0x238924: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238920) {
            ctx->pc = 0x238930u;
            goto label_238930;
        }
    }
    ctx->pc = 0x238928u;
label_238928:
    // 0x238928: 0xc08e528  jal         func_2394A0
label_23892c:
    if (ctx->pc == 0x23892Cu) {
        ctx->pc = 0x238930u;
        goto label_238930;
    }
    ctx->pc = 0x238928u;
    SET_GPR_U32(ctx, 31, 0x238930u);
    ctx->pc = 0x2394A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2394A0u, 0x238928u, 0x238930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238930u;
label_238930:
    // 0x238930: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x238930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_238934:
    // 0x238934: 0xc08e3b2  jal         func_238EC8
label_238938:
    if (ctx->pc == 0x238938u) {
        ctx->pc = 0x238938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238934u;
        // 0x238938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23893Cu;
        goto label_23893c;
    }
    ctx->pc = 0x238934u;
    SET_GPR_U32(ctx, 31, 0x23893Cu);
    ctx->pc = 0x238938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238934u;
    // 0x238938: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x238934u, 0x23893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23893Cu;
label_23893c:
    // 0x23893c: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x23893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_238940:
    // 0x238940: 0x8e660470  lw          $a2, 0x470($s3)
    ctx->pc = 0x238940u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1136)));
label_238944:
    // 0x238944: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x238944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_238948:
    // 0x238948: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x238948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_23894c:
    // 0x23894c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23894cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_238950:
    // 0x238950: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x238950u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_238954:
    // 0x238954: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x238954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_238958:
    // 0x238958: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x238958u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_23895c:
    // 0x23895c: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x23895cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_238960:
    // 0x238960: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x238960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
label_238964:
    // 0x238964: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x238964u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_238968:
    // 0x238968: 0xf8c10020  sqc2        $vf1, 0x20($a2)
    ctx->pc = 0x238968u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_23896c:
    // 0x23896c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x23896cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_238970:
    // 0x238970: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x238970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_238974:
    // 0x238974: 0xf8c10030  sqc2        $vf1, 0x30($a2)
    ctx->pc = 0x238974u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_238978:
    // 0x238978: 0x8e650474  lw          $a1, 0x474($s3)
    ctx->pc = 0x238978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1140)));
label_23897c:
    // 0x23897c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x23897cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_238980:
    // 0x238980: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x238980u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_238984:
    // 0x238984: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x238984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_238988:
    // 0x238988: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x238988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23898c:
    // 0x23898c: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x23898cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_238990:
    // 0x238990: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x238990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_238994:
    // 0x238994: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x238994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_238998:
    // 0x238998: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x238998u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_23899c:
    // 0x23899c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x23899cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2389a0:
    // 0x2389a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2389a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2389a4:
    // 0x2389a4: 0xf8a10030  sqc2        $vf1, 0x30($a1)
    ctx->pc = 0x2389a4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2389a8:
    // 0x2389a8: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x2389a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_2389ac:
    // 0x2389ac: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x2389acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_2389b0:
    // 0x2389b0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_2389b4:
    if (ctx->pc == 0x2389B4u) {
        ctx->pc = 0x2389B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389B0u;
        // 0x2389b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389B8u;
        goto label_2389b8;
    }
    ctx->pc = 0x2389B0u;
    {
        const bool branch_taken_0x2389b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2389B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389B0u;
        // 0x2389b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389b0) {
            ctx->pc = 0x238A10u;
            goto label_238a10;
        }
    }
    ctx->pc = 0x2389B8u;
label_2389b8:
    // 0x2389b8: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_2389bc:
    if (ctx->pc == 0x2389BCu) {
        ctx->pc = 0x2389BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389B8u;
        // 0x2389bc: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389C0u;
        goto label_2389c0;
    }
    ctx->pc = 0x2389B8u;
    {
        const bool branch_taken_0x2389b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2389b8) {
            ctx->pc = 0x2389BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2389B8u;
            // 0x2389bc: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2389D4u;
            goto label_2389d4;
        }
    }
    ctx->pc = 0x2389C0u;
label_2389c0:
    // 0x2389c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2389c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2389c4:
    // 0x2389c4: 0xc08e0fa  jal         func_2383E8
label_2389c8:
    if (ctx->pc == 0x2389C8u) {
        ctx->pc = 0x2389C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389C4u;
        // 0x2389c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389CCu;
        goto label_2389cc;
    }
    ctx->pc = 0x2389C4u;
    SET_GPR_U32(ctx, 31, 0x2389CCu);
    ctx->pc = 0x2389C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389C4u;
    // 0x2389c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E8u, 0x2389C4u, 0x2389CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389CCu;
label_2389cc:
    // 0x2389cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2389d0:
    if (ctx->pc == 0x2389D0u) {
        ctx->pc = 0x2389D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389CCu;
        // 0x2389d0: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389D4u;
        goto label_2389d4;
    }
    ctx->pc = 0x2389CCu;
    {
        const bool branch_taken_0x2389cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2389D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389CCu;
        // 0x2389d0: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389cc) {
            ctx->pc = 0x2389ECu;
            goto label_2389ec;
        }
    }
    ctx->pc = 0x2389D4u;
label_2389d4:
    // 0x2389d4: 0xc0763f2  jal         func_1D8FC8
label_2389d8:
    if (ctx->pc == 0x2389D8u) {
        ctx->pc = 0x2389D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389D4u;
        // 0x2389d8: 0x8e650474  lw          $a1, 0x474($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389DCu;
        goto label_2389dc;
    }
    ctx->pc = 0x2389D4u;
    SET_GPR_U32(ctx, 31, 0x2389DCu);
    ctx->pc = 0x2389D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389D4u;
    // 0x2389d8: 0x8e650474  lw          $a1, 0x474($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x2389D4u, 0x2389DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389DCu;
label_2389dc:
    // 0x2389dc: 0xc0767f2  jal         func_1D9FC8
label_2389e0:
    if (ctx->pc == 0x2389E0u) {
        ctx->pc = 0x2389E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389DCu;
        // 0x2389e0: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389E4u;
        goto label_2389e4;
    }
    ctx->pc = 0x2389DCu;
    SET_GPR_U32(ctx, 31, 0x2389E4u);
    ctx->pc = 0x2389E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389DCu;
    // 0x2389e0: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2389DCu, 0x2389E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389E4u;
label_2389e4:
    // 0x2389e4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2389e8:
    if (ctx->pc == 0x2389E8u) {
        ctx->pc = 0x2389ECu;
        goto label_2389ec;
    }
    ctx->pc = 0x2389E4u;
    {
        const bool branch_taken_0x2389e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2389e4) {
            ctx->pc = 0x2389FCu;
            goto label_2389fc;
        }
    }
    ctx->pc = 0x2389ECu;
label_2389ec:
    // 0x2389ec: 0xc0763f2  jal         func_1D8FC8
label_2389f0:
    if (ctx->pc == 0x2389F0u) {
        ctx->pc = 0x2389F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389ECu;
        // 0x2389f0: 0x8e650470  lw          $a1, 0x470($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389F4u;
        goto label_2389f4;
    }
    ctx->pc = 0x2389ECu;
    SET_GPR_U32(ctx, 31, 0x2389F4u);
    ctx->pc = 0x2389F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389ECu;
    // 0x2389f0: 0x8e650470  lw          $a1, 0x470($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x2389ECu, 0x2389F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389F4u;
label_2389f4:
    // 0x2389f4: 0xc0767f2  jal         func_1D9FC8
label_2389f8:
    if (ctx->pc == 0x2389F8u) {
        ctx->pc = 0x2389F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389F4u;
        // 0x2389f8: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2389FCu;
        goto label_2389fc;
    }
    ctx->pc = 0x2389F4u;
    SET_GPR_U32(ctx, 31, 0x2389FCu);
    ctx->pc = 0x2389F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2389F4u;
    // 0x2389f8: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2389F4u, 0x2389FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2389FCu;
label_2389fc:
    // 0x2389fc: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_238a00:
    if (ctx->pc == 0x238A00u) {
        ctx->pc = 0x238A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389FCu;
        // 0x238a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238A04u;
        goto label_238a04;
    }
    ctx->pc = 0x2389FCu;
    {
        const bool branch_taken_0x2389fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x238A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2389FCu;
        // 0x238a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2389fc) {
            ctx->pc = 0x238A0Cu;
            goto label_238a0c;
        }
    }
    ctx->pc = 0x238A04u;
label_238a04:
    // 0x238a04: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x238a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_238a08:
    // 0x238a08: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x238a08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_238a0c:
    // 0x238a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_238a10:
    // 0x238a10: 0x26720440  addiu       $s2, $s3, 0x440
    ctx->pc = 0x238a10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
label_238a14:
    // 0x238a14: 0x8e650470  lw          $a1, 0x470($s3)
    ctx->pc = 0x238a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1136)));
label_238a18:
    // 0x238a18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x238a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_238a1c:
    // 0x238a1c: 0xe6740438  swc1        $f20, 0x438($s3)
    ctx->pc = 0x238a1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1080), bits); }
label_238a20:
    // 0x238a20: 0x26710450  addiu       $s1, $s3, 0x450
    ctx->pc = 0x238a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1104));
label_238a24:
    // 0x238a24: 0xae62042c  sw          $v0, 0x42C($s3)
    ctx->pc = 0x238a24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1068), GPR_U32(ctx, 2));
label_238a28:
    // 0x238a28: 0xc0b189c  jal         func_2C6270
label_238a2c:
    if (ctx->pc == 0x238A2Cu) {
        ctx->pc = 0x238A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A28u;
        // 0x238a2c: 0x8e700474  lw          $s0, 0x474($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238A30u;
        goto label_238a30;
    }
    ctx->pc = 0x238A28u;
    SET_GPR_U32(ctx, 31, 0x238A30u);
    ctx->pc = 0x238A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A28u;
    // 0x238a2c: 0x8e700474  lw          $s0, 0x474($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x238A28u, 0x238A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A30u;
label_238a30:
    // 0x238a30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_238a34:
    // 0x238a34: 0xc0b189c  jal         func_2C6270
label_238a38:
    if (ctx->pc == 0x238A38u) {
        ctx->pc = 0x238A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A34u;
        // 0x238a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238A3Cu;
        goto label_238a3c;
    }
    ctx->pc = 0x238A34u;
    SET_GPR_U32(ctx, 31, 0x238A3Cu);
    ctx->pc = 0x238A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A34u;
    // 0x238a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x238A34u, 0x238A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A3Cu;
label_238a3c:
    // 0x238a3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x238a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_238a40:
    // 0x238a40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x238a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_238a44:
    // 0x238a44: 0xc0b19e2  jal         func_2C6788
label_238a48:
    if (ctx->pc == 0x238A48u) {
        ctx->pc = 0x238A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A44u;
        // 0x238a48: 0x26660460  addiu       $a2, $s3, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238A4Cu;
        goto label_238a4c;
    }
    ctx->pc = 0x238A44u;
    SET_GPR_U32(ctx, 31, 0x238A4Cu);
    ctx->pc = 0x238A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A44u;
    // 0x238a48: 0x26660460  addiu       $a2, $s3, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6788u, 0x238A44u, 0x238A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A4Cu;
label_238a4c:
    // 0x238a4c: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_238a50:
    if (ctx->pc == 0x238A50u) {
        ctx->pc = 0x238A54u;
        goto label_238a54;
    }
    ctx->pc = 0x238A4Cu;
    {
        const bool branch_taken_0x238a4c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x238a4c) {
            ctx->pc = 0x238A7Cu;
            goto label_238a7c;
        }
    }
    ctx->pc = 0x238A54u;
label_238a54:
    // 0x238a54: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x238a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_238a58:
    // 0x238a58: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x238a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_238a5c:
    // 0x238a5c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x238a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_238a60:
    // 0x238a60: 0x40f809  jalr        $v0
label_238a64:
    if (ctx->pc == 0x238A64u) {
        ctx->pc = 0x238A68u;
        goto label_238a68;
    }
    ctx->pc = 0x238A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238A68u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238A60u, 0x238A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238A68u;
label_238a68:
    // 0x238a68: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x238a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_238a6c:
    // 0x238a6c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x238a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_238a70:
    // 0x238a70: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x238a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_238a74:
    // 0x238a74: 0x40f809  jalr        $v0
label_238a78:
    if (ctx->pc == 0x238A78u) {
        ctx->pc = 0x238A7Cu;
        goto label_238a7c;
    }
    ctx->pc = 0x238A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238A7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238A74u, 0x238A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238A7Cu;
label_238a7c:
    // 0x238a7c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_238a80:
    if (ctx->pc == 0x238A80u) {
        ctx->pc = 0x238A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A7Cu;
        // 0x238a80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238A84u;
        goto label_238a84;
    }
    ctx->pc = 0x238A7Cu;
    {
        const bool branch_taken_0x238a7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x238A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A7Cu;
        // 0x238a80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a7c) {
            ctx->pc = 0x238AA0u;
            goto label_238aa0;
        }
    }
    ctx->pc = 0x238A84u;
label_238a84:
    // 0x238a84: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x238a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
label_238a88:
    // 0x238a88: 0x3421be77  ori         $at, $at, 0xBE77
    ctx->pc = 0x238a88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48759);
label_238a8c:
    // 0x238a8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x238a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238a90:
    // 0x238a90: 0xc08e2b4  jal         func_238AD0
label_238a94:
    if (ctx->pc == 0x238A94u) {
        ctx->pc = 0x238A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A90u;
        // 0x238a94: 0xe6600434  swc1        $f0, 0x434($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1076), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x238A98u;
        goto label_238a98;
    }
    ctx->pc = 0x238A90u;
    SET_GPR_U32(ctx, 31, 0x238A98u);
    ctx->pc = 0x238A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238A90u;
    // 0x238a94: 0xe6600434  swc1        $f0, 0x434($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1076), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x238AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238AD0u, 0x238A90u, 0x238A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238A98u;
label_238a98:
    // 0x238a98: 0x10000003  b           . + 4 + (0x3 << 2)
label_238a9c:
    if (ctx->pc == 0x238A9Cu) {
        ctx->pc = 0x238A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A98u;
        // 0x238a9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238AA0u;
        goto label_238aa0;
    }
    ctx->pc = 0x238A98u;
    {
        const bool branch_taken_0x238a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238A98u;
        // 0x238a9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238a98) {
            ctx->pc = 0x238AA8u;
            goto label_238aa8;
        }
    }
    ctx->pc = 0x238AA0u;
label_238aa0:
    // 0x238aa0: 0xae600434  sw          $zero, 0x434($s3)
    ctx->pc = 0x238aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1076), GPR_U32(ctx, 0));
label_238aa4:
    // 0x238aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x238aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_238aa8:
    // 0x238aa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x238aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_238aac:
    // 0x238aac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x238aacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238ab0:
    // 0x238ab0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x238ab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_238ab4:
    // 0x238ab4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x238ab4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_238ab8:
    // 0x238ab8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x238ab8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_238abc:
    // 0x238abc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x238abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_238ac0:
    // 0x238ac0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x238ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_238ac4:
    // 0x238ac4: 0x3e00008  jr          $ra
label_238ac8:
    if (ctx->pc == 0x238AC8u) {
        ctx->pc = 0x238AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AC4u;
        // 0x238ac8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x238ACCu;
        goto label_238acc;
    }
    ctx->pc = 0x238AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238AC4u;
        // 0x238ac8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238ACCu;
label_238acc:
    // 0x238acc: 0x0  nop
    ctx->pc = 0x238accu;
    // NOP
    ctx->pc = 0x238ad0u;
}
