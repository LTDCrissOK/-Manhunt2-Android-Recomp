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

// Function: sub_001CDAC0
// Address: 0x1cdac0 - 0x1ce0b0
void sub_001CDAC0_0x1cdac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDAC0_0x1cdac0");
#endif

    switch (ctx->pc) {
        case 0x1cdb00u: goto label_1cdb00;
        case 0x1cdb14u: goto label_1cdb14;
        case 0x1cdb6cu: goto label_1cdb6c;
        case 0x1cdbe0u: goto label_1cdbe0;
        case 0x1cdc00u: goto label_1cdc00;
        case 0x1cdc08u: goto label_1cdc08;
        case 0x1cdca4u: goto label_1cdca4;
        case 0x1cdcd8u: goto label_1cdcd8;
        case 0x1cde90u: goto label_1cde90;
        case 0x1cdf04u: goto label_1cdf04;
        case 0x1cdf14u: goto label_1cdf14;
        case 0x1cdf1cu: goto label_1cdf1c;
        case 0x1cdf24u: goto label_1cdf24;
        case 0x1cdf2cu: goto label_1cdf2c;
        case 0x1cdf54u: goto label_1cdf54;
        case 0x1cdf60u: goto label_1cdf60;
        case 0x1cdf74u: goto label_1cdf74;
        case 0x1cdf7cu: goto label_1cdf7c;
        case 0x1cdf84u: goto label_1cdf84;
        case 0x1cdf90u: goto label_1cdf90;
        case 0x1cdfa4u: goto label_1cdfa4;
        case 0x1cdfbcu: goto label_1cdfbc;
        case 0x1cdfc4u: goto label_1cdfc4;
        case 0x1cdfccu: goto label_1cdfcc;
        case 0x1cdfd8u: goto label_1cdfd8;
        case 0x1cdfecu: goto label_1cdfec;
        case 0x1ce000u: goto label_1ce000;
        case 0x1ce008u: goto label_1ce008;
        case 0x1ce010u: goto label_1ce010;
        case 0x1ce01cu: goto label_1ce01c;
        case 0x1ce034u: goto label_1ce034;
        case 0x1ce04cu: goto label_1ce04c;
        case 0x1ce054u: goto label_1ce054;
        case 0x1ce05cu: goto label_1ce05c;
        case 0x1ce068u: goto label_1ce068;
        default: break;
    }

    ctx->pc = 0x1cdac0u;

    // 0x1cdac0: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1cdac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
    // 0x1cdac4: 0xffb20230  sd          $s2, 0x230($sp)
    ctx->pc = 0x1cdac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 18));
    // 0x1cdac8: 0xffb40240  sd          $s4, 0x240($sp)
    ctx->pc = 0x1cdac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 20));
    // 0x1cdacc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cdaccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdad0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1cdad0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdad4: 0xffb00220  sd          $s0, 0x220($sp)
    ctx->pc = 0x1cdad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 16));
    // 0x1cdad8: 0xffb10228  sd          $s1, 0x228($sp)
    ctx->pc = 0x1cdad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 17));
    // 0x1cdadc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cdadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdae0: 0xffb30238  sd          $s3, 0x238($sp)
    ctx->pc = 0x1cdae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 19));
    // 0x1cdae4: 0xffb50248  sd          $s5, 0x248($sp)
    ctx->pc = 0x1cdae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 21));
    // 0x1cdae8: 0xffb60250  sd          $s6, 0x250($sp)
    ctx->pc = 0x1cdae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 592), GPR_U64(ctx, 22));
    // 0x1cdaec: 0xffb70258  sd          $s7, 0x258($sp)
    ctx->pc = 0x1cdaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 600), GPR_U64(ctx, 23));
    // 0x1cdaf0: 0xffbe0260  sd          $fp, 0x260($sp)
    ctx->pc = 0x1cdaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 30));
    // 0x1cdaf4: 0xffbf0268  sd          $ra, 0x268($sp)
    ctx->pc = 0x1cdaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 31));
    // 0x1cdaf8: 0xc073a7c  jal         func_1CE9F0
    ctx->pc = 0x1CDAF8u;
    SET_GPR_U32(ctx, 31, 0x1CDB00u);
    ctx->pc = 0x1CDAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAF8u;
    // 0x1cdafc: 0xe7b40270  swc1        $f20, 0x270($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE9F0u, 0x1CDAF8u, 0x1CDB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB00u;
