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

// Function: sub_00313C88
// Address: 0x313c88 - 0x3142a0
void sub_00313C88_0x313c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313C88_0x313c88");
#endif

    switch (ctx->pc) {
        case 0x313ce0u: goto label_313ce0;
        case 0x313d18u: goto label_313d18;
        case 0x313d50u: goto label_313d50;
        case 0x313d64u: goto label_313d64;
        case 0x313d8cu: goto label_313d8c;
        case 0x313e08u: goto label_313e08;
        case 0x313e34u: goto label_313e34;
        case 0x313f74u: goto label_313f74;
        case 0x313f84u: goto label_313f84;
        case 0x313fb0u: goto label_313fb0;
        case 0x313fc8u: goto label_313fc8;
        case 0x314120u: goto label_314120;
        case 0x314130u: goto label_314130;
        case 0x31416cu: goto label_31416c;
        case 0x314184u: goto label_314184;
        case 0x314248u: goto label_314248;
        case 0x31425cu: goto label_31425c;
        default: break;
    }

    ctx->pc = 0x313c88u;

    // 0x313c88: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x313c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x313c8c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x313c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x313c90: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x313c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x313c94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x313c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x313c98: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x313c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x313c9c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x313c9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ca0: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x313ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x313ca4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x313ca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ca8: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x313ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x313cac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x313cacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313cb0: 0xc44033e4  lwc1        $f0, 0x33E4($v0)
    ctx->pc = 0x313cb0u;
    { uint32_t bits = FAST_READ32(0x4733E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313cb4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x313cb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313cb8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x313cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x313cbc: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x313cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313cc0: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x313cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x313cc4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x313cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x313cc8: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x313cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x313ccc: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x313cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x313cd0: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x313cd0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x313cd4: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x313cd4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x313cd8: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x313cd8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x313cdc: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x313cdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_313ce0:
    // 0x313ce0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x313ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x313ce4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x313ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x313ce8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x313ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x313cec: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x313cecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x313cf0: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x313CF0u;
    {
        const bool branch_taken_0x313cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x313CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CF0u;
        // 0x313cf4: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313cf0) {
            ctx->pc = 0x313CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313ce0;
        }
    }
    ctx->pc = 0x313CF8u;
    // 0x313cf8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x313cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x313cfc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x313cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x313d00: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x313d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313d04: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x313d04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x313d08: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x313D08u;
    {
        const bool branch_taken_0x313d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D08u;
        // 0x313d0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d08) {
            ctx->pc = 0x313D84u;
            goto label_313d84;
        }
    }
    ctx->pc = 0x313D10u;
    // 0x313d10: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x313d10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x313d14: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x313d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_313d18:
    // 0x313d18: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x313d18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x313d1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313d20: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x313d20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x313d24: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x313d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x313d28: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x313d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x313d2c: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x313D2Cu;
    {
        const bool branch_taken_0x313d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x313d2c) {
            ctx->pc = 0x313D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313D2Cu;
            // 0x313d30: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313D68u;
            goto label_313d68;
        }
    }
    ctx->pc = 0x313D34u;
    // 0x313d34: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x313d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x313d38: 0x14550003  bne         $v0, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x313D38u;
    {
        const bool branch_taken_0x313d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x313D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D38u;
        // 0x313d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d38) {
            ctx->pc = 0x313D48u;
            goto label_313d48;
        }
    }
    ctx->pc = 0x313D40u;
    // 0x313d40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x313D40u;
    {
        const bool branch_taken_0x313d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D40u;
        // 0x313d44: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d40) {
            ctx->pc = 0x313D64u;
            goto label_313d64;
        }
    }
    ctx->pc = 0x313D48u;
label_313d48:
    // 0x313d48: 0xc0c4ebc  jal         func_313AF0
    ctx->pc = 0x313D48u;
    SET_GPR_U32(ctx, 31, 0x313D50u);
    ctx->pc = 0x313D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313D48u;
    // 0x313d4c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313AF0u, 0x313D48u, 0x313D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313D50u;
