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

// Function: sub_003E0CC0
// Address: 0x3e0cc0 - 0x3e1178
void sub_003E0CC0_0x3e0cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0CC0_0x3e0cc0");
#endif

    switch (ctx->pc) {
        case 0x3e0d08u: goto label_3e0d08;
        case 0x3e0d24u: goto label_3e0d24;
        case 0x3e1120u: goto label_3e1120;
        case 0x3e113cu: goto label_3e113c;
        default: break;
    }

    ctx->pc = 0x3e0cc0u;

label_3e0cc0:
    // 0x3e0cc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3e0cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3e0cc4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3e0cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3e0cc8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3e0cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3e0ccc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e0cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0cd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e0cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0cd4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3e0cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3e0cd8: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x3e0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3e0cdc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3e0cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3e0ce0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3e0ce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3e0ce4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3e0ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3e0ce8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e0ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e0cec: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3e0cecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0cf0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x3e0cf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3e0cf4: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x3e0cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3e0cf8: 0x14400116  bnez        $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x3E0CF8u;
    {
        const bool branch_taken_0x3e0cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0CF8u;
        // 0x3e0cfc: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0cf8) {
            ctx->pc = 0x3E1154u;
            goto label_3e1154;
        }
    }
    ctx->pc = 0x3E0D00u;
    // 0x3e0d00: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3e0d00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3e0d04: 0x0  nop
    ctx->pc = 0x3e0d04u;
    // NOP
label_3e0d08:
    // 0x3e0d08: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E0D08u;
    {
        const bool branch_taken_0x3e0d08 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D08u;
        // 0x3e0d0c: 0x2511023  subu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0d08) {
            ctx->pc = 0x3E0D2Cu;
            goto label_3e0d2c;
        }
    }
    ctx->pc = 0x3E0D10u;
    // 0x3e0d10: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e0d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0d14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e0d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0d18: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3e0d18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0d1c: 0xc0f82aa  jal         func_3E0AA8
    ctx->pc = 0x3E0D1Cu;
    SET_GPR_U32(ctx, 31, 0x3E0D24u);
    ctx->pc = 0x3E0D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0D1Cu;
    // 0x3e0d20: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0AA8u, 0x3E0D1Cu, 0x3E0D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0D24u;
label_3e0d24:
    // 0x3e0d24: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x3E0D24u;
    {
        const bool branch_taken_0x3e0d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D24u;
        // 0x3e0d28: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0d24) {
            ctx->pc = 0x3E1158u;
            goto label_3e1158;
        }
    }
    ctx->pc = 0x3E0D2Cu;
label_3e0d2c:
    // 0x3e0d2c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3e0d2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3e0d30: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3e0d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3e0d34: 0x2649fff8  addiu       $t1, $s2, -0x8
    ctx->pc = 0x3e0d34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x3e0d38: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3e0d38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3e0d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e0d40: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3e0d40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3e0d44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3e0d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3e0d48: 0x514021  addu        $t0, $v0, $s1
    ctx->pc = 0x3e0d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e0d4c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3e0d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e0d50: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0d54: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0d58: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e0d5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0D5Cu;
    {
        const bool branch_taken_0x3e0d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D5Cu;
        // 0x3e0d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0d5c) {
            ctx->pc = 0x3E0D78u;
            goto label_3e0d78;
        }
    }
    ctx->pc = 0x3E0D64u;
    // 0x3e0d64: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x3e0d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0d68: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3e0d68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e0d6c: 0x0  nop
    ctx->pc = 0x3e0d6cu;
    // NOP
    // 0x3e0d70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3E0D70u;
    {
        const bool branch_taken_0x3e0d70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e0d70) {
            ctx->pc = 0x3E0D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0D70u;
            // 0x3e0d74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0D78u;
            goto label_3e0d78;
        }
    }
    ctx->pc = 0x3E0D78u;
