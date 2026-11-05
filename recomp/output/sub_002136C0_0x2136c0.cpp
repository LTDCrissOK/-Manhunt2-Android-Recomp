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

// Function: sub_002136C0
// Address: 0x2136c0 - 0x214108
void sub_002136C0_0x2136c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002136C0_0x2136c0");
#endif

    switch (ctx->pc) {
        case 0x213798u: goto label_213798;
        case 0x213804u: goto label_213804;
        case 0x213960u: goto label_213960;
        case 0x213b04u: goto label_213b04;
        case 0x213ba4u: goto label_213ba4;
        case 0x213be8u: goto label_213be8;
        case 0x213bf4u: goto label_213bf4;
        case 0x213bfcu: goto label_213bfc;
        case 0x213cb4u: goto label_213cb4;
        case 0x213e34u: goto label_213e34;
        case 0x213e44u: goto label_213e44;
        case 0x213e50u: goto label_213e50;
        case 0x213e64u: goto label_213e64;
        case 0x213ee0u: goto label_213ee0;
        case 0x213eecu: goto label_213eec;
        case 0x213efcu: goto label_213efc;
        case 0x213f0cu: goto label_213f0c;
        case 0x213f9cu: goto label_213f9c;
        case 0x213facu: goto label_213fac;
        case 0x213fb8u: goto label_213fb8;
        case 0x213fccu: goto label_213fcc;
        case 0x213ff0u: goto label_213ff0;
        case 0x2140acu: goto label_2140ac;
        case 0x2140bcu: goto label_2140bc;
        case 0x2140c8u: goto label_2140c8;
        case 0x2140dcu: goto label_2140dc;
        default: break;
    }

    ctx->pc = 0x2136c0u;

    // 0x2136c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2136c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2136c4: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2136c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2136c8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2136c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2136cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2136ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2136d0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2136d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2136d4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2136d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2136d8: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2136d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2136dc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2136dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2136e0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2136e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2136e4: 0x8e4500b8  lw          $a1, 0xB8($s2)
    ctx->pc = 0x2136e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x2136e8: 0x8ca400b0  lw          $a0, 0xB0($a1)
    ctx->pc = 0x2136e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x2136ec: 0x30820400  andi        $v0, $a0, 0x400
    ctx->pc = 0x2136ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x2136f0: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2136F0u;
    {
        const bool branch_taken_0x2136f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2136F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2136F0u;
        // 0x2136f4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2136f0) {
            ctx->pc = 0x2138ECu;
            goto label_2138ec;
        }
    }
    ctx->pc = 0x2136F8u;
    // 0x2136f8: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2136f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2136fc: 0xc4412b90  lwc1        $f1, 0x2B90($v0)
    ctx->pc = 0x2136fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213700: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x213700u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213704: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x213704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x213708: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21370c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213710: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x213710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213714: 0x0  nop
    ctx->pc = 0x213714u;
    // NOP
    // 0x213718: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x213718u;
    {
        const bool branch_taken_0x213718 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213718u;
        // 0x21371c: 0x24500040  addiu       $s0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213718) {
            ctx->pc = 0x213818u;
            goto label_213818;
        }
    }
    ctx->pc = 0x213720u;
    // 0x213720: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x213720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x213724: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x213724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x213728: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21372c: 0x0  nop
    ctx->pc = 0x21372cu;
    // NOP
    // 0x213730: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x213730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213734: 0x0  nop
    ctx->pc = 0x213734u;
    // NOP
    // 0x213738: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x213738u;
    {
        const bool branch_taken_0x213738 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213738u;
        // 0x21373c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213738) {
            ctx->pc = 0x2137ACu;
            goto label_2137ac;
        }
    }
    ctx->pc = 0x213740u;
    // 0x213740: 0x964400d8  lhu         $a0, 0xD8($s2)
    ctx->pc = 0x213740u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x213744: 0x8c432b00  lw          $v1, 0x2B00($v0)
    ctx->pc = 0x213744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x213748: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x213748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21374c: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x21374cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x213750: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x213750u;
    {
        const bool branch_taken_0x213750 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x213754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213750u;
        // 0x213754: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213750) {
            ctx->pc = 0x21376Cu;
            goto label_21376c;
        }
    }
    ctx->pc = 0x213758u;
    // 0x213758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x213758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21375c: 0x0  nop
    ctx->pc = 0x21375cu;
    // NOP
    // 0x213760: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213764: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x213764u;
    {
        const bool branch_taken_0x213764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213764) {
            ctx->pc = 0x213784u;
            goto label_213784;
        }
    }
    ctx->pc = 0x21376Cu;
label_21376c:
    // 0x21376c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x21376cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x213770: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x213770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x213774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213778: 0x0  nop
    ctx->pc = 0x213778u;
    // NOP
    // 0x21377c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21377cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213780: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x213780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_213784:
    // 0x213784: 0x3c013ac8  lui         $at, 0x3AC8
    ctx->pc = 0x213784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15048 << 16));
    // 0x213788: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x213788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x21378c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x21378cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x213790: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x213790u;
    SET_GPR_U32(ctx, 31, 0x213798u);
    ctx->pc = 0x213794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213790u;
    // 0x213794: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x213790u, 0x213798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213798u;
label_213798:
    // 0x213798: 0x3c01bba3  lui         $at, 0xBBA3
    ctx->pc = 0x213798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48035 << 16));
    // 0x21379c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x21379cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2137a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2137a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2137a4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2137A4u;
    {
        const bool branch_taken_0x2137a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2137A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137A4u;
        // 0x2137a8: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137a4) {
            ctx->pc = 0x2138D4u;
            goto label_2138d4;
        }
    }
    ctx->pc = 0x2137ACu;
