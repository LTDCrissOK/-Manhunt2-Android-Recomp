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

// Function: sub_00326D08
// Address: 0x326d08 - 0x326f50
void sub_00326D08_0x326d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326D08_0x326d08");
#endif

    switch (ctx->pc) {
        case 0x326d34u: goto label_326d34;
        case 0x326e60u: goto label_326e60;
        case 0x326e78u: goto label_326e78;
        case 0x326ed8u: goto label_326ed8;
        case 0x326f20u: goto label_326f20;
        case 0x326f30u: goto label_326f30;
        default: break;
    }

    ctx->pc = 0x326d08u;

    // 0x326d08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x326d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x326d0c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x326d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x326d10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x326d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x326d14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x326d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326d18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x326d18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326d1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x326d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x326d20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326d24: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x326d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x326d28: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x326d28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x326d2c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x326D2Cu;
    SET_GPR_U32(ctx, 31, 0x326D34u);
    ctx->pc = 0x326D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326D2Cu;
    // 0x326d30: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x326D2Cu, 0x326D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326D34u;
label_326d34:
    // 0x326d34: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x326d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x326d38: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x326d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x326d3c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x326d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x326d40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x326d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x326d44: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x326d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x326d48: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x326d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x326d4c: 0x8c432b00  lw          $v1, 0x2B00($v0)
    ctx->pc = 0x326d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B00u));
    // 0x326d50: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x326d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x326d54: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x326d54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x326d58: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x326d58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x326d5c: 0x82100a  movz        $v0, $a0, $v0
    ctx->pc = 0x326d5cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x326d60: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x326d60u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x326d64: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x326D64u;
    {
        const bool branch_taken_0x326d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326d64) {
            ctx->pc = 0x326D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326D64u;
            // 0x326d68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x326D6Cu;
            goto label_326d6c;
        }
    }
    ctx->pc = 0x326D6Cu;
label_326d6c:
    // 0x326d6c: 0x8cc40018  lw          $a0, 0x18($a2)
    ctx->pc = 0x326d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x326d70: 0x1812  mflo        $v1
    ctx->pc = 0x326d70u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x326d74: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x326D74u;
    {
        const bool branch_taken_0x326d74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x326D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D74u;
        // 0x326d78: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d74) {
            ctx->pc = 0x326D88u;
            goto label_326d88;
        }
    }
    ctx->pc = 0x326D7Cu;
    // 0x326d7c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x326d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x326d80: 0x8c432c78  lw          $v1, 0x2C78($v0)
    ctx->pc = 0x326d80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482C78u));
    // 0x326d84: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x326d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_326d88:
    // 0x326d88: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x326d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x326d8c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x326d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x326d90: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x326d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x326d94: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x326d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x326d98: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x326d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x326d9c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x326d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x326da0: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x326DA0u;
    {
        const bool branch_taken_0x326da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x326DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DA0u;
        // 0x326da4: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326da0) {
            ctx->pc = 0x326E50u;
            goto label_326e50;
        }
    }
    ctx->pc = 0x326DA8u;
    // 0x326da8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x326da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x326dac: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x326dacu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x326db0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x326DB0u;
    {
        const bool branch_taken_0x326db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326db0) {
            ctx->pc = 0x326DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326DB0u;
            // 0x326db4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x326DB8u;
            goto label_326db8;
        }
    }
    ctx->pc = 0x326DB8u;
label_326db8:
    // 0x326db8: 0x1810  mfhi        $v1
    ctx->pc = 0x326db8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x326dbc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x326dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326dc0: 0x205202b  sltu        $a0, $s0, $a1
    ctx->pc = 0x326dc0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x326dc4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x326dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x326dc8: 0x44800a  movz        $s0, $v0, $a0
    ctx->pc = 0x326dc8u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x326dcc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x326DCCu;
    {
        const bool branch_taken_0x326dcc = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x326DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DCCu;
        // 0x326dd0: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326dcc) {
            ctx->pc = 0x326DE8u;
            goto label_326de8;
        }
    }
    ctx->pc = 0x326DD4u;
    // 0x326dd4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x326dd4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x326dd8: 0x0  nop
    ctx->pc = 0x326dd8u;
    // NOP
    // 0x326ddc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x326ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x326de0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x326DE0u;
    {
        const bool branch_taken_0x326de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DE0u;
        // 0x326de4: 0xc4c0000c  lwc1        $f0, 0xC($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x326de0) {
            ctx->pc = 0x326E04u;
            goto label_326e04;
        }
    }
    ctx->pc = 0x326DE8u;
label_326de8:
    // 0x326de8: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x326de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x326dec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x326decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x326df0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x326df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x326df4: 0x0  nop
    ctx->pc = 0x326df4u;
    // NOP
    // 0x326df8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x326df8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x326dfc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x326dfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x326e00: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x326e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_326e04:
    // 0x326e04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x326e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x326e08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x326e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x326e0c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x326E0Cu;
    {
        const bool branch_taken_0x326e0c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x326E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E0Cu;
        // 0x326e10: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e0c) {
            ctx->pc = 0x326E28u;
            goto label_326e28;
        }
    }
    ctx->pc = 0x326E14u;
    // 0x326e14: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x326e14u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x326e18: 0x0  nop
    ctx->pc = 0x326e18u;
    // NOP
    // 0x326e1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x326e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x326e20: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x326E20u;
    {
        const bool branch_taken_0x326e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E20u;
        // 0x326e24: 0xc4800010  lwc1        $f0, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e20) {
            ctx->pc = 0x326E48u;
            goto label_326e48;
        }
    }
    ctx->pc = 0x326E28u;