label_3e0d78:
    // 0x3e0d78: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e0d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e0d7c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e0d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0d80: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0d84: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e0d88: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0D88u;
    {
        const bool branch_taken_0x3e0d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D88u;
        // 0x3e0d8c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0d88) {
            ctx->pc = 0x3E0DA4u;
            goto label_3e0da4;
        }
    }
    ctx->pc = 0x3E0D90u;
    // 0x3e0d90: 0xc4c000d0  lwc1        $f0, 0xD0($a2)
    ctx->pc = 0x3e0d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0d94: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3e0d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e0d98: 0x0  nop
    ctx->pc = 0x3e0d98u;
    // NOP
    // 0x3e0d9c: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x3E0D9Cu;
    {
        const bool branch_taken_0x3e0d9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0D9Cu;
        // 0x3e0da0: 0x38a20001  xori        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0d9c) {
            ctx->pc = 0x3E0E08u;
            goto label_3e0e08;
        }
    }
    ctx->pc = 0x3E0DA4u;
label_3e0da4:
    // 0x3e0da4: 0x8cc300bc  lw          $v1, 0xBC($a2)
    ctx->pc = 0x3e0da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x3e0da8: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e0da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e0dac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E0DACu;
    {
        const bool branch_taken_0x3e0dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0dac) {
            ctx->pc = 0x3E0DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0DACu;
            // 0x3e0db0: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0DD0u;
            goto label_3e0dd0;
        }
    }
    ctx->pc = 0x3E0DB4u;
    // 0x3e0db4: 0x14a00014  bnez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E0DB4u;
    {
        const bool branch_taken_0x3e0db4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DB4u;
        // 0x3e0db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0db4) {
            ctx->pc = 0x3E0E08u;
            goto label_3e0e08;
        }
    }
    ctx->pc = 0x3E0DBCu;
    // 0x3e0dbc: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3e0dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e0dc0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0dc4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x3e0dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e0dc8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E0DC8u;
    {
        const bool branch_taken_0x3e0dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DC8u;
        // 0x3e0dcc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0dc8) {
            ctx->pc = 0x3E0E08u;
            goto label_3e0e08;
        }
    }
    ctx->pc = 0x3E0DD0u;
label_3e0dd0:
    // 0x3e0dd0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e0dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e0dd4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E0DD4u;
    {
        const bool branch_taken_0x3e0dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DD4u;
        // 0x3e0dd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0dd4) {
            ctx->pc = 0x3E0E08u;
            goto label_3e0e08;
        }
    }
    ctx->pc = 0x3E0DDCu;
    // 0x3e0ddc: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E0DDCu;
    {
        const bool branch_taken_0x3e0ddc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DDCu;
        // 0x3e0de0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ddc) {
            ctx->pc = 0x3E0E04u;
            goto label_3e0e04;
        }
    }
    ctx->pc = 0x3E0DE4u;
    // 0x3e0de4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3e0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e0de8: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x3e0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x3e0dec: 0x3843020f  xori        $v1, $v0, 0x20F
    ctx->pc = 0x3e0decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e0df0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E0DF0u;
    {
        const bool branch_taken_0x3e0df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0DF0u;
        // 0x3e0df4: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0df0) {
            ctx->pc = 0x3E0E04u;
            goto label_3e0e04;
        }
    }
    ctx->pc = 0x3E0DF8u;
    // 0x3e0df8: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e0df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e0dfc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e0dfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e0e00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e0e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0e04:
    // 0x3e0e04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3e0e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e0e08:
    // 0x3e0e08: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x3E0E08u;
    {
        const bool branch_taken_0x3e0e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E08u;
        // 0x3e0e0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0e08) {
            ctx->pc = 0x3E0F80u;
            goto label_3e0f80;
        }
    }
    ctx->pc = 0x3E0E10u;
    // 0x3e0e10: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3e0e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e0e14: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e0e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0e18: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0e1c: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e0e20: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0E20u;
    {
        const bool branch_taken_0x3e0e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E20u;
        // 0x3e0e24: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0e20) {
            ctx->pc = 0x3E0E3Cu;
            goto label_3e0e3c;
        }
    }
    ctx->pc = 0x3E0E28u;
    // 0x3e0e28: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x3e0e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0e2c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3e0e2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e0e30: 0x0  nop
    ctx->pc = 0x3e0e30u;
    // NOP
    // 0x3e0e34: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3E0E34u;
    {
        const bool branch_taken_0x3e0e34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e0e34) {
            ctx->pc = 0x3E0E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0E34u;
            // 0x3e0e38: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0E3Cu;
            goto label_3e0e3c;
        }
    }
    ctx->pc = 0x3E0E3Cu;