label_313d50:
    // 0x313d50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x313d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313d54: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x313d54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x313d58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x313d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313d5c: 0xc0c4ee4  jal         func_313B90
    ctx->pc = 0x313D5Cu;
    SET_GPR_U32(ctx, 31, 0x313D64u);
    ctx->pc = 0x313D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313D5Cu;
    // 0x313d60: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313B90u, 0x313D5Cu, 0x313D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313D64u;
label_313d64:
    // 0x313d64: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x313d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_313d68:
    // 0x313d68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x313d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x313d6c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x313d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x313d70: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x313d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313d74: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x313d74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x313d78: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x313d78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x313d7c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x313D7Cu;
    {
        const bool branch_taken_0x313d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x313d7c) {
            ctx->pc = 0x313D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313D7Cu;
            // 0x313d80: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313d18;
        }
    }
    ctx->pc = 0x313D84u;
label_313d84:
    // 0x313d84: 0xc0e01d8  jal         func_380760
    ctx->pc = 0x313D84u;
    SET_GPR_U32(ctx, 31, 0x313D8Cu);
    ctx->pc = 0x380760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380760u, 0x313D84u, 0x313D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313D8Cu;
label_313d8c:
    // 0x313d8c: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x313D8Cu;
    {
        const bool branch_taken_0x313d8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x313D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D8Cu;
        // 0x313d90: 0x8c530010  lw          $s3, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313d8c) {
            ctx->pc = 0x313DBCu;
            goto label_313dbc;
        }
    }
    ctx->pc = 0x313D94u;
    // 0x313d94: 0x6a820017  ldl         $v0, 0x17($s4)
    ctx->pc = 0x313d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x313d98: 0x6e820010  ldr         $v0, 0x10($s4)
    ctx->pc = 0x313d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x313d9c: 0x6a83001f  ldl         $v1, 0x1F($s4)
    ctx->pc = 0x313d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x313da0: 0x6e830018  ldr         $v1, 0x18($s4)
    ctx->pc = 0x313da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x313da4: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x313da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313da8: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x313da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313dac: 0xb3a3003f  sdl         $v1, 0x3F($sp)
    ctx->pc = 0x313dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313db0: 0xb7a30038  sdr         $v1, 0x38($sp)
    ctx->pc = 0x313db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313db4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x313DB4u;
    {
        const bool branch_taken_0x313db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313db4) {
            ctx->pc = 0x313DD4u;
            goto label_313dd4;
        }
    }
    ctx->pc = 0x313DBCu;
label_313dbc:
    // 0x313dbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x313dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313dc0: 0x0  nop
    ctx->pc = 0x313dc0u;
    // NOP
    // 0x313dc4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x313dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x313dc8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x313dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x313dcc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x313dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x313dd0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x313dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_313dd4:
    // 0x313dd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x313dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x313dd8: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x313dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x313ddc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x313ddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313de0: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x313de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x313de4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x313de4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x313de8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x313de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x313dec: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x313decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x313df0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x313df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x313df4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x313df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x313df8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x313df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x313dfc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x313dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x313e00: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x313e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x313e04: 0x0  nop
    ctx->pc = 0x313e04u;
    // NOP
label_313e08:
    // 0x313e08: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x313e08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x313e0c: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x313e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x313e10: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x313e10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x313e14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x313E14u;
    {
        const bool branch_taken_0x313e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E14u;
        // 0x313e18: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e14) {
            ctx->pc = 0x313E3Cu;
            goto label_313e3c;
        }
    }
    ctx->pc = 0x313E1Cu;
    // 0x313e1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x313e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x313e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x313e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x313e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e2c: 0xc0de8a4  jal         func_37A290
    ctx->pc = 0x313E2Cu;
    SET_GPR_U32(ctx, 31, 0x313E34u);
    ctx->pc = 0x313E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313E2Cu;
    // 0x313e30: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A290u, 0x313E2Cu, 0x313E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313E34u;
label_313e34:
    // 0x313e34: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x313E34u;
    {
        const bool branch_taken_0x313e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E34u;
        // 0x313e38: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e34) {
            ctx->pc = 0x314188u;
            goto label_314188;
        }
    }
    ctx->pc = 0x313E3Cu;