label_2137ac:
    // 0x2137ac: 0x964400d8  lhu         $a0, 0xD8($s2)
    ctx->pc = 0x2137acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x2137b0: 0x8c432b00  lw          $v1, 0x2B00($v0)
    ctx->pc = 0x2137b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x2137b4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2137b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2137b8: 0x30430fff  andi        $v1, $v0, 0xFFF
    ctx->pc = 0x2137b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x2137bc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2137BCu;
    {
        const bool branch_taken_0x2137bc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2137C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137BCu;
        // 0x2137c0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137bc) {
            ctx->pc = 0x2137D8u;
            goto label_2137d8;
        }
    }
    ctx->pc = 0x2137C4u;
    // 0x2137c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2137c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2137c8: 0x0  nop
    ctx->pc = 0x2137c8u;
    // NOP
    // 0x2137cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2137ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2137d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2137D0u;
    {
        const bool branch_taken_0x2137d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2137d0) {
            ctx->pc = 0x2137F0u;
            goto label_2137f0;
        }
    }
    ctx->pc = 0x2137D8u;
label_2137d8:
    // 0x2137d8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2137d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2137dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2137dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2137e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2137e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2137e4: 0x0  nop
    ctx->pc = 0x2137e4u;
    // NOP
    // 0x2137e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2137e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2137ec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2137ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2137f0:
    // 0x2137f0: 0x3c013ac8  lui         $at, 0x3AC8
    ctx->pc = 0x2137f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15048 << 16));
    // 0x2137f4: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x2137f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x2137f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2137f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2137fc: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2137FCu;
    SET_GPR_U32(ctx, 31, 0x213804u);
    ctx->pc = 0x213800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2137FCu;
    // 0x213800: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2137FCu, 0x213804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213804u;
label_213804:
    // 0x213804: 0x3c01bc03  lui         $at, 0xBC03
    ctx->pc = 0x213804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48131 << 16));
    // 0x213808: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x213808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x21380c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21380cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213810: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x213810u;
    {
        const bool branch_taken_0x213810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213810u;
        // 0x213814: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213810) {
            ctx->pc = 0x2138D4u;
            goto label_2138d4;
        }
    }
    ctx->pc = 0x213818u;
label_213818:
    // 0x213818: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x213818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x21381c: 0x964400d8  lhu         $a0, 0xD8($s2)
    ctx->pc = 0x21381cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x213820: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x213820u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x213824: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x213824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x213828: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x213828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21382c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x21382cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x213830: 0x30830fff  andi        $v1, $a0, 0xFFF
    ctx->pc = 0x213830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x213834: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x213834u;
    {
        const bool branch_taken_0x213834 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x213838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213834u;
        // 0x213838: 0x22b02  srl         $a1, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213834) {
            ctx->pc = 0x213850u;
            goto label_213850;
        }
    }
    ctx->pc = 0x21383Cu;
    // 0x21383c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21383cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213840: 0x0  nop
    ctx->pc = 0x213840u;
    // NOP
    // 0x213844: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213848: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x213848u;
    {
        const bool branch_taken_0x213848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213848) {
            ctx->pc = 0x21386Cu;
            goto label_21386c;
        }
    }
    ctx->pc = 0x213850u;
label_213850:
    // 0x213850: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x213850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x213854: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x213854u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x213858: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x213858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21385c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21385cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213860: 0x0  nop
    ctx->pc = 0x213860u;
    // NOP
    // 0x213864: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213868: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x213868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_21386c:
    // 0x21386c: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x21386cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x213870: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x213870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x213874: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x213874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x213878: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21387c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x21387cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x213880: 0x24849560  addiu       $a0, $a0, -0x6AA0
    ctx->pc = 0x213880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940000));
    // 0x213884: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x213884u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x213888: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x213888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21388c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x213890: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x213890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x213894: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x213894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x213898: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x213898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x21389c: 0x46033001  sub.s       $f0, $f6, $f3
    ctx->pc = 0x21389cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x2138a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2138a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2138a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2138a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2138a8: 0xc6812b90  lwc1        $f1, 0x2B90($s4)
    ctx->pc = 0x2138a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 11152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2138ac: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x2138acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2138b0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2138b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2138b4: 0x3c01bc75  lui         $at, 0xBC75
    ctx->pc = 0x2138b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48245 << 16));
    // 0x2138b8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2138b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2138bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2138bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2138c0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2138c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2138c4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2138c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2138c8: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2138c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2138cc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2138ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2138d0: 0x460100c2  mul.s       $f3, $f0, $f1
    ctx->pc = 0x2138d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2138d4:
    // 0x2138d4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2138d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2138d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2138d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2138dc: 0x0  nop
    ctx->pc = 0x2138dcu;
    // NOP
    // 0x2138e0: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2138e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2138e4: 0x100001bf  b           . + 4 + (0x1BF << 2)
    ctx->pc = 0x2138E4u;
    {
        const bool branch_taken_0x2138e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2138E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138E4u;
        // 0x2138e8: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138e4) {
            ctx->pc = 0x213FE4u;
            goto label_213fe4;
        }
    }
    ctx->pc = 0x2138ECu;
label_2138ec:
    // 0x2138ec: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x2138ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x2138f0: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2138F0u;
    {
        const bool branch_taken_0x2138f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2138F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138F0u;
        // 0x2138f4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138f0) {
            ctx->pc = 0x213A54u;
            goto label_213a54;
        }
    }
    ctx->pc = 0x2138F8u;
    // 0x2138f8: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x2138f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2138fc: 0x8c452b00  lw          $a1, 0x2B00($v0)
    ctx->pc = 0x2138fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x213900: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x213900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213904: 0x964300d8  lhu         $v1, 0xD8($s2)
    ctx->pc = 0x213904u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x213908: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x213908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21390c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x21390cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x213910: 0x30a30fff  andi        $v1, $a1, 0xFFF
    ctx->pc = 0x213910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x213914: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x213914u;
    {
        const bool branch_taken_0x213914 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x213918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213914u;
        // 0x213918: 0x24500040  addiu       $s0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213914) {
            ctx->pc = 0x213930u;
            goto label_213930;
        }
    }
    ctx->pc = 0x21391Cu;
    // 0x21391c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21391cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213920: 0x0  nop
    ctx->pc = 0x213920u;
    // NOP
    // 0x213924: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213924u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213928: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x213928u;
    {
        const bool branch_taken_0x213928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213928) {
            ctx->pc = 0x21394Cu;
            goto label_21394c;
        }
    }
    ctx->pc = 0x213930u;
