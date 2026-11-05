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

// Function: sub_0028EA28
// Address: 0x28ea28 - 0x28eb70
void sub_0028EA28_0x28ea28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EA28_0x28ea28");
#endif

    switch (ctx->pc) {
        case 0x28ea80u: goto label_28ea80;
        case 0x28eaa8u: goto label_28eaa8;
        case 0x28eb48u: goto label_28eb48;
        default: break;
    }

    ctx->pc = 0x28ea28u;

    // 0x28ea28: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28ea28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28ea2c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28ea30: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x28ea30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x28ea34: 0x24451128  addiu       $a1, $v0, 0x1128
    ctx->pc = 0x28ea34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4392));
    // 0x28ea38: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x28ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x28ea3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28ea3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea40: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x28ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x28ea44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28ea44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea48: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x28ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x28ea4c: 0x27b40008  addiu       $s4, $sp, 0x8
    ctx->pc = 0x28ea4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x28ea50: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x28ea50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x28ea54: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x28ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x28ea58: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28ea5c: 0x8c441128  lw          $a0, 0x1128($v0)
    ctx->pc = 0x28ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4C1128u));
    // 0x28ea60: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x28ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C112Cu));
    // 0x28ea64: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x28ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28ea68: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x28ea68u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x28ea6c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28ea6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28ea70: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x28EA70u;
    {
        const bool branch_taken_0x28ea70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EA70u;
        // 0x28ea74: 0x27b50020  addiu       $s5, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea70) {
            ctx->pc = 0x28EAD0u;
            goto label_28ead0;
        }
    }
    ctx->pc = 0x28EA78u;
    // 0x28ea78: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28ea78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ea7c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x28ea7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28ea80:
    // 0x28ea80: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x28ea80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x28ea84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28ea84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28ea88: 0x8e431128  lw          $v1, 0x1128($s2)
    ctx->pc = 0x28ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4392)));
    // 0x28ea8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28ea90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ea94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28ea98: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EA98u;
    {
        const bool branch_taken_0x28ea98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ea98) {
            ctx->pc = 0x28EA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EA98u;
            // 0x28ea9c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EAACu;
            goto label_28eaac;
        }
    }
    ctx->pc = 0x28EAA0u;
    // 0x28eaa0: 0xc0a3754  jal         func_28DD50
    ctx->pc = 0x28EAA0u;
    SET_GPR_U32(ctx, 31, 0x28EAA8u);
    ctx->pc = 0x28EAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EAA0u;
    // 0x28eaa4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DD50u, 0x28EAA0u, 0x28EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EAA8u;
label_28eaa8:
    // 0x28eaa8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_28eaac:
    // 0x28eaac: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x28eaacu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x28eab0: 0x8e231128  lw          $v1, 0x1128($s1)
    ctx->pc = 0x28eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4392)));
    // 0x28eab4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28eab8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x28eab8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x28eabc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28eabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28eac0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x28eac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28eac4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x28eac4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28eac8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x28EAC8u;
    {
        const bool branch_taken_0x28eac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28eac8) {
            ctx->pc = 0x28EA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ea80;
        }
    }
    ctx->pc = 0x28EAD0u;
label_28ead0:
    // 0x28ead0: 0x8e241128  lw          $a0, 0x1128($s1)
    ctx->pc = 0x28ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4392)));
    // 0x28ead4: 0x26231128  addiu       $v1, $s1, 0x1128
    ctx->pc = 0x28ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4392));
    // 0x28ead8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x28ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x28eadc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28eadcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eae0: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x28eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x28eae4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x28eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x28eae8: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x28eae8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x28eaec: 0x8e241128  lw          $a0, 0x1128($s1)
    ctx->pc = 0x28eaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4392)));
    // 0x28eaf0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x28eaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28eaf4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x28eaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eaf8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x28eaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28eafc: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x28eafcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28eb00: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x28eb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x28eb04: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x28eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x28eb08: 0xaea30004  sw          $v1, 0x4($s5)
    ctx->pc = 0x28eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x28eb0c: 0xae261128  sw          $a2, 0x1128($s1)
    ctx->pc = 0x28eb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4392), GPR_U32(ctx, 6));
    // 0x28eb10: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x28eb10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x28eb14: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x28eb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28eb18: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x28eb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28eb1c: 0xb043000f  sdl         $v1, 0xF($v0)
    ctx->pc = 0x28eb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28eb20: 0xb4430008  sdr         $v1, 0x8($v0)
    ctx->pc = 0x28eb20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28eb24: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x28eb24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28eb28: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x28eb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28eb2c: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x28eb2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28eb30: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x28eb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28eb34: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x28eb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eb38: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EB38u;
    {
        const bool branch_taken_0x28eb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB38u;
        // 0x28eb3c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb38) {
            ctx->pc = 0x28EB4Cu;
            goto label_28eb4c;
        }
    }
    ctx->pc = 0x28EB40u;
    // 0x28eb40: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x28EB40u;
    SET_GPR_U32(ctx, 31, 0x28EB48u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x28EB40u, 0x28EB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EB48u;
label_28eb48:
    // 0x28eb48: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x28eb48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28eb4c:
    // 0x28eb4c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x28eb4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28eb50: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x28eb50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28eb54: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x28eb54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28eb58: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x28eb58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28eb5c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x28eb5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28eb60: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28eb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28eb64: 0x3e00008  jr          $ra
    ctx->pc = 0x28EB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EB64u;
        // 0x28eb68: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EB6Cu;
    // 0x28eb6c: 0x0  nop
    ctx->pc = 0x28eb6cu;
    // NOP
    ctx->pc = 0x28eb70u;
}
