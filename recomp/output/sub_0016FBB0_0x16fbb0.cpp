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

// Function: sub_0016FBB0
// Address: 0x16fbb0 - 0x16fc90
void sub_0016FBB0_0x16fbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FBB0_0x16fbb0");
#endif

    switch (ctx->pc) {
        case 0x16fbe4u: goto label_16fbe4;
        case 0x16fbf4u: goto label_16fbf4;
        case 0x16fc04u: goto label_16fc04;
        case 0x16fc20u: goto label_16fc20;
        case 0x16fc28u: goto label_16fc28;
        case 0x16fc48u: goto label_16fc48;
        case 0x16fc58u: goto label_16fc58;
        default: break;
    }

    ctx->pc = 0x16fbb0u;

    // 0x16fbb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16fbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16fbb4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16fbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16fbb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16fbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16fbbc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16fbbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fbc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16fbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16fbc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16fbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16fbc8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16fbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16fbcc: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x16FBCCu;
    {
        const bool branch_taken_0x16fbcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FBCCu;
        // 0x16fbd0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fbcc) {
            ctx->pc = 0x16FC14u;
            goto label_16fc14;
        }
    }
    ctx->pc = 0x16FBD4u;
    // 0x16fbd4: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x16fbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x16fbd8: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x16fbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x16fbdc: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x16FBDCu;
    SET_GPR_U32(ctx, 31, 0x16FBE4u);
    ctx->pc = 0x16FBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FBDCu;
    // 0x16fbe0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16FBDCu, 0x16FBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FBE4u;
label_16fbe4:
    // 0x16fbe4: 0x26109a08  addiu       $s0, $s0, -0x65F8
    ctx->pc = 0x16fbe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941192));
    // 0x16fbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fbec: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x16FBECu;
    SET_GPR_U32(ctx, 31, 0x16FBF4u);
    ctx->pc = 0x16FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FBECu;
    // 0x16fbf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x16FBECu, 0x16FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FBF4u;
label_16fbf4:
    // 0x16fbf4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x16FBF4u;
    {
        const bool branch_taken_0x16fbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FBF4u;
        // 0x16fbf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fbf4) {
            ctx->pc = 0x16FC6Cu;
            goto label_16fc6c;
        }
    }
    ctx->pc = 0x16FBFCu;
    // 0x16fbfc: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x16FBFCu;
    SET_GPR_U32(ctx, 31, 0x16FC04u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x16FBFCu, 0x16FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC04u;
label_16fc04:
    // 0x16fc04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16fc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16fc08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x16fc08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x16fc0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FC0Cu;
    {
        const bool branch_taken_0x16fc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC0Cu;
        // 0x16fc10: 0x24121aa0  addiu       $s2, $zero, 0x1AA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc0c) {
            ctx->pc = 0x16FC1Cu;
            goto label_16fc1c;
        }
    }
    ctx->pc = 0x16FC14u;
label_16fc14:
    // 0x16fc14: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16FC14u;
    {
        const bool branch_taken_0x16fc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC14u;
        // 0x16fc18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc14) {
            ctx->pc = 0x16FC6Cu;
            goto label_16fc6c;
        }
    }
    ctx->pc = 0x16FC1Cu;
label_16fc1c:
    // 0x16fc1c: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x16fc1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_16fc20:
    // 0x16fc20: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x16FC20u;
    SET_GPR_U32(ctx, 31, 0x16FC28u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x16FC20u, 0x16FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC28u;
label_16fc28:
    // 0x16fc28: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x16fc28u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16fc2c: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16FC2Cu;
    {
        const bool branch_taken_0x16fc2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fc2c) {
            ctx->pc = 0x16FC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FC2Cu;
            // 0x16fc30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FC34u;
            goto label_16fc34;
        }
    }
    ctx->pc = 0x16FC34u;
label_16fc34:
    // 0x16fc34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16fc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc38: 0x8010  mfhi        $s0
    ctx->pc = 0x16fc38u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x16fc3c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x16fc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x16fc40: 0xc05bf24  jal         func_16FC90
    ctx->pc = 0x16FC40u;
    SET_GPR_U32(ctx, 31, 0x16FC48u);
    ctx->pc = 0x16FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FC40u;
    // 0x16fc44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FC90u, 0x16FC40u, 0x16FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC48u;
label_16fc48:
    // 0x16fc48: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x16FC48u;
    {
        const bool branch_taken_0x16fc48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC48u;
        // 0x16fc4c: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc48) {
            ctx->pc = 0x16FC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fc20;
        }
    }
    ctx->pc = 0x16FC50u;
    // 0x16fc50: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x16FC50u;
    SET_GPR_U32(ctx, 31, 0x16FC58u);
    ctx->pc = 0x16FC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FC50u;
    // 0x16fc54: 0x8e64005c  lw          $a0, 0x5C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16FC50u, 0x16FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FC58u;
label_16fc58:
    // 0x16fc58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fc5c: 0x26839a08  addiu       $v1, $s4, -0x65F8
    ctx->pc = 0x16fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941192));
    // 0x16fc60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16fc64: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x16fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x16fc68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16fc68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16fc6c:
    // 0x16fc6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16fc6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fc70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16fc70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fc74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16fc74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fc78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16fc78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16fc7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16fc7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fc80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16fc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16fc84: 0x3e00008  jr          $ra
    ctx->pc = 0x16FC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FC84u;
        // 0x16fc88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FC8Cu;
    // 0x16fc8c: 0x0  nop
    ctx->pc = 0x16fc8cu;
    // NOP
    ctx->pc = 0x16fc90u;
}