label_213930:
    // 0x213930: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x213930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x213934: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x213934u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x213938: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x213938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21393c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21393cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213940: 0x0  nop
    ctx->pc = 0x213940u;
    // NOP
    // 0x213944: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213948: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x213948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_21394c:
    // 0x21394c: 0x3c013ac8  lui         $at, 0x3AC8
    ctx->pc = 0x21394cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15048 << 16));
    // 0x213950: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x213950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x213954: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x213954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x213958: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x213958u;
    SET_GPR_U32(ctx, 31, 0x213960u);
    ctx->pc = 0x21395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213958u;
    // 0x21395c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x213958u, 0x213960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213960u;
label_213960:
    // 0x213960: 0x8e622b00  lw          $v0, 0x2B00($s3)
    ctx->pc = 0x213960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11008)));
    // 0x213964: 0x964300d8  lhu         $v1, 0xD8($s2)
    ctx->pc = 0x213964u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x213968: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x213968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x21396c: 0x3c01bb83  lui         $at, 0xBB83
    ctx->pc = 0x21396cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48003 << 16));
    // 0x213970: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x213970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x213974: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213974u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213978: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x213978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21397c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x21397cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x213980: 0x30830fff  andi        $v1, $a0, 0xFFF
    ctx->pc = 0x213980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x213984: 0x460101c2  mul.s       $f7, $f0, $f1
    ctx->pc = 0x213984u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213988: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x213988u;
    {
        const bool branch_taken_0x213988 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x21398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213988u;
        // 0x21398c: 0x22b02  srl         $a1, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213988) {
            ctx->pc = 0x2139A4u;
            goto label_2139a4;
        }
    }
    ctx->pc = 0x213990u;
    // 0x213990: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x213990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213994: 0x0  nop
    ctx->pc = 0x213994u;
    // NOP
    // 0x213998: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21399c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21399Cu;
    {
        const bool branch_taken_0x21399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21399c) {
            ctx->pc = 0x2139C0u;
            goto label_2139c0;
        }
    }
    ctx->pc = 0x2139A4u;
label_2139a4:
    // 0x2139a4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2139a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2139a8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2139a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2139ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2139acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2139b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2139b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2139b4: 0x0  nop
    ctx->pc = 0x2139b4u;
    // NOP
    // 0x2139b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2139b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2139bc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2139bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2139c0:
    // 0x2139c0: 0x3c013980  lui         $at, 0x3980
    ctx->pc = 0x2139c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14720 << 16));
    // 0x2139c4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2139c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2139c8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2139c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2139cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2139ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2139d0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2139d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2139d4: 0x24849560  addiu       $a0, $a0, -0x6AA0
    ctx->pc = 0x2139d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940000));
    // 0x2139d8: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x2139d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2139dc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2139dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2139e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2139e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2139e4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2139e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2139e8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2139e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2139ec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2139ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2139f0: 0x46043001  sub.s       $f0, $f6, $f4
    ctx->pc = 0x2139f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x2139f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2139f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2139f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2139f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2139fc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2139fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x213a00: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x213a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x213a04: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x213a04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x213a08: 0xc4612b90  lwc1        $f1, 0x2B90($v1)
    ctx->pc = 0x213a08u;
    { uint32_t bits = FAST_READ32(0x482B90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213a0c: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x213a0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x213a10: 0x3c01bc03  lui         $at, 0xBC03
    ctx->pc = 0x213a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48131 << 16));
    // 0x213a14: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x213a14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x213a18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x213a18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213a1c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x213a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x213a20: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x213a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x213a24: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x213a24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x213a28: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x213a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x213a2c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x213a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x213a30: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x213a30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x213a34: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x213a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x213a38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x213a38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x213a3c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x213a3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x213a40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x213a40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213a44: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x213a44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x213a48: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x213a48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x213a4c: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x213A4Cu;
    {
        const bool branch_taken_0x213a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A4Cu;
        // 0x213a50: 0xe6010010  swc1        $f1, 0x10($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a4c) {
            ctx->pc = 0x213FE4u;
            goto label_213fe4;
        }
    }
    ctx->pc = 0x213A54u;
label_213a54:
    // 0x213a54: 0x30821000  andi        $v0, $a0, 0x1000
    ctx->pc = 0x213a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x213a58: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x213A58u;
    {
        const bool branch_taken_0x213a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A58u;
        // 0x213a5c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a58) {
            ctx->pc = 0x213BC4u;
            goto label_213bc4;
        }
    }
    ctx->pc = 0x213A60u;
    // 0x213a60: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x213a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x213a64: 0xc4402b90  lwc1        $f0, 0x2B90($v0)
    ctx->pc = 0x213a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213a68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x213a68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213a6c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x213a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x213a70: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x213a70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x213a74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213a78: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x213a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213a7c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x213a7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x213a80: 0x964200d8  lhu         $v0, 0xD8($s2)
    ctx->pc = 0x213a80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x213a84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x213a84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213a88: 0x24910040  addiu       $s1, $a0, 0x40
    ctx->pc = 0x213a88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x213a8c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x213A8Cu;
    {
        const bool branch_taken_0x213a8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A8Cu;
        // 0x213a90: 0x30500fff  andi        $s0, $v0, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a8c) {
            ctx->pc = 0x213A98u;
            goto label_213a98;
        }
    }
    ctx->pc = 0x213A94u;
    // 0x213a94: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x213a94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_213a98:
    // 0x213a98: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x213a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x213a9c: 0x240307d0  addiu       $v1, $zero, 0x7D0
    ctx->pc = 0x213a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x213aa0: 0x8c822b00  lw          $v0, 0x2B00($a0)
    ctx->pc = 0x213aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x213aa4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x213AA4u;
    {
        const bool branch_taken_0x213aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x213aa4) {
            ctx->pc = 0x213AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213AA4u;
            // 0x213aa8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x213AACu;
            goto label_213aac;
        }
    }
    ctx->pc = 0x213AACu;