label_3e0e3c:
    // 0x3e0e3c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3e0e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e0e40: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0e44: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0e48: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e0e4c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E0E4Cu;
    {
        const bool branch_taken_0x3e0e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0e4c) {
            ctx->pc = 0x3E0E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0E4Cu;
            // 0x3e0e50: 0x8c6300bc  lw          $v1, 0xBC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0E6Cu;
            goto label_3e0e6c;
        }
    }
    ctx->pc = 0x3E0E54u;
    // 0x3e0e54: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x3e0e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0e58: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3e0e58u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e0e5c: 0x0  nop
    ctx->pc = 0x3e0e5cu;
    // NOP
    // 0x3e0e60: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x3E0E60u;
    {
        const bool branch_taken_0x3e0e60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E0E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E60u;
        // 0x3e0e64: 0x38e20001  xori        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0e60) {
            ctx->pc = 0x3E0EC4u;
            goto label_3e0ec4;
        }
    }
    ctx->pc = 0x3E0E68u;
    // 0x3e0e68: 0x8c6300bc  lw          $v1, 0xBC($v1)
    ctx->pc = 0x3e0e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_3e0e6c:
    // 0x3e0e6c: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e0e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e0e70: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E0E70u;
    {
        const bool branch_taken_0x3e0e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0e70) {
            ctx->pc = 0x3E0E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0E70u;
            // 0x3e0e74: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0E90u;
            goto label_3e0e90;
        }
    }
    ctx->pc = 0x3E0E78u;
    // 0x3e0e78: 0x14e00012  bnez        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E0E78u;
    {
        const bool branch_taken_0x3e0e78 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E78u;
        // 0x3e0e7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0e78) {
            ctx->pc = 0x3E0EC4u;
            goto label_3e0ec4;
        }
    }
    ctx->pc = 0x3E0E80u;
    // 0x3e0e80: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x3e0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e0e84: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x3e0e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e0e88: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3E0E88u;
    {
        const bool branch_taken_0x3e0e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E88u;
        // 0x3e0e8c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0e88) {
            ctx->pc = 0x3E0EC4u;
            goto label_3e0ec4;
        }
    }
    ctx->pc = 0x3E0E90u;
label_3e0e90:
    // 0x3e0e90: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e0e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e0e94: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E0E94u;
    {
        const bool branch_taken_0x3e0e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E94u;
        // 0x3e0e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0e94) {
            ctx->pc = 0x3E0EC4u;
            goto label_3e0ec4;
        }
    }
    ctx->pc = 0x3E0E9Cu;
    // 0x3e0e9c: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E0E9Cu;
    {
        const bool branch_taken_0x3e0e9c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0E9Cu;
        // 0x3e0ea0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0e9c) {
            ctx->pc = 0x3E0EC0u;
            goto label_3e0ec0;
        }
    }
    ctx->pc = 0x3E0EA4u;
    // 0x3e0ea4: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x3e0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e0ea8: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e0ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e0eac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E0EACu;
    {
        const bool branch_taken_0x3e0eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EACu;
        // 0x3e0eb0: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0eac) {
            ctx->pc = 0x3E0EC0u;
            goto label_3e0ec0;
        }
    }
    ctx->pc = 0x3E0EB4u;
    // 0x3e0eb4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e0eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e0eb8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e0eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e0ebc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e0ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0ec0:
    // 0x3e0ec0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3e0ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e0ec4:
    // 0x3e0ec4: 0x1440008a  bnez        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x3E0EC4u;
    {
        const bool branch_taken_0x3e0ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0EC4u;
        // 0x3e0ec8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ec4) {
            ctx->pc = 0x3E10F0u;
            goto label_3e10f0;
        }
    }
    ctx->pc = 0x3E0ECCu;
    // 0x3e0ecc: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x3e0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e0ed0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0ed4: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e0ed8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0ED8u;
    {
        const bool branch_taken_0x3e0ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0ED8u;
        // 0x3e0edc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ed8) {
            ctx->pc = 0x3E0EF4u;
            goto label_3e0ef4;
        }
    }
    ctx->pc = 0x3E0EE0u;
    // 0x3e0ee0: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x3e0ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0ee4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3e0ee4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e0ee8: 0x0  nop
    ctx->pc = 0x3e0ee8u;
    // NOP
    // 0x3e0eec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3E0EECu;
    {
        const bool branch_taken_0x3e0eec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e0eec) {
            ctx->pc = 0x3E0EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0EECu;
            // 0x3e0ef0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0EF4u;
            goto label_3e0ef4;
        }
    }
    ctx->pc = 0x3E0EF4u;