label_313e3c:
    // 0x313e3c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x313e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x313e40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x313E40u;
    {
        const bool branch_taken_0x313e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313e40) {
            ctx->pc = 0x313E60u;
            goto label_313e60;
        }
    }
    ctx->pc = 0x313E48u;
    // 0x313e48: 0x44000ce  bltz        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x313E48u;
    {
        const bool branch_taken_0x313e48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x313E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E48u;
        // 0x313e4c: 0x28420004  slti        $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e48) {
            ctx->pc = 0x314184u;
            goto label_314184;
        }
    }
    ctx->pc = 0x313E50u;
    // 0x313e50: 0x504000cd  beql        $v0, $zero, . + 4 + (0xCD << 2)
    ctx->pc = 0x313E50u;
    {
        const bool branch_taken_0x313e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313e50) {
            ctx->pc = 0x313E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313E50u;
            // 0x313e54: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314188u;
            goto label_314188;
        }
    }
    ctx->pc = 0x313E58u;
    // 0x313e58: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x313E58u;
    {
        const bool branch_taken_0x313e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x313e58) {
            ctx->pc = 0x314028u;
            goto label_314028;
        }
    }
    ctx->pc = 0x313E60u;
label_313e60:
    // 0x313e60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x313e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x313e64: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x313e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x313e68: 0x6a250017  ldl         $a1, 0x17($s1)
    ctx->pc = 0x313e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x313e6c: 0x6e250010  ldr         $a1, 0x10($s1)
    ctx->pc = 0x313e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x313e70: 0x6a26001f  ldl         $a2, 0x1F($s1)
    ctx->pc = 0x313e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x313e74: 0x6e260018  ldr         $a2, 0x18($s1)
    ctx->pc = 0x313e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x313e78: 0xb3a50077  sdl         $a1, 0x77($sp)
    ctx->pc = 0x313e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313e7c: 0xb7a50070  sdr         $a1, 0x70($sp)
    ctx->pc = 0x313e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313e80: 0xb3a6007f  sdl         $a2, 0x7F($sp)
    ctx->pc = 0x313e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313e84: 0xb7a60078  sdr         $a2, 0x78($sp)
    ctx->pc = 0x313e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313e88: 0x4604b832  c.eq.s      $f23, $f4
    ctx->pc = 0x313e88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313e8c: 0x0  nop
    ctx->pc = 0x313e8cu;
    // NOP
    // 0x313e90: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x313E90u;
    {
        const bool branch_taken_0x313e90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E90u;
        // 0x313e94: 0xc7a10074  lwc1        $f1, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e90) {
            ctx->pc = 0x313F00u;
            goto label_313f00;
        }
    }
    ctx->pc = 0x313E98u;
    // 0x313e98: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x313e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x313e9c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x313e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313ea0: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x313ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x313ea4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x313ea4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x313ea8: 0xc443bd04  lwc1        $f3, -0x42FC($v0)
    ctx->pc = 0x313ea8u;
    { uint32_t bits = FAST_READ32(0x3FBD04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x313eac: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x313eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x313eb0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x313eb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x313eb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x313eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x313eb8: 0x46041832  c.eq.s      $f3, $f4
    ctx->pc = 0x313eb8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313ebc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x313ebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x313ec0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x313EC0u;
    {
        const bool branch_taken_0x313ec0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x313EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313EC0u;
        // 0x313ec4: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ec0) {
            ctx->pc = 0x313ECCu;
            goto label_313ecc;
        }
    }
    ctx->pc = 0x313EC8u;
    // 0x313ec8: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x313ec8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_313ecc:
    // 0x313ecc: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x313eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x313ed0: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x313ed0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x313ed4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x313ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313ed8: 0x0  nop
    ctx->pc = 0x313ed8u;
    // NOP
    // 0x313edc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x313edcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x313ee0: 0x0  nop
    ctx->pc = 0x313ee0u;
    // NOP
    // 0x313ee4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x313EE4u;
    {
        const bool branch_taken_0x313ee4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x313EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313EE4u;
        // 0x313ee8: 0xc7a00070  lwc1        $f0, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ee4) {
            ctx->pc = 0x313F04u;
            goto label_313f04;
        }
    }
    ctx->pc = 0x313EECu;
    // 0x313eec: 0x3c014164  lui         $at, 0x4164
    ctx->pc = 0x313eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16740 << 16));
    // 0x313ef0: 0x34219249  ori         $at, $at, 0x9249
    ctx->pc = 0x313ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37449);
    // 0x313ef4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x313ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x313ef8: 0x0  nop
    ctx->pc = 0x313ef8u;
    // NOP
    // 0x313efc: 0x46000dc2  mul.s       $f23, $f1, $f0
    ctx->pc = 0x313efcu;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_313f00:
    // 0x313f00: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x313f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_313f04:
    // 0x313f04: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x313f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x313f08: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x313f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x313f0c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x313f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x313f10: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x313f10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x313f14: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x313f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x313f18: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x313f18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x313f1c: 0x46140142  mul.s       $f5, $f0, $f20
    ctx->pc = 0x313f1cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x313f20: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x313f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x313f24: 0x46140902  mul.s       $f4, $f1, $f20
    ctx->pc = 0x313f24u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x313f28: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x313f28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x313f2c: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x313f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x313f30: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x313f30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x313f34: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x313f34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x313f38: 0x46002864  .word       0x46002864                   # cvt.w.s     $f1, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x313f38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x313f3c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x313f3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x313f40: 0x46002064  .word       0x46002064                   # cvt.w.s     $f1, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x313f40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x313f44: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x313f44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x313f48: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x313f48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x313f4c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x313f4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x313f50: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x313f50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x313f54: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x313f54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x313f58: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x313f58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x313f5c: 0xa3a30041  sb          $v1, 0x41($sp)
    ctx->pc = 0x313f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 3));
    // 0x313f60: 0xa3a40042  sb          $a0, 0x42($sp)
    ctx->pc = 0x313f60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 4));
    // 0x313f64: 0xa3a50043  sb          $a1, 0x43($sp)
    ctx->pc = 0x313f64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 67), (uint8_t)GPR_U32(ctx, 5));
    // 0x313f68: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x313f68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x313f6c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x313F6Cu;
    SET_GPR_U32(ctx, 31, 0x313F74u);
    ctx->pc = 0x313F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313F6Cu;
    // 0x313f70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x313F6Cu, 0x313F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313F74u;
