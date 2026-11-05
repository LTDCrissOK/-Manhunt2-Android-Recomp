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

// Function: sub_003596E0
// Address: 0x3596e0 - 0x359d18
void sub_003596E0_0x3596e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003596E0_0x3596e0");
#endif

    switch (ctx->pc) {
        case 0x35971cu: goto label_35971c;
        case 0x359734u: goto label_359734;
        case 0x359834u: goto label_359834;
        case 0x359874u: goto label_359874;
        case 0x35987cu: goto label_35987c;
        case 0x359910u: goto label_359910;
        case 0x35992cu: goto label_35992c;
        case 0x359a54u: goto label_359a54;
        case 0x359a84u: goto label_359a84;
        case 0x359a94u: goto label_359a94;
        case 0x359aacu: goto label_359aac;
        case 0x359ab8u: goto label_359ab8;
        case 0x359ac0u: goto label_359ac0;
        case 0x359b54u: goto label_359b54;
        case 0x359bb8u: goto label_359bb8;
        case 0x359bc0u: goto label_359bc0;
        case 0x359c68u: goto label_359c68;
        case 0x359c8cu: goto label_359c8c;
        case 0x359cdcu: goto label_359cdc;
        default: break;
    }

    ctx->pc = 0x3596e0u;

    // 0x3596e0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x3596e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x3596e4: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x3596e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
    // 0x3596e8: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x3596e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x3596ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3596ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3596f0: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x3596f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
    // 0x3596f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3596f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3596f8: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x3596f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x3596fc: 0xffb50168  sd          $s5, 0x168($sp)
    ctx->pc = 0x3596fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 21));
    // 0x359700: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x359700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x359704: 0xffb70178  sd          $s7, 0x178($sp)
    ctx->pc = 0x359704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 23));
    // 0x359708: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x359708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x35970c: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x35970cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x359710: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x359710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x359714: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x359714u;
    SET_GPR_U32(ctx, 31, 0x35971Cu);
    ctx->pc = 0x359718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359714u;
    // 0x359718: 0x8e300050  lw          $s0, 0x50($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x359714u, 0x35971Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35971Cu;
label_35971c:
    // 0x35971c: 0x8e250054  lw          $a1, 0x54($s1)
    ctx->pc = 0x35971cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x359720: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x359720u;
    {
        const bool branch_taken_0x359720 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x359720) {
            ctx->pc = 0x359724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359720u;
            // 0x359724: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35973Cu;
            goto label_35973c;
        }
    }
    ctx->pc = 0x359728u;
    // 0x359728: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x359728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x35972c: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x35972Cu;
    SET_GPR_U32(ctx, 31, 0x359734u);
    ctx->pc = 0x359730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35972Cu;
    // 0x359730: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x35972Cu, 0x359734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359734u;
