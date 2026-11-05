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

// Function: sub_002C0968
// Address: 0x2c0968 - 0x2c0c98
void sub_002C0968_0x2c0968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0968_0x2c0968");
#endif

    switch (ctx->pc) {
        case 0x2c0998u: goto label_2c0998;
        case 0x2c0b28u: goto label_2c0b28;
        case 0x2c0bc0u: goto label_2c0bc0;
        case 0x2c0c48u: goto label_2c0c48;
        default: break;
    }

    ctx->pc = 0x2c0968u;

    // 0x2c0968: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c0968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c096c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c096cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0970: 0x90e60004  lbu         $a2, 0x4($a3)
    ctx->pc = 0x2c0970u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0978: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x2c0978u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c097c: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C097Cu;
    {
        const bool branch_taken_0x2c097c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C097Cu;
        // 0x2c0980: 0xe7ac0000  swc1        $f12, 0x0($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c097c) {
            ctx->pc = 0x2C09DCu;
            goto label_2c09dc;
        }
    }
    ctx->pc = 0x2C0984u;
    // 0x2c0984: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c0984u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c0988: 0x184000c1  blez        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x2C0988u;
    {
        const bool branch_taken_0x2c0988 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0988u;
        // 0x2c098c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0988) {
            ctx->pc = 0x2C0C90u;
            goto label_2c0c90;
        }
    }
    ctx->pc = 0x2C0990u;
    // 0x2c0990: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c0990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c0994: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c0994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c0998:
    // 0x2c0998: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x2c0998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c099c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c099cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c09a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c09a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c09a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c09a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c09a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c09ac: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x2c09acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c09b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c09b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c09b4: 0x0  nop
    ctx->pc = 0x2c09b4u;
    // NOP
    // 0x2c09b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c09b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c09bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c09bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c09c0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2c09c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2c09c4: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c09c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c09c8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c09c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c09cc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2C09CCu;
    {
        const bool branch_taken_0x2c09cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C09CCu;
        // 0x2c09d0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c09cc) {
            ctx->pc = 0x2C0998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0998;
        }
    }
    ctx->pc = 0x2C09D4u;
    // 0x2c09d4: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2C09D4u;
    {
        const bool branch_taken_0x2c09d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c09d4) {
            ctx->pc = 0x2C0C90u;
            goto label_2c0c90;
        }
    }
    ctx->pc = 0x2C09DCu;
label_2c09dc:
    // 0x2c09dc: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2c09dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c09e0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x2c09e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2c09e4: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c09e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c09e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c09e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c09ec: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x2c09ecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c09f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c09f4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2c09f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c09f8: 0x9443fffe  lhu         $v1, -0x2($v0)
    ctx->pc = 0x2c09f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
    // 0x2c09fc: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x2c09fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2c0a00: 0x27aa0008  addiu       $t2, $sp, 0x8
    ctx->pc = 0x2c0a00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2c0a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0a08: 0x0  nop
    ctx->pc = 0x2c0a08u;
    // NOP
    // 0x2c0a0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0a10: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C0A10u;
    {
        const bool branch_taken_0x2c0a10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A10u;
        // 0x2c0a14: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a10) {
            ctx->pc = 0x2C0A30u;
            goto label_2c0a30;
        }
    }
    ctx->pc = 0x2C0A18u;
    // 0x2c0a18: 0x460c1034  c.lt.s      $f2, $f12
    ctx->pc = 0x2c0a18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0a1c: 0x0  nop
    ctx->pc = 0x2c0a1cu;
    // NOP
    // 0x2c0a20: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x2C0A20u;
    {
        const bool branch_taken_0x2c0a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0a20) {
            ctx->pc = 0x2C0A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0A20u;
            // 0x2c0a24: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0A60u;
            goto label_2c0a60;
        }
    }
    ctx->pc = 0x2C0A28u;
    // 0x2c0a28: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2C0A28u;
    {
        const bool branch_taken_0x2c0a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A28u;
        // 0x2c0a2c: 0xa0e60006  sb          $a2, 0x6($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a28) {
            ctx->pc = 0x2C0B70u;
            goto label_2c0b70;
        }
    }
    ctx->pc = 0x2C0A30u;
