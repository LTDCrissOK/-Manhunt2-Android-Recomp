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

// Function: sub_002D0E30
// Address: 0x2d0e30 - 0x2d1040
void sub_002D0E30_0x2d0e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0E30_0x2d0e30");
#endif

    switch (ctx->pc) {
        case 0x2d0eecu: goto label_2d0eec;
        case 0x2d0f10u: goto label_2d0f10;
        case 0x2d0f90u: goto label_2d0f90;
        case 0x2d0fe0u: goto label_2d0fe0;
        case 0x2d1008u: goto label_2d1008;
        default: break;
    }

    ctx->pc = 0x2d0e30u;

    // 0x2d0e30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d0e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d0e34: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2d0e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2d0e38: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2d0e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2d0e3c: 0x249100a0  addiu       $s1, $a0, 0xA0
    ctx->pc = 0x2d0e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2d0e40: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2d0e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2d0e44: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2d0e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2d0e48: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2d0e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2d0e4c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2d0e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2d0e50: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2d0e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2d0e54: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x2d0e54u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d0e58: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x2d0e58u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d0e5c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x2d0e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d0e60: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2d0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2d0e64: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D0E64u;
    {
        const bool branch_taken_0x2d0e64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D0E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E64u;
        // 0x2d0e68: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e64) {
            ctx->pc = 0x2D0EA4u;
            goto label_2d0ea4;
        }
    }
    ctx->pc = 0x2D0E6Cu;
    // 0x2d0e6c: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0E6Cu;
    {
        const bool branch_taken_0x2d0e6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0e6c) {
            ctx->pc = 0x2D0E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0E6Cu;
            // 0x2d0e70: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0E98u;
            goto label_2d0e98;
        }
    }
    ctx->pc = 0x2D0E74u;
    // 0x2d0e74: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2d0e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d0e78: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2d0e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d0e7c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x2d0e7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2d0e80: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x2d0e80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2d0e84: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x2d0e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0e88: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x2d0e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0e8c: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x2d0e8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0e90: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x2d0e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0e94: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d0e98:
    // 0x2d0e98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2d0e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2d0e9c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x2D0E9Cu;
    {
        const bool branch_taken_0x2d0e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0E9Cu;
        // 0x2d0ea0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0e9c) {
            ctx->pc = 0x2D1018u;
            goto label_2d1018;
        }
    }
    ctx->pc = 0x2D0EA4u;
label_2d0ea4:
    // 0x2d0ea4: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x2d0ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x2d0ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0eac: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2d0eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x2d0eb0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2d0eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d0eb4: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x2d0eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2d0eb8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d0ebc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d0ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0ec0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2d0ec0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2d0ec4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2d0ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2d0ec8: 0xa2200b  movn        $a0, $a1, $v0
    ctx->pc = 0x2d0ec8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x2d0ecc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2d0eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d0ed0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d0ed4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0ED4u;
    {
        const bool branch_taken_0x2d0ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0ED4u;
        // 0x2d0ed8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ed4) {
            ctx->pc = 0x2D0EF4u;
            goto label_2d0ef4;
        }
    }
    ctx->pc = 0x2D0EDCu;
    // 0x2d0edc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d0ee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d0ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ee4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D0EE4u;
    SET_GPR_U32(ctx, 31, 0x2D0EECu);
    ctx->pc = 0x2D0EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0EE4u;
    // 0x2d0ee8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D0EE4u, 0x2D0EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0EECu;
label_2d0eec:
    // 0x2d0eec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0EECu;
    {
        const bool branch_taken_0x2d0eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0EECu;
        // 0x2d0ef0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0eec) {
            ctx->pc = 0x2D0F00u;
            goto label_2d0f00;
        }
    }
    ctx->pc = 0x2D0EF4u;
label_2d0ef4:
    // 0x2d0ef4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0ef8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d0ef8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0efc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d0f00:
    // 0x2d0f00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d0f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d0f04: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2d0f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f08: 0x1072000e  beq         $v1, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2D0F08u;
    {
        const bool branch_taken_0x2d0f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2D0F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F08u;
        // 0x2d0f0c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f08) {
            ctx->pc = 0x2D0F44u;
            goto label_2d0f44;
        }
    }
    ctx->pc = 0x2D0F10u;
label_2d0f10:
    // 0x2d0f10: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D0F10u;
    {
        const bool branch_taken_0x2d0f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0f10) {
            ctx->pc = 0x2D0F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0F10u;
            // 0x2d0f14: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0F3Cu;
            goto label_2d0f3c;
        }
    }
    ctx->pc = 0x2D0F18u;
    // 0x2d0f18: 0x68660007  ldl         $a2, 0x7($v1)
    ctx->pc = 0x2d0f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d0f1c: 0x6c660000  ldr         $a2, 0x0($v1)
    ctx->pc = 0x2d0f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d0f20: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x2d0f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d0f24: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x2d0f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d0f28: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x2d0f28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0f2c: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x2d0f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0f30: 0xb047000f  sdl         $a3, 0xF($v0)
    ctx->pc = 0x2d0f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0f34: 0xb4470008  sdr         $a3, 0x8($v0)
    ctx->pc = 0x2d0f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0f38: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2d0f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2d0f3c:
    // 0x2d0f3c: 0x1472fff4  bne         $v1, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x2D0F3Cu;
    {
        const bool branch_taken_0x2d0f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2D0F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F3Cu;
        // 0x2d0f40: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f3c) {
            ctx->pc = 0x2D0F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0f10;
        }
    }
    ctx->pc = 0x2D0F44u;