label_213aac:
    // 0x213aac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x213aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x213ab0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x213ab0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x213ab4: 0x1010  mfhi        $v0
    ctx->pc = 0x213ab4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x213ab8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x213AB8u;
    {
        const bool branch_taken_0x213ab8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x213ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213AB8u;
        // 0x213abc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ab8) {
            ctx->pc = 0x213AD4u;
            goto label_213ad4;
        }
    }
    ctx->pc = 0x213AC0u;
    // 0x213ac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213ac4: 0x0  nop
    ctx->pc = 0x213ac4u;
    // NOP
    // 0x213ac8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213ac8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213acc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x213ACCu;
    {
        const bool branch_taken_0x213acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213acc) {
            ctx->pc = 0x213AF0u;
            goto label_213af0;
        }
    }
    ctx->pc = 0x213AD4u;
label_213ad4:
    // 0x213ad4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x213ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x213ad8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x213ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x213adc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x213adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x213ae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213ae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213ae4: 0x0  nop
    ctx->pc = 0x213ae4u;
    // NOP
    // 0x213ae8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213aec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x213aecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_213af0:
    // 0x213af0: 0x3c013b4d  lui         $at, 0x3B4D
    ctx->pc = 0x213af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15181 << 16));
    // 0x213af4: 0x3421c876  ori         $at, $at, 0xC876
    ctx->pc = 0x213af4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51318);
    // 0x213af8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x213af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x213afc: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x213AFCu;
    SET_GPR_U32(ctx, 31, 0x213B04u);
    ctx->pc = 0x213B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213AFCu;
    // 0x213b00: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x213AFCu, 0x213B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B04u;
label_213b04:
    // 0x213b04: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x213b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x213b08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x213b08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x213b0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213b10: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x213b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x213b14: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x213b14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x213b18: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x213b18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213b1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x213b1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213b20: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x213b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x213b24: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x213b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x213b28: 0xc6802b90  lwc1        $f0, 0x2B90($s4)
    ctx->pc = 0x213b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 11152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213b2c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x213b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213b30: 0x0  nop
    ctx->pc = 0x213b30u;
    // NOP
    // 0x213b34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x213B34u;
    {
        const bool branch_taken_0x213b34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B34u;
        // 0x213b38: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b34) {
            ctx->pc = 0x213B40u;
            goto label_213b40;
        }
    }
    ctx->pc = 0x213B3Cu;
    // 0x213b3c: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x213b3cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
label_213b40:
    // 0x213b40: 0x8e622b00  lw          $v0, 0x2B00($s3)
    ctx->pc = 0x213b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11008)));
    // 0x213b44: 0x24030a50  addiu       $v1, $zero, 0xA50
    ctx->pc = 0x213b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2640));
    // 0x213b48: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x213B48u;
    {
        const bool branch_taken_0x213b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x213b48) {
            ctx->pc = 0x213B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213B48u;
            // 0x213b4c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x213B50u;
            goto label_213b50;
        }
    }
    ctx->pc = 0x213B50u;
label_213b50:
    // 0x213b50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x213b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x213b54: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x213b54u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x213b58: 0x1010  mfhi        $v0
    ctx->pc = 0x213b58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x213b5c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x213B5Cu;
    {
        const bool branch_taken_0x213b5c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x213B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B5Cu;
        // 0x213b60: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b5c) {
            ctx->pc = 0x213B78u;
            goto label_213b78;
        }
    }
    ctx->pc = 0x213B64u;
    // 0x213b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213b68: 0x0  nop
    ctx->pc = 0x213b68u;
    // NOP
    // 0x213b6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213b70: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x213B70u;
    {
        const bool branch_taken_0x213b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213b70) {
            ctx->pc = 0x213B90u;
            goto label_213b90;
        }
    }
    ctx->pc = 0x213B78u;
label_213b78:
    // 0x213b78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x213b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x213b7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x213b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x213b80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213b84: 0x0  nop
    ctx->pc = 0x213b84u;
    // NOP
    // 0x213b88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213b88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213b8c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x213b8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_213b90:
    // 0x213b90: 0x3c013b1b  lui         $at, 0x3B1B
    ctx->pc = 0x213b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15131 << 16));
    // 0x213b94: 0x3421e570  ori         $at, $at, 0xE570
    ctx->pc = 0x213b94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)58736);
    // 0x213b98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x213b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x213b9c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x213B9Cu;
    SET_GPR_U32(ctx, 31, 0x213BA4u);
    ctx->pc = 0x213BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B9Cu;
    // 0x213ba0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x213B9Cu, 0x213BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213BA4u;
label_213ba4:
    // 0x213ba4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x213ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x213ba8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x213ba8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x213bac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213bb0: 0x0  nop
    ctx->pc = 0x213bb0u;
    // NOP
    // 0x213bb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x213bb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x213bb8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x213bb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x213bbc: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x213BBCu;
    {
        const bool branch_taken_0x213bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BBCu;
        // 0x213bc0: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bbc) {
            ctx->pc = 0x213FE4u;
            goto label_213fe4;
        }
    }
    ctx->pc = 0x213BC4u;
