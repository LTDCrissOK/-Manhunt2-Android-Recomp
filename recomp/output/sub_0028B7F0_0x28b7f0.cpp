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

// Function: sub_0028B7F0
// Address: 0x28b7f0 - 0x28b898
void sub_0028B7F0_0x28b7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B7F0_0x28b7f0");
#endif

    switch (ctx->pc) {
        case 0x28b838u: goto label_28b838;
        case 0x28b844u: goto label_28b844;
        default: break;
    }

    ctx->pc = 0x28b7f0u;

    // 0x28b7f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28b7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28b7f4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28b7f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28b7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b7fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28b7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28b800: 0x2450a540  addiu       $s0, $v0, -0x5AC0
    ctx->pc = 0x28b800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944064));
    // 0x28b804: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28b804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28b808: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28b808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b80c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28b80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28b810: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28b810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b814: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x28b814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x28b818: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28b818u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b81c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x28b81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x28b820: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28b820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b824: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x28b824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x28b828: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x28b828u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b82c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x28b82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x28b830: 0x2416001e  addiu       $s6, $zero, 0x1E
    ctx->pc = 0x28b830u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x28b834: 0x0  nop
    ctx->pc = 0x28b834u;
    // NOP
label_28b838:
    // 0x28b838: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x28b838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x28b83c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x28B83Cu;
    SET_GPR_U32(ctx, 31, 0x28B844u);
    ctx->pc = 0x28B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B83Cu;
    // 0x28b840: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x28B83Cu, 0x28B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B844u;
label_28b844:
    // 0x28b844: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28B844u;
    {
        const bool branch_taken_0x28b844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B844u;
        // 0x28b848: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b844) {
            ctx->pc = 0x28B860u;
            goto label_28b860;
        }
    }
    ctx->pc = 0x28B84Cu;
    // 0x28b84c: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x28b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x28b850: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b854: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x28b854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x28b858: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28B858u;
    {
        const bool branch_taken_0x28b858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B858u;
        // 0x28b85c: 0xae15000c  sw          $s5, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b858) {
            ctx->pc = 0x28B86Cu;
            goto label_28b86c;
        }
    }
    ctx->pc = 0x28B860u;
label_28b860:
    // 0x28b860: 0x1636fff5  bne         $s1, $s6, . + 4 + (-0xB << 2)
    ctx->pc = 0x28B860u;
    {
        const bool branch_taken_0x28b860 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        ctx->pc = 0x28B864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B860u;
        // 0x28b864: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b860) {
            ctx->pc = 0x28B838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b838;
        }
    }
    ctx->pc = 0x28B868u;
    // 0x28b868: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28b868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b86c:
    // 0x28b86c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b870: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28b870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28b874: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28b874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b878: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28b878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28b87c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x28b87cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b880: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x28b880u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28b884: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x28b884u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b888: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x28b888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28b88c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B88Cu;
        // 0x28b890: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B894u;
    // 0x28b894: 0x0  nop
    ctx->pc = 0x28b894u;
    // NOP
    ctx->pc = 0x28b898u;
}
