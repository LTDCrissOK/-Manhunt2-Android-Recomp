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

// Function: sub_001F7CC8
// Address: 0x1f7cc8 - 0x1f7eb8
void sub_001F7CC8_0x1f7cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7CC8_0x1f7cc8");
#endif

    switch (ctx->pc) {
        case 0x1f7cfcu: goto label_1f7cfc;
        case 0x1f7d58u: goto label_1f7d58;
        case 0x1f7decu: goto label_1f7dec;
        case 0x1f7e20u: goto label_1f7e20;
        case 0x1f7e70u: goto label_1f7e70;
        default: break;
    }

    ctx->pc = 0x1f7cc8u;

    // 0x1f7cc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f7cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f7ccc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f7cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f7cd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7cd4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1f7cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1f7cd8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f7cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f7cdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f7cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ce0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f7ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f7ce4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1f7ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1f7ce8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1f7ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1f7cec: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1f7cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1f7cf0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1f7cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1f7cf4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F7CF4u;
    SET_GPR_U32(ctx, 31, 0x1F7CFCu);
    ctx->pc = 0x1F7CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7CF4u;
    // 0x1f7cf8: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F7CF4u, 0x1F7CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7CFCu;
label_1f7cfc:
    // 0x1f7cfc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f7cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f7d00: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x1f7d00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x1f7d04: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1F7D04u;
    {
        const bool branch_taken_0x1f7d04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D04u;
        // 0x1f7d08: 0x961600f4  lhu         $s6, 0xF4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d04) {
            ctx->pc = 0x1F7E8Cu;
            goto label_1f7e8c;
        }
    }
    ctx->pc = 0x1F7D0Cu;
    // 0x1f7d0c: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x1f7d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x1f7d10: 0x26020130  addiu       $v0, $s0, 0x130
    ctx->pc = 0x1f7d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1f7d14: 0xc6140110  lwc1        $f20, 0x110($s0)
    ctx->pc = 0x1f7d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f7d18: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f7d18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7d1c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f7d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f7d20: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x1f7d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7d24: 0x26150084  addiu       $s5, $s0, 0x84
    ctx->pc = 0x1f7d24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x1f7d28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f7d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f7d2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f7d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7d30: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f7d30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d34: 0x9203010c  lbu         $v1, 0x10C($s0)
    ctx->pc = 0x1f7d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1f7d38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f7d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f7d3c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1f7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f7d40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f7d44: 0x29982  srl         $s3, $v0, 6
    ctx->pc = 0x1f7d44u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1f7d48: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x1f7d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x1f7d4c: 0x13a102  srl         $s4, $s3, 4
    ctx->pc = 0x1f7d4cu;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 19), 4));
    // 0x1f7d50: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1f7d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1f7d54: 0x0  nop
    ctx->pc = 0x1f7d54u;
    // NOP
label_1f7d58:
    // 0x1f7d58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7d58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7d5c: 0x2a22021  addu        $a0, $s5, $v0
    ctx->pc = 0x1f7d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1f7d60: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1f7d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7d64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1f7d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7d68: 0x0  nop
    ctx->pc = 0x1f7d68u;
    // NOP
    // 0x1f7d6c: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x1F7D6Cu;
    {
        const bool branch_taken_0x1f7d6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D6Cu;
        // 0x1f7d70: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d6c) {
            ctx->pc = 0x1F7E70u;
            goto label_1f7e70;
        }
    }
    ctx->pc = 0x1F7D74u;
    // 0x1f7d74: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1f7d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1f7d78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f7d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7d7c: 0x0  nop
    ctx->pc = 0x1f7d7cu;
    // NOP
    // 0x1f7d80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f7d80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7d84: 0x0  nop
    ctx->pc = 0x1f7d84u;
    // NOP
    // 0x1f7d88: 0x4502003a  bc1fl       . + 4 + (0x3A << 2)
    ctx->pc = 0x1F7D88u;
    {
        const bool branch_taken_0x1f7d88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7d88) {
            ctx->pc = 0x1F7D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7D88u;
            // 0x1f7d8c: 0x325100ff  andi        $s1, $s2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7E74u;
            goto label_1f7e74;
        }
    }
    ctx->pc = 0x1F7D90u;
    // 0x1f7d90: 0xc60c0120  lwc1        $f12, 0x120($s0)
    ctx->pc = 0x1f7d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f7d94: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1f7d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7d98: 0x0  nop
    ctx->pc = 0x1f7d98u;
    // NOP
    // 0x1f7d9c: 0x45030035  bc1tl       . + 4 + (0x35 << 2)
    ctx->pc = 0x1F7D9Cu;
    {
        const bool branch_taken_0x1f7d9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f7d9c) {
            ctx->pc = 0x1F7DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7D9Cu;
            // 0x1f7da0: 0x325100ff  andi        $s1, $s2, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7E74u;
            goto label_1f7e74;
        }
    }
    ctx->pc = 0x1F7DA4u;
    // 0x1f7da4: 0x3c013e95  lui         $at, 0x3E95
    ctx->pc = 0x1f7da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16021 << 16));
    // 0x1f7da8: 0x34214568  ori         $at, $at, 0x4568
    ctx->pc = 0x1f7da8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17768);
    // 0x1f7dac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f7dacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7db0: 0x0  nop
    ctx->pc = 0x1f7db0u;
    // NOP
    // 0x1f7db4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1f7db4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f7db8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f7db8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f7dbc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1f7dbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f7dc0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1f7dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f7dc4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1f7dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f7dc8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1F7DC8u;
    {
        const bool branch_taken_0x1f7dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DC8u;
        // 0x1f7dcc: 0xa2030148  sb          $v1, 0x148($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7dc8) {
            ctx->pc = 0x1F7E70u;
            goto label_1f7e70;
        }
    }
    ctx->pc = 0x1F7DD0u;
    // 0x1f7dd0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1f7dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7dd4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f7dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7dd8: 0xa213011c  sb          $s3, 0x11C($s0)
    ctx->pc = 0x1f7dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 19));
    // 0x1f7ddc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7de0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1f7de0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x1f7de4: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x1F7DE4u;
    SET_GPR_U32(ctx, 31, 0x1F7DECu);
    ctx->pc = 0x1F7DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7DE4u;
    // 0x1f7de8: 0xe6000110  swc1        $f0, 0x110($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F7DE4u, 0x1F7DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7DECu;
