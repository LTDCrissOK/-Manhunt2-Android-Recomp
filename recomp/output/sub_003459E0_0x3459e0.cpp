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

// Function: sub_003459E0
// Address: 0x3459e0 - 0x345bd8
void sub_003459E0_0x3459e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003459E0_0x3459e0");
#endif

    switch (ctx->pc) {
        case 0x345a5cu: goto label_345a5c;
        case 0x345ad8u: goto label_345ad8;
        case 0x345b50u: goto label_345b50;
        default: break;
    }

    ctx->pc = 0x3459e0u;

    // 0x3459e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3459e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3459e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3459e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3459e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3459e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3459ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3459ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3459f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3459f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3459f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3459f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3459f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3459f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3459fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3459fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a00: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x345a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x345a04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x345a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x345a08: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x345a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x345a0c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x345a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345a10: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x345a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345a14: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x345a14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x345a18: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x345a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345a1c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x345a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345a20: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x345a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x345a24: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x345a24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x345a28: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345a28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x345a2c: 0x44121800  mfc1        $s2, $f3
    ctx->pc = 0x345a2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x345a30: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x345a30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x345a34: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345a34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x345a38: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x345a38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x345a3c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345a3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x345a40: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x345a40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x345a44: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x345A44u;
    {
        const bool branch_taken_0x345a44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x345A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A44u;
        // 0x345a48: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a44) {
            ctx->pc = 0x345A54u;
            goto label_345a54;
        }
    }
    ctx->pc = 0x345A4Cu;
    // 0x345a4c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x345A4Cu;
    {
        const bool branch_taken_0x345a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A4Cu;
        // 0x345a50: 0xe6250000  swc1        $f5, 0x0($s1) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a4c) {
            ctx->pc = 0x345AC0u;
            goto label_345ac0;
        }
    }
    ctx->pc = 0x345A54u;
label_345a54:
    // 0x345a54: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x345A54u;
    SET_GPR_U32(ctx, 31, 0x345A5Cu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x345A54u, 0x345A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A5Cu;
label_345a5c:
    // 0x345a5c: 0x304303ff  andi        $v1, $v0, 0x3FF
    ctx->pc = 0x345a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x345a60: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x345A60u;
    {
        const bool branch_taken_0x345a60 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x345A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A60u;
        // 0x345a64: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a60) {
            ctx->pc = 0x345A7Cu;
            goto label_345a7c;
        }
    }
    ctx->pc = 0x345A68u;
    // 0x345a68: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x345a68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x345a6c: 0x0  nop
    ctx->pc = 0x345a6cu;
    // NOP
    // 0x345a70: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x345a70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x345a74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x345A74u;
    {
        const bool branch_taken_0x345a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345a74) {
            ctx->pc = 0x345A94u;
            goto label_345a94;
        }
    }
    ctx->pc = 0x345A7Cu;
label_345a7c:
    // 0x345a7c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x345a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x345a80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x345a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x345a84: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x345a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x345a88: 0x0  nop
    ctx->pc = 0x345a88u;
    // NOP
    // 0x345a8c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x345a8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x345a90: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x345a90u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_345a94:
    // 0x345a94: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x345a94u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345a98: 0x0  nop
    ctx->pc = 0x345a98u;
    // NOP
    // 0x345a9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345a9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x345aa0: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x345aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x345aa4: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x345aa4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x345aa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x345aa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345aac: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x345aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345ab0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x345ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x345ab4: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x345ab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x345ab8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x345ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x345abc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x345abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_345ac0:
    // 0x345ac0: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x345AC0u;
    {
        const bool branch_taken_0x345ac0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x345ac0) {
            ctx->pc = 0x345AD0u;
            goto label_345ad0;
        }
    }
    ctx->pc = 0x345AC8u;
    // 0x345ac8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x345AC8u;
    {
        const bool branch_taken_0x345ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345AC8u;
        // 0x345acc: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ac8) {
            ctx->pc = 0x345B38u;
            goto label_345b38;
        }
    }
    ctx->pc = 0x345AD0u;