label_326e28:
    // 0x326e28: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x326e28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x326e2c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x326e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x326e30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x326e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x326e34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x326e34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x326e38: 0x0  nop
    ctx->pc = 0x326e38u;
    // NOP
    // 0x326e3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x326e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x326e40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x326e40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x326e44: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x326e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_326e48:
    // 0x326e48: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x326E48u;
    {
        const bool branch_taken_0x326e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E48u;
        // 0x326e4c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e48) {
            ctx->pc = 0x326F20u;
            goto label_326f20;
        }
    }
    ctx->pc = 0x326E50u;
label_326e50:
    // 0x326e50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x326e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x326e54: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x326e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x326e58: 0xc0e40f4  jal         func_3903D0
    ctx->pc = 0x326E58u;
    SET_GPR_U32(ctx, 31, 0x326E60u);
    ctx->pc = 0x326E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326E58u;
    // 0x326e5c: 0xc4cc000c  lwc1        $f12, 0xC($a2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3903D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3903D0u, 0x326E58u, 0x326E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326E60u;
label_326e60:
    // 0x326e60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x326e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x326e64: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x326e64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x326e68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x326e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x326e6c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x326e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x326e70: 0xc0e40f4  jal         func_3903D0
    ctx->pc = 0x326E70u;
    SET_GPR_U32(ctx, 31, 0x326E78u);
    ctx->pc = 0x326E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326E70u;
    // 0x326e74: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3903D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3903D0u, 0x326E70u, 0x326E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326E78u;
label_326e78:
    // 0x326e78: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x326e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x326e7c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x326e7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x326e80: 0x34424240  ori         $v0, $v0, 0x4240
    ctx->pc = 0x326e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16960);
    // 0x326e84: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x326e84u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x326e88: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x326E88u;
    {
        const bool branch_taken_0x326e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326e88) {
            ctx->pc = 0x326E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326E88u;
            // 0x326e8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x326E90u;
            goto label_326e90;
        }
    }
    ctx->pc = 0x326E90u;
label_326e90:
    // 0x326e90: 0x8010  mfhi        $s0
    ctx->pc = 0x326e90u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x326e94: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x326E94u;
    {
        const bool branch_taken_0x326e94 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x326E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E94u;
        // 0x326e98: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e94) {
            ctx->pc = 0x326EB0u;
            goto label_326eb0;
        }
    }
    ctx->pc = 0x326E9Cu;
    // 0x326e9c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x326e9cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326ea0: 0x0  nop
    ctx->pc = 0x326ea0u;
    // NOP
    // 0x326ea4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x326ea4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x326ea8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x326EA8u;
    {
        const bool branch_taken_0x326ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326ea8) {
            ctx->pc = 0x326EC8u;
            goto label_326ec8;
        }
    }
    ctx->pc = 0x326EB0u;
label_326eb0:
    // 0x326eb0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x326eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x326eb4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x326eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x326eb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x326eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326ebc: 0x0  nop
    ctx->pc = 0x326ebcu;
    // NOP
    // 0x326ec0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x326ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x326ec4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x326ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_326ec8:
    // 0x326ec8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x326ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x326ecc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x326eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x326ed0: 0xc0e40f4  jal         func_3903D0
    ctx->pc = 0x326ED0u;
    SET_GPR_U32(ctx, 31, 0x326ED8u);
    ctx->pc = 0x326ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326ED0u;
    // 0x326ed4: 0x4600a302  mul.s       $f12, $f20, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3903D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3903D0u, 0x326ED0u, 0x326ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326ED8u;
label_326ed8:
    // 0x326ed8: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x326ED8u;
    {
        const bool branch_taken_0x326ed8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x326EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326ED8u;
        // 0x326edc: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x326ed8) {
            ctx->pc = 0x326EF4u;
            goto label_326ef4;
        }
    }
    ctx->pc = 0x326EE0u;
    // 0x326ee0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x326ee0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326ee4: 0x0  nop
    ctx->pc = 0x326ee4u;
    // NOP
    // 0x326ee8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x326ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x326eec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x326EECu;
    {
        const bool branch_taken_0x326eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326eec) {
            ctx->pc = 0x326F10u;
            goto label_326f10;
        }
    }
    ctx->pc = 0x326EF4u;
label_326ef4:
    // 0x326ef4: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x326ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x326ef8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x326ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x326efc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x326efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x326f00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x326f00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x326f04: 0x0  nop
    ctx->pc = 0x326f04u;
    // NOP
    // 0x326f08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x326f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x326f0c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x326f0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_326f10:
    // 0x326f10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x326f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x326f14: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x326f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x326f18: 0xc0e40f4  jal         func_3903D0
    ctx->pc = 0x326F18u;
    SET_GPR_U32(ctx, 31, 0x326F20u);
    ctx->pc = 0x326F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F18u;
    // 0x326f1c: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3903D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3903D0u, 0x326F18u, 0x326F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F20u;
label_326f20:
    // 0x326f20: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x326f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x326f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x326f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326f28: 0xc0b1620  jal         func_2C5880
    ctx->pc = 0x326F28u;
    SET_GPR_U32(ctx, 31, 0x326F30u);
    ctx->pc = 0x326F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326F28u;
    // 0x326f2c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5880u, 0x326F28u, 0x326F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326F30u;
label_326f30:
    // 0x326f30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x326f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326f34: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x326f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x326f38: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x326f38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326f3c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x326f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x326f40: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x326f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x326f44: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x326f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x326f48: 0x3e00008  jr          $ra
    ctx->pc = 0x326F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326F48u;
        // 0x326f4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326F50u;
}
