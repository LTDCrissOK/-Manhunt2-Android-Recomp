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

// Function: sub_00215ED0
// Address: 0x215ed0 - 0x2160f0
void sub_00215ED0_0x215ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215ED0_0x215ed0");
#endif

    switch (ctx->pc) {
        case 0x215f1cu: goto label_215f1c;
        case 0x215f34u: goto label_215f34;
        case 0x215f50u: goto label_215f50;
        case 0x215f88u: goto label_215f88;
        case 0x216014u: goto label_216014;
        case 0x21603cu: goto label_21603c;
        case 0x216058u: goto label_216058;
        case 0x216084u: goto label_216084;
        default: break;
    }

    ctx->pc = 0x215ed0u;

    // 0x215ed0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x215ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x215ed4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x215ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x215ed8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x215ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x215edc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x215edcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ee0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x215ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x215ee4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x215ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x215ee8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x215ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x215eec: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x215eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x215ef0: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x215ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x215ef4: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x215ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x215ef8: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x215ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x215efc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x215efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x215f00: 0x8ec200c0  lw          $v0, 0xC0($s6)
    ctx->pc = 0x215f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 192)));
    // 0x215f04: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x215f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x215f08: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x215F08u;
    {
        const bool branch_taken_0x215f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F08u;
        // 0x215f0c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f08) {
            ctx->pc = 0x2160C0u;
            goto label_2160c0;
        }
    }
    ctx->pc = 0x215F10u;
    // 0x215f10: 0x26d00060  addiu       $s0, $s6, 0x60
    ctx->pc = 0x215f10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    // 0x215f14: 0xc085760  jal         func_215D80
    ctx->pc = 0x215F14u;
    SET_GPR_U32(ctx, 31, 0x215F1Cu);
    ctx->pc = 0x215F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F14u;
    // 0x215f18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215D80u, 0x215F14u, 0x215F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F1Cu;
label_215f1c:
    // 0x215f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x215f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f24: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x215f24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x215f28: 0x37a70008  ori         $a3, $sp, 0x8
    ctx->pc = 0x215f28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x215f2c: 0xc0856f4  jal         func_215BD0
    ctx->pc = 0x215F2Cu;
    SET_GPR_U32(ctx, 31, 0x215F34u);
    ctx->pc = 0x215F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215F2Cu;
    // 0x215f30: 0x37a8000c  ori         $t0, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215BD0u, 0x215F2Cu, 0x215F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215F34u;
label_215f34:
    // 0x215f34: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x215f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215f38: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x215f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x215f3c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x215f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x215f40: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x215F40u;
    {
        const bool branch_taken_0x215f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F40u;
        // 0x215f44: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f40) {
            ctx->pc = 0x2160C0u;
            goto label_2160c0;
        }
    }
    ctx->pc = 0x215F48u;
    // 0x215f48: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x215f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x215f4c: 0x0  nop
    ctx->pc = 0x215f4cu;
    // NOP
label_215f50:
    // 0x215f50: 0x8fb30004  lw          $s3, 0x4($sp)
    ctx->pc = 0x215f50u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x215f54: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x215f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x215f58: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x215f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x215f5c: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x215f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x215f60: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x215F60u;
    {
        const bool branch_taken_0x215f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F60u;
        // 0x215f64: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f60) {
            ctx->pc = 0x2160ACu;
            goto label_2160ac;
        }
    }
    ctx->pc = 0x215F68u;
    // 0x215f68: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x215f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x215f6c: 0x27be0018  addiu       $fp, $sp, 0x18
    ctx->pc = 0x215f6cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x215f70: 0x822818  mult        $a1, $a0, $v0
    ctx->pc = 0x215f70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x215f74: 0x27a20014  addiu       $v0, $sp, 0x14
    ctx->pc = 0x215f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x215f78: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x215f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x215f7c: 0xafa5001c  sw          $a1, 0x1C($sp)
    ctx->pc = 0x215f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
    // 0x215f80: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x215f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x215f84: 0x0  nop
    ctx->pc = 0x215f84u;
    // NOP
label_215f88:
    // 0x215f88: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x215f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x215f8c: 0x2463e4c0  addiu       $v1, $v1, -0x1B40
    ctx->pc = 0x215f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960320));
    // 0x215f90: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x215f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x215f94: 0x600013  mtlo        $v1
    ctx->pc = 0x215f94u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x215f98: 0xafb60010  sw          $s6, 0x10($sp)
    ctx->pc = 0x215f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 22));
    // 0x215f9c: 0x72621000  madd        $v0, $s3, $v0
    ctx->pc = 0x215f9cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x215fa0: 0x26750001  addiu       $s5, $s3, 0x1
    ctx->pc = 0x215fa0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x215fa4: 0x12c0003b  beqz        $s6, . + 4 + (0x3B << 2)
    ctx->pc = 0x215FA4u;
    {
        const bool branch_taken_0x215fa4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x215FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FA4u;
        // 0x215fa8: 0xa28821  addu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fa4) {
            ctx->pc = 0x216094u;
            goto label_216094;
        }
    }
    ctx->pc = 0x215FACu;
    // 0x215fac: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x215facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x215fb0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x215fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x215fb4: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x215FB4u;
    {
        const bool branch_taken_0x215fb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x215FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FB4u;
        // 0x215fb8: 0x27b70010  addiu       $s7, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fb4) {
            ctx->pc = 0x215FD4u;
            goto label_215fd4;
        }
    }
    ctx->pc = 0x215FBCu;
    // 0x215fbc: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x215FBCu;
    {
        const bool branch_taken_0x215fbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x215fbc) {
            ctx->pc = 0x215FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215FBCu;
            // 0x215fc0: 0xae160000  sw          $s6, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215FC4u;
            goto label_215fc4;
        }
    }
    ctx->pc = 0x215FC4u;