label_1cdb00:
    // 0x1cdb00: 0x1040015d  beqz        $v0, . + 4 + (0x15D << 2)
    ctx->pc = 0x1CDB00u;
    {
        const bool branch_taken_0x1cdb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB00u;
        // 0x1cdb04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb00) {
            ctx->pc = 0x1CE078u;
            goto label_1ce078;
        }
    }
    ctx->pc = 0x1CDB08u;
    // 0x1cdb08: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cdb08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cdb0c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1CDB0Cu;
    SET_GPR_U32(ctx, 31, 0x1CDB14u);
    ctx->pc = 0x1CDB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB0Cu;
    // 0x1cdb10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1CDB0Cu, 0x1CDB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB14u;
label_1cdb14:
    // 0x1cdb14: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x1cdb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x1cdb18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cdb18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cdb1c: 0x8c450274  lw          $a1, 0x274($v0)
    ctx->pc = 0x1cdb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    // 0x1cdb20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cdb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cdb24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cdb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cdb28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cdb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb2c: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x1cdb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x1cdb30: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cdb30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cdb34: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cdb34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cdb38: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1cdb38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdb3c: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x1cdb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb40: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1cdb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1cdb44: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1cdb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1cdb48: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1cdb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdb4c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1cdb4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cdb50: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cdb50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1cdb54: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cdb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb58: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1cdb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cdb5c: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x1cdb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdb60: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1cdb60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1cdb64: 0xc0d92c8  jal         func_364B20
    ctx->pc = 0x1CDB64u;
    SET_GPR_U32(ctx, 31, 0x1CDB6Cu);
    ctx->pc = 0x1CDB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB64u;
    // 0x1cdb68: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x364B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364B20u, 0x1CDB64u, 0x1CDB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB6Cu;
label_1cdb6c:
    // 0x1cdb6c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1cdb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1cdb70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cdb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cdb74: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1cdb74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cdb78: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x1cdb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cdb7c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1cdb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdb80: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x1cdb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cdb84: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1cdb84u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1cdb88: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1cdb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdb8c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1cdb8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1cdb90: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1cdb90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1cdb94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cdb94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1cdb98: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x1cdb98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1cdb9c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1cdb9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1cdba0: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x1cdba0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1cdba4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1cdba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1cdba8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1cdba8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdbac: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1cdbacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cdbb0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1cdbb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cdbb4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1cdbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cdbb8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x1cdbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdbbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbc0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1cdbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdbc4: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x1cdbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdbc8: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x1cdbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cdbcc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1cdbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1cdbd0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1cdbd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1cdbd4: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1cdbd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1cdbd8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CDBD8u;
    SET_GPR_U32(ctx, 31, 0x1CDBE0u);
    ctx->pc = 0x1CDBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBD8u;
    // 0x1cdbdc: 0xe7a30010  swc1        $f3, 0x10($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CDBD8u, 0x1CDBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDBE0u;
label_1cdbe0:
    // 0x1cdbe0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x1cdbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdbe4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1cdbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cdbe8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1cdbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdbec: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1cdbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdbf0: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1cdbf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1cdbf4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1cdbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1cdbf8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CDBF8u;
    SET_GPR_U32(ctx, 31, 0x1CDC00u);
    ctx->pc = 0x1CDBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBF8u;
    // 0x1cdbfc: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CDBF8u, 0x1CDC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC00u;
label_1cdc00:
    // 0x1cdc00: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CDC00u;
    SET_GPR_U32(ctx, 31, 0x1CDC08u);
    ctx->pc = 0x1CDC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC00u;
    // 0x1cdc04: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CDC00u, 0x1CDC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC08u;