label_313f74:
    // 0x313f74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x313F74u;
    {
        const bool branch_taken_0x313f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313f74) {
            ctx->pc = 0x313F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313F74u;
            // 0x313f78: 0xc60000a0  lwc1        $f0, 0xA0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x313F88u;
            goto label_313f88;
        }
    }
    ctx->pc = 0x313F7Cu;
    // 0x313f7c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x313F7Cu;
    SET_GPR_U32(ctx, 31, 0x313F84u);
    ctx->pc = 0x313F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313F7Cu;
    // 0x313f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x313F7Cu, 0x313F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313F84u;
label_313f84:
    // 0x313f84: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x313f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_313f88:
    // 0x313f88: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x313f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x313f8c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x313f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x313f90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x313f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313f94: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x313f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x313f98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x313f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313f9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x313f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x313fa0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x313fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x313fa4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x313fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x313fa8: 0xc0de880  jal         func_37A200
    ctx->pc = 0x313FA8u;
    SET_GPR_U32(ctx, 31, 0x313FB0u);
    ctx->pc = 0x313FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313FA8u;
    // 0x313fac: 0xe7a10068  swc1        $f1, 0x68($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A200u, 0x313FA8u, 0x313FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313FB0u;
label_313fb0:
    // 0x313fb0: 0x93a60040  lbu         $a2, 0x40($sp)
    ctx->pc = 0x313fb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x313fb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x313fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313fb8: 0x93a70041  lbu         $a3, 0x41($sp)
    ctx->pc = 0x313fb8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 65)));
    // 0x313fbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x313fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313fc0: 0xc0de8a4  jal         func_37A290
    ctx->pc = 0x313FC0u;
    SET_GPR_U32(ctx, 31, 0x313FC8u);
    ctx->pc = 0x313FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313FC0u;
    // 0x313fc4: 0x93a80042  lbu         $t0, 0x42($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A290u, 0x313FC0u, 0x313FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313FC8u;
