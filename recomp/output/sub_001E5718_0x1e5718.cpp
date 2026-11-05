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

// Function: sub_001E5718
// Address: 0x1e5718 - 0x1e57b0
void sub_001E5718_0x1e5718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5718_0x1e5718");
#endif

    switch (ctx->pc) {
        case 0x1e5750u: goto label_1e5750;
        case 0x1e5768u: goto label_1e5768;
        case 0x1e5774u: goto label_1e5774;
        default: break;
    }

    ctx->pc = 0x1e5718u;

    // 0x1e5718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e5718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e571c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e571cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e5720: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1e5720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1e5724: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e5724u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5728: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1e5728u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e572c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e572cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5730: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x1e5730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1e5734: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e5734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e5738: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1e5738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1e573c: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x1e573cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x1e5740: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1e5740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1e5744: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e5744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e5748: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1E5748u;
    SET_GPR_U32(ctx, 31, 0x1E5750u);
    ctx->pc = 0x1E574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5748u;
    // 0x1e574c: 0x2651ffff  addiu       $s1, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1E5748u, 0x1E5750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5750u;
label_1e5750:
    // 0x1e5750: 0x24530010  addiu       $s3, $v0, 0x10
    ctx->pc = 0x1e5750u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e5754: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1e5754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1e5758: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E5758u;
    {
        const bool branch_taken_0x1e5758 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5758u;
        // 0x1e575c: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5758) {
            ctx->pc = 0x1E5780u;
            goto label_1e5780;
        }
    }
    ctx->pc = 0x1E5760u;
    // 0x1e5760: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1e5760u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5764: 0x0  nop
    ctx->pc = 0x1e5764u;
    // NOP
label_1e5768:
    // 0x1e5768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e576c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E576Cu;
    SET_GPR_U32(ctx, 31, 0x1E5774u);
    ctx->pc = 0x1E5770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E576Cu;
    // 0x1e5770: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E576Cu, 0x1E5774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5774u;
label_1e5774:
    // 0x1e5774: 0x0  nop
    ctx->pc = 0x1e5774u;
    // NOP
    // 0x1e5778: 0x1634fffb  bne         $s1, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E5778u;
    {
        const bool branch_taken_0x1e5778 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x1E577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5778u;
        // 0x1e577c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5778) {
            ctx->pc = 0x1E5768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5768;
        }
    }
    ctx->pc = 0x1E5780u;
label_1e5780:
    // 0x1e5780: 0xaeb20008  sw          $s2, 0x8($s5)
    ctx->pc = 0x1e5780u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 18));
    // 0x1e5784: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x1e5784u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
    // 0x1e5788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e578c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e578cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5790: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e5790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5794: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1e5794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e5798: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1e5798u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e579c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1e579cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e57a0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e57a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e57a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E57A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E57A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E57A4u;
        // 0x1e57a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E57A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E57ACu;
    // 0x1e57ac: 0x0  nop
    ctx->pc = 0x1e57acu;
    // NOP
    ctx->pc = 0x1e57b0u;
}