label_2c0a30:
    // 0x2c0a30: 0x0  nop
    ctx->pc = 0x2c0a30u;
    // NOP
    // 0x2c0a34: 0x0  nop
    ctx->pc = 0x2c0a34u;
    // NOP
    // 0x2c0a38: 0x46026043  div.s       $f1, $f12, $f2
    ctx->pc = 0x2c0a38u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
    // 0x2c0a3c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2c0a3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2c0a40: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2c0a40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2c0a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0a48: 0x0  nop
    ctx->pc = 0x2c0a48u;
    // NOP
    // 0x2c0a4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0a4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0a50: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c0a50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c0a54: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2c0a54u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2c0a58: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x2c0a58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c0a5c: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2c0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_2c0a60:
    // 0x2c0a60: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x2c0a60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2c0a64: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2C0A64u;
    {
        const bool branch_taken_0x2c0a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A64u;
        // 0x2c0a68: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a64) {
            ctx->pc = 0x2C0AE4u;
            goto label_2c0ae4;
        }
    }
    ctx->pc = 0x2C0A6Cu;
    // 0x2c0a6c: 0x80e20004  lb          $v0, 0x4($a3)
    ctx->pc = 0x2c0a6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0a70: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2c0a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0a74: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C0A74u;
    {
        const bool branch_taken_0x2c0a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0A74u;
        // 0x2c0a78: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0a74) {
            ctx->pc = 0x2C0AE4u;
            goto label_2c0ae4;
        }
    }
    ctx->pc = 0x2C0A7Cu;
    // 0x2c0a7c: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x2c0a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c0a80: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c0a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c0a84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c0a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0a88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0a8c: 0x9462fffe  lhu         $v0, -0x2($v1)
    ctx->pc = 0x2c0a8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x2c0a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0a94: 0x0  nop
    ctx->pc = 0x2c0a94u;
    // NOP
    // 0x2c0a98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0a98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0a9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c0a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0aa0: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x2c0aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2c0aa4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2c0aa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0aa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0aac: 0x0  nop
    ctx->pc = 0x2c0aacu;
    // NOP
    // 0x2c0ab0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0ab0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0ab4: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x2c0ab4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0ab8: 0xe5420000  swc1        $f2, 0x0($t2)
    ctx->pc = 0x2c0ab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2c0abc: 0xc5610000  lwc1        $f1, 0x0($t3)
    ctx->pc = 0x2c0abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0ac0: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x2c0ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0ac4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2c0ac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0ac8: 0x0  nop
    ctx->pc = 0x2c0ac8u;
    // NOP
    // 0x2c0acc: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2C0ACCu;
    {
        const bool branch_taken_0x2c0acc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0acc) {
            ctx->pc = 0x2C0AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0ACCu;
            // 0x2c0ad0: 0xa0e00006  sb          $zero, 0x6($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0AE8u;
            goto label_2c0ae8;
        }
    }
    ctx->pc = 0x2C0AD4u;
    // 0x2c0ad4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2c0ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0ad8: 0x0  nop
    ctx->pc = 0x2c0ad8u;
    // NOP
    // 0x2c0adc: 0x45030025  bc1tl       . + 4 + (0x25 << 2)
    ctx->pc = 0x2C0ADCu;
    {
        const bool branch_taken_0x2c0adc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0adc) {
            ctx->pc = 0x2C0AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0ADCu;
            // 0x2c0ae0: 0x80e30006  lb          $v1, 0x6($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0B74u;
            goto label_2c0b74;
        }
    }
    ctx->pc = 0x2C0AE4u;