label_313fc8:
    // 0x313fc8: 0x6a220017  ldl         $v0, 0x17($s1)
    ctx->pc = 0x313fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x313fcc: 0x6e220010  ldr         $v0, 0x10($s1)
    ctx->pc = 0x313fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x313fd0: 0x6a23001f  ldl         $v1, 0x1F($s1)
    ctx->pc = 0x313fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x313fd4: 0x6e230018  ldr         $v1, 0x18($s1)
    ctx->pc = 0x313fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x313fd8: 0xb3a20077  sdl         $v0, 0x77($sp)
    ctx->pc = 0x313fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313fdc: 0xb7a20070  sdr         $v0, 0x70($sp)
    ctx->pc = 0x313fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313fe0: 0xb3a3007f  sdl         $v1, 0x7F($sp)
    ctx->pc = 0x313fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313fe4: 0xb7a30078  sdr         $v1, 0x78($sp)
    ctx->pc = 0x313fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x313fe8: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x313fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x313fec: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x313fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x313ff0: 0xc7a50078  lwc1        $f5, 0x78($sp)
    ctx->pc = 0x313ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x313ff4: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x313ff4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x313ff8: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x313ff8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x313ffc: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x313ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x314000: 0x46152942  mul.s       $f5, $f5, $f21
    ctx->pc = 0x314000u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
    // 0x314004: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x314004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314008: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x314008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31400c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x31400cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x314010: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x314010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x314014: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x314014u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x314018: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x314018u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x31401c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x31401cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x314020: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x314020u;
    {
        const bool branch_taken_0x314020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314020u;
        // 0x314024: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x314020) {
            ctx->pc = 0x314184u;
            goto label_314184;
        }
    }
    ctx->pc = 0x314028u;
label_314028:
    // 0x314028: 0x6a260017  ldl         $a2, 0x17($s1)
    ctx->pc = 0x314028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x31402c: 0x6e260010  ldr         $a2, 0x10($s1)
    ctx->pc = 0x31402cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x314030: 0x6a22001f  ldl         $v0, 0x1F($s1)
    ctx->pc = 0x314030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x314034: 0x6e220018  ldr         $v0, 0x18($s1)
    ctx->pc = 0x314034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x314038: 0xb3a60077  sdl         $a2, 0x77($sp)
    ctx->pc = 0x314038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31403c: 0xb7a60070  sdr         $a2, 0x70($sp)
    ctx->pc = 0x31403cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x314040: 0xb3a2007f  sdl         $v0, 0x7F($sp)
    ctx->pc = 0x314040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x314044: 0xb7a20078  sdr         $v0, 0x78($sp)
    ctx->pc = 0x314044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x314048: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x314048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31404c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x31404cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x314050: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x314050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x314054: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x314054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314058: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x314058u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x31405c: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x31405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x314060: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x314060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x314064: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x314064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x314068: 0x0  nop
    ctx->pc = 0x314068u;
    // NOP
    // 0x31406c: 0x0  nop
    ctx->pc = 0x31406cu;
    // NOP
    // 0x314070: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x314070u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x314074: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x314074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x314078: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x314078u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x31407c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x31407cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x314080: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x314080u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x314084: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x314084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x314088: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x314088u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x31408c: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x31408cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x314090: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x314090u;
    {
        const bool branch_taken_0x314090 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x314094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314090u;
        // 0x314094: 0xe7a40074  swc1        $f4, 0x74($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x314090) {
            ctx->pc = 0x31409Cu;
            goto label_31409c;
        }
    }
    ctx->pc = 0x314098u;
    // 0x314098: 0xe7a50070  swc1        $f5, 0x70($sp)
    ctx->pc = 0x314098u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_31409c:
    // 0x31409c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x31409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3140a0: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x3140a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3140a4: 0x0  nop
    ctx->pc = 0x3140a4u;
    // NOP
    // 0x3140a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3140A8u;
    {
        const bool branch_taken_0x3140a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3140a8) {
            ctx->pc = 0x3140ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3140A8u;
            // 0x3140ac: 0xe7a50074  swc1        $f5, 0x74($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3140B0u;
            goto label_3140b0;
        }
    }
    ctx->pc = 0x3140B0u;