label_359734:
    // 0x359734: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x359734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359738: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x359738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_35973c:
    // 0x35973c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x35973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x359740: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359744: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x359744u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359748: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x359748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35974c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x35974cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x359750: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x359750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359754: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x359754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x359758: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x359758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35975c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x35975cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x359760: 0xc6210044  lwc1        $f1, 0x44($s1)
    ctx->pc = 0x359760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359764: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x359764u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x359768: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x359768u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x35976c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x35976cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x359770: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x359770u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x359774: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x359774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x359778: 0x46030802  mul.s       $f0, $f1, $f3
    ctx->pc = 0x359778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x35977c: 0xc7b4005c  lwc1        $f20, 0x5C($sp)
    ctx->pc = 0x35977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x359780: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x359780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x359784: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x359784u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x359788: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x359788u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x35978c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x35978cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x359790: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x359790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x359794: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x359794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x359798: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x359798u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x35979c: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x35979cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3597a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3597a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3597a4: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x3597a4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3597a8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3597a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3597ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3597acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3597b0: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x3597b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x3597b4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3597b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3597b8: 0x1454000d  bne         $v0, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x3597B8u;
    {
        const bool branch_taken_0x3597b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x3597BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3597B8u;
        // 0x3597bc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3597b8) {
            ctx->pc = 0x3597F0u;
            goto label_3597f0;
        }
    }
    ctx->pc = 0x3597C0u;
    // 0x3597c0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3597c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3597c4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x3597c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3597c8: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x3597c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3597cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3597ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3597d0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3597d0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3597d4: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x3597d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3597d8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3597d8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x3597dc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3597dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3597e0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3597e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3597e4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3597e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3597e8: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x3597e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3597ec: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x3597ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_3597f0:
    // 0x3597f0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3597f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3597f4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x3597f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3597f8: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x3597f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3597fc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3597fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x359800: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x359800u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x359804: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x359804u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x359808: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x359808u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x35980c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x35980cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x359810: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x359810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x359814: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x359814u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x359818: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x359818u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x35981c: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x35981cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359820: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x359820u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x359824: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x359824u;
    {
        const bool branch_taken_0x359824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359824u;
        // 0x359828: 0xa2200064  sb          $zero, 0x64($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359824) {
            ctx->pc = 0x359980u;
            goto label_359980;
        }
    }
    ctx->pc = 0x35982Cu;
    // 0x35982c: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x35982Cu;
    SET_GPR_U32(ctx, 31, 0x359834u);
    ctx->pc = 0x359830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35982Cu;
    // 0x359830: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x35982Cu, 0x359834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359834u;
label_359834:
    // 0x359834: 0xaef491bc  sw          $s4, -0x6E44($s7)
    ctx->pc = 0x359834u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294939068), GPR_U32(ctx, 20));
    // 0x359838: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x359838u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35983c: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x35983cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x359840: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x359840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359844: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x359844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359848: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x359848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35984c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x35984cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x359850: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x359850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359854: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x359854u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x359858: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x359858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35985c: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x35985cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359860: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x359860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x359864: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x359864u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x359868: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x359868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x35986c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35986Cu;
    SET_GPR_U32(ctx, 31, 0x359874u);
    ctx->pc = 0x359870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35986Cu;
    // 0x359870: 0xe7a1004c  swc1        $f1, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35986Cu, 0x359874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359874u;
label_359874:
    // 0x359874: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x359874u;
    SET_GPR_U32(ctx, 31, 0x35987Cu);
    ctx->pc = 0x359878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359874u;
    // 0x359878: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x359874u, 0x35987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35987Cu;
label_35987c:
    // 0x35987c: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x35987cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x359880: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x359880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x359884: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x359884u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x359888: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x359888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x35988c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x35988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x359890: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x359890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x359894: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x359894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x359898: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x359898u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35989c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35989cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3598a0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3598a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3598a4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x3598a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3598a8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3598a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3598ac: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x3598acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3598b0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x3598b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3598b4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3598b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3598b8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3598b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3598bc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x3598bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3598c0: 0x0  nop
    ctx->pc = 0x3598c0u;
    // NOP
    // 0x3598c4: 0x0  nop
    ctx->pc = 0x3598c4u;
    // NOP
    // 0x3598c8: 0x46000044  c1          0x44
    ctx->pc = 0x3598c8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x3598cc: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x3598ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x3598d0: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x3598d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3598d4: 0x0  nop
    ctx->pc = 0x3598d4u;
    // NOP
    // 0x3598d8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3598D8u;
    {
        const bool branch_taken_0x3598d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3598DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3598D8u;
        // 0x3598dc: 0xe7a100b0  swc1        $f1, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3598d8) {
            ctx->pc = 0x359904u;
            goto label_359904;
        }
    }
    ctx->pc = 0x3598E0u;
    // 0x3598e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3598e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3598e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3598e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3598e8: 0x0  nop
    ctx->pc = 0x3598e8u;
    // NOP
    // 0x3598ec: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3598ecu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3598f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3598f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3598f4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3598f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3598f8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3598f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3598fc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3598fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359900: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x359900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_359904:
    // 0x359904: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x359904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x359908: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x359908u;
    SET_GPR_U32(ctx, 31, 0x359910u);
    ctx->pc = 0x35990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359908u;
    // 0x35990c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x359908u, 0x359910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359910u;
