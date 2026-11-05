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

// Function: sub_003AAB58
// Address: 0x3aab58 - 0x3aac38
void sub_003AAB58_0x3aab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAB58_0x3aab58");
#endif

    switch (ctx->pc) {
        case 0x3aab90u: goto label_3aab90;
        case 0x3aac10u: goto label_3aac10;
        default: break;
    }

    ctx->pc = 0x3aab58u;

    // 0x3aab58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aab58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aab5c: 0x3c070042  lui         $a3, 0x42
    ctx->pc = 0x3aab5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)66 << 16));
    // 0x3aab60: 0x24e2d978  addiu       $v0, $a3, -0x2688
    ctx->pc = 0x3aab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957432));
    // 0x3aab64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aab68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3aab68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3aab6c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x3aab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3aab70: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x3aab70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aab74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3aab74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aab78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3aab78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x41D97Cu));
    // 0x3aab7c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3aab7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aab80: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3AAB80u;
    {
        const bool branch_taken_0x3aab80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB80u;
        // 0x3aab84: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab80) {
            ctx->pc = 0x3AABB4u;
            goto label_3aabb4;
        }
    }
    ctx->pc = 0x3AAB88u;
    // 0x3aab88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3aab88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3aab8c: 0x0  nop
    ctx->pc = 0x3aab8cu;
    // NOP
label_3aab90:
    // 0x3aab90: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x3aab90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3aab94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3AAB94u;
    {
        const bool branch_taken_0x3aab94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAB94u;
        // 0x3aab98: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aab94) {
            ctx->pc = 0x3AABB4u;
            goto label_3aabb4;
        }
    }
    ctx->pc = 0x3AAB9Cu;
    // 0x3aab9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3aab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3aaba0: 0x0  nop
    ctx->pc = 0x3aaba0u;
    // NOP
    // 0x3aaba4: 0x0  nop
    ctx->pc = 0x3aaba4u;
    // NOP
    // 0x3aaba8: 0x0  nop
    ctx->pc = 0x3aaba8u;
    // NOP
    // 0x3aabac: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3AABACu;
    {
        const bool branch_taken_0x3aabac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aabac) {
            ctx->pc = 0x3AABB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AABACu;
            // 0x3aabb0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AAB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aab90;
        }
    }
    ctx->pc = 0x3AABB4u;
label_3aabb4:
    // 0x3aabb4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3aabb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3aabb8: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3AABB8u;
    {
        const bool branch_taken_0x3aabb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3AABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AABB8u;
        // 0x3aabbc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aabb8) {
            ctx->pc = 0x3AAC10u;
            goto label_3aac10;
        }
    }
    ctx->pc = 0x3AABC0u;
    // 0x3aabc0: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x3aabc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x3aabc4: 0x24e2d978  addiu       $v0, $a3, -0x2688
    ctx->pc = 0x3aabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957432));
    // 0x3aabc8: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3aabc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3aabcc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aabccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aabd0: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x3aabd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x3aabd4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x3aabd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3aabd8: 0x2463d940  addiu       $v1, $v1, -0x26C0
    ctx->pc = 0x3aabd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957376));
    // 0x3aabdc: 0x24a5eec0  addiu       $a1, $a1, -0x1140
    ctx->pc = 0x3aabdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962880));
    // 0x3aabe0: 0x24c6a998  addiu       $a2, $a2, -0x5668
    ctx->pc = 0x3aabe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945176));
    // 0x3aabe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3aabe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3aabe8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3aabe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3aabec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aabecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aabf0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3aabf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3aabf4: 0xae0a001c  sw          $t2, 0x1C($s0)
    ctx->pc = 0x3aabf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 10));
    // 0x3aabf8: 0xae090020  sw          $t1, 0x20($s0)
    ctx->pc = 0x3aabf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 9));
    // 0x3aabfc: 0xae080024  sw          $t0, 0x24($s0)
    ctx->pc = 0x3aabfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
    // 0x3aac00: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x3aac00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x3aac04: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x3aac04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x3aac08: 0xc0eab4e  jal         func_3AAD38
    ctx->pc = 0x3AAC08u;
    SET_GPR_U32(ctx, 31, 0x3AAC10u);
    ctx->pc = 0x3AAC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC08u;
    // 0x3aac0c: 0xae10003c  sw          $s0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAD38u, 0x3AAC08u, 0x3AAC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC10u;
label_3aac10:
    // 0x3aac10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3aac10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aac14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aac14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aac18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aac18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aac1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AAC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAC1Cu;
        // 0x3aac20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AAC24u;
    // 0x3aac24: 0x0  nop
    ctx->pc = 0x3aac24u;
    // NOP
    // 0x3aac28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3aac28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3aac2c: 0x0  nop
    ctx->pc = 0x3aac2cu;
    // NOP
    // 0x3aac30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3aac30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3aac34: 0x0  nop
    ctx->pc = 0x3aac34u;
    // NOP
    ctx->pc = 0x3aac38u;
}
