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

// Function: sub_003EDA70
// Address: 0x3eda70 - 0x3edbc0
void sub_003EDA70_0x3eda70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EDA70_0x3eda70");
#endif

    switch (ctx->pc) {
        case 0x3edaccu: goto label_3edacc;
        case 0x3edb30u: goto label_3edb30;
        case 0x3edb8cu: goto label_3edb8c;
        default: break;
    }

    ctx->pc = 0x3eda70u;

    // 0x3eda70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3eda70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3eda74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eda74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3eda78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eda78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3eda7c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3eda7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eda80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eda80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3eda84: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3eda84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eda88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3eda88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3eda8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3eda8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eda90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3eda90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3eda94: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3eda94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3eda98: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3EDA98u;
    {
        const bool branch_taken_0x3eda98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA98u;
        // 0x3eda9c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eda98) {
            ctx->pc = 0x3EDAC4u;
            goto label_3edac4;
        }
    }
    ctx->pc = 0x3EDAA0u;
    // 0x3edaa0: 0x15200021  bnez        $t1, . + 4 + (0x21 << 2)
    ctx->pc = 0x3EDAA0u;
    {
        const bool branch_taken_0x3edaa0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x3edaa0) {
            ctx->pc = 0x3EDB28u;
            goto label_3edb28;
        }
    }
    ctx->pc = 0x3EDAA8u;
    // 0x3edaa8: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3EDAA8u;
    {
        const bool branch_taken_0x3edaa8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3edaa8) {
            ctx->pc = 0x3EDAC4u;
            goto label_3edac4;
        }
    }
    ctx->pc = 0x3EDAB0u;
    // 0x3edab0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3edab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3edab4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3edab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3edab8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3edab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3edabc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3EDABCu;
    {
        const bool branch_taken_0x3edabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3edabc) {
            ctx->pc = 0x3EDB28u;
            goto label_3edb28;
        }
    }
    ctx->pc = 0x3EDAC4u;
label_3edac4:
    // 0x3edac4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EDAC4u;
    SET_GPR_U32(ctx, 31, 0x3EDACCu);
    ctx->pc = 0x3EDAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDAC4u;
    // 0x3edac8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EDAC4u, 0x3EDACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDACCu;
label_3edacc:
    // 0x3edacc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3edaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edad0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x3edad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3edad4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EDAD4u;
    {
        const bool branch_taken_0x3edad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3edad4) {
            ctx->pc = 0x3EDAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDAD4u;
            // 0x3edad8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDAF8u;
            goto label_3edaf8;
        }
    }
    ctx->pc = 0x3EDADCu;
    // 0x3edadc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3edadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3edae0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x3edae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x3edae4: 0x6a02000b  ldl         $v0, 0xB($s0)
    ctx->pc = 0x3edae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3edae8: 0x6e020004  ldr         $v0, 0x4($s0)
    ctx->pc = 0x3edae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3edaec: 0xb082001b  sdl         $v0, 0x1B($a0)
    ctx->pc = 0x3edaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3edaf0: 0xb4820014  sdr         $v0, 0x14($a0)
    ctx->pc = 0x3edaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3edaf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3edaf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3edaf8:
    // 0x3edaf8: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x3edaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x3edafc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3edafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3edb00: 0x56230005  bnel        $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3EDB00u;
    {
        const bool branch_taken_0x3edb00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x3edb00) {
            ctx->pc = 0x3EDB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDB00u;
            // 0x3edb04: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDB18u;
            goto label_3edb18;
        }
    }
    ctx->pc = 0x3EDB08u;
    // 0x3edb08: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x3edb08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x3edb0c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3edb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3edb10: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3EDB10u;
    {
        const bool branch_taken_0x3edb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB10u;
        // 0x3edb14: 0xac50000c  sw          $s0, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edb10) {
            ctx->pc = 0x3EDB70u;
            goto label_3edb70;
        }
    }
    ctx->pc = 0x3EDB18u;
label_3edb18:
    // 0x3edb18: 0x52220015  beql        $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3EDB18u;
    {
        const bool branch_taken_0x3edb18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3edb18) {
            ctx->pc = 0x3EDB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDB18u;
            // 0x3edb1c: 0xac700008  sw          $s0, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDB70u;
            goto label_3edb70;
        }
    }
    ctx->pc = 0x3EDB20u;
    // 0x3edb20: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3EDB20u;
    {
        const bool branch_taken_0x3edb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDB20u;
        // 0x3edb24: 0xae110004  sw          $s1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3edb20) {
            ctx->pc = 0x3EDB74u;
            goto label_3edb74;
        }
    }
    ctx->pc = 0x3EDB28u;
label_3edb28:
    // 0x3edb28: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EDB28u;
    SET_GPR_U32(ctx, 31, 0x3EDB30u);
    ctx->pc = 0x3EDB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDB28u;
    // 0x3edb2c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EDB28u, 0x3EDB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDB30u;
label_3edb30:
    // 0x3edb30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3edb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edb34: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x3edb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3edb38: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EDB38u;
    {
        const bool branch_taken_0x3edb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3edb38) {
            ctx->pc = 0x3EDB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDB38u;
            // 0x3edb3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDB5Cu;
            goto label_3edb5c;
        }
    }
    ctx->pc = 0x3EDB40u;
    // 0x3edb40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3edb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3edb44: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x3edb44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x3edb48: 0x6a02000b  ldl         $v0, 0xB($s0)
    ctx->pc = 0x3edb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3edb4c: 0x6e020004  ldr         $v0, 0x4($s0)
    ctx->pc = 0x3edb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3edb50: 0xb082001b  sdl         $v0, 0x1B($a0)
    ctx->pc = 0x3edb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3edb54: 0xb4820014  sdr         $v0, 0x14($a0)
    ctx->pc = 0x3edb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3edb58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3edb58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3edb5c:
    // 0x3edb5c: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x3edb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x3edb60: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3edb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3edb64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3edb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3edb68: 0x52220001  beql        $s1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x3EDB68u;
    {
        const bool branch_taken_0x3edb68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3edb68) {
            ctx->pc = 0x3EDB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EDB68u;
            // 0x3edb6c: 0xac70000c  sw          $s0, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDB70u;
            goto label_3edb70;
        }
    }
    ctx->pc = 0x3EDB70u;
label_3edb70:
    // 0x3edb70: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x3edb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_3edb74:
    // 0x3edb74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3edb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edb78: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3edb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3edb7c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3edb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3edb80: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x3edb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3edb84: 0xc0f8faa  jal         func_3E3EA8
    ctx->pc = 0x3EDB84u;
    SET_GPR_U32(ctx, 31, 0x3EDB8Cu);
    ctx->pc = 0x3EDB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EDB84u;
    // 0x3edb88: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3EA8u, 0x3EDB84u, 0x3EDB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EDB8Cu;
label_3edb8c:
    // 0x3edb8c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3edb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3edb90: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3edb90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3edb94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3edb94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3edb98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3edb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3edb9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3edb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3edba0: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x3edba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x3edba4: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x3edba4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x3edba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3edba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3edbac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3edbacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3edbb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3edbb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3edbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x3EDBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDBB4u;
        // 0x3edbb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EDBBCu;
    // 0x3edbbc: 0x0  nop
    ctx->pc = 0x3edbbcu;
    // NOP
    ctx->pc = 0x3edbc0u;
}
