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

// Function: sub_00336BB8
// Address: 0x336bb8 - 0x336c70
void sub_00336BB8_0x336bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336BB8_0x336bb8");
#endif

    switch (ctx->pc) {
        case 0x336bd0u: goto label_336bd0;
        case 0x336c10u: goto label_336c10;
        case 0x336c40u: goto label_336c40;
        default: break;
    }

    ctx->pc = 0x336bb8u;

    // 0x336bb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x336bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x336bbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x336bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x336bc0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x336bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x336bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x336bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x336bc8: 0xc0cd984  jal         func_336610
    ctx->pc = 0x336BC8u;
    SET_GPR_U32(ctx, 31, 0x336BD0u);
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x336BC8u, 0x336BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336BD0u;
label_336bd0:
    // 0x336bd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x336bd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336bd4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x336BD4u;
    {
        const bool branch_taken_0x336bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x336BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336BD4u;
        // 0x336bd8: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336bd4) {
            ctx->pc = 0x336BE4u;
            goto label_336be4;
        }
    }
    ctx->pc = 0x336BDCu;
    // 0x336bdc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x336BDCu;
    {
        const bool branch_taken_0x336bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336BDCu;
        // 0x336be0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336bdc) {
            ctx->pc = 0x336C54u;
            goto label_336c54;
        }
    }
    ctx->pc = 0x336BE4u;
label_336be4:
    // 0x336be4: 0x24710018  addiu       $s1, $v1, 0x18
    ctx->pc = 0x336be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x336be8: 0x24465c08  addiu       $a2, $v0, 0x5C08
    ctx->pc = 0x336be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 23560));
    // 0x336bec: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x336becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x336bf0: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x336bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x336bf4: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x336bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x336bf8: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x336bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x336bfc: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x336bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x336c00: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x336c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x336c04: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x336c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x336c08: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x336c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x336c0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x336c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336c10:
    // 0x336c10: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x336c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x336c14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x336c14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x336c18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x336c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336c1c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x336c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x336c20: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x336c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x336c24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x336c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x336c28: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x336c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x336c2c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x336c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x336c30: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x336C30u;
    {
        const bool branch_taken_0x336c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x336C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C30u;
        // 0x336c34: 0x66100001  daddiu      $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c30) {
            ctx->pc = 0x336C48u;
            goto label_336c48;
        }
    }
    ctx->pc = 0x336C38u;
    // 0x336c38: 0xc0cdd5c  jal         func_337570
    ctx->pc = 0x336C38u;
    SET_GPR_U32(ctx, 31, 0x336C40u);
    ctx->pc = 0x337570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337570u, 0x336C38u, 0x336C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336C40u;
label_336c40:
    // 0x336c40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x336C40u;
    {
        const bool branch_taken_0x336c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C40u;
        // 0x336c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c40) {
            ctx->pc = 0x336C54u;
            goto label_336c54;
        }
    }
    ctx->pc = 0x336C48u;
label_336c48:
    // 0x336c48: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x336c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x336c4c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x336C4Cu;
    {
        const bool branch_taken_0x336c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C4Cu;
        // 0x336c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c4c) {
            ctx->pc = 0x336C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336c10;
        }
    }
    ctx->pc = 0x336C54u;
label_336c54:
    // 0x336c54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x336c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336c58: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x336c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x336c5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x336c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336c60: 0x3e00008  jr          $ra
    ctx->pc = 0x336C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C60u;
        // 0x336c64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336C68u;
    // 0x336c68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x336c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x336c6c: 0x0  nop
    ctx->pc = 0x336c6cu;
    // NOP
    ctx->pc = 0x336c70u;
}