label_1cdc08:
    // 0x1cdc08: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1cdc08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc0c: 0x27b50080  addiu       $s5, $sp, 0x80
    ctx->pc = 0x1cdc0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1cdc10: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x1cdc10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdc14: 0x27be0070  addiu       $fp, $sp, 0x70
    ctx->pc = 0x1cdc14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1cdc18: 0x27b70060  addiu       $s7, $sp, 0x60
    ctx->pc = 0x1cdc18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1cdc1c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x1cdc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x1cdc20: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x1cdc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x1cdc24: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x1cdc24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1cdc28: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1cdc28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1cdc2c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1cdc2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cdc30: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1cdc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cdc34: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1cdc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdc38: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x1cdc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cdc3c: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x1cdc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cdc40: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1cdc40u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1cdc44: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1cdc44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1cdc48: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1cdc48u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1cdc4c: 0x0  nop
    ctx->pc = 0x1cdc4cu;
    // NOP
    // 0x1cdc50: 0x0  nop
    ctx->pc = 0x1cdc50u;
    // NOP
    // 0x1cdc54: 0x46000044  c1          0x44
    ctx->pc = 0x1cdc54u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cdc58: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1cdc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1cdc5c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1cdc5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cdc60: 0x0  nop
    ctx->pc = 0x1cdc60u;
    // NOP
    // 0x1cdc64: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1CDC64u;
    {
        const bool branch_taken_0x1cdc64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC64u;
        // 0x1cdc68: 0xe7a100a0  swc1        $f1, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc64) {
            ctx->pc = 0x1CDC90u;
            goto label_1cdc90;
        }
    }
    ctx->pc = 0x1CDC6Cu;
    // 0x1cdc6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cdc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cdc70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cdc70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cdc74: 0x0  nop
    ctx->pc = 0x1cdc74u;
    // NOP
    // 0x1cdc78: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cdc78u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1cdc7c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cdc7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1cdc80: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1cdc80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1cdc84: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cdc84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cdc88: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1cdc88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cdc8c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1cdc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_1cdc90:
    // 0x1cdc90: 0x27b100b0  addiu       $s1, $sp, 0xB0
    ctx->pc = 0x1cdc90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1cdc94: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x1cdc94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x1cdc98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc9c: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1CDC9Cu;
    SET_GPR_U32(ctx, 31, 0x1CDCA4u);
    ctx->pc = 0x1CDCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC9Cu;
    // 0x1cdca0: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1CDC9Cu, 0x1CDCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCA4u;
label_1cdca4:
    // 0x1cdca4: 0xc600d224  lwc1        $f0, -0x2DDC($s0)
    ctx->pc = 0x1cdca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294955556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdca8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1cdca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1cdcac: 0x27a90210  addiu       $t1, $sp, 0x210
    ctx->pc = 0x1cdcacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1cdcb0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1cdcb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcb4: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x1cdcb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcb8: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x1cdcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x1cdcbc: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x1cdcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x1cdcc0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cdcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdcc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdcc8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1cdcc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdccc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cdcccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcd0: 0xc077940  jal         func_1DE500
    ctx->pc = 0x1CDCD0u;
    SET_GPR_U32(ctx, 31, 0x1CDCD8u);
    ctx->pc = 0x1CDCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCD0u;
    // 0x1cdcd4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x1CDCD0u, 0x1CDCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCD8u;
