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

// Function: sub_003079F8
// Address: 0x3079f8 - 0x307bd0
void sub_003079F8_0x3079f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003079F8_0x3079f8");
#endif

    switch (ctx->pc) {
        case 0x307a7cu: goto label_307a7c;
        case 0x307a8cu: goto label_307a8c;
        case 0x307a9cu: goto label_307a9c;
        case 0x307ac0u: goto label_307ac0;
        case 0x307ac8u: goto label_307ac8;
        case 0x307b1cu: goto label_307b1c;
        case 0x307b2cu: goto label_307b2c;
        case 0x307b3cu: goto label_307b3c;
        case 0x307b4cu: goto label_307b4c;
        case 0x307b64u: goto label_307b64;
        case 0x307b6cu: goto label_307b6c;
        case 0x307b80u: goto label_307b80;
        case 0x307b90u: goto label_307b90;
        case 0x307bb0u: goto label_307bb0;
        case 0x307bb8u: goto label_307bb8;
        default: break;
    }

    ctx->pc = 0x3079f8u;

    // 0x3079f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3079f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3079fc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3079fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x307a00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x307a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x307a04: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x307a04u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x307a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x307a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x307a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x307a10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x307a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x307a14: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x307A14u;
    {
        const bool branch_taken_0x307a14 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x307A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307A14u;
        // 0x307a18: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307a14) {
            ctx->pc = 0x307A30u;
            goto label_307a30;
        }
    }
    ctx->pc = 0x307A1Cu;
    // 0x307a1c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x307a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x307a20: 0x0  nop
    ctx->pc = 0x307a20u;
    // NOP
    // 0x307a24: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x307a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x307a28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x307A28u;
    {
        const bool branch_taken_0x307a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a28) {
            ctx->pc = 0x307A4Cu;
            goto label_307a4c;
        }
    }
    ctx->pc = 0x307A30u;
label_307a30:
    // 0x307a30: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x307a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x307a34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x307a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x307a38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x307a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x307a3c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x307a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x307a40: 0x0  nop
    ctx->pc = 0x307a40u;
    // NOP
    // 0x307a44: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x307a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x307a48: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x307a48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_307a4c:
    // 0x307a4c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x307a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x307a50: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x307a50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x307a54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x307a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x307a58: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x307a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x307a5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x307a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x307a60: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x307a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x307a64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x307a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x307a68: 0x0  nop
    ctx->pc = 0x307a68u;
    // NOP
    // 0x307a6c: 0x45030053  bc1tl       . + 4 + (0x53 << 2)
    ctx->pc = 0x307A6Cu;
    {
        const bool branch_taken_0x307a6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x307a6c) {
            ctx->pc = 0x307A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307A6Cu;
            // 0x307a70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307BBCu;
            goto label_307bbc;
        }
    }
    ctx->pc = 0x307A74u;
    // 0x307a74: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x307A74u;
    SET_GPR_U32(ctx, 31, 0x307A7Cu);
    ctx->pc = 0x307A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307A74u;
    // 0x307a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x307A74u, 0x307A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307A7Cu;
label_307a7c:
    // 0x307a7c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x307A7Cu;
    {
        const bool branch_taken_0x307a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a7c) {
            ctx->pc = 0x307BB0u;
            goto label_307bb0;
        }
    }
    ctx->pc = 0x307A84u;
    // 0x307a84: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x307A84u;
    SET_GPR_U32(ctx, 31, 0x307A8Cu);
    ctx->pc = 0x307A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307A84u;
    // 0x307a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x307A84u, 0x307A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307A8Cu;
label_307a8c:
    // 0x307a8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x307a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a90: 0x8e320274  lw          $s2, 0x274($s1)
    ctx->pc = 0x307a90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x307a94: 0xc097f90  jal         func_25FE40
    ctx->pc = 0x307A94u;
    SET_GPR_U32(ctx, 31, 0x307A9Cu);
    ctx->pc = 0x307A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307A94u;
    // 0x307a98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FE40u, 0x307A94u, 0x307A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307A9Cu;
