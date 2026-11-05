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

// Function: sub_001E4EB8
// Address: 0x1e4eb8 - 0x1e4f30
void sub_001E4EB8_0x1e4eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4EB8_0x1e4eb8");
#endif

    switch (ctx->pc) {
        case 0x1e4ee0u: goto label_1e4ee0;
        case 0x1e4ee8u: goto label_1e4ee8;
        case 0x1e4efcu: goto label_1e4efc;
        case 0x1e4f04u: goto label_1e4f04;
        default: break;
    }

    ctx->pc = 0x1e4eb8u;

    // 0x1e4eb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e4eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4ebc: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1e4ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1e4ec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e4ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e4ec4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e4ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e4ec8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1e4ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1e4ecc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e4eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e4ed0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e4ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ed4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e4ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e4ed8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1E4ED8u;
    SET_GPR_U32(ctx, 31, 0x1E4EE0u);
    ctx->pc = 0x1E4EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4ED8u;
    // 0x1e4edc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1E4ED8u, 0x1E4EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EE0u;
label_1e4ee0:
    // 0x1e4ee0: 0xae0291d4  sw          $v0, -0x6E2C($s0)
    ctx->pc = 0x1e4ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939092), GPR_U32(ctx, 2));
    // 0x1e4ee4: 0x8e4291d4  lw          $v0, -0x6E2C($s2)
    ctx->pc = 0x1e4ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939092)));
label_1e4ee8:
    // 0x1e4ee8: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x1e4ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e4eec: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1e4eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1e4ef0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e4ef0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e4ef4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1E4EF4u;
    SET_GPR_U32(ctx, 31, 0x1E4EFCu);
    ctx->pc = 0x1E4EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EF4u;
    // 0x1e4ef8: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1E4EF4u, 0x1E4EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EFCu;
label_1e4efc:
    // 0x1e4efc: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1E4EFCu;
    SET_GPR_U32(ctx, 31, 0x1E4F04u);
    ctx->pc = 0x1E4F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EFCu;
    // 0x1e4f00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1E4EFCu, 0x1E4F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F04u;
label_1e4f04:
    // 0x1e4f04: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e4f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e4f08: 0x2e220014  sltiu       $v0, $s1, 0x14
    ctx->pc = 0x1e4f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1e4f0c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E4F0Cu;
    {
        const bool branch_taken_0x1e4f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4f0c) {
            ctx->pc = 0x1E4F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4F0Cu;
            // 0x1e4f10: 0x8e4291d4  lw          $v0, -0x6E2C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E4EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4ee8;
        }
    }
    ctx->pc = 0x1E4F14u;
    // 0x1e4f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e4f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4f18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e4f18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e4f1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e4f1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4f20: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e4f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e4f24: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F24u;
        // 0x1e4f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4F2Cu;
    // 0x1e4f2c: 0x0  nop
    ctx->pc = 0x1e4f2cu;
    // NOP
    ctx->pc = 0x1e4f30u;
}