label_359910:
    // 0x359910: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x359910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359914: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x359914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x359918: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x359918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35991c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x35991cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x359920: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x359920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x359924: 0xc0779da  jal         func_1DE768
    ctx->pc = 0x359924u;
    SET_GPR_U32(ctx, 31, 0x35992Cu);
    ctx->pc = 0x359928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359924u;
    // 0x359928: 0xe7a00130  swc1        $f0, 0x130($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE768u, 0x359924u, 0x35992Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35992Cu;
label_35992c:
    // 0x35992c: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x35992Cu;
    {
        const bool branch_taken_0x35992c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35992c) {
            ctx->pc = 0x359930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35992Cu;
            // 0x359930: 0xaee091bc  sw          $zero, -0x6E44($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 4294939068), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359980u;
            goto label_359980;
        }
    }
    ctx->pc = 0x359934u;
    // 0x359934: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x359934u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359938: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x359938u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35993c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x35993cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359940: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x359940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359944: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x359944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359948: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x359948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35994c: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x35994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359950: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x359950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359954: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x359954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x359958: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x359958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x35995c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x35995cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x359960: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x359960u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x359964: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x359964u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x359968: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x359968u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35996c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x35996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x359970: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359974: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x359974u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359978: 0xa2340064  sb          $s4, 0x64($s1)
    ctx->pc = 0x359978u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 20));
    // 0x35997c: 0xaee091bc  sw          $zero, -0x6E44($s7)
    ctx->pc = 0x35997cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294939068), GPR_U32(ctx, 0));
label_359980:
    // 0x359980: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x359980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x359984: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x359984u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359988: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x359988u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35998c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x35998cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x359990: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x359990u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x359994: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x359994u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x359998: 0x4a0003bf  vwaitq
    ctx->pc = 0x359998u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x35999c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x35999cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3599a0: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x3599a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3599a4: 0x8e30005c  lw          $s0, 0x5C($s1)
    ctx->pc = 0x3599a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x3599a8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3599a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3599ac: 0x12150008  beq         $s0, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x3599ACu;
    {
        const bool branch_taken_0x3599ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x3599B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3599ACu;
        // 0x3599b0: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3599ac) {
            ctx->pc = 0x3599D0u;
            goto label_3599d0;
        }
    }
    ctx->pc = 0x3599B4u;
    // 0x3599b4: 0x544000cd  bnel        $v0, $zero, . + 4 + (0xCD << 2)
    ctx->pc = 0x3599B4u;
    {
        const bool branch_taken_0x3599b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3599b4) {
            ctx->pc = 0x3599B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3599B4u;
            // 0x3599b8: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359CECu;
            goto label_359cec;
        }
    }
    ctx->pc = 0x3599BCu;
    // 0x3599bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3599bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3599c0: 0x52020026  beql        $s0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3599C0u;
    {
        const bool branch_taken_0x3599c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x3599c0) {
            ctx->pc = 0x3599C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3599C0u;
            // 0x3599c4: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359A5Cu;
            goto label_359a5c;
        }
    }
    ctx->pc = 0x3599C8u;
    // 0x3599c8: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x3599C8u;
    {
        const bool branch_taken_0x3599c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3599CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3599C8u;
        // 0x3599cc: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3599c8) {
            ctx->pc = 0x359CECu;
            goto label_359cec;
        }
    }
    ctx->pc = 0x3599D0u;