label_213bc4:
    // 0x213bc4: 0x30822000  andi        $v0, $a0, 0x2000
    ctx->pc = 0x213bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x213bc8: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x213BC8u;
    {
        const bool branch_taken_0x213bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213BC8u;
        // 0x213bcc: 0x30824000  andi        $v0, $a0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x213bc8) {
            ctx->pc = 0x213DA8u;
            goto label_213da8;
        }
    }
    ctx->pc = 0x213BD0u;
    // 0x213bd0: 0x964200d8  lhu         $v0, 0xD8($s2)
    ctx->pc = 0x213bd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x213bd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x213bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bd8: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x213bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x213bdc: 0x30530fff  andi        $s3, $v0, 0xFFF
    ctx->pc = 0x213bdcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x213be0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x213BE0u;
    SET_GPR_U32(ctx, 31, 0x213BE8u);
    ctx->pc = 0x213BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213BE0u;
    // 0x213be4: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x213BE0u, 0x213BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213BE8u;
label_213be8:
    // 0x213be8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x213be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x213bec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x213BECu;
    SET_GPR_U32(ctx, 31, 0x213BF4u);
    ctx->pc = 0x213BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213BECu;
    // 0x213bf0: 0x26110040  addiu       $s1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x213BECu, 0x213BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213BF4u;
label_213bf4:
    // 0x213bf4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x213BF4u;
    SET_GPR_U32(ctx, 31, 0x213BFCu);
    ctx->pc = 0x213BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213BF4u;
    // 0x213bf8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x213BF4u, 0x213BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213BFCu;
label_213bfc:
    // 0x213bfc: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x213bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213c00: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x213c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x213c04: 0xc4412b90  lwc1        $f1, 0x2B90($v0)
    ctx->pc = 0x213c04u;
    { uint32_t bits = FAST_READ32(0x482B90u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213c08: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x213c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x213c0c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x213c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x213c10: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x213c10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x213c14: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x213c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x213c18: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x213c18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x213c1c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x213c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213c20: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x213c20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213c24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213c28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x213c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213c2c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x213c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x213c30: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x213c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213c34: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x213c34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x213c38: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x213c38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x213c3c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x213c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x213c40: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x213C40u;
    {
        const bool branch_taken_0x213c40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C40u;
        // 0x213c44: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c40) {
            ctx->pc = 0x213C4Cu;
            goto label_213c4c;
        }
    }
    ctx->pc = 0x213C48u;
    // 0x213c48: 0x46001d06  mov.s       $f20, $f3
    ctx->pc = 0x213c48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[3]);
label_213c4c:
    // 0x213c4c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x213c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x213c50: 0x240307d0  addiu       $v1, $zero, 0x7D0
    ctx->pc = 0x213c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x213c54: 0x8c822b00  lw          $v0, 0x2B00($a0)
    ctx->pc = 0x213c54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x213c58: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x213C58u;
    {
        const bool branch_taken_0x213c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x213c58) {
            ctx->pc = 0x213C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213C58u;
            // 0x213c5c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x213C60u;
            goto label_213c60;
        }
    }
    ctx->pc = 0x213C60u;
label_213c60:
    // 0x213c60: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x213c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x213c64: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x213c64u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x213c68: 0x1010  mfhi        $v0
    ctx->pc = 0x213c68u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x213c6c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x213C6Cu;
    {
        const bool branch_taken_0x213c6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x213C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C6Cu;
        // 0x213c70: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c6c) {
            ctx->pc = 0x213C88u;
            goto label_213c88;
        }
    }
    ctx->pc = 0x213C74u;
    // 0x213c74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213c78: 0x0  nop
    ctx->pc = 0x213c78u;
    // NOP
    // 0x213c7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213c80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x213C80u;
    {
        const bool branch_taken_0x213c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213c80) {
            ctx->pc = 0x213CA0u;
            goto label_213ca0;
        }
    }
    ctx->pc = 0x213C88u;
label_213c88:
    // 0x213c88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x213c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x213c8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x213c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x213c90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213c94: 0x0  nop
    ctx->pc = 0x213c94u;
    // NOP
    // 0x213c98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213c98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213c9c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x213c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_213ca0:
    // 0x213ca0: 0x3c013b4d  lui         $at, 0x3B4D
    ctx->pc = 0x213ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15181 << 16));
    // 0x213ca4: 0x3421c876  ori         $at, $at, 0xC876
    ctx->pc = 0x213ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51318);
    // 0x213ca8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x213ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x213cac: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x213CACu;
    SET_GPR_U32(ctx, 31, 0x213CB4u);
    ctx->pc = 0x213CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CACu;
    // 0x213cb0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x213CACu, 0x213CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CB4u;
label_213cb4:
    // 0x213cb4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x213cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x213cb8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x213cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213cbc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x213cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x213cc0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x213cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x213cc4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x213cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x213cc8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x213cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213ccc: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x213cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x213cd0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x213cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213cd4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x213cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x213cd8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x213cd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x213cdc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x213cdcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x213ce0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x213ce0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x213ce4: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x213ce4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x213ce8: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x213ce8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x213cec: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x213cecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x213cf0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x213cf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213cf4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x213cf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213cf8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x213cf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213cfc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x213cfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213d00: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x213d00u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x213d04: 0x4a0003bf  vwaitq
    ctx->pc = 0x213d04u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x213d08: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x213d08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213d0c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x213d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213d10: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x213d10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213d14: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x213d14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213d18: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x213d18u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x213d1c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x213d1cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213d20: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x213d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213d24: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x213d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x213d28: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x213d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x213d2c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x213d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213d30: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x213d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x213d34: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x213d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213d38: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x213d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213d3c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x213d3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x213d40: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x213d40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x213d44: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x213d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x213d48: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x213d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x213d4c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x213d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213d50: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x213d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213d54: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x213d54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213d58: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x213d58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213d5c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x213d5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213d60: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x213d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213d64: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x213d64u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x213d68: 0x4a0003bf  vwaitq
    ctx->pc = 0x213d68u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x213d6c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x213d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x213d70: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x213d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x213d74: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x213d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213d78: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x213d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x213d7c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x213d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213d80: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x213d80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x213d84: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x213d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213d88: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x213d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x213d8c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x213d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213d90: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x213d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x213d94: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x213d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213d98: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x213d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x213d9c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x213d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213da0: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x213DA0u;
    {
        const bool branch_taken_0x213da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DA0u;
        // 0x213da4: 0xe6210028  swc1        $f1, 0x28($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213da0) {
            ctx->pc = 0x213FE4u;
            goto label_213fe4;
        }
    }
    ctx->pc = 0x213DA8u;