label_2c0ae4:
    // 0x2c0ae4: 0xa0e00006  sb          $zero, 0x6($a3)
    ctx->pc = 0x2c0ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 0));
label_2c0ae8:
    // 0x2c0ae8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c0ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0aec: 0x8ce80008  lw          $t0, 0x8($a3)
    ctx->pc = 0x2c0aecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c0af0: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c0af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c0af4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c0af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0af8: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x2c0af8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2c0afc: 0x80e60004  lb          $a2, 0x4($a3)
    ctx->pc = 0x2c0afcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0b00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0b04: 0x0  nop
    ctx->pc = 0x2c0b04u;
    // NOP
    // 0x2c0b08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0b08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0b0c: 0x86182a  slt         $v1, $a0, $a2
    ctx->pc = 0x2c0b0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c0b10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c0b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0b14: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C0B14u;
    {
        const bool branch_taken_0x2c0b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B14u;
        // 0x2c0b18: 0xe5200000  swc1        $f0, 0x0($t1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b14) {
            ctx->pc = 0x2C0B68u;
            goto label_2c0b68;
        }
    }
    ctx->pc = 0x2C0B1Cu;
    // 0x2c0b1c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2c0b1cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2c0b20: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x2c0b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2c0b24: 0x0  nop
    ctx->pc = 0x2c0b24u;
    // NOP
label_2c0b28:
    // 0x2c0b28: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2c0b28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0b30: 0x0  nop
    ctx->pc = 0x2c0b30u;
    // NOP
    // 0x2c0b34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0b34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0b38: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x2c0b38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c0b3c: 0xe5410000  swc1        $f1, 0x0($t2)
    ctx->pc = 0x2c0b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
    // 0x2c0b40: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2c0b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0b44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2c0b44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c0b48: 0x0  nop
    ctx->pc = 0x2c0b48u;
    // NOP
    // 0x2c0b4c: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0B4Cu;
    {
        const bool branch_taken_0x2c0b4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c0b4c) {
            ctx->pc = 0x2C0B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0B4Cu;
            // 0x2c0b50: 0xa0e40006  sb          $a0, 0x6($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C0B70u;
            goto label_2c0b70;
        }
    }
    ctx->pc = 0x2C0B54u;
    // 0x2c0b54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c0b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c0b58: 0xe5210000  swc1        $f1, 0x0($t1)
    ctx->pc = 0x2c0b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x2c0b5c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2c0b5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2c0b60: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2C0B60u;
    {
        const bool branch_taken_0x2c0b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B60u;
        // 0x2c0b64: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b60) {
            ctx->pc = 0x2C0B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0b28;
        }
    }
    ctx->pc = 0x2C0B68u;
label_2c0b68:
    // 0x2c0b68: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x2c0b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0b6c: 0xa0e20006  sb          $v0, 0x6($a3)
    ctx->pc = 0x2c0b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 6), (uint8_t)GPR_U32(ctx, 2));
label_2c0b70:
    // 0x2c0b70: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x2c0b70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
label_2c0b74:
    // 0x2c0b74: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x2C0B74u;
    {
        const bool branch_taken_0x2c0b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0b74) {
            ctx->pc = 0x2C0C90u;
            goto label_2c0c90;
        }
    }
    ctx->pc = 0x2C0B7Cu;
    // 0x2c0b7c: 0x80e20004  lb          $v0, 0x4($a3)
    ctx->pc = 0x2c0b7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0b80: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2c0b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0b84: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C0B84u;
    {
        const bool branch_taken_0x2c0b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0B84u;
        // 0x2c0b88: 0xc7a20004  lwc1        $f2, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0b84) {
            ctx->pc = 0x2C0C30u;
            goto label_2c0c30;
        }
    }
    ctx->pc = 0x2C0B8Cu;
    // 0x2c0b8c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2c0b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c0b90: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2c0b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c0b94: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2c0b94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c0b98: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c0b98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c0b9c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2c0b9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2c0ba0: 0x0  nop
    ctx->pc = 0x2c0ba0u;
    // NOP
    // 0x2c0ba4: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x2c0ba4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2c0ba8: 0x18400039  blez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C0BA8u;
    {
        const bool branch_taken_0x2c0ba8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0BA8u;
        // 0x2c0bac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0ba8) {
            ctx->pc = 0x2C0C90u;
            goto label_2c0c90;
        }
    }
    ctx->pc = 0x2C0BB0u;
    // 0x2c0bb0: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c0bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c0bb4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2c0bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c0bb8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c0bb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0bbc: 0x0  nop
    ctx->pc = 0x2c0bbcu;
    // NOP