label_3599d0:
    // 0x3599d0: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x3599d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x3599d4: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x3599d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x3599d8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3599D8u;
    {
        const bool branch_taken_0x3599d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3599DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3599D8u;
        // 0x3599dc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3599d8) {
            ctx->pc = 0x3599E4u;
            goto label_3599e4;
        }
    }
    ctx->pc = 0x3599E0u;
    // 0x3599e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3599e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3599e4:
    // 0x3599e4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x3599e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3599e8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x3599e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3599ec: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x3599ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3599f0: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x3599f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3599f4: 0xb2230077  sdl         $v1, 0x77($s1)
    ctx->pc = 0x3599f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3599f8: 0xb6230070  sdr         $v1, 0x70($s1)
    ctx->pc = 0x3599f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3599fc: 0xb225007f  sdl         $a1, 0x7F($s1)
    ctx->pc = 0x3599fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x359a00: 0xb6250078  sdr         $a1, 0x78($s1)
    ctx->pc = 0x359a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x359a04: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x359a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x359a08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x359a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x359a0c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x359A0Cu;
    {
        const bool branch_taken_0x359a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359a0c) {
            ctx->pc = 0x359A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359A0Cu;
            // 0x359a10: 0xc4410020  lwc1        $f1, 0x20($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x359A14u;
            goto label_359a14;
        }
    }
    ctx->pc = 0x359A14u;
label_359a14:
    // 0x359a14: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x359a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x359a18: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x359a18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x359a1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x359a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359a20: 0x92220064  lbu         $v0, 0x64($s1)
    ctx->pc = 0x359a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x359a24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x359a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x359a28: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x359A28u;
    {
        const bool branch_taken_0x359a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A28u;
        // 0x359a2c: 0xe6200040  swc1        $f0, 0x40($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x359a28) {
            ctx->pc = 0x359CE8u;
            goto label_359ce8;
        }
    }
    ctx->pc = 0x359A30u;
    // 0x359a30: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x359a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359a34: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x359a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359a38: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x359a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x359a3c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x359a3cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x359a40: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x359a40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x359a44: 0x4604231c  madd.s      $f12, $f4, $f4
    ctx->pc = 0x359a44u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x359a48: 0x460c0304  c1          0xC0304
    ctx->pc = 0x359a48u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x359a4c: 0xc099c5c  jal         func_267170
    ctx->pc = 0x359A4Cu;
    SET_GPR_U32(ctx, 31, 0x359A54u);
    ctx->pc = 0x267170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267170u, 0x359A4Cu, 0x359A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A54u;
label_359a54:
    // 0x359a54: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x359A54u;
    {
        const bool branch_taken_0x359a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A54u;
        // 0x359a58: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359a54) {
            ctx->pc = 0x359CECu;
            goto label_359cec;
        }
    }
    ctx->pc = 0x359A5Cu;
label_359a5c:
    // 0x359a5c: 0x8c540234  lw          $s4, 0x234($v0)
    ctx->pc = 0x359a5cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 564)));
    // 0x359a60: 0x8e8300bc  lw          $v1, 0xBC($s4)
    ctx->pc = 0x359a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x359a64: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x359a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x359a68: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x359a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x359a6c: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x359A6Cu;
    {
        const bool branch_taken_0x359a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359A6Cu;
        // 0x359a70: 0x3862020f  xori        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359a6c) {
            ctx->pc = 0x359B74u;
            goto label_359b74;
        }
    }
    ctx->pc = 0x359A74u;
    // 0x359a74: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x359a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x359a78: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x359a78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x359a7c: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x359A7Cu;
    SET_GPR_U32(ctx, 31, 0x359A84u);
    ctx->pc = 0x359A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359A7Cu;
    // 0x359a80: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x359A7Cu, 0x359A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A84u;
label_359a84:
    // 0x359a84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x359a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x359a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359a8c: 0xc0d6c4c  jal         func_35B130
    ctx->pc = 0x359A8Cu;
    SET_GPR_U32(ctx, 31, 0x359A94u);
    ctx->pc = 0x359A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359A8Cu;
    // 0x359a90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B130u, 0x359A8Cu, 0x359A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359A94u;