label_345ad0:
    // 0x345ad0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x345AD0u;
    SET_GPR_U32(ctx, 31, 0x345AD8u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x345AD0u, 0x345AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345AD8u;
label_345ad8:
    // 0x345ad8: 0x304303ff  andi        $v1, $v0, 0x3FF
    ctx->pc = 0x345ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x345adc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x345ADCu;
    {
        const bool branch_taken_0x345adc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x345AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345ADCu;
        // 0x345ae0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x345adc) {
            ctx->pc = 0x345AF8u;
            goto label_345af8;
        }
    }
    ctx->pc = 0x345AE4u;
    // 0x345ae4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x345ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x345ae8: 0x0  nop
    ctx->pc = 0x345ae8u;
    // NOP
    // 0x345aec: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x345aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x345af0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x345AF0u;
    {
        const bool branch_taken_0x345af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345af0) {
            ctx->pc = 0x345B10u;
            goto label_345b10;
        }
    }
    ctx->pc = 0x345AF8u;
label_345af8:
    // 0x345af8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x345af8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x345afc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x345afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x345b00: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x345b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x345b04: 0x0  nop
    ctx->pc = 0x345b04u;
    // NOP
    // 0x345b08: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x345b08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x345b0c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x345b0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_345b10:
    // 0x345b10: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x345b10u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345b14: 0x0  nop
    ctx->pc = 0x345b14u;
    // NOP
    // 0x345b18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345b18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x345b1c: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x345b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x345b20: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x345b20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x345b24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x345b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345b28: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x345b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345b2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x345b2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x345b30: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x345b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x345b34: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x345b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_345b38:
    // 0x345b38: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x345B38u;
    {
        const bool branch_taken_0x345b38 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x345B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B38u;
        // 0x345b3c: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b38) {
            ctx->pc = 0x345B48u;
            goto label_345b48;
        }
    }
    ctx->pc = 0x345B40u;
    // 0x345b40: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x345B40u;
    {
        const bool branch_taken_0x345b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B40u;
        // 0x345b44: 0xc6600008  lwc1        $f0, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b40) {
            ctx->pc = 0x345BB0u;
            goto label_345bb0;
        }
    }
    ctx->pc = 0x345B48u;
label_345b48:
    // 0x345b48: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x345B48u;
    SET_GPR_U32(ctx, 31, 0x345B50u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x345B48u, 0x345B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345B50u;
label_345b50:
    // 0x345b50: 0x304303ff  andi        $v1, $v0, 0x3FF
    ctx->pc = 0x345b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x345b54: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x345B54u;
    {
        const bool branch_taken_0x345b54 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x345B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B54u;
        // 0x345b58: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b54) {
            ctx->pc = 0x345B70u;
            goto label_345b70;
        }
    }
    ctx->pc = 0x345B5Cu;
    // 0x345b5c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x345b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x345b60: 0x0  nop
    ctx->pc = 0x345b60u;
    // NOP
    // 0x345b64: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x345b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x345b68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x345B68u;
    {
        const bool branch_taken_0x345b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x345b68) {
            ctx->pc = 0x345B88u;
            goto label_345b88;
        }
    }
    ctx->pc = 0x345B70u;
label_345b70:
    // 0x345b70: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x345b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x345b74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x345b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x345b78: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x345b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x345b7c: 0x0  nop
    ctx->pc = 0x345b7cu;
    // NOP
    // 0x345b80: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x345b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x345b84: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x345b84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_345b88:
    // 0x345b88: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x345b88u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345b8c: 0x0  nop
    ctx->pc = 0x345b8cu;
    // NOP
    // 0x345b90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x345b94: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x345b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x345b98: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x345b98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x345b9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x345b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345ba0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x345ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345ba4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x345ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x345ba8: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x345ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x345bac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x345bacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_345bb0:
    // 0x345bb0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x345bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x345bb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345bb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345bb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345bbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x345bbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345bc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x345bc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345bc4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x345bc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345bc8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x345bc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345bcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x345bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x345bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x345BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345BD0u;
        // 0x345bd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345BD8u;
}