label_213da8:
    // 0x213da8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x213DA8u;
    {
        const bool branch_taken_0x213da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213da8) {
            ctx->pc = 0x213DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213DA8u;
            // 0x213dac: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213DC0u;
            goto label_213dc0;
        }
    }
    ctx->pc = 0x213DB0u;
    // 0x213db0: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x213db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x213db4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x213DB4u;
    {
        const bool branch_taken_0x213db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DB4u;
        // 0x213db8: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213db4) {
            ctx->pc = 0x213E6Cu;
            goto label_213e6c;
        }
    }
    ctx->pc = 0x213DBCu;
    // 0x213dbc: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x213dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_213dc0:
    // 0x213dc0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x213dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x213dc4: 0x8c652b00  lw          $a1, 0x2B00($v1)
    ctx->pc = 0x213dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B00u));
    // 0x213dc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x213dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213dcc: 0x30a303ff  andi        $v1, $a1, 0x3FF
    ctx->pc = 0x213dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1023);
    // 0x213dd0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x213DD0u;
    {
        const bool branch_taken_0x213dd0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x213DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213DD0u;
        // 0x213dd4: 0x24900040  addiu       $s0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213dd0) {
            ctx->pc = 0x213DECu;
            goto label_213dec;
        }
    }
    ctx->pc = 0x213DD8u;
    // 0x213dd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x213dd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213ddc: 0x0  nop
    ctx->pc = 0x213ddcu;
    // NOP
    // 0x213de0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x213de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x213de4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x213DE4u;
    {
        const bool branch_taken_0x213de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213de4) {
            ctx->pc = 0x213E08u;
            goto label_213e08;
        }
    }
    ctx->pc = 0x213DECu;
label_213dec:
    // 0x213dec: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x213decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x213df0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x213df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x213df4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x213df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x213df8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x213df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213dfc: 0x0  nop
    ctx->pc = 0x213dfcu;
    // NOP
    // 0x213e00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x213e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x213e04: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x213e04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_213e08:
    // 0x213e08: 0x3c013bc8  lui         $at, 0x3BC8
    ctx->pc = 0x213e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15304 << 16));
    // 0x213e0c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x213e0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x213e10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x213e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x213e14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213e18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213e1c: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x213e1cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x213e20: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x213e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x213e24: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x213e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x213e28: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x213e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x213e2c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x213E2Cu;
    SET_GPR_U32(ctx, 31, 0x213E34u);
    ctx->pc = 0x213E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E2Cu;
    // 0x213e30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x213E2Cu, 0x213E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E34u;
label_213e34:
    // 0x213e34: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x213e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x213e38: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x213e38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x213e3c: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x213E3Cu;
    SET_GPR_U32(ctx, 31, 0x213E44u);
    ctx->pc = 0x213E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E3Cu;
    // 0x213e40: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x213E3Cu, 0x213E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E44u;
label_213e44:
    // 0x213e44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x213e44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x213e48: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x213E48u;
    SET_GPR_U32(ctx, 31, 0x213E50u);
    ctx->pc = 0x213E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E48u;
    // 0x213e4c: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x213E48u, 0x213E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E50u;
label_213e50:
    // 0x213e50: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x213e50u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x213e54: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x213e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x213e58: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x213e58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x213e5c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x213E5Cu;
    SET_GPR_U32(ctx, 31, 0x213E64u);
    ctx->pc = 0x213E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E5Cu;
    // 0x213e60: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x213E5Cu, 0x213E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E64u;
label_213e64:
    // 0x213e64: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x213E64u;
    {
        const bool branch_taken_0x213e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E64u;
        // 0x213e68: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e64) {
            ctx->pc = 0x213FE4u;
            goto label_213fe4;
        }
    }
    ctx->pc = 0x213E6Cu;
label_213e6c:
    // 0x213e6c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x213e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x213e70: 0x1443002d  bne         $v0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x213E70u;
    {
        const bool branch_taken_0x213e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x213E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E70u;
        // 0x213e74: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e70) {
            ctx->pc = 0x213F28u;
            goto label_213f28;
        }
    }
    ctx->pc = 0x213E78u;
    // 0x213e78: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x213e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x213e7c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x213e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x213e80: 0x8c652b00  lw          $a1, 0x2B00($v1)
    ctx->pc = 0x213e80u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B00u));
    // 0x213e84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x213e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213e88: 0x30a303ff  andi        $v1, $a1, 0x3FF
    ctx->pc = 0x213e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1023);
    // 0x213e8c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x213E8Cu;
    {
        const bool branch_taken_0x213e8c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x213E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E8Cu;
        // 0x213e90: 0x24900040  addiu       $s0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213e8c) {
            ctx->pc = 0x213EA8u;
            goto label_213ea8;
        }
    }
    ctx->pc = 0x213E94u;
    // 0x213e94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x213e94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213e98: 0x0  nop
    ctx->pc = 0x213e98u;
    // NOP
    // 0x213e9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213e9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213ea0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x213EA0u;
    {
        const bool branch_taken_0x213ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213ea0) {
            ctx->pc = 0x213EC4u;
            goto label_213ec4;
        }
    }
    ctx->pc = 0x213EA8u;