label_3e0ef4:
    // 0x3e0ef4: 0x8cc200bc  lw          $v0, 0xBC($a2)
    ctx->pc = 0x3e0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x3e0ef8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0efc: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e0f00: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E0F00u;
    {
        const bool branch_taken_0x3e0f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0f00) {
            ctx->pc = 0x3E0F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0F00u;
            // 0x3e0f04: 0x8cc300bc  lw          $v1, 0xBC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0F20u;
            goto label_3e0f20;
        }
    }
    ctx->pc = 0x3E0F08u;
    // 0x3e0f08: 0xc4c000d0  lwc1        $f0, 0xD0($a2)
    ctx->pc = 0x3e0f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0f0c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3e0f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e0f10: 0x0  nop
    ctx->pc = 0x3e0f10u;
    // NOP
    // 0x3e0f14: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x3E0F14u;
    {
        const bool branch_taken_0x3e0f14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E0F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F14u;
        // 0x3e0f18: 0x38e20001  xori        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0f14) {
            ctx->pc = 0x3E0F78u;
            goto label_3e0f78;
        }
    }
    ctx->pc = 0x3E0F1Cu;
    // 0x3e0f1c: 0x8cc300bc  lw          $v1, 0xBC($a2)
    ctx->pc = 0x3e0f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
label_3e0f20:
    // 0x3e0f20: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e0f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e0f24: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E0F24u;
    {
        const bool branch_taken_0x3e0f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0f24) {
            ctx->pc = 0x3E0F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0F24u;
            // 0x3e0f28: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0F44u;
            goto label_3e0f44;
        }
    }
    ctx->pc = 0x3E0F2Cu;
    // 0x3e0f2c: 0x14e00012  bnez        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E0F2Cu;
    {
        const bool branch_taken_0x3e0f2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F2Cu;
        // 0x3e0f30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0f2c) {
            ctx->pc = 0x3E0F78u;
            goto label_3e0f78;
        }
    }
    ctx->pc = 0x3E0F34u;
    // 0x3e0f34: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x3e0f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e0f38: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x3e0f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e0f3c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3E0F3Cu;
    {
        const bool branch_taken_0x3e0f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F3Cu;
        // 0x3e0f40: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0f3c) {
            ctx->pc = 0x3E0F78u;
            goto label_3e0f78;
        }
    }
    ctx->pc = 0x3E0F44u;