label_1cdcd8:
    // 0x1cdcd8: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1CDCD8u;
    {
        const bool branch_taken_0x1cdcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCD8u;
        // 0x1cdcdc: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcd8) {
            ctx->pc = 0x1CDE84u;
            goto label_1cde84;
        }
    }
    ctx->pc = 0x1CDCE0u;
    // 0x1cdce0: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x1cdce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x1cdce4: 0x8e84004c  lw          $a0, 0x4C($s4)
    ctx->pc = 0x1cdce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1cdce8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cdce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cdcec: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x1cdcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdcf0: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x1cdcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdcf4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1cdcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1cdcf8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1cdcf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1cdcfc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cdcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdd00: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1cdd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1cdd04: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1cdd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdd08: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1cdd08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1cdd0c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1cdd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdd10: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1cdd10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1cdd14: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cdd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1cdd18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cdd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cdd1c: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x1cdd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x1cdd20: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1cdd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cdd24: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1cdd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cdd28: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x1cdd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdd2c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x1cdd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1cdd30: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x1cdd30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1cdd34: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1cdd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdd38: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1cdd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1cdd3c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1cdd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdd40: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x1cdd40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1cdd44: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1cdd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdd48: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x1cdd48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1cdd4c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1cdd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1cdd50: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1cdd50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cdd54: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1cdd54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cdd58: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1cdd58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cdd5c: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1cdd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cdd60: 0xc7a30130  lwc1        $f3, 0x130($sp)
    ctx->pc = 0x1cdd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cdd64: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1cdd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1cdd68: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x1cdd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdd6c: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x1cdd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdd70: 0xc7a2013c  lwc1        $f2, 0x13C($sp)
    ctx->pc = 0x1cdd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdd74: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x1cdd74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x1cdd78: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x1cdd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x1cdd7c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x1cdd7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x1cdd80: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x1cdd80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x1cdd84: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1cdd84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdd88: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1cdd88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cdd8c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1cdd8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cdd90: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1cdd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cdd94: 0xc7a20140  lwc1        $f2, 0x140($sp)
    ctx->pc = 0x1cdd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cdd98: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1cdd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1cdd9c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x1cdd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdda0: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x1cdda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cdda4: 0xc7a5014c  lwc1        $f5, 0x14C($sp)
    ctx->pc = 0x1cdda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1cdda8: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x1cdda8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1cddac: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x1cddacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x1cddb0: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x1cddb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1cddb4: 0xe7a5013c  swc1        $f5, 0x13C($sp)
    ctx->pc = 0x1cddb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x1cddb8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1cddb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cddbc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1cddbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cddc0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1cddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cddc4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1cddc4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1cddc8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1cddc8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1cddcc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1cddccu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1cddd0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1cddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cddd4: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x1cddd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cddd8: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x1cddd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cdddc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1cdddcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1cdde0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1cdde0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1cdde4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1cdde4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1cdde8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cdde8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cddec: 0x0  nop
    ctx->pc = 0x1cddecu;
    // NOP
    // 0x1cddf0: 0x450100a1  bc1t        . + 4 + (0xA1 << 2)
    ctx->pc = 0x1CDDF0u;
    {
        const bool branch_taken_0x1cddf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDDF0u;
        // 0x1cddf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cddf0) {
            ctx->pc = 0x1CE078u;
            goto label_1ce078;
        }
    }
    ctx->pc = 0x1CDDF8u;
    // 0x1cddf8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1cddf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cddfc: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1cddfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cde00: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1cde00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cde04: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1cde04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cde08: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x1cde08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cde0c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1cde0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1cde10: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1cde10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1cde14: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1cde14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1cde18: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x1cde18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1cde1c: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1cde1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1cde20: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1cde20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cde24: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x1cde24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cde28: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1cde28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cde2c: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x1cde2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cde30: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x1cde30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cde34: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1cde34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1cde38: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1cde38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1cde3c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1cde3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1cde40: 0x0  nop
    ctx->pc = 0x1cde40u;
    // NOP
    // 0x1cde44: 0x0  nop
    ctx->pc = 0x1cde44u;
    // NOP
    // 0x1cde48: 0x46000044  c1          0x44
    ctx->pc = 0x1cde48u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cde4c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1cde4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1cde50: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1cde50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cde54: 0x0  nop
    ctx->pc = 0x1cde54u;
    // NOP
    // 0x1cde58: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1CDE58u;
    {
        const bool branch_taken_0x1cde58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CDE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE58u;
        // 0x1cde5c: 0xe7a100a0  swc1        $f1, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde58) {
            ctx->pc = 0x1CDE84u;
            goto label_1cde84;
        }
    }
    ctx->pc = 0x1CDE60u;
    // 0x1cde60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cde60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cde64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cde64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cde68: 0x0  nop
    ctx->pc = 0x1cde68u;
    // NOP
    // 0x1cde6c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cde6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1cde70: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cde70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1cde74: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1cde74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1cde78: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cde78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cde7c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1cde7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cde80: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1cde80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_1cde84:
    // 0x1cde84: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x1cde84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1cde88: 0xc07720a  jal         func_1DC828
    ctx->pc = 0x1CDE88u;
    SET_GPR_U32(ctx, 31, 0x1CDE90u);
    ctx->pc = 0x1CDE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDE88u;
    // 0x1cde8c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC828u, 0x1CDE88u, 0x1CDE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDE90u;
