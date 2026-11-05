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

// Function: sub_002C0DC0
// Address: 0x2c0dc0 - 0x2c1100
void sub_002C0DC0_0x2c0dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0DC0_0x2c0dc0");
#endif

    switch (ctx->pc) {
        case 0x2c0df8u: goto label_2c0df8;
        case 0x2c0f88u: goto label_2c0f88;
        case 0x2c1020u: goto label_2c1020;
        case 0x2c10b0u: goto label_2c10b0;
        default: break;
    }

    ctx->pc = 0x2c0dc0u;

    // 0x2c0dc0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c0dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0dc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0dc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0dc8: 0x90e60004  lbu         $a2, 0x4($a3)
    ctx->pc = 0x2c0dc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0dcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0dd0: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x2c0dd0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0dd4: 0x14820019  bne         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C0DD4u;
    {
        const bool branch_taken_0x2c0dd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DD4u;
        // 0x2c0dd8: 0xe7ac0000  swc1        $f12, 0x0($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0dd4) {
            ctx->pc = 0x2C0E3Cu;
            goto label_2c0e3c;
        }
    }
    ctx->pc = 0x2C0DDCu;
    // 0x2c0ddc: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c0ddcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c0de0: 0x184000c5  blez        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x2C0DE0u;
    {
        const bool branch_taken_0x2c0de0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C0DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DE0u;
        // 0x2c0de4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0de0) {
            ctx->pc = 0x2C10F8u;
            goto label_2c10f8;
        }
    }
    ctx->pc = 0x2C0DE8u;
    // 0x2c0de8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2c0de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2c0dec: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2c0decu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2c0df0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c0df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0df4: 0x0  nop
    ctx->pc = 0x2c0df4u;
    // NOP
label_2c0df8:
    // 0x2c0df8: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2c0df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c0dfc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c0dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c0e00: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c0e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c0e04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c0e08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c0e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0e0c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x2c0e0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0e10: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c0e10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0e14: 0x0  nop
    ctx->pc = 0x2c0e14u;
    // NOP
    // 0x2c0e18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0e1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c0e1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0e20: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2c0e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2c0e24: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c0e24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c0e28: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c0e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0e2c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2C0E2Cu;
    {
        const bool branch_taken_0x2c0e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E2Cu;
        // 0x2c0e30: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e2c) {
            ctx->pc = 0x2C0DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0df8;
        }
    }
    ctx->pc = 0x2C0E34u;
    // 0x2c0e34: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2C0E34u;
    {
        const bool branch_taken_0x2c0e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0e34) {
            ctx->pc = 0x2C10F8u;
            goto label_2c10f8;
        }
    }
    ctx->pc = 0x2C0E3Cu;
label_2c0e3c:
    // 0x2c0e3c: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2c0e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c0e40: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2c0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c0e44: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c0e44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c0e48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c0e48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0e4c: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x2c0e4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c0e54: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2c0e54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c0e58: 0x9443fffe  lhu         $v1, -0x2($v0)
    ctx->pc = 0x2c0e58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
    // 0x2c0e5c: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x2c0e5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2c0e60: 0x27aa0008  addiu       $t2, $sp, 0x8
    ctx->pc = 0x2c0e60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2c0e64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0e64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0e68: 0x0  nop
    ctx->pc = 0x2c0e68u;
    // NOP
    // 0x2c0e6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0e70: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C0E70u;
    {
        const bool branch_taken_0x2c0e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E70u;
        // 0x2c0e74: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e70) {
            ctx->pc = 0x2C0E90u;
            goto label_2c0e90;
        }
    }
    ctx->pc = 0x2C0E78u;
    // 0x2c0e78: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x2c0e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0e7c: 0x0  nop
    ctx->pc = 0x2c0e7cu;
    // NOP
    // 0x2c0e80: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x2C0E80u;
    {
        const bool branch_taken_0x2c0e80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0e80) {
            ctx->pc = 0x2C0E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0E80u;
            // 0x2c0e84: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0EC0u;
            goto label_2c0ec0;
        }
    }
    ctx->pc = 0x2C0E88u;
    // 0x2c0e88: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2C0E88u;
    {
        const bool branch_taken_0x2c0e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0E88u;
        // 0x2c0e8c: 0xa0e60006  sb          $a2, 0x6($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0e88) {
            ctx->pc = 0x2C0FD0u;
            goto label_2c0fd0;
        }
    }
    ctx->pc = 0x2C0E90u;