label_3e0f44:
    // 0x3e0f44: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e0f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e0f48: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E0F48u;
    {
        const bool branch_taken_0x3e0f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F48u;
        // 0x3e0f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0f48) {
            ctx->pc = 0x3E0F78u;
            goto label_3e0f78;
        }
    }
    ctx->pc = 0x3E0F50u;
    // 0x3e0f50: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E0F50u;
    {
        const bool branch_taken_0x3e0f50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F50u;
        // 0x3e0f54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0f50) {
            ctx->pc = 0x3E0F74u;
            goto label_3e0f74;
        }
    }
    ctx->pc = 0x3E0F58u;
    // 0x3e0f58: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x3e0f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e0f5c: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e0f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e0f60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E0F60u;
    {
        const bool branch_taken_0x3e0f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F60u;
        // 0x3e0f64: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0f60) {
            ctx->pc = 0x3E0F74u;
            goto label_3e0f74;
        }
    }
    ctx->pc = 0x3E0F68u;
    // 0x3e0f68: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e0f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e0f6c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e0f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e0f70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e0f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0f74:
    // 0x3e0f74: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3e0f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e0f78:
    // 0x3e0f78: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x3E0F78u;
    {
        const bool branch_taken_0x3e0f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F78u;
        // 0x3e0f7c: 0x222480a  movz        $t1, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0f78) {
            ctx->pc = 0x3E10ECu;
            goto label_3e10ec;
        }
    }
    ctx->pc = 0x3E0F80u;
label_3e0f80:
    // 0x3e0f80: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3e0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e0f84: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0f88: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0f8c: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e0f90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0F90u;
    {
        const bool branch_taken_0x3e0f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0F90u;
        // 0x3e0f94: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0f90) {
            ctx->pc = 0x3E0FACu;
            goto label_3e0fac;
        }
    }
    ctx->pc = 0x3E0F98u;
    // 0x3e0f98: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x3e0f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0f9c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3e0f9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e0fa0: 0x0  nop
    ctx->pc = 0x3e0fa0u;
    // NOP
    // 0x3e0fa4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3E0FA4u;
    {
        const bool branch_taken_0x3e0fa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e0fa4) {
            ctx->pc = 0x3E0FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0FA4u;
            // 0x3e0fa8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0FACu;
            goto label_3e0fac;
        }
    }
    ctx->pc = 0x3E0FACu;
label_3e0fac:
    // 0x3e0fac: 0x8cc200bc  lw          $v0, 0xBC($a2)
    ctx->pc = 0x3e0facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x3e0fb0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0fb4: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e0fb8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E0FB8u;
    {
        const bool branch_taken_0x3e0fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0fb8) {
            ctx->pc = 0x3E0FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0FB8u;
            // 0x3e0fbc: 0x8cc300bc  lw          $v1, 0xBC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0FD8u;
            goto label_3e0fd8;
        }
    }
    ctx->pc = 0x3E0FC0u;
    // 0x3e0fc0: 0xc4c000d0  lwc1        $f0, 0xD0($a2)
    ctx->pc = 0x3e0fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0fc4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3e0fc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e0fc8: 0x0  nop
    ctx->pc = 0x3e0fc8u;
    // NOP
    // 0x3e0fcc: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x3E0FCCu;
    {
        const bool branch_taken_0x3e0fcc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E0FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0FCCu;
        // 0x3e0fd0: 0x38e20001  xori        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0fcc) {
            ctx->pc = 0x3E1030u;
            goto label_3e1030;
        }
    }
    ctx->pc = 0x3E0FD4u;
    // 0x3e0fd4: 0x8cc300bc  lw          $v1, 0xBC($a2)
    ctx->pc = 0x3e0fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
label_3e0fd8:
    // 0x3e0fd8: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e0fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e0fdc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E0FDCu;
    {
        const bool branch_taken_0x3e0fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0fdc) {
            ctx->pc = 0x3E0FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0FDCu;
            // 0x3e0fe0: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0FFCu;
            goto label_3e0ffc;
        }
    }
    ctx->pc = 0x3E0FE4u;
    // 0x3e0fe4: 0x14e00012  bnez        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E0FE4u;
    {
        const bool branch_taken_0x3e0fe4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0FE4u;
        // 0x3e0fe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0fe4) {
            ctx->pc = 0x3E1030u;
            goto label_3e1030;
        }
    }
    ctx->pc = 0x3E0FECu;
    // 0x3e0fec: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x3e0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e0ff0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x3e0ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e0ff4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3E0FF4u;
    {
        const bool branch_taken_0x3e0ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0FF4u;
        // 0x3e0ff8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0ff4) {
            ctx->pc = 0x3E1030u;
            goto label_3e1030;
        }
    }
    ctx->pc = 0x3E0FFCu;