label_1cde90:
    // 0x1cde90: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1CDE90u;
    {
        const bool branch_taken_0x1cde90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDE90u;
        // 0x1cde94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cde90) {
            ctx->pc = 0x1CE078u;
            goto label_1ce078;
        }
    }
    ctx->pc = 0x1CDE98u;
    // 0x1cde98: 0x7fa000b0  sq          $zero, 0xB0($sp)
    ctx->pc = 0x1cde98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 0));
    // 0x1cde9c: 0x7fa000c0  sq          $zero, 0xC0($sp)
    ctx->pc = 0x1cde9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 0));
    // 0x1cdea0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1cdea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1cdea4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cdea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdea8: 0xc460d224  lwc1        $f0, -0x2DDC($v1)
    ctx->pc = 0x1cdea8u;
    { uint32_t bits = FAST_READ32(0x45D224u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdeac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1cdeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdeb0: 0xae620044  sw          $v0, 0x44($s3)
    ctx->pc = 0x1cdeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
    // 0x1cdeb4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1cdeb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdeb8: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x1cdeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x1cdebc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1cdebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdec0: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x1cdec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x1cdec4: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x1cdec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x1cdec8: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x1cdec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x1cdecc: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x1cdeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x1cded0: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x1cded0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x1cded4: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x1cded4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    // 0x1cded8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1cded8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1cdedc: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x1cdedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
    // 0x1cdee0: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1cdee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x1cdee4: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1cdee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x1cdee8: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x1cdee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
    // 0x1cdeec: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x1cdeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x1cdef0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1cdef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cdef4: 0x8c6500c4  lw          $a1, 0xC4($v1)
    ctx->pc = 0x1cdef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
    // 0x1cdef8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1cdef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1cdefc: 0xc077410  jal         func_1DD040
    ctx->pc = 0x1CDEFCu;
    SET_GPR_U32(ctx, 31, 0x1CDF04u);
    ctx->pc = 0x1CDF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDEFCu;
    // 0x1cdf00: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD040u, 0x1CDEFCu, 0x1CDF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF04u;
label_1cdf04:
    // 0x1cdf04: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1CDF04u;
    {
        const bool branch_taken_0x1cdf04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF04u;
        // 0x1cdf08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf04) {
            ctx->pc = 0x1CE078u;
            goto label_1ce078;
        }
    }
    ctx->pc = 0x1CDF0Cu;
    // 0x1cdf0c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CDF0Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF14u);
    ctx->pc = 0x1CDF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF0Cu;
    // 0x1cdf10: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CDF0Cu, 0x1CDF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF14u;
label_1cdf14:
    // 0x1cdf14: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CDF14u;
    SET_GPR_U32(ctx, 31, 0x1CDF1Cu);
    ctx->pc = 0x1CDF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF14u;
    // 0x1cdf18: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CDF14u, 0x1CDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF1Cu;
label_1cdf1c:
    // 0x1cdf1c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CDF1Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF24u);
    ctx->pc = 0x1CDF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF1Cu;
    // 0x1cdf20: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CDF1Cu, 0x1CDF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF24u;
label_1cdf24:
    // 0x1cdf24: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CDF24u;
    SET_GPR_U32(ctx, 31, 0x1CDF2Cu);
    ctx->pc = 0x1CDF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF24u;
    // 0x1cdf28: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CDF24u, 0x1CDF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF2Cu;
label_1cdf2c:
    // 0x1cdf2c: 0x27b20120  addiu       $s2, $sp, 0x120
    ctx->pc = 0x1cdf2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1cdf30: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x1cdf30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1cdf34: 0x27b30110  addiu       $s3, $sp, 0x110
    ctx->pc = 0x1cdf34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1cdf38: 0x8e840050  lw          $a0, 0x50($s4)
    ctx->pc = 0x1cdf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x1cdf3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cdf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf40: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1cdf40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cdf44: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1cdf44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf48: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1cdf48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf4c: 0xc0772ec  jal         func_1DCBB0
    ctx->pc = 0x1CDF4Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF54u);
    ctx->pc = 0x1CDF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF4Cu;
    // 0x1cdf50: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB0u, 0x1CDF4Cu, 0x1CDF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF54u;
