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

// Function: sub_001E8828
// Address: 0x1e8828 - 0x1e88a0
void sub_001E8828_0x1e8828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8828_0x1e8828");
#endif

    switch (ctx->pc) {
        case 0x1e8850u: goto label_1e8850;
        case 0x1e8858u: goto label_1e8858;
        case 0x1e886cu: goto label_1e886c;
        case 0x1e8874u: goto label_1e8874;
        default: break;
    }

    ctx->pc = 0x1e8828u;

    // 0x1e8828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e8828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e882c: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x1e882cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1e8830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e8830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e8834: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e8834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e8838: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x1e8838u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x1e883c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e883cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e8840: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e8840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8844: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e8844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e8848: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1E8848u;
    SET_GPR_U32(ctx, 31, 0x1E8850u);
    ctx->pc = 0x1E884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8848u;
    // 0x1e884c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1E8848u, 0x1E8850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8850u;
label_1e8850:
    // 0x1e8850: 0xae022b20  sw          $v0, 0x2B20($s0)
    ctx->pc = 0x1e8850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11040), GPR_U32(ctx, 2));
    // 0x1e8854: 0x8e422b20  lw          $v0, 0x2B20($s2)
    ctx->pc = 0x1e8854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
label_1e8858:
    // 0x1e8858: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x1e8858u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e885c: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1e885cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1e8860: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e8860u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e8864: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1E8864u;
    SET_GPR_U32(ctx, 31, 0x1E886Cu);
    ctx->pc = 0x1E8868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E8864u;
    // 0x1e8868: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1E8864u, 0x1E886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E886Cu;
label_1e886c:
    // 0x1e886c: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1E886Cu;
    SET_GPR_U32(ctx, 31, 0x1E8874u);
    ctx->pc = 0x1E8870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E886Cu;
    // 0x1e8870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1E886Cu, 0x1E8874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8874u;
label_1e8874:
    // 0x1e8874: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e8874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e8878: 0x2e22003c  sltiu       $v0, $s1, 0x3C
    ctx->pc = 0x1e8878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x1e887c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E887Cu;
    {
        const bool branch_taken_0x1e887c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e887c) {
            ctx->pc = 0x1E8880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E887Cu;
            // 0x1e8880: 0x8e422b20  lw          $v0, 0x2B20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E8858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8858;
        }
    }
    ctx->pc = 0x1E8884u;
    // 0x1e8884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e8884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8888: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e8888u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e888c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e888cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8890: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e8890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e8894: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8894u;
        // 0x1e8898: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E889Cu;
    // 0x1e889c: 0x0  nop
    ctx->pc = 0x1e889cu;
    // NOP
    ctx->pc = 0x1e88a0u;
}