label_2c0e90:
    // 0x2c0e90: 0x0  nop
    ctx->pc = 0x2c0e90u;
    // NOP
    // 0x2c0e94: 0x0  nop
    ctx->pc = 0x2c0e94u;
    // NOP
    // 0x2c0e98: 0x46026043  div.s       $f1, $f12, $f2
    ctx->pc = 0x2c0e98u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
    // 0x2c0e9c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c0e9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c0ea0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c0ea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c0ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0ea8: 0x0  nop
    ctx->pc = 0x2c0ea8u;
    // NOP
    // 0x2c0eac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0eacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0eb0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c0eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c0eb4: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2c0eb4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2c0eb8: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x2c0eb8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c0ebc: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2c0ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_2c0ec0:
    // 0x2c0ec0: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x2c0ec0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2c0ec4: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C0EC4u;
    {
        const bool branch_taken_0x2c0ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0EC4u;
        // 0x2c0ec8: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ec4) {
            ctx->pc = 0x2C0F44u;
            goto label_2c0f44;
        }
    }
    ctx->pc = 0x2C0ECCu;
    // 0x2c0ecc: 0x80e20004  lb          $v0, 0x4($a3)
    ctx->pc = 0x2c0eccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0ed0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2c0ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0ed4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C0ED4u;
    {
        const bool branch_taken_0x2c0ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0ED4u;
        // 0x2c0ed8: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ed4) {
            ctx->pc = 0x2C0F44u;
            goto label_2c0f44;
        }
    }
    ctx->pc = 0x2C0EDCu;
    // 0x2c0edc: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2c0edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c0ee0: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c0ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c0ee4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c0ee4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0ee8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0eec: 0x9462fffe  lhu         $v0, -0x2($v1)
    ctx->pc = 0x2c0eecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x2c0ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0ef4: 0x0  nop
    ctx->pc = 0x2c0ef4u;
    // NOP
    // 0x2c0ef8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0ef8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0efc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c0efcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0f00: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2c0f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2c0f04: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2c0f04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0f08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0f0c: 0x0  nop
    ctx->pc = 0x2c0f0cu;
    // NOP
    // 0x2c0f10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0f10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0f14: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2c0f14u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0f18: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x2c0f18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2c0f1c: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x2c0f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0f20: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x2c0f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0f24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c0f24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0f28: 0x0  nop
    ctx->pc = 0x2c0f28u;
    // NOP
    // 0x2c0f2c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0F2Cu;
    {
        const bool branch_taken_0x2c0f2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0f2c) {
            ctx->pc = 0x2C0F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0F2Cu;
            // 0x2c0f30: 0xa0e00006  sb          $zero, 0x6($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0F48u;
            goto label_2c0f48;
        }
    }
    ctx->pc = 0x2C0F34u;
    // 0x2c0f34: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2c0f34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0f38: 0x0  nop
    ctx->pc = 0x2c0f38u;
    // NOP
    // 0x2c0f3c: 0x45030025  bc1tl       . + 4 + (0x25 << 2)
    ctx->pc = 0x2C0F3Cu;
    {
        const bool branch_taken_0x2c0f3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0f3c) {
            ctx->pc = 0x2C0F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0F3Cu;
            // 0x2c0f40: 0x80e30006  lb          $v1, 0x6($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0FD4u;
            goto label_2c0fd4;
        }
    }
    ctx->pc = 0x2C0F44u;
label_2c0f44:
    // 0x2c0f44: 0xa0e00006  sb          $zero, 0x6($a3)
    ctx->pc = 0x2c0f44u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 0));
label_2c0f48:
    // 0x2c0f48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0f4c: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x2c0f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c0f50: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c0f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c0f54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c0f54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0f58: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x2c0f58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c0f5c: 0x80e60004  lb          $a2, 0x4($a3)
    ctx->pc = 0x2c0f5cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0f60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0f60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0f64: 0x0  nop
    ctx->pc = 0x2c0f64u;
    // NOP
    // 0x2c0f68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0f6c: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x2c0f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c0f70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c0f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0f74: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C0F74u;
    {
        const bool branch_taken_0x2c0f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0F74u;
        // 0x2c0f78: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0f74) {
            ctx->pc = 0x2C0FC8u;
            goto label_2c0fc8;
        }
    }
    ctx->pc = 0x2C0F7Cu;
    // 0x2c0f7c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2c0f7cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2c0f80: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x2c0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2c0f84: 0x0  nop
    ctx->pc = 0x2c0f84u;
    // NOP
label_2c0f88:
    // 0x2c0f88: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2c0f88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0f90: 0x0  nop
    ctx->pc = 0x2c0f90u;
    // NOP
    // 0x2c0f94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0f98: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2c0f98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c0f9c: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x2c0f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2c0fa0: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2c0fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0fa4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c0fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0fa8: 0x0  nop
    ctx->pc = 0x2c0fa8u;
    // NOP
    // 0x2c0fac: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0FACu;
    {
        const bool branch_taken_0x2c0fac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0fac) {
            ctx->pc = 0x2C0FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0FACu;
            // 0x2c0fb0: 0xa0e40006  sb          $a0, 0x6($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0FD0u;
            goto label_2c0fd0;
        }
    }
    ctx->pc = 0x2C0FB4u;
    // 0x2c0fb4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c0fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c0fb8: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x2c0fb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2c0fbc: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2c0fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c0fc0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2C0FC0u;
    {
        const bool branch_taken_0x2c0fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FC0u;
        // 0x2c0fc4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0fc0) {
            ctx->pc = 0x2C0F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0f88;
        }
    }
    ctx->pc = 0x2C0FC8u;