label_3e0ffc:
    // 0x3e0ffc: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e0ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e1000: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E1000u;
    {
        const bool branch_taken_0x3e1000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1000u;
        // 0x3e1004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1000) {
            ctx->pc = 0x3E1030u;
            goto label_3e1030;
        }
    }
    ctx->pc = 0x3E1008u;
    // 0x3e1008: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E1008u;
    {
        const bool branch_taken_0x3e1008 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1008u;
        // 0x3e100c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1008) {
            ctx->pc = 0x3E102Cu;
            goto label_3e102c;
        }
    }
    ctx->pc = 0x3E1010u;
    // 0x3e1010: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x3e1010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e1014: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e1014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e1018: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1018u;
    {
        const bool branch_taken_0x3e1018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1018u;
        // 0x3e101c: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1018) {
            ctx->pc = 0x3E102Cu;
            goto label_3e102c;
        }
    }
    ctx->pc = 0x3E1020u;
    // 0x3e1020: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e1020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e1024: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e1024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e1028: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e1028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e102c:
    // 0x3e102c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3e102cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e1030:
    // 0x3e1030: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3E1030u;
    {
        const bool branch_taken_0x3e1030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1030u;
        // 0x3e1034: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1030) {
            ctx->pc = 0x3E10F0u;
            goto label_3e10f0;
        }
    }
    ctx->pc = 0x3E1038u;
    // 0x3e1038: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x3e1038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e103c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e1040: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e1040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e1044: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E1044u;
    {
        const bool branch_taken_0x3e1044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1044u;
        // 0x3e1048: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1044) {
            ctx->pc = 0x3E1060u;
            goto label_3e1060;
        }
    }
    ctx->pc = 0x3E104Cu;
    // 0x3e104c: 0xc48000d0  lwc1        $f0, 0xD0($a0)
    ctx->pc = 0x3e104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e1050: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3e1050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e1054: 0x0  nop
    ctx->pc = 0x3e1054u;
    // NOP
    // 0x3e1058: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3E1058u;
    {
        const bool branch_taken_0x3e1058 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e1058) {
            ctx->pc = 0x3E105Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1058u;
            // 0x3e105c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1060u;
            goto label_3e1060;
        }
    }
    ctx->pc = 0x3E1060u;
label_3e1060:
    // 0x3e1060: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3e1060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e1064: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e1064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e1068: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e1068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e106c: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e106cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e1070: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1070u;
    {
        const bool branch_taken_0x3e1070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1070) {
            ctx->pc = 0x3E1074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1070u;
            // 0x3e1074: 0x8c6300bc  lw          $v1, 0xBC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1090u;
            goto label_3e1090;
        }
    }
    ctx->pc = 0x3E1078u;
    // 0x3e1078: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x3e1078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e107c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x3e107cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e1080: 0x0  nop
    ctx->pc = 0x3e1080u;
    // NOP
    // 0x3e1084: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x3E1084u;
    {
        const bool branch_taken_0x3e1084 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1084u;
        // 0x3e1088: 0x38c20001  xori        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1084) {
            ctx->pc = 0x3E10E8u;
            goto label_3e10e8;
        }
    }
    ctx->pc = 0x3E108Cu;
    // 0x3e108c: 0x8c6300bc  lw          $v1, 0xBC($v1)
    ctx->pc = 0x3e108cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_3e1090:
    // 0x3e1090: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e1090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e1094: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1094u;
    {
        const bool branch_taken_0x3e1094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1094) {
            ctx->pc = 0x3E1098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1094u;
            // 0x3e1098: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E10B4u;
            goto label_3e10b4;
        }
    }
    ctx->pc = 0x3E109Cu;
    // 0x3e109c: 0x14c00012  bnez        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E109Cu;
    {
        const bool branch_taken_0x3e109c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E109Cu;
        // 0x3e10a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e109c) {
            ctx->pc = 0x3E10E8u;
            goto label_3e10e8;
        }
    }
    ctx->pc = 0x3E10A4u;
    // 0x3e10a4: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x3e10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e10a8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x3e10a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e10ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3E10ACu;
    {
        const bool branch_taken_0x3e10ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E10B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E10ACu;
        // 0x3e10b0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e10ac) {
            ctx->pc = 0x3E10E8u;
            goto label_3e10e8;
        }
    }
    ctx->pc = 0x3E10B4u;
