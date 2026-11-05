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

// Function: sub_00355450
// Address: 0x355450 - 0x355690
void sub_00355450_0x355450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355450_0x355450");
#endif

    switch (ctx->pc) {
        case 0x355498u: goto label_355498;
        case 0x355514u: goto label_355514;
        case 0x355590u: goto label_355590;
        case 0x355600u: goto label_355600;
        default: break;
    }

    ctx->pc = 0x355450u;

    // 0x355450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x355450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x355454: 0x3c01c170  lui         $at, 0xC170
    ctx->pc = 0x355454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49520 << 16));
    // 0x355458: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x355458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35545c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35545cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x355460: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x355460u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x355464: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x355464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355468: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x355468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x35546c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x35546cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x355470: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x355470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x355474: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x355474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x355478: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x355478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x35547c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x35547cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x355480: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x355480u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355484: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x355484u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355488: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x355488u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35548c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x35548cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355490: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x355490u;
    SET_GPR_U32(ctx, 31, 0x355498u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x355490u, 0x355498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355498u;
label_355498:
    // 0x355498: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x355498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35549c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35549Cu;
    {
        const bool branch_taken_0x35549c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3554A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35549Cu;
        // 0x3554a0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35549c) {
            ctx->pc = 0x3554B8u;
            goto label_3554b8;
        }
    }
    ctx->pc = 0x3554A4u;
    // 0x3554a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3554a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3554a8: 0x0  nop
    ctx->pc = 0x3554a8u;
    // NOP
    // 0x3554ac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3554acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3554b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3554B0u;
    {
        const bool branch_taken_0x3554b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3554b0) {
            ctx->pc = 0x3554D0u;
            goto label_3554d0;
        }
    }
    ctx->pc = 0x3554B8u;
label_3554b8:
    // 0x3554b8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3554b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3554bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3554bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3554c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3554c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3554c4: 0x0  nop
    ctx->pc = 0x3554c4u;
    // NOP
    // 0x3554c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3554c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3554cc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3554ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3554d0:
    // 0x3554d0: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3554d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x3554d4: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x3554d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x3554d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3554d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3554dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3554dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3554e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3554e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3554e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3554e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3554e8: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x3554e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x3554ec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3554ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3554f0: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x3554f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3554f4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3554f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3554f8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3554f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3554fc: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x3554fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x355500: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x355500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x355504: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x355504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x355508: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x355508u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x35550c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x35550Cu;
    SET_GPR_U32(ctx, 31, 0x355514u);
    ctx->pc = 0x355510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35550Cu;
    // 0x355510: 0xe6020000  swc1        $f2, 0x0($s0) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x35550Cu, 0x355514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355514u;
label_355514:
    // 0x355514: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x355514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x355518: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x355518u;
    {
        const bool branch_taken_0x355518 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x35551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355518u;
        // 0x35551c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355518) {
            ctx->pc = 0x355534u;
            goto label_355534;
        }
    }
    ctx->pc = 0x355520u;
    // 0x355520: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x355520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355524: 0x0  nop
    ctx->pc = 0x355524u;
    // NOP
    // 0x355528: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x355528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35552c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35552Cu;
    {
        const bool branch_taken_0x35552c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35552c) {
            ctx->pc = 0x35554Cu;
            goto label_35554c;
        }
    }
    ctx->pc = 0x355534u;
label_355534:
    // 0x355534: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x355534u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x355538: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x355538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35553c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35553cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355540: 0x0  nop
    ctx->pc = 0x355540u;
    // NOP
    // 0x355544: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x355544u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x355548: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x355548u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_35554c:
    // 0x35554c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x35554cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x355550: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x355550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x355554: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x355554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355558: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x355558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x35555c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x35555cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x355560: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x355560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x355564: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x355564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x355568: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x355568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x35556c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x35556cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x355570: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x355570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355574: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x355574u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x355578: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x355578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x35557c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x35557cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x355580: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x355580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x355584: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x355584u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x355588: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x355588u;
    SET_GPR_U32(ctx, 31, 0x355590u);
    ctx->pc = 0x35558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355588u;
    // 0x35558c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x355588u, 0x355590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355590u;
label_355590:
    // 0x355590: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x355590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x355594: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x355594u;
    {
        const bool branch_taken_0x355594 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x355598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355594u;
        // 0x355598: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x355594) {
            ctx->pc = 0x3555B0u;
            goto label_3555b0;
        }
    }
    ctx->pc = 0x35559Cu;
    // 0x35559c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x35559cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3555a0: 0x0  nop
    ctx->pc = 0x3555a0u;
    // NOP
    // 0x3555a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3555a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3555a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3555A8u;
    {
        const bool branch_taken_0x3555a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3555a8) {
            ctx->pc = 0x3555C8u;
            goto label_3555c8;
        }
    }
    ctx->pc = 0x3555B0u;
label_3555b0:
    // 0x3555b0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3555b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3555b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3555b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3555b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3555b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3555bc: 0x0  nop
    ctx->pc = 0x3555bcu;
    // NOP
    // 0x3555c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3555c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3555c4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3555c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3555c8:
    // 0x3555c8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3555c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x3555cc: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x3555ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x3555d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3555d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3555d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3555d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3555d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3555d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3555dc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3555dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3555e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3555e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3555e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3555e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3555e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3555e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3555ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3555ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3555f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3555f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3555f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3555f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3555f8: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x3555F8u;
    SET_GPR_U32(ctx, 31, 0x355600u);
    ctx->pc = 0x3555FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3555F8u;
    // 0x3555fc: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x3555F8u, 0x355600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355600u;
label_355600:
    // 0x355600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x355600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355604: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x355604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x355608: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x355608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x35560c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35560Cu;
    {
        const bool branch_taken_0x35560c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x355610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35560Cu;
        // 0x355610: 0x2445c900  addiu       $a1, $v0, -0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35560c) {
            ctx->pc = 0x355628u;
            goto label_355628;
        }
    }
    ctx->pc = 0x355614u;
    // 0x355614: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x355614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355618: 0x0  nop
    ctx->pc = 0x355618u;
    // NOP
    // 0x35561c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35561cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x355620: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x355620u;
    {
        const bool branch_taken_0x355620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355620) {
            ctx->pc = 0x355644u;
            goto label_355644;
        }
    }
    ctx->pc = 0x355628u;
label_355628:
    // 0x355628: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x355628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x35562c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x35562cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x355630: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x355630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x355634: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x355634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x355638: 0x0  nop
    ctx->pc = 0x355638u;
    // NOP
    // 0x35563c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35563cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x355640: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x355640u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_355644:
    // 0x355644: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x355644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x355648: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x355648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x35564c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35564cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355650: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x355650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x355654: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x355654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x355658: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x355658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x35565c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x35565cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x355660: 0xc443c904  lwc1        $f3, -0x36FC($v0)
    ctx->pc = 0x355660u;
    { uint32_t bits = FAST_READ32(0x3FC904u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x355664: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x355664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355668: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x355668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35566c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x35566cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x355670: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x355670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x355674: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x355674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x355678: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x355678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x35567c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x35567cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x355680: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x355680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x355684: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x355684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x355688: 0x3e00008  jr          $ra
    ctx->pc = 0x355688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355688u;
        // 0x35568c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355690u;
}