label_1cdf54:
    // 0x1cdf54: 0x27b00150  addiu       $s0, $sp, 0x150
    ctx->pc = 0x1cdf54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x1cdf58: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CDF58u;
    SET_GPR_U32(ctx, 31, 0x1CDF60u);
    ctx->pc = 0x1CDF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF58u;
    // 0x1cdf5c: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CDF58u, 0x1CDF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF60u;
label_1cdf60:
    // 0x1cdf60: 0xafbd0154  sw          $sp, 0x154($sp)
    ctx->pc = 0x1cdf60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 29));
    // 0x1cdf64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf68: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1cdf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x1cdf6c: 0xc07a846  jal         func_1EA118
    ctx->pc = 0x1CDF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF74u);
    ctx->pc = 0x1CDF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF6Cu;
    // 0x1cdf70: 0xae12000c  sw          $s2, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA118u, 0x1CDF6Cu, 0x1CDF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF74u;
label_1cdf74:
    // 0x1cdf74: 0xc0f7508  jal         func_3DD420
    ctx->pc = 0x1CDF74u;
    SET_GPR_U32(ctx, 31, 0x1CDF7Cu);
    ctx->pc = 0x1CDF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF74u;
    // 0x1cdf78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD420u, 0x1CDF74u, 0x1CDF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF7Cu;
label_1cdf7c:
    // 0x1cdf7c: 0xc07a880  jal         func_1EA200
    ctx->pc = 0x1CDF7Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF84u);
    ctx->pc = 0x1CDF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF7Cu;
    // 0x1cdf80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA200u, 0x1CDF7Cu, 0x1CDF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF84u;
label_1cdf84:
    // 0x1cdf84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cdf84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdf88: 0xc078a1a  jal         func_1E2868
    ctx->pc = 0x1CDF88u;
    SET_GPR_U32(ctx, 31, 0x1CDF90u);
    ctx->pc = 0x1CDF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF88u;
    // 0x1cdf8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2868u, 0x1CDF88u, 0x1CDF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDF90u;
label_1cdf90:
    // 0x1cdf90: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1CDF90u;
    {
        const bool branch_taken_0x1cdf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDF90u;
        // 0x1cdf94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdf90) {
            ctx->pc = 0x1CE078u;
            goto label_1ce078;
        }
    }
    ctx->pc = 0x1CDF98u;
    // 0x1cdf98: 0x27b00180  addiu       $s0, $sp, 0x180
    ctx->pc = 0x1cdf98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1cdf9c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CDF9Cu;
    SET_GPR_U32(ctx, 31, 0x1CDFA4u);
    ctx->pc = 0x1CDFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDF9Cu;
    // 0x1cdfa0: 0x27a401a0  addiu       $a0, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CDF9Cu, 0x1CDFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFA4u;
label_1cdfa4:
    // 0x1cdfa4: 0xafbd0184  sw          $sp, 0x184($sp)
    ctx->pc = 0x1cdfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 29));
    // 0x1cdfa8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1cdfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cdfac: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1cdfacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1cdfb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfb4: 0xc07a846  jal         func_1EA118
    ctx->pc = 0x1CDFB4u;
    SET_GPR_U32(ctx, 31, 0x1CDFBCu);
    ctx->pc = 0x1CDFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFB4u;
    // 0x1cdfb8: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA118u, 0x1CDFB4u, 0x1CDFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFBCu;
