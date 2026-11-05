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

// Function: sub_003EE9B0
// Address: 0x3ee9b0 - 0x3eea40
void sub_003EE9B0_0x3ee9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE9B0_0x3ee9b0");
#endif

    switch (ctx->pc) {
        case 0x3ee9dcu: goto label_3ee9dc;
        case 0x3ee9fcu: goto label_3ee9fc;
        default: break;
    }

    ctx->pc = 0x3ee9b0u;

    // 0x3ee9b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ee9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ee9b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ee9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ee9b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ee9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ee9bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ee9bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ee9c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ee9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ee9c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ee9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3ee9c8: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x3ee9c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ee9cc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EE9CCu;
    {
        const bool branch_taken_0x3ee9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE9CCu;
        // 0x3ee9d0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee9cc) {
            ctx->pc = 0x3EE9F0u;
            goto label_3ee9f0;
        }
    }
    ctx->pc = 0x3EE9D4u;
    // 0x3ee9d4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EE9D4u;
    SET_GPR_U32(ctx, 31, 0x3EE9DCu);
    ctx->pc = 0x3EE9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE9D4u;
    // 0x3ee9d8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EE9D4u, 0x3EE9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE9DCu;
label_3ee9dc:
    // 0x3ee9dc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3ee9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3ee9e0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ee9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ee9e4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3ee9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3ee9e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EE9E8u;
    {
        const bool branch_taken_0x3ee9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE9E8u;
        // 0x3ee9ec: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee9e8) {
            ctx->pc = 0x3EEA0Cu;
            goto label_3eea0c;
        }
    }
    ctx->pc = 0x3EE9F0u;
label_3ee9f0:
    // 0x3ee9f0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3ee9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ee9f4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EE9F4u;
    SET_GPR_U32(ctx, 31, 0x3EE9FCu);
    ctx->pc = 0x3EE9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE9F4u;
    // 0x3ee9f8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EE9F4u, 0x3EE9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE9FCu;
label_3ee9fc:
    // 0x3ee9fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ee9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3eea00: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3eea00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3eea04: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3eea04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3eea08: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3eea08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3eea0c:
    // 0x3eea0c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3eea10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eea10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eea14: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3eea14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3eea18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eea18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eea1c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x3eea1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3eea20: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eea20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3eea24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3eea24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3eea28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eea28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3eea2c: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x3eea2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3eea30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eea30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eea34: 0x3e00008  jr          $ra
    ctx->pc = 0x3EEA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEA34u;
        // 0x3eea38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EEA3Cu;
    // 0x3eea3c: 0x0  nop
    ctx->pc = 0x3eea3cu;
    // NOP
    ctx->pc = 0x3eea40u;
}