label_359a94:
    // 0x359a94: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x359a94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x359a98: 0x0  nop
    ctx->pc = 0x359a98u;
    // NOP
    // 0x359a9c: 0x45020093  bc1fl       . + 4 + (0x93 << 2)
    ctx->pc = 0x359A9Cu;
    {
        const bool branch_taken_0x359a9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x359a9c) {
            ctx->pc = 0x359AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359A9Cu;
            // 0x359aa0: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359CECu;
            goto label_359cec;
        }
    }
    ctx->pc = 0x359AA4u;
    // 0x359aa4: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x359AA4u;
    SET_GPR_U32(ctx, 31, 0x359AACu);
    ctx->pc = 0x359AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359AA4u;
    // 0x359aa8: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x359AA4u, 0x359AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359AACu;
label_359aac:
    // 0x359aac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x359aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x359ab0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x359AB0u;
    SET_GPR_U32(ctx, 31, 0x359AB8u);
    ctx->pc = 0x359AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359AB0u;
    // 0x359ab4: 0xae7591bc  sw          $s5, -0x6E44($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294939068), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x359AB0u, 0x359AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359AB8u;
label_359ab8:
    // 0x359ab8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x359AB8u;
    SET_GPR_U32(ctx, 31, 0x359AC0u);
    ctx->pc = 0x359ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359AB8u;
    // 0x359abc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x359AB8u, 0x359AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359AC0u;
label_359ac0:
    // 0x359ac0: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x359ac0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x359ac4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x359ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x359ac8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x359ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x359acc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x359accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x359ad0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x359ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x359ad4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x359ad4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x359ad8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x359ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x359adc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x359adcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x359ae0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x359ae0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x359ae4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x359ae4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359ae8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x359ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359aec: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x359aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359af0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x359af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359af4: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x359af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x359af8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x359af8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x359afc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x359afcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x359b00: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x359b00u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x359b04: 0x0  nop
    ctx->pc = 0x359b04u;
    // NOP
    // 0x359b08: 0x0  nop
    ctx->pc = 0x359b08u;
    // NOP
    // 0x359b0c: 0x46000044  c1          0x44
    ctx->pc = 0x359b0cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x359b10: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x359b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x359b14: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x359b14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x359b18: 0x0  nop
    ctx->pc = 0x359b18u;
    // NOP
    // 0x359b1c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x359B1Cu;
    {
        const bool branch_taken_0x359b1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x359B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359B1Cu;
        // 0x359b20: 0xe7a10090  swc1        $f1, 0x90($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x359b1c) {
            ctx->pc = 0x359B48u;
            goto label_359b48;
        }
    }
    ctx->pc = 0x359B24u;
    // 0x359b24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x359b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x359b28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x359b28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359b2c: 0x0  nop
    ctx->pc = 0x359b2cu;
    // NOP
    // 0x359b30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x359b30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x359b34: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x359b34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x359b38: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x359b38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359b3c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x359b3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x359b40: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x359b40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359b44: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x359b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_359b48:
    // 0x359b48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x359b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359b4c: 0xc07788a  jal         func_1DE228
    ctx->pc = 0x359B4Cu;
    SET_GPR_U32(ctx, 31, 0x359B54u);
    ctx->pc = 0x359B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B4Cu;
    // 0x359b50: 0x24050210  addiu       $a1, $zero, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x359B4Cu, 0x359B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B54u;