label_1cdfbc:
    // 0x1cdfbc: 0xc0f7508  jal         func_3DD420
    ctx->pc = 0x1CDFBCu;
    SET_GPR_U32(ctx, 31, 0x1CDFC4u);
    ctx->pc = 0x1CDFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFBCu;
    // 0x1cdfc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD420u, 0x1CDFBCu, 0x1CDFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFC4u;
label_1cdfc4:
    // 0x1cdfc4: 0xc07a880  jal         func_1EA200
    ctx->pc = 0x1CDFC4u;
    SET_GPR_U32(ctx, 31, 0x1CDFCCu);
    ctx->pc = 0x1CDFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFC4u;
    // 0x1cdfc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA200u, 0x1CDFC4u, 0x1CDFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFCCu;
label_1cdfcc:
    // 0x1cdfcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cdfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdfd0: 0xc078a1a  jal         func_1E2868
    ctx->pc = 0x1CDFD0u;
    SET_GPR_U32(ctx, 31, 0x1CDFD8u);
    ctx->pc = 0x1CDFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFD0u;
    // 0x1cdfd4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2868u, 0x1CDFD0u, 0x1CDFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFD8u;
label_1cdfd8:
    // 0x1cdfd8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1CDFD8u;
    {
        const bool branch_taken_0x1cdfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDFD8u;
        // 0x1cdfdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdfd8) {
            ctx->pc = 0x1CE078u;
            goto label_1ce078;
        }
    }
    ctx->pc = 0x1CDFE0u;
    // 0x1cdfe0: 0x27b001b0  addiu       $s0, $sp, 0x1B0
    ctx->pc = 0x1cdfe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1cdfe4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CDFE4u;
    SET_GPR_U32(ctx, 31, 0x1CDFECu);
    ctx->pc = 0x1CDFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFE4u;
    // 0x1cdfe8: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CDFE4u, 0x1CDFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDFECu;
label_1cdfec:
    // 0x1cdfec: 0xafbd01b4  sw          $sp, 0x1B4($sp)
    ctx->pc = 0x1cdfecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 29));
    // 0x1cdff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdff4: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x1cdff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x1cdff8: 0xc07a846  jal         func_1EA118
    ctx->pc = 0x1CDFF8u;
    SET_GPR_U32(ctx, 31, 0x1CE000u);
    ctx->pc = 0x1CDFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDFF8u;
    // 0x1cdffc: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA118u, 0x1CDFF8u, 0x1CE000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE000u;
label_1ce000:
    // 0x1ce000: 0xc0f7508  jal         func_3DD420
    ctx->pc = 0x1CE000u;
    SET_GPR_U32(ctx, 31, 0x1CE008u);
    ctx->pc = 0x1CE004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE000u;
    // 0x1ce004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD420u, 0x1CE000u, 0x1CE008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE008u;
label_1ce008:
    // 0x1ce008: 0xc07a880  jal         func_1EA200
    ctx->pc = 0x1CE008u;
    SET_GPR_U32(ctx, 31, 0x1CE010u);
    ctx->pc = 0x1CE00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE008u;
    // 0x1ce00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA200u, 0x1CE008u, 0x1CE010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE010u;
label_1ce010:
    // 0x1ce010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ce010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce014: 0xc078a1a  jal         func_1E2868
    ctx->pc = 0x1CE014u;
    SET_GPR_U32(ctx, 31, 0x1CE01Cu);
    ctx->pc = 0x1CE018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE014u;
    // 0x1ce018: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2868u, 0x1CE014u, 0x1CE01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE01Cu;
label_1ce01c:
    // 0x1ce01c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE01Cu;
    {
        const bool branch_taken_0x1ce01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE01Cu;
        // 0x1ce020: 0x27b001e0  addiu       $s0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce01c) {
            ctx->pc = 0x1CE02Cu;
            goto label_1ce02c;
        }
    }
    ctx->pc = 0x1CE024u;
    // 0x1ce024: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1CE024u;
    {
        const bool branch_taken_0x1ce024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE024u;
        // 0x1ce028: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce024) {
            ctx->pc = 0x1CE078u;
            goto label_1ce078;
        }
    }
    ctx->pc = 0x1CE02Cu;