label_2c0fc8:
    // 0x2c0fc8: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x2c0fc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0fcc: 0xa0e20006  sb          $v0, 0x6($a3)
    ctx->pc = 0x2c0fccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 2));
label_2c0fd0:
    // 0x2c0fd0: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x2c0fd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
label_2c0fd4:
    // 0x2c0fd4: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2C0FD4u;
    {
        const bool branch_taken_0x2c0fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0fd4) {
            ctx->pc = 0x2C10F8u;
            goto label_2c10f8;
        }
    }
    ctx->pc = 0x2C0FDCu;
    // 0x2c0fdc: 0x80e20004  lb          $v0, 0x4($a3)
    ctx->pc = 0x2c0fdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0fe0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2c0fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0fe4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C0FE4u;
    {
        const bool branch_taken_0x2c0fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0FE4u;
        // 0x2c0fe8: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0fe4) {
            ctx->pc = 0x2C1090u;
            goto label_2c1090;
        }
    }
    ctx->pc = 0x2C0FECu;
    // 0x2c0fec: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2c0fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0ff0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2c0ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0ff4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2c0ff4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c0ff8: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c0ff8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c0ffc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2c0ffcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c1000: 0x0  nop
    ctx->pc = 0x2c1000u;
    // NOP
    // 0x2c1004: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x2c1004u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c1008: 0x1840003b  blez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2C1008u;
    {
        const bool branch_taken_0x2c1008 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1008u;
        // 0x2c100c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1008) {
            ctx->pc = 0x2C10F8u;
            goto label_2c10f8;
        }
    }
    ctx->pc = 0x2C1010u;
    // 0x2c1010: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2c1010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2c1014: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2c1014u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2c1018: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c1018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c101c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c101cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c1020:
    // 0x2c1020: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x2c1020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c1024: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c1024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c1028: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x2c1028u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2c102c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c102cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c1030: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c1030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c1034: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c1034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c1038: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2c1038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c103c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c103cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c1040: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x2c1040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c1044: 0x8464fffe  lh          $a0, -0x2($v1)
    ctx->pc = 0x2c1044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x2c1048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c1048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c104c: 0x0  nop
    ctx->pc = 0x2c104cu;
    // NOP
    // 0x2c1050: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c1050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c1054: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2c1054u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c1058: 0x0  nop
    ctx->pc = 0x2c1058u;
    // NOP
    // 0x2c105c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c105cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c1060: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c1060u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c1064: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c1064u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c1068: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c1068u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c106c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c106cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c1070: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c1070u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c1074: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2c1074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2c1078: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c1078u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c107c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c107cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c1080: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2C1080u;
    {
        const bool branch_taken_0x2c1080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C1084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1080u;
        // 0x2c1084: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1080) {
            ctx->pc = 0x2C1020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c1020;
        }
    }
    ctx->pc = 0x2C1088u;
    // 0x2c1088: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2C1088u;
    {
        const bool branch_taken_0x2c1088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1088) {
            ctx->pc = 0x2C10F8u;
            goto label_2c10f8;
        }
    }
    ctx->pc = 0x2C1090u;
label_2c1090:
    // 0x2c1090: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c1090u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c1094: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C1094u;
    {
        const bool branch_taken_0x2c1094 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C1098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1094u;
        // 0x2c1098: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1094) {
            ctx->pc = 0x2C10F8u;
            goto label_2c10f8;
        }
    }
    ctx->pc = 0x2C109Cu;
    // 0x2c109c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2c109cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2c10a0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2c10a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2c10a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c10a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c10a8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c10a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c10ac: 0x0  nop
    ctx->pc = 0x2c10acu;
    // NOP
label_2c10b0:
    // 0x2c10b0: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x2c10b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c10b4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c10b8: 0x80e30004  lb          $v1, 0x4($a3)
    ctx->pc = 0x2c10b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c10bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c10bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c10c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c10c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c10c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c10c8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2c10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c10cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c10ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c10d0: 0x8462fffe  lh          $v0, -0x2($v1)
    ctx->pc = 0x2c10d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x2c10d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c10d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c10d8: 0x0  nop
    ctx->pc = 0x2c10d8u;
    // NOP
    // 0x2c10dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c10dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c10e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c10e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c10e4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2c10e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2c10e8: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c10e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c10ec: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c10ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c10f0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2C10F0u;
    {
        const bool branch_taken_0x2c10f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C10F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C10F0u;
        // 0x2c10f4: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c10f0) {
            ctx->pc = 0x2C10B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c10b0;
        }
    }
    ctx->pc = 0x2C10F8u;
label_2c10f8:
    // 0x2c10f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C10F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C10FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C10F8u;
        // 0x2c10fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C10F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1100u;
}