label_307a9c:
    // 0x307a9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x307A9Cu;
    {
        const bool branch_taken_0x307a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307a9c) {
            ctx->pc = 0x307AC0u;
            goto label_307ac0;
        }
    }
    ctx->pc = 0x307AA4u;
    // 0x307aa4: 0x8e24025c  lw          $a0, 0x25C($s1)
    ctx->pc = 0x307aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x307aa8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x307AA8u;
    {
        const bool branch_taken_0x307aa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x307aa8) {
            ctx->pc = 0x307AC0u;
            goto label_307ac0;
        }
    }
    ctx->pc = 0x307AB0u;
    // 0x307ab0: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x307ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x307ab4: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x307ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x307ab8: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x307AB8u;
    SET_GPR_U32(ctx, 31, 0x307AC0u);
    ctx->pc = 0x307ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307AB8u;
    // 0x307abc: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x307AB8u, 0x307AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307AC0u;
label_307ac0:
    // 0x307ac0: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x307AC0u;
    SET_GPR_U32(ctx, 31, 0x307AC8u);
    ctx->pc = 0x307AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307AC0u;
    // 0x307ac4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x307AC0u, 0x307AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307AC8u;
label_307ac8:
    // 0x307ac8: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x307ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x307acc: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x307ACCu;
    {
        const bool branch_taken_0x307acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307acc) {
            ctx->pc = 0x307BB0u;
            goto label_307bb0;
        }
    }
    ctx->pc = 0x307AD4u;
    // 0x307ad4: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x307ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x307ad8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x307ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x307adc: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x307ADCu;
    {
        const bool branch_taken_0x307adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307adc) {
            ctx->pc = 0x307AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307ADCu;
            // 0x307ae0: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307B94u;
            goto label_307b94;
        }
    }
    ctx->pc = 0x307AE4u;
    // 0x307ae4: 0x8e050338  lw          $a1, 0x338($s0)
    ctx->pc = 0x307ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x307ae8: 0x8ca40088  lw          $a0, 0x88($a1)
    ctx->pc = 0x307ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x307aec: 0x38820003  xori        $v0, $a0, 0x3
    ctx->pc = 0x307aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
    // 0x307af0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x307AF0u;
    {
        const bool branch_taken_0x307af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307AF0u;
        // 0x307af4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307af0) {
            ctx->pc = 0x307B0Cu;
            goto label_307b0c;
        }
    }
    ctx->pc = 0x307AF8u;
    // 0x307af8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x307af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x307afc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x307afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x307b00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x307b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307b04: 0x28630046  slti        $v1, $v1, 0x46
    ctx->pc = 0x307b04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x307b08: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x307b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_307b0c:
    // 0x307b0c: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x307B0Cu;
    {
        const bool branch_taken_0x307b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x307b0c) {
            ctx->pc = 0x307B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307B0Cu;
            // 0x307b10: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307B94u;
            goto label_307b94;
        }
    }
    ctx->pc = 0x307B14u;
    // 0x307b14: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x307B14u;
    SET_GPR_U32(ctx, 31, 0x307B1Cu);
    ctx->pc = 0x307B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B14u;
    // 0x307b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x307B14u, 0x307B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B1Cu;
label_307b1c:
    // 0x307b1c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x307B1Cu;
    {
        const bool branch_taken_0x307b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B1Cu;
        // 0x307b20: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307b1c) {
            ctx->pc = 0x307B88u;
            goto label_307b88;
        }
    }
    ctx->pc = 0x307B24u;
    // 0x307b24: 0xc0f7da4  jal         func_3DF690
    ctx->pc = 0x307B24u;
    SET_GPR_U32(ctx, 31, 0x307B2Cu);
    ctx->pc = 0x307B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B24u;
    // 0x307b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x307B24u, 0x307B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B2Cu;
label_307b2c:
    // 0x307b2c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x307B2Cu;
    {
        const bool branch_taken_0x307b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307b2c) {
            ctx->pc = 0x307B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307B2Cu;
            // 0x307b30: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307B54u;
            goto label_307b54;
        }
    }
    ctx->pc = 0x307B34u;
    // 0x307b34: 0xc0f7da0  jal         func_3DF680
    ctx->pc = 0x307B34u;
    SET_GPR_U32(ctx, 31, 0x307B3Cu);
    ctx->pc = 0x307B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B34u;
    // 0x307b38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x307B34u, 0x307B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B3Cu;