label_3e10b4:
    // 0x3e10b4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e10b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e10b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E10B8u;
    {
        const bool branch_taken_0x3e10b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E10BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E10B8u;
        // 0x3e10bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e10b8) {
            ctx->pc = 0x3E10E8u;
            goto label_3e10e8;
        }
    }
    ctx->pc = 0x3E10C0u;
    // 0x3e10c0: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E10C0u;
    {
        const bool branch_taken_0x3e10c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E10C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E10C0u;
        // 0x3e10c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e10c0) {
            ctx->pc = 0x3E10E4u;
            goto label_3e10e4;
        }
    }
    ctx->pc = 0x3E10C8u;
    // 0x3e10c8: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x3e10c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x3e10cc: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e10ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e10d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E10D0u;
    {
        const bool branch_taken_0x3e10d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E10D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E10D0u;
        // 0x3e10d4: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e10d0) {
            ctx->pc = 0x3E10E4u;
            goto label_3e10e4;
        }
    }
    ctx->pc = 0x3E10D8u;
    // 0x3e10d8: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e10d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e10dc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e10dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e10e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e10e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e10e4:
    // 0x3e10e4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3e10e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e10e8:
    // 0x3e10e8: 0x102480a  movz        $t1, $t0, $v0
    ctx->pc = 0x3e10e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 8));
label_3e10ec:
    // 0x3e10ec: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x3e10ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3e10f0:
    // 0x3e10f0: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x3e10f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3e10f4: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x3e10f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3e10f8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x3e10f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e10fc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3e10fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1100: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x3e1100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e1104: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x3e1104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3e1108: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e1108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e110c: 0x9fa20000  lwu         $v0, 0x0($sp)
    ctx->pc = 0x3e110cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e1110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e1110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1114: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3e1114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3e1118: 0xc0f82b2  jal         func_3E0AC8
    ctx->pc = 0x3E1118u;
    SET_GPR_U32(ctx, 31, 0x3E1120u);
    ctx->pc = 0x3E111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1118u;
    // 0x3e111c: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0AC8u, 0x3E1118u, 0x3E1120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1120u;
label_3e1120:
    // 0x3e1120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e1120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1124: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e1124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e1128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e112c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3e112cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1130: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3e1130u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1134: 0xc0f8330  jal         func_3E0CC0
    ctx->pc = 0x3E1134u;
    SET_GPR_U32(ctx, 31, 0x3E113Cu);
    ctx->pc = 0x3E1138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1134u;
    // 0x3e1138: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0CC0u;
    goto label_3e0cc0;
    ctx->pc = 0x3E113Cu;
label_3e113c:
    // 0x3e113c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3e113cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1140: 0x2511023  subu        $v0, $s2, $s1
    ctx->pc = 0x3e1140u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x3e1144: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3e1144u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3e1148: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x3e1148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x3e114c: 0x1040feee  beqz        $v0, . + 4 + (-0x112 << 2)
    ctx->pc = 0x3E114Cu;
    {
        const bool branch_taken_0x3e114c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e114c) {
            ctx->pc = 0x3E0D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0d08;
        }
    }
    ctx->pc = 0x3E1154u;
label_3e1154:
    // 0x3e1154: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3e1154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e1158:
    // 0x3e1158: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3e1158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e115c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3e115cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e1160: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3e1160u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e1164: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3e1164u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e1168: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e1168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e116c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3e116cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e1170: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1170u;
        // 0x3e1174: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1178u;
}
