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

// Function: sub_0016FAD0
// Address: 0x16fad0 - 0x16fbb0
void sub_0016FAD0_0x16fad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FAD0_0x16fad0");
#endif

    switch (ctx->pc) {
        case 0x16fb04u: goto label_16fb04;
        case 0x16fb14u: goto label_16fb14;
        case 0x16fb24u: goto label_16fb24;
        case 0x16fb40u: goto label_16fb40;
        case 0x16fb48u: goto label_16fb48;
        case 0x16fb68u: goto label_16fb68;
        case 0x16fb78u: goto label_16fb78;
        default: break;
    }

    ctx->pc = 0x16fad0u;

    // 0x16fad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16fad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16fad4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16fad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16fad8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16fad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16fadc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16fadcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fae0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16fae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16fae4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16fae8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x16fae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16faec: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x16FAECu;
    {
        const bool branch_taken_0x16faec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FAECu;
        // 0x16faf0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16faec) {
            ctx->pc = 0x16FB34u;
            goto label_16fb34;
        }
    }
    ctx->pc = 0x16FAF4u;
    // 0x16faf4: 0x8e64005c  lw          $a0, 0x5C($s3)
    ctx->pc = 0x16faf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x16faf8: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x16faf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x16fafc: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x16FAFCu;
    SET_GPR_U32(ctx, 31, 0x16FB04u);
    ctx->pc = 0x16FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FAFCu;
    // 0x16fb00: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16FAFCu, 0x16FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB04u;
label_16fb04:
    // 0x16fb04: 0x26109a08  addiu       $s0, $s0, -0x65F8
    ctx->pc = 0x16fb04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941192));
    // 0x16fb08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16fb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb0c: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x16FB0Cu;
    SET_GPR_U32(ctx, 31, 0x16FB14u);
    ctx->pc = 0x16FB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB0Cu;
    // 0x16fb10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x16FB0Cu, 0x16FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB14u;
label_16fb14:
    // 0x16fb14: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x16FB14u;
    {
        const bool branch_taken_0x16fb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB14u;
        // 0x16fb18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb14) {
            ctx->pc = 0x16FB8Cu;
            goto label_16fb8c;
        }
    }
    ctx->pc = 0x16FB1Cu;
    // 0x16fb1c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x16FB1Cu;
    SET_GPR_U32(ctx, 31, 0x16FB24u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x16FB1Cu, 0x16FB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB24u;
label_16fb24:
    // 0x16fb24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16fb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16fb28: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x16fb28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x16fb2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FB2Cu;
    {
        const bool branch_taken_0x16fb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB2Cu;
        // 0x16fb30: 0x24121a94  addiu       $s2, $zero, 0x1A94 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6804));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb2c) {
            ctx->pc = 0x16FB3Cu;
            goto label_16fb3c;
        }
    }
    ctx->pc = 0x16FB34u;
label_16fb34:
    // 0x16fb34: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x16FB34u;
    {
        const bool branch_taken_0x16fb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB34u;
        // 0x16fb38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb34) {
            ctx->pc = 0x16FB8Cu;
            goto label_16fb8c;
        }
    }
    ctx->pc = 0x16FB3Cu;
label_16fb3c:
    // 0x16fb3c: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x16fb3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_16fb40:
    // 0x16fb40: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x16FB40u;
    SET_GPR_U32(ctx, 31, 0x16FB48u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x16FB40u, 0x16FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB48u;
label_16fb48:
    // 0x16fb48: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x16fb48u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16fb4c: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16FB4Cu;
    {
        const bool branch_taken_0x16fb4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fb4c) {
            ctx->pc = 0x16FB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16FB4Cu;
            // 0x16fb50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16FB54u;
            goto label_16fb54;
        }
    }
    ctx->pc = 0x16FB54u;
label_16fb54:
    // 0x16fb54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16fb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb58: 0x8010  mfhi        $s0
    ctx->pc = 0x16fb58u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x16fb5c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x16fb5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x16fb60: 0xc05bf24  jal         func_16FC90
    ctx->pc = 0x16FB60u;
    SET_GPR_U32(ctx, 31, 0x16FB68u);
    ctx->pc = 0x16FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB60u;
    // 0x16fb64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FC90u, 0x16FB60u, 0x16FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB68u;
label_16fb68:
    // 0x16fb68: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x16FB68u;
    {
        const bool branch_taken_0x16fb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB68u;
        // 0x16fb6c: 0x202900b  movn        $s2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb68) {
            ctx->pc = 0x16FB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fb40;
        }
    }
    ctx->pc = 0x16FB70u;
    // 0x16fb70: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x16FB70u;
    SET_GPR_U32(ctx, 31, 0x16FB78u);
    ctx->pc = 0x16FB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB70u;
    // 0x16fb74: 0x8e64005c  lw          $a0, 0x5C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16FB70u, 0x16FB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB78u;
label_16fb78:
    // 0x16fb78: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fb7c: 0x26839a08  addiu       $v1, $s4, -0x65F8
    ctx->pc = 0x16fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941192));
    // 0x16fb80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16fb84: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x16fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x16fb88: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16fb88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16fb8c:
    // 0x16fb8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16fb8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16fb90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16fb90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16fb94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16fb94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16fb98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16fb98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16fb9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x16fb9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16fba0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16fba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16fba4: 0x3e00008  jr          $ra
    ctx->pc = 0x16FBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FBA4u;
        // 0x16fba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FBACu;
    // 0x16fbac: 0x0  nop
    ctx->pc = 0x16fbacu;
    // NOP
    ctx->pc = 0x16fbb0u;
}