label_307b3c:
    // 0x307b3c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x307B3Cu;
    {
        const bool branch_taken_0x307b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307b3c) {
            ctx->pc = 0x307B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307B3Cu;
            // 0x307b40: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307B54u;
            goto label_307b54;
        }
    }
    ctx->pc = 0x307B44u;
    // 0x307b44: 0xc0f7da8  jal         func_3DF6A0
    ctx->pc = 0x307B44u;
    SET_GPR_U32(ctx, 31, 0x307B4Cu);
    ctx->pc = 0x307B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B44u;
    // 0x307b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x307B44u, 0x307B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B4Cu;
label_307b4c:
    // 0x307b4c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x307B4Cu;
    {
        const bool branch_taken_0x307b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307b4c) {
            ctx->pc = 0x307B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307B4Cu;
            // 0x307b50: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307B54u;
            goto label_307b54;
        }
    }
    ctx->pc = 0x307B54u;
label_307b54:
    // 0x307b54: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x307B54u;
    {
        const bool branch_taken_0x307b54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x307b54) {
            ctx->pc = 0x307B88u;
            goto label_307b88;
        }
    }
    ctx->pc = 0x307B5Cu;
    // 0x307b5c: 0xc0a03d0  jal         func_280F40
    ctx->pc = 0x307B5Cu;
    SET_GPR_U32(ctx, 31, 0x307B64u);
    ctx->pc = 0x280F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F40u, 0x307B5Cu, 0x307B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B64u;
label_307b64:
    // 0x307b64: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x307B64u;
    SET_GPR_U32(ctx, 31, 0x307B6Cu);
    ctx->pc = 0x307B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B64u;
    // 0x307b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x307B64u, 0x307B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B6Cu;
label_307b6c:
    // 0x307b6c: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x307b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x307b70: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x307B70u;
    {
        const bool branch_taken_0x307b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x307b70) {
            ctx->pc = 0x307B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307B70u;
            // 0x307b74: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x307B94u;
            goto label_307b94;
        }
    }
    ctx->pc = 0x307B78u;
    // 0x307b78: 0xc0a03dc  jal         func_280F70
    ctx->pc = 0x307B78u;
    SET_GPR_U32(ctx, 31, 0x307B80u);
    ctx->pc = 0x307B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B78u;
    // 0x307b7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F70u, 0x307B78u, 0x307B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B80u;
label_307b80:
    // 0x307b80: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x307B80u;
    {
        const bool branch_taken_0x307b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x307B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307B80u;
        // 0x307b84: 0x8e030334  lw          $v1, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307b80) {
            ctx->pc = 0x307B94u;
            goto label_307b94;
        }
    }
    ctx->pc = 0x307B88u;
label_307b88:
    // 0x307b88: 0xc0a03bc  jal         func_280EF0
    ctx->pc = 0x307B88u;
    SET_GPR_U32(ctx, 31, 0x307B90u);
    ctx->pc = 0x307B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307B88u;
    // 0x307b8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280EF0u, 0x307B88u, 0x307B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307B90u;
label_307b90:
    // 0x307b90: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x307b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_307b94:
    // 0x307b94: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x307b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x307b98: 0x2442ffcf  addiu       $v0, $v0, -0x31
    ctx->pc = 0x307b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x307b9c: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x307b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x307ba0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x307BA0u;
    {
        const bool branch_taken_0x307ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x307BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BA0u;
        // 0x307ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307ba0) {
            ctx->pc = 0x307BB0u;
            goto label_307bb0;
        }
    }
    ctx->pc = 0x307BA8u;
    // 0x307ba8: 0xc08a15a  jal         func_228568
    ctx->pc = 0x307BA8u;
    SET_GPR_U32(ctx, 31, 0x307BB0u);
    ctx->pc = 0x307BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307BA8u;
    // 0x307bac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x307BA8u, 0x307BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307BB0u;
label_307bb0:
    // 0x307bb0: 0xc090d68  jal         func_2435A0
    ctx->pc = 0x307BB0u;
    SET_GPR_U32(ctx, 31, 0x307BB8u);
    ctx->pc = 0x307BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307BB0u;
    // 0x307bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2435A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2435A0u, 0x307BB0u, 0x307BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x307BB8u;
label_307bb8:
    // 0x307bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x307bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_307bbc:
    // 0x307bbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x307bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x307bc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x307bc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307bc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x307bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x307bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x307BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307BC8u;
        // 0x307bcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307BD0u;
}