label_359b54:
    // 0x359b54: 0x54400064  bnel        $v0, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x359B54u;
    {
        const bool branch_taken_0x359b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359b54) {
            ctx->pc = 0x359B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359B54u;
            // 0x359b58: 0xae6091bc  sw          $zero, -0x6E44($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4294939068), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359CE8u;
            goto label_359ce8;
        }
    }
    ctx->pc = 0x359B5Cu;
    // 0x359b5c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x359b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x359b60: 0x2442a080  addiu       $v0, $v0, -0x5F80
    ctx->pc = 0x359b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942848));
    // 0x359b64: 0xac500fc8  sw          $s0, 0xFC8($v0)
    ctx->pc = 0x359b64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x48B048u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48B048u, _value); } while (0);
    // 0x359b68: 0xac540fcc  sw          $s4, 0xFCC($v0)
    ctx->pc = 0x359b68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x48B04Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48B04Cu, _value); } while (0);
    // 0x359b6c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x359B6Cu;
    {
        const bool branch_taken_0x359b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359B6Cu;
        // 0x359b70: 0xae6091bc  sw          $zero, -0x6E44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294939068), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359b6c) {
            ctx->pc = 0x359CE8u;
            goto label_359ce8;
        }
    }
    ctx->pc = 0x359B74u;
label_359b74:
    // 0x359b74: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x359B74u;
    {
        const bool branch_taken_0x359b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359B74u;
        // 0x359b78: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359b74) {
            ctx->pc = 0x359CECu;
            goto label_359cec;
        }
    }
    ctx->pc = 0x359B7Cu;
    // 0x359b7c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x359b7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x359b80: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x359b80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x359b84: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x359b84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359b88: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x359b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359b8c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x359b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359b90: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x359b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x359b94: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x359b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359b98: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x359b98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x359b9c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x359b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x359ba0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x359ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x359ba4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x359ba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x359ba8: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x359ba8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x359bac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x359bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x359bb0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x359BB0u;
    SET_GPR_U32(ctx, 31, 0x359BB8u);
    ctx->pc = 0x359BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359BB0u;
    // 0x359bb4: 0xe7a1004c  swc1        $f1, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x359BB0u, 0x359BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359BB8u;
label_359bb8:
    // 0x359bb8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x359BB8u;
    SET_GPR_U32(ctx, 31, 0x359BC0u);
    ctx->pc = 0x359BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359BB8u;
    // 0x359bbc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x359BB8u, 0x359BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359BC0u;
label_359bc0:
    // 0x359bc0: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x359bc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x359bc4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x359bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x359bc8: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x359bc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x359bcc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x359bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x359bd0: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x359bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x359bd4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x359bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x359bd8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x359bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x359bdc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x359bdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x359be0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x359be0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x359be4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x359be4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359be8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x359be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x359bec: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x359becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x359bf0: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x359bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x359bf4: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x359bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x359bf8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x359bf8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x359bfc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x359bfcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x359c00: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x359c00u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x359c04: 0x0  nop
    ctx->pc = 0x359c04u;
    // NOP
    // 0x359c08: 0x0  nop
    ctx->pc = 0x359c08u;
    // NOP
    // 0x359c0c: 0x46000044  c1          0x44
    ctx->pc = 0x359c0cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x359c10: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x359c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x359c14: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x359c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x359c18: 0x0  nop
    ctx->pc = 0x359c18u;
    // NOP
    // 0x359c1c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x359c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x359c20: 0x0  nop
    ctx->pc = 0x359c20u;
    // NOP
    // 0x359c24: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x359C24u;
    {
        const bool branch_taken_0x359c24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x359C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359C24u;
        // 0x359c28: 0xe7a100a0  swc1        $f1, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x359c24) {
            ctx->pc = 0x359C50u;
            goto label_359c50;
        }
    }
    ctx->pc = 0x359C2Cu;
    // 0x359c2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x359c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x359c30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x359c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359c34: 0x0  nop
    ctx->pc = 0x359c34u;
    // NOP
    // 0x359c38: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x359c38u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x359c3c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x359c3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x359c40: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x359c40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x359c44: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x359c44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x359c48: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x359c48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x359c4c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x359c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_359c50:
    // 0x359c50: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x359c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x359c54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x359c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359c58: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x359c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x359c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359c60: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x359C60u;
    SET_GPR_U32(ctx, 31, 0x359C68u);
    ctx->pc = 0x359C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359C60u;
    // 0x359c64: 0xe7a00134  swc1        $f0, 0x134($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x359C60u, 0x359C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359C68u;