label_3140b0:
    // 0x3140b0: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x3140b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3140b4: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x3140b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3140b8: 0x0  nop
    ctx->pc = 0x3140b8u;
    // NOP
    // 0x3140bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3140BCu;
    {
        const bool branch_taken_0x3140bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3140bc) {
            ctx->pc = 0x3140C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3140BCu;
            // 0x3140c0: 0xe7a50078  swc1        $f5, 0x78($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3140C4u;
            goto label_3140c4;
        }
    }
    ctx->pc = 0x3140C4u;
label_3140c4:
    // 0x3140c4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x3140c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3140c8: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x3140c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3140cc: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3140ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3140d0: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x3140d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3140d4: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x3140d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3140d8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x3140d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3140dc: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x3140dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x3140e0: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3140e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x3140e4: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x3140e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3140e8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3140e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3140ec: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3140ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3140f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3140f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3140f4: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3140f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3140f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3140f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3140fc: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x3140fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x314100: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314100u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x314104: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x314104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x314108: 0xa3a30041  sb          $v1, 0x41($sp)
    ctx->pc = 0x314108u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 3));
    // 0x31410c: 0xa3a40042  sb          $a0, 0x42($sp)
    ctx->pc = 0x31410cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 4));
    // 0x314110: 0xa3a50043  sb          $a1, 0x43($sp)
    ctx->pc = 0x314110u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 67), (uint8_t)GPR_U32(ctx, 5));
    // 0x314114: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x314114u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x314118: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x314118u;
    SET_GPR_U32(ctx, 31, 0x314120u);
    ctx->pc = 0x31411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314118u;
    // 0x31411c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x314118u, 0x314120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314120u;
label_314120:
    // 0x314120: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x314120u;
    {
        const bool branch_taken_0x314120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314120u;
        // 0x314124: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314120) {
            ctx->pc = 0x314134u;
            goto label_314134;
        }
    }
    ctx->pc = 0x314128u;
    // 0x314128: 0xc0c4900  jal         func_312400
    ctx->pc = 0x314128u;
    SET_GPR_U32(ctx, 31, 0x314130u);
    ctx->pc = 0x31412Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314128u;
    // 0x31412c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x314128u, 0x314130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314130u;
label_314130:
    // 0x314130: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x314130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_314134:
    // 0x314134: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x314134u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x314138: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x314138u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31413c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x31413cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x314140: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x314140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x314144: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x314144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x314148: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x314148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31414c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x31414cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x314150: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x314150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314154: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x314154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314158: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x314158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x31415c: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x31415cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x314160: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x314160u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x314164: 0xc0de880  jal         func_37A200
    ctx->pc = 0x314164u;
    SET_GPR_U32(ctx, 31, 0x31416Cu);
    ctx->pc = 0x314168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314164u;
    // 0x314168: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A200u, 0x314164u, 0x31416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31416Cu;
label_31416c:
    // 0x31416c: 0x93a60040  lbu         $a2, 0x40($sp)
    ctx->pc = 0x31416cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314170: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x314170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314174: 0x93a70041  lbu         $a3, 0x41($sp)
    ctx->pc = 0x314174u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 65)));
    // 0x314178: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x314178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31417c: 0xc0de8a4  jal         func_37A290
    ctx->pc = 0x31417Cu;
    SET_GPR_U32(ctx, 31, 0x314184u);
    ctx->pc = 0x314180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31417Cu;
    // 0x314180: 0x93a80042  lbu         $t0, 0x42($sp) (Delay Slot)
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A290u, 0x31417Cu, 0x314184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314184u;
label_314184:
    // 0x314184: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x314184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_314188:
    // 0x314188: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x314188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x31418c: 0x5440ff1e  bnel        $v0, $zero, . + 4 + (-0xE2 << 2)
    ctx->pc = 0x31418Cu;
    {
        const bool branch_taken_0x31418c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31418c) {
            ctx->pc = 0x314190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31418Cu;
            // 0x314190: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_313e08;
        }
    }
    ctx->pc = 0x314194u;
    // 0x314194: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x314194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x314198: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x314198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31419c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31419cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3141a0: 0x0  nop
    ctx->pc = 0x3141a0u;
    // NOP
    // 0x3141a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3141a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3141a8: 0x0  nop
    ctx->pc = 0x3141a8u;
    // NOP
    // 0x3141ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3141ACu;
    {
        const bool branch_taken_0x3141ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3141ac) {
            ctx->pc = 0x3141B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3141ACu;
            // 0x3141b0: 0xe7a10030  swc1        $f1, 0x30($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3141B4u;
            goto label_3141b4;
        }
    }
    ctx->pc = 0x3141B4u;