label_215fc4:
    // 0x215fc4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x215fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x215fc8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x215fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x215fcc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x215FCCu;
    {
        const bool branch_taken_0x215fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215FCCu;
        // 0x215fd0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fcc) {
            ctx->pc = 0x216094u;
            goto label_216094;
        }
    }
    ctx->pc = 0x215FD4u;
label_215fd4:
    // 0x215fd4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x215fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x215fd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x215fdc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x215fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x215fe0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x215fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215fe4: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x215fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x215fe8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x215fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215fec: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x215fecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x215ff0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x215ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x215ff4: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x215ff4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x215ff8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x215ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x215ffc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x215ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216000: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x216000u;
    {
        const bool branch_taken_0x216000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216000u;
        // 0x216004: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216000) {
            ctx->pc = 0x21601Cu;
            goto label_21601c;
        }
    }
    ctx->pc = 0x216008u;
    // 0x216008: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x216008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21600c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x21600Cu;
    SET_GPR_U32(ctx, 31, 0x216014u);
    ctx->pc = 0x216010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21600Cu;
    // 0x216010: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x21600Cu, 0x216014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216014u;
label_216014:
    // 0x216014: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x216014u;
    {
        const bool branch_taken_0x216014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216014u;
        // 0x216018: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216014) {
            ctx->pc = 0x216024u;
            goto label_216024;
        }
    }
    ctx->pc = 0x21601Cu;
label_21601c:
    // 0x21601c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21601cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216020: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x216020u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216024:
    // 0x216024: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x216024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216028: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x216028u;
    {
        const bool branch_taken_0x216028 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x21602Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216028u;
        // 0x21602c: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216028) {
            ctx->pc = 0x216044u;
            goto label_216044;
        }
    }
    ctx->pc = 0x216030u;
    // 0x216030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x216030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216034: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x216034u;
    SET_GPR_U32(ctx, 31, 0x21603Cu);
    ctx->pc = 0x216038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216034u;
    // 0x216038: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x216034u, 0x21603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21603Cu;
label_21603c:
    // 0x21603c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21603Cu;
    {
        const bool branch_taken_0x21603c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21603Cu;
        // 0x216040: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21603c) {
            ctx->pc = 0x216048u;
            goto label_216048;
        }
    }
    ctx->pc = 0x216044u;
label_216044:
    // 0x216044: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x216044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_216048:
    // 0x216048: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x216048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21604c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21604cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216050: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x216050u;
    {
        const bool branch_taken_0x216050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x216054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216050u;
        // 0x216054: 0x26750001  addiu       $s5, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216050) {
            ctx->pc = 0x216070u;
            goto label_216070;
        }
    }
    ctx->pc = 0x216058u;
label_216058:
    // 0x216058: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x216058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x21605c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21605cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x216060: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x216060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x216064: 0x0  nop
    ctx->pc = 0x216064u;
    // NOP
    // 0x216068: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x216068u;
    {
        const bool branch_taken_0x216068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216068u;
        // 0x21606c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216068) {
            ctx->pc = 0x216058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216058;
        }
    }
    ctx->pc = 0x216070u;
label_216070:
    // 0x216070: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x216070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x216074: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216074u;
    {
        const bool branch_taken_0x216074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x216078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216074u;
        // 0x216078: 0x2921021  addu        $v0, $s4, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216074) {
            ctx->pc = 0x216088u;
            goto label_216088;
        }
    }
    ctx->pc = 0x21607Cu;
    // 0x21607c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x21607Cu;
    SET_GPR_U32(ctx, 31, 0x216084u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x21607Cu, 0x216084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216084u;
label_216084:
    // 0x216084: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x216084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_216088:
    // 0x216088: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x216088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x21608c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x21608cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x216090: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x216090u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_216094:
    // 0x216094: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x216094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x216098: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x216098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21609c: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x21609cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2160a0: 0x1040ffb9  beqz        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x2160A0u;
    {
        const bool branch_taken_0x2160a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2160A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160A0u;
        // 0x2160a4: 0x3c03004a  lui         $v1, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160a0) {
            ctx->pc = 0x215F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215f88;
        }
    }
    ctx->pc = 0x2160A8u;
    // 0x2160a8: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2160a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2160ac:
    // 0x2160ac: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2160acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2160b0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2160b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2160b4: 0x1040ffa6  beqz        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x2160B4u;
    {
        const bool branch_taken_0x2160b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2160B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160B4u;
        // 0x2160b8: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160b4) {
            ctx->pc = 0x215F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215f50;
        }
    }
    ctx->pc = 0x2160BCu;
    // 0x2160bc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2160bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2160c0:
    // 0x2160c0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2160c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2160c4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2160c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2160c8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2160c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2160cc: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2160ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2160d0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2160d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2160d4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2160d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2160d8: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x2160d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2160dc: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x2160dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2160e0: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2160e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2160e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2160E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2160E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2160E4u;
        // 0x2160e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2160E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2160ECu;
    // 0x2160ec: 0x0  nop
    ctx->pc = 0x2160ecu;
    // NOP
    ctx->pc = 0x2160f0u;
}