label_359c68:
    // 0x359c68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x359c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359c6c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x359c6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359c70: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x359c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x359c74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x359c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359c78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x359c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359c7c: 0x27a90134  addiu       $t1, $sp, 0x134
    ctx->pc = 0x359c7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
    // 0x359c80: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x359c80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359c84: 0xc077940  jal         func_1DE500
    ctx->pc = 0x359C84u;
    SET_GPR_U32(ctx, 31, 0x359C8Cu);
    ctx->pc = 0x359C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359C84u;
    // 0x359c88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE500u, 0x359C84u, 0x359C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359C8Cu;
label_359c8c:
    // 0x359c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x359c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359c90: 0x0  nop
    ctx->pc = 0x359c90u;
    // NOP
    // 0x359c94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x359c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x359c98: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x359c98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x359c9c: 0x0  nop
    ctx->pc = 0x359c9cu;
    // NOP
    // 0x359ca0: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x359CA0u;
    {
        const bool branch_taken_0x359ca0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x359CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359CA0u;
        // 0x359ca4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359ca0) {
            ctx->pc = 0x359CE4u;
            goto label_359ce4;
        }
    }
    ctx->pc = 0x359CA8u;
    // 0x359ca8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x359ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x359cac: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x359cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x359cb0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x359CB0u;
    {
        const bool branch_taken_0x359cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359CB0u;
        // 0x359cb4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359cb0) {
            ctx->pc = 0x359CE4u;
            goto label_359ce4;
        }
    }
    ctx->pc = 0x359CB8u;
    // 0x359cb8: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x359cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x359cbc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x359CBCu;
    {
        const bool branch_taken_0x359cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x359CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359CBCu;
        // 0x359cc0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359cbc) {
            ctx->pc = 0x359CE8u;
            goto label_359ce8;
        }
    }
    ctx->pc = 0x359CC4u;
    // 0x359cc4: 0x8c62cae0  lw          $v0, -0x3520($v1)
    ctx->pc = 0x359cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953696)));
    // 0x359cc8: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x359CC8u;
    {
        const bool branch_taken_0x359cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x359CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359CC8u;
        // 0x359ccc: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359cc8) {
            ctx->pc = 0x359CECu;
            goto label_359cec;
        }
    }
    ctx->pc = 0x359CD0u;
    // 0x359cd0: 0xac64cae0  sw          $a0, -0x3520($v1)
    ctx->pc = 0x359cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953696), GPR_U32(ctx, 4));
    // 0x359cd4: 0xc0cda26  jal         func_336898
    ctx->pc = 0x359CD4u;
    SET_GPR_U32(ctx, 31, 0x359CDCu);
    ctx->pc = 0x359CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359CD4u;
    // 0x359cd8: 0x24050062  addiu       $a1, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x359CD4u, 0x359CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359CDCu;
label_359cdc:
    // 0x359cdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x359CDCu;
    {
        const bool branch_taken_0x359cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359CDCu;
        // 0x359ce0: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359cdc) {
            ctx->pc = 0x359CECu;
            goto label_359cec;
        }
    }
    ctx->pc = 0x359CE4u;
label_359ce4:
    // 0x359ce4: 0xac40cae0  sw          $zero, -0x3520($v0)
    ctx->pc = 0x359ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953696), GPR_U32(ctx, 0));
label_359ce8:
    // 0x359ce8: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x359ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_359cec:
    // 0x359cec: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x359cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x359cf0: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x359cf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x359cf4: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x359cf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x359cf8: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x359cf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x359cfc: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x359cfcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x359d00: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x359d00u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x359d04: 0xdfb70178  ld          $s7, 0x178($sp)
    ctx->pc = 0x359d04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x359d08: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x359d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x359d0c: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x359d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x359d10: 0x3e00008  jr          $ra
    ctx->pc = 0x359D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359D10u;
        // 0x359d14: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359D18u;
}