label_2d0f44:
    // 0x2d0f44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0f48: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2d0f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d0f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0f50: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D0F50u;
    {
        const bool branch_taken_0x2d0f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d0f50) {
            ctx->pc = 0x2D0F88u;
            goto label_2d0f88;
        }
    }
    ctx->pc = 0x2D0F58u;
    // 0x2d0f58: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D0F58u;
    {
        const bool branch_taken_0x2d0f58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0f58) {
            ctx->pc = 0x2D0F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0F58u;
            // 0x2d0f5c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0FC8u;
            goto label_2d0fc8;
        }
    }
    ctx->pc = 0x2D0F60u;
    // 0x2d0f60: 0x6a860007  ldl         $a2, 0x7($s4)
    ctx->pc = 0x2d0f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d0f64: 0x6e860000  ldr         $a2, 0x0($s4)
    ctx->pc = 0x2d0f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d0f68: 0x6a87000f  ldl         $a3, 0xF($s4)
    ctx->pc = 0x2d0f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d0f6c: 0x6e870008  ldr         $a3, 0x8($s4)
    ctx->pc = 0x2d0f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d0f70: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x2d0f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0f74: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x2d0f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0f78: 0xb207000f  sdl         $a3, 0xF($s0)
    ctx->pc = 0x2d0f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0f7c: 0xb6070008  sdr         $a3, 0x8($s0)
    ctx->pc = 0x2d0f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0f80: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D0F80u;
    {
        const bool branch_taken_0x2d0f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F80u;
        // 0x2d0f84: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f80) {
            ctx->pc = 0x2D0FC8u;
            goto label_2d0fc8;
        }
    }
    ctx->pc = 0x2D0F88u;
label_2d0f88:
    // 0x2d0f88: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D0F88u;
    {
        const bool branch_taken_0x2d0f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F88u;
        // 0x2d0f8c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f88) {
            ctx->pc = 0x2D0FC0u;
            goto label_2d0fc0;
        }
    }
    ctx->pc = 0x2D0F90u;
label_2d0f90:
    // 0x2d0f90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0F90u;
    {
        const bool branch_taken_0x2d0f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0F90u;
        // 0x2d0f94: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0f90) {
            ctx->pc = 0x2D0FB8u;
            goto label_2d0fb8;
        }
    }
    ctx->pc = 0x2D0F98u;
    // 0x2d0f98: 0x6a840007  ldl         $a0, 0x7($s4)
    ctx->pc = 0x2d0f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d0f9c: 0x6e840000  ldr         $a0, 0x0($s4)
    ctx->pc = 0x2d0f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d0fa0: 0x6a85000f  ldl         $a1, 0xF($s4)
    ctx->pc = 0x2d0fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d0fa4: 0x6e850008  ldr         $a1, 0x8($s4)
    ctx->pc = 0x2d0fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d0fa8: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x2d0fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0fac: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x2d0facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0fb0: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x2d0fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0fb4: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x2d0fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2d0fb8:
    // 0x2d0fb8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D0FB8u;
    {
        const bool branch_taken_0x2d0fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FB8u;
        // 0x2d0fbc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0fb8) {
            ctx->pc = 0x2D0F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0f90;
        }
    }
    ctx->pc = 0x2D0FC0u;
label_2d0fc0:
    // 0x2d0fc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d0fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0fc4: 0x0  nop
    ctx->pc = 0x2d0fc4u;
    // NOP
label_2d0fc8:
    // 0x2d0fc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2d0fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d0fcc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2d0fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d0fd0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0FD0u;
    {
        const bool branch_taken_0x2d0fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D0FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FD0u;
        // 0x2d0fd4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0fd0) {
            ctx->pc = 0x2D0FF8u;
            goto label_2d0ff8;
        }
    }
    ctx->pc = 0x2D0FD8u;
    // 0x2d0fd8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2d0fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2d0fdc: 0x0  nop
    ctx->pc = 0x2d0fdcu;
    // NOP
label_2d0fe0:
    // 0x2d0fe0: 0x0  nop
    ctx->pc = 0x2d0fe0u;
    // NOP
    // 0x2d0fe4: 0x0  nop
    ctx->pc = 0x2d0fe4u;
    // NOP
    // 0x2d0fe8: 0x0  nop
    ctx->pc = 0x2d0fe8u;
    // NOP
    // 0x2d0fec: 0x0  nop
    ctx->pc = 0x2d0fecu;
    // NOP
    // 0x2d0ff0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D0FF0u;
    {
        const bool branch_taken_0x2d0ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D0FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FF0u;
        // 0x2d0ff4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ff0) {
            ctx->pc = 0x2D0FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0fe0;
        }
    }
    ctx->pc = 0x2D0FF8u;
label_2d0ff8:
    // 0x2d0ff8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0FF8u;
    {
        const bool branch_taken_0x2d0ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0FF8u;
        // 0x2d0ffc: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0ff8) {
            ctx->pc = 0x2D100Cu;
            goto label_2d100c;
        }
    }
    ctx->pc = 0x2D1000u;
    // 0x2d1000: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D1000u;
    SET_GPR_U32(ctx, 31, 0x2D1008u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D1000u, 0x2D1008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1008u;
label_2d1008:
    // 0x2d1008: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x2d1008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_2d100c:
    // 0x2d100c: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2d100cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2d1010: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2d1010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2d1014: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2d1014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2d1018:
    // 0x2d1018: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2d1018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d101c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2d101cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d1020: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2d1020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1024: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2d1024u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d1028: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2d1028u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d102c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2d102cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d1030: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2d1030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1034: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1034u;
        // 0x2d1038: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D103Cu;
    // 0x2d103c: 0x0  nop
    ctx->pc = 0x2d103cu;
    // NOP
    ctx->pc = 0x2d1040u;
}