label_3141b4:
    // 0x3141b4: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3141b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3141b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3141b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3141bc: 0x0  nop
    ctx->pc = 0x3141bcu;
    // NOP
    // 0x3141c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3141C0u;
    {
        const bool branch_taken_0x3141c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3141c0) {
            ctx->pc = 0x3141C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3141C0u;
            // 0x3141c4: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3141C8u;
            goto label_3141c8;
        }
    }
    ctx->pc = 0x3141C8u;
label_3141c8:
    // 0x3141c8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x3141c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3141cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3141ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3141d0: 0x0  nop
    ctx->pc = 0x3141d0u;
    // NOP
    // 0x3141d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3141D4u;
    {
        const bool branch_taken_0x3141d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3141d4) {
            ctx->pc = 0x3141D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3141D4u;
            // 0x3141d8: 0xe7a10038  swc1        $f1, 0x38($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3141DCu;
            goto label_3141dc;
        }
    }
    ctx->pc = 0x3141DCu;
label_3141dc:
    // 0x3141dc: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3141dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3141e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3141e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3141e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3141e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3141e8: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x3141e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3141ec: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x3141ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3141f0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3141f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3141f4: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x3141f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3141f8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x3141f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3141fc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3141fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x314200: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x314200u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x314204: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x314204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x314208: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314208u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31420c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x31420cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x314210: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314210u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x314214: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x314214u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x314218: 0x46002064  .word       0x46002064                   # cvt.w.s     $f1, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314218u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31421c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x31421cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x314220: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x314220u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x314224: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x314224u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x314228: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x314228u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x31422c: 0xa3a30041  sb          $v1, 0x41($sp)
    ctx->pc = 0x31422cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 3));
    // 0x314230: 0xa3a50042  sb          $a1, 0x42($sp)
    ctx->pc = 0x314230u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 5));
    // 0x314234: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x314234u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314238: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x314238u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31423c: 0x93a70042  lbu         $a3, 0x42($sp)
    ctx->pc = 0x31423cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
    // 0x314240: 0xc0de8c2  jal         func_37A308
    ctx->pc = 0x314240u;
    SET_GPR_U32(ctx, 31, 0x314248u);
    ctx->pc = 0x314244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314240u;
    // 0x314244: 0xa3a80043  sb          $t0, 0x43($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 67), (uint8_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A308u, 0x314240u, 0x314248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314248u;
label_314248:
    // 0x314248: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x314248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31424c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x31424cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x314250: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x314250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x314254: 0xc0de8de  jal         func_37A378
    ctx->pc = 0x314254u;
    SET_GPR_U32(ctx, 31, 0x31425Cu);
    ctx->pc = 0x314258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314254u;
    // 0x314258: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37A378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A378u, 0x314254u, 0x31425Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31425Cu;
label_31425c:
    // 0x31425c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31425cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x314260: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x314260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x314264: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x314264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x314268: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x314268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x31426c: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x31426cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x314270: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x314270u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x314274: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x314274u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x314278: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x314278u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x31427c: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x31427cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x314280: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x314280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x314284: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x314284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x314288: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x314288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x31428c: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x31428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x314290: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x314290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x314294: 0xac43bce4  sw          $v1, -0x431C($v0)
    ctx->pc = 0x314294u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FBCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBCE4u, _value); } while (0);
    // 0x314298: 0x3e00008  jr          $ra
    ctx->pc = 0x314298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314298u;
        // 0x31429c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3142A0u;
}