label_1f7dec:
    // 0x1f7dec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1f7decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f7df0: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x1f7df0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f7df4: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F7DF4u;
    {
        const bool branch_taken_0x1f7df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7DF4u;
        // 0x1f7df8: 0xa202010c  sb          $v0, 0x10C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7df4) {
            ctx->pc = 0x1F7E70u;
            goto label_1f7e70;
        }
    }
    ctx->pc = 0x1F7DFCu;
    // 0x1f7dfc: 0x121200  sll         $v0, $s2, 8
    ctx->pc = 0x1f7dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x1f7e00: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1f7e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1f7e04: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1f7e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1f7e08: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7E08u;
    {
        const bool branch_taken_0x1f7e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E08u;
        // 0x1f7e0c: 0xa60200f4  sh          $v0, 0xF4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e08) {
            ctx->pc = 0x1F7E30u;
            goto label_1f7e30;
        }
    }
    ctx->pc = 0x1F7E10u;
    // 0x1f7e10: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x1f7e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x1f7e14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f7e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f7e18: 0xc07dd9a  jal         func_1F7668
    ctx->pc = 0x1F7E18u;
    SET_GPR_U32(ctx, 31, 0x1F7E20u);
    ctx->pc = 0x1F7E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E18u;
    // 0x1f7e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7668u, 0x1F7E18u, 0x1F7E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E20u;
label_1f7e20:
    // 0x1f7e20: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1f7e20u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1f7e24: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x1f7e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7e28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f7e28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f7e2c: 0xe6010108  swc1        $f1, 0x108($s0)
    ctx->pc = 0x1f7e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
label_1f7e30:
    // 0x1f7e30: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x1f7e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1f7e34: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1f7e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1f7e38: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1f7e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1f7e3c: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x1f7e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x1f7e40: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1f7e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1f7e44: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1f7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1f7e48: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x1f7e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x1f7e4c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f7e4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7e50: 0xfa010130  sqc2        $vf1, 0x130($s0)
    ctx->pc = 0x1f7e50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f7e54: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f7e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f7e58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f7e58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f7e5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7e60: 0xa2020170  sb          $v0, 0x170($s0)
    ctx->pc = 0x1f7e60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f7e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7e68: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F7E68u;
    SET_GPR_U32(ctx, 31, 0x1F7E70u);
    ctx->pc = 0x1F7E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7E68u;
    // 0x1f7e6c: 0xe600016c  swc1        $f0, 0x16C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F7E68u, 0x1F7E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7E70u;
label_1f7e70:
    // 0x1f7e70: 0x325100ff  andi        $s1, $s2, 0xFF
    ctx->pc = 0x1f7e70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_1f7e74:
    // 0x1f7e74: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x1f7e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f7e78: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
    ctx->pc = 0x1F7E78u;
    {
        const bool branch_taken_0x1f7e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7E78u;
        // 0x1f7e7c: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7e78) {
            ctx->pc = 0x1F7D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7d58;
        }
    }
    ctx->pc = 0x1F7E80u;
    // 0x1f7e80: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f7e80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7e84: 0xfa010130  sqc2        $vf1, 0x130($s0)
    ctx->pc = 0x1f7e84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f7e88: 0xe6140110  swc1        $f20, 0x110($s0)
    ctx->pc = 0x1f7e88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_1f7e8c:
    // 0x1f7e8c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f7e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7e90: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f7e90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7e94: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f7e94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7e98: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1f7e98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f7e9c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1f7e9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7ea0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1f7ea0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f7ea4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1f7ea4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7ea8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1f7ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f7eac: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1f7eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f7eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EB0u;
        // 0x1f7eb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7EB8u;
}