label_213ea8:
    // 0x213ea8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x213ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x213eac: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x213eacu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x213eb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x213eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x213eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213eb8: 0x0  nop
    ctx->pc = 0x213eb8u;
    // NOP
    // 0x213ebc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213ebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213ec0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x213ec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_213ec4:
    // 0x213ec4: 0x3c013bc8  lui         $at, 0x3BC8
    ctx->pc = 0x213ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15304 << 16));
    // 0x213ec8: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x213ec8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x213ecc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x213eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x213ed0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x213ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x213ed4: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x213ed4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x213ed8: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x213ED8u;
    SET_GPR_U32(ctx, 31, 0x213EE0u);
    ctx->pc = 0x213EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213ED8u;
    // 0x213edc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x213ED8u, 0x213EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213EE0u;
label_213ee0:
    // 0x213ee0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x213ee0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x213ee4: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x213EE4u;
    SET_GPR_U32(ctx, 31, 0x213EECu);
    ctx->pc = 0x213EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213EE4u;
    // 0x213ee8: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x213EE4u, 0x213EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213EECu;
label_213eec:
    // 0x213eec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x213eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x213ef0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x213ef0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x213ef4: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x213EF4u;
    SET_GPR_U32(ctx, 31, 0x213EFCu);
    ctx->pc = 0x213EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213EF4u;
    // 0x213ef8: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x213EF4u, 0x213EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213EFCu;
label_213efc:
    // 0x213efc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x213efcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x213f00: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x213f00u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x213f04: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x213F04u;
    SET_GPR_U32(ctx, 31, 0x213F0Cu);
    ctx->pc = 0x213F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F04u;
    // 0x213f08: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x213F04u, 0x213F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F0Cu;
label_213f0c:
    // 0x213f0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213f10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213f14: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x213f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x213f18: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x213f18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x213f1c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x213f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x213f20: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x213F20u;
    {
        const bool branch_taken_0x213f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F20u;
        // 0x213f24: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f20) {
            ctx->pc = 0x213FE4u;
            goto label_213fe4;
        }
    }
    ctx->pc = 0x213F28u;
label_213f28:
    // 0x213f28: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x213f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x213f2c: 0x54430032  bnel        $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x213F2Cu;
    {
        const bool branch_taken_0x213f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x213f2c) {
            ctx->pc = 0x213F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213F2Cu;
            // 0x213f30: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213FF8u;
            goto label_213ff8;
        }
    }
    ctx->pc = 0x213F34u;
    // 0x213f34: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x213f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x213f38: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x213f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x213f3c: 0x8c652b00  lw          $a1, 0x2B00($v1)
    ctx->pc = 0x213f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B00u));
    // 0x213f40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x213f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x213f44: 0x30a303ff  andi        $v1, $a1, 0x3FF
    ctx->pc = 0x213f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1023);
    // 0x213f48: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x213F48u;
    {
        const bool branch_taken_0x213f48 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x213F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F48u;
        // 0x213f4c: 0x24900040  addiu       $s0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f48) {
            ctx->pc = 0x213F64u;
            goto label_213f64;
        }
    }
    ctx->pc = 0x213F50u;
    // 0x213f50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x213f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213f54: 0x0  nop
    ctx->pc = 0x213f54u;
    // NOP
    // 0x213f58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213f5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x213F5Cu;
    {
        const bool branch_taken_0x213f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213f5c) {
            ctx->pc = 0x213F80u;
            goto label_213f80;
        }
    }
    ctx->pc = 0x213F64u;
label_213f64:
    // 0x213f64: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x213f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x213f68: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x213f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x213f6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x213f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x213f70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x213f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213f74: 0x0  nop
    ctx->pc = 0x213f74u;
    // NOP
    // 0x213f78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x213f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x213f7c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x213f7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_213f80:
    // 0x213f80: 0x3c013bc8  lui         $at, 0x3BC8
    ctx->pc = 0x213f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15304 << 16));
    // 0x213f84: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x213f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x213f88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x213f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x213f8c: 0x0  nop
    ctx->pc = 0x213f8cu;
    // NOP
    // 0x213f90: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x213f90u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x213f94: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x213F94u;
    SET_GPR_U32(ctx, 31, 0x213F9Cu);
    ctx->pc = 0x213F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213F94u;
    // 0x213f98: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x213F94u, 0x213F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213F9Cu;
label_213f9c:
    // 0x213f9c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x213f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x213fa0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x213fa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x213fa4: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x213FA4u;
    SET_GPR_U32(ctx, 31, 0x213FACu);
    ctx->pc = 0x213FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FA4u;
    // 0x213fa8: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x213FA4u, 0x213FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213FACu;
label_213fac:
    // 0x213fac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x213facu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x213fb0: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x213FB0u;
    SET_GPR_U32(ctx, 31, 0x213FB8u);
    ctx->pc = 0x213FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FB0u;
    // 0x213fb4: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x213FB0u, 0x213FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213FB8u;
label_213fb8:
    // 0x213fb8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x213fb8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x213fbc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x213fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x213fc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x213fc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x213fc4: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x213FC4u;
    SET_GPR_U32(ctx, 31, 0x213FCCu);
    ctx->pc = 0x213FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FC4u;
    // 0x213fc8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x213FC4u, 0x213FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213FCCu;
label_213fcc:
    // 0x213fcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x213fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x213fd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213fd4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x213fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x213fd8: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x213fd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x213fdc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x213fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x213fe0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x213fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_213fe4:
    // 0x213fe4: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x213fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x213fe8: 0xc0c48de  jal         func_312378
    ctx->pc = 0x213FE8u;
    SET_GPR_U32(ctx, 31, 0x213FF0u);
    ctx->pc = 0x213FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213FE8u;
    // 0x213fec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312378u, 0x213FE8u, 0x213FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213FF0u;