label_2c0bc0:
    // 0x2c0bc0: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x2c0bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c0bc4: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c0bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c0bc8: 0x80e30006  lb          $v1, 0x6($a3)
    ctx->pc = 0x2c0bc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2c0bcc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c0bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c0bd0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c0bd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c0bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0bd8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2c0bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c0bdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c0bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0be0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2c0be0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c0be4: 0x9464fffe  lhu         $a0, -0x2($v1)
    ctx->pc = 0x2c0be4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x2c0be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0bec: 0x0  nop
    ctx->pc = 0x2c0becu;
    // NOP
    // 0x2c0bf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0bf4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2c0bf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0bf8: 0x0  nop
    ctx->pc = 0x2c0bf8u;
    // NOP
    // 0x2c0bfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c0bfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2c0c00: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2c0c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c0c04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2c0c04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c0c08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c0c08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c0c0c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2c0c0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c0c10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2c0c10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c0c14: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x2c0c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2c0c18: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c0c18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c0c1c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c0c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0c20: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2C0C20u;
    {
        const bool branch_taken_0x2c0c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C20u;
        // 0x2c0c24: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c20) {
            ctx->pc = 0x2C0BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0bc0;
        }
    }
    ctx->pc = 0x2C0C28u;
    // 0x2c0c28: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C0C28u;
    {
        const bool branch_taken_0x2c0c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0c28) {
            ctx->pc = 0x2C0C90u;
            goto label_2c0c90;
        }
    }
    ctx->pc = 0x2C0C30u;
label_2c0c30:
    // 0x2c0c30: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c0c30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c0c34: 0x18400016  blez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C0C34u;
    {
        const bool branch_taken_0x2c0c34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C34u;
        // 0x2c0c38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c34) {
            ctx->pc = 0x2C0C90u;
            goto label_2c0c90;
        }
    }
    ctx->pc = 0x2C0C3Cu;
    // 0x2c0c3c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x2c0c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x2c0c40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c0c40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c0c44: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2c0c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c0c48:
    // 0x2c0c48: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x2c0c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c0c4c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2c0c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2c0c50: 0x80e30004  lb          $v1, 0x4($a3)
    ctx->pc = 0x2c0c50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c0c54: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c0c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2c0c58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c0c5c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c0c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c0c60: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2c0c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c0c64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c0c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2c0c68: 0x9462fffe  lhu         $v0, -0x2($v1)
    ctx->pc = 0x2c0c68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x2c0c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c0c70: 0x0  nop
    ctx->pc = 0x2c0c70u;
    // NOP
    // 0x2c0c74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c0c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c0c78: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c0c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c0c7c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2c0c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2c0c80: 0x80e20005  lb          $v0, 0x5($a3)
    ctx->pc = 0x2c0c80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
    // 0x2c0c84: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2c0c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2c0c88: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2C0C88u;
    {
        const bool branch_taken_0x2c0c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C0C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C88u;
        // 0x2c0c8c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0c88) {
            ctx->pc = 0x2C0C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c0c48;
        }
    }
    ctx->pc = 0x2C0C90u;
label_2c0c90:
    // 0x2c0c90: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0C90u;
        // 0x2c0c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0C98u;
}