label_1ce02c:
    // 0x1ce02c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CE02Cu;
    SET_GPR_U32(ctx, 31, 0x1CE034u);
    ctx->pc = 0x1CE030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE02Cu;
    // 0x1ce030: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CE02Cu, 0x1CE034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE034u;
label_1ce034:
    // 0x1ce034: 0xafbd01e4  sw          $sp, 0x1E4($sp)
    ctx->pc = 0x1ce034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 29));
    // 0x1ce038: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x1ce038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ce03c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1ce03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1ce040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce044: 0xc07a846  jal         func_1EA118
    ctx->pc = 0x1CE044u;
    SET_GPR_U32(ctx, 31, 0x1CE04Cu);
    ctx->pc = 0x1CE048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE044u;
    // 0x1ce048: 0xae13000c  sw          $s3, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA118u, 0x1CE044u, 0x1CE04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE04Cu;
label_1ce04c:
    // 0x1ce04c: 0xc0f7508  jal         func_3DD420
    ctx->pc = 0x1CE04Cu;
    SET_GPR_U32(ctx, 31, 0x1CE054u);
    ctx->pc = 0x1CE050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE04Cu;
    // 0x1ce050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD420u, 0x1CE04Cu, 0x1CE054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE054u;
label_1ce054:
    // 0x1ce054: 0xc07a880  jal         func_1EA200
    ctx->pc = 0x1CE054u;
    SET_GPR_U32(ctx, 31, 0x1CE05Cu);
    ctx->pc = 0x1CE058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE054u;
    // 0x1ce058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA200u, 0x1CE054u, 0x1CE05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE05Cu;
label_1ce05c:
    // 0x1ce05c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ce05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce060: 0xc078a1a  jal         func_1E2868
    ctx->pc = 0x1CE060u;
    SET_GPR_U32(ctx, 31, 0x1CE068u);
    ctx->pc = 0x1CE064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE060u;
    // 0x1ce064: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2868u, 0x1CE060u, 0x1CE068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE068u;
label_1ce068:
    // 0x1ce068: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ce068u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce06c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE06Cu;
    {
        const bool branch_taken_0x1ce06c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE06Cu;
        // 0x1ce070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce06c) {
            ctx->pc = 0x1CE078u;
            goto label_1ce078;
        }
    }
    ctx->pc = 0x1CE074u;
    // 0x1ce074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ce074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ce078:
    // 0x1ce078: 0xdfb00220  ld          $s0, 0x220($sp)
    ctx->pc = 0x1ce078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1ce07c: 0xdfb10228  ld          $s1, 0x228($sp)
    ctx->pc = 0x1ce07cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x1ce080: 0xdfb20230  ld          $s2, 0x230($sp)
    ctx->pc = 0x1ce080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1ce084: 0xdfb30238  ld          $s3, 0x238($sp)
    ctx->pc = 0x1ce084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1ce088: 0xdfb40240  ld          $s4, 0x240($sp)
    ctx->pc = 0x1ce088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1ce08c: 0xdfb50248  ld          $s5, 0x248($sp)
    ctx->pc = 0x1ce08cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1ce090: 0xdfb60250  ld          $s6, 0x250($sp)
    ctx->pc = 0x1ce090u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1ce094: 0xdfb70258  ld          $s7, 0x258($sp)
    ctx->pc = 0x1ce094u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x1ce098: 0xdfbe0260  ld          $fp, 0x260($sp)
    ctx->pc = 0x1ce098u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1ce09c: 0xdfbf0268  ld          $ra, 0x268($sp)
    ctx->pc = 0x1ce09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x1ce0a0: 0xc7b40270  lwc1        $f20, 0x270($sp)
    ctx->pc = 0x1ce0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce0a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE0A4u;
        // 0x1ce0a8: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE0ACu;
    // 0x1ce0ac: 0x0  nop
    ctx->pc = 0x1ce0acu;
    // NOP
    ctx->pc = 0x1ce0b0u;
}