label_213ff0:
    // 0x213ff0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x213FF0u;
    {
        const bool branch_taken_0x213ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FF0u;
        // 0x213ff4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ff0) {
            ctx->pc = 0x2140E4u;
            goto label_2140e4;
        }
    }
    ctx->pc = 0x213FF8u;
label_213ff8:
    // 0x213ff8: 0x24021001  addiu       $v0, $zero, 0x1001
    ctx->pc = 0x213ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x213ffc: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x213FFCu;
    {
        const bool branch_taken_0x213ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x214000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213FFCu;
        // 0x214000: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213ffc) {
            ctx->pc = 0x2140E4u;
            goto label_2140e4;
        }
    }
    ctx->pc = 0x214004u;
    // 0x214004: 0x8ca30220  lw          $v1, 0x220($a1)
    ctx->pc = 0x214004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 544)));
    // 0x214008: 0x2462ff98  addiu       $v0, $v1, -0x68
    ctx->pc = 0x214008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967192));
    // 0x21400c: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x21400cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x214010: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x214010u;
    {
        const bool branch_taken_0x214010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214010) {
            ctx->pc = 0x214014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214010u;
            // 0x214014: 0x8e420104  lw          $v0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214038u;
            goto label_214038;
        }
    }
    ctx->pc = 0x214018u;
    // 0x214018: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x214018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x21401c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21401Cu;
    {
        const bool branch_taken_0x21401c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x214020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21401Cu;
        // 0x214020: 0x24020084  addiu       $v0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21401c) {
            ctx->pc = 0x214034u;
            goto label_214034;
        }
    }
    ctx->pc = 0x214024u;
    // 0x214024: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214024u;
    {
        const bool branch_taken_0x214024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x214028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214024u;
        // 0x214028: 0x24020085  addiu       $v0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214024) {
            ctx->pc = 0x214034u;
            goto label_214034;
        }
    }
    ctx->pc = 0x21402Cu;
    // 0x21402c: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x21402Cu;
    {
        const bool branch_taken_0x21402c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x214030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21402Cu;
        // 0x214030: 0xdfb10058  ld          $s1, 0x58($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21402c) {
            ctx->pc = 0x2140E8u;
            goto label_2140e8;
        }
    }
    ctx->pc = 0x214034u;
label_214034:
    // 0x214034: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x214034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_214038:
    // 0x214038: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x214038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x21403c: 0x8c652b00  lw          $a1, 0x2B00($v1)
    ctx->pc = 0x21403cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B00u));
    // 0x214040: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x214040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214044: 0x30a307ff  andi        $v1, $a1, 0x7FF
    ctx->pc = 0x214044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2047);
    // 0x214048: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x214048u;
    {
        const bool branch_taken_0x214048 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x21404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214048u;
        // 0x21404c: 0x24900040  addiu       $s0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214048) {
            ctx->pc = 0x214064u;
            goto label_214064;
        }
    }
    ctx->pc = 0x214050u;
    // 0x214050: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x214050u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x214054: 0x0  nop
    ctx->pc = 0x214054u;
    // NOP
    // 0x214058: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x214058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21405c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21405Cu;
    {
        const bool branch_taken_0x21405c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21405c) {
            ctx->pc = 0x214080u;
            goto label_214080;
        }
    }
    ctx->pc = 0x214064u;
label_214064:
    // 0x214064: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x214064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x214068: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x214068u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x21406c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21406cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x214070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x214070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x214074: 0x0  nop
    ctx->pc = 0x214074u;
    // NOP
    // 0x214078: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x214078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21407c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x21407cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_214080:
    // 0x214080: 0x3c013b48  lui         $at, 0x3B48
    ctx->pc = 0x214080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15176 << 16));
    // 0x214084: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x214084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x214088: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x214088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x21408c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21408cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x214090: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214094: 0x46140d02  mul.s       $f20, $f1, $f20
    ctx->pc = 0x214094u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x214098: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x214098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x21409c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x21409cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2140a0: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x2140a0u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x2140a4: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2140A4u;
    SET_GPR_U32(ctx, 31, 0x2140ACu);
    ctx->pc = 0x2140A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2140A4u;
    // 0x2140a8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2140A4u, 0x2140ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140ACu;
label_2140ac:
    // 0x2140ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2140acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2140b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2140b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2140b4: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2140B4u;
    SET_GPR_U32(ctx, 31, 0x2140BCu);
    ctx->pc = 0x2140B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2140B4u;
    // 0x2140b8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2140B4u, 0x2140BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140BCu;
label_2140bc:
    // 0x2140bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2140bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2140c0: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x2140C0u;
    SET_GPR_U32(ctx, 31, 0x2140C8u);
    ctx->pc = 0x2140C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2140C0u;
    // 0x2140c4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x2140C0u, 0x2140C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140C8u;
label_2140c8:
    // 0x2140c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2140c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2140cc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2140ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2140d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2140d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2140d4: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2140D4u;
    SET_GPR_U32(ctx, 31, 0x2140DCu);
    ctx->pc = 0x2140D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2140D4u;
    // 0x2140d8: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2140D4u, 0x2140DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2140DCu;
label_2140dc:
    // 0x2140dc: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x2140dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2140e0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2140e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2140e4:
    // 0x2140e4: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2140e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2140e8:
    // 0x2140e8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2140e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2140ec: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2140ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2140f0: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2140f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2140f4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2140f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2140f8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2140f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2140fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2140FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2140FCu;
        // 0x214100: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2140FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214104u;
    // 0x214104: 0x0  nop
    ctx->pc = 0x214104u;
    // NOP
    ctx->pc = 0x214108u;
}
