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

// Function: sub_0029D9E0
// Address: 0x29d9e0 - 0x29da78
void sub_0029D9E0_0x29d9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D9E0_0x29d9e0");
#endif

    switch (ctx->pc) {
        case 0x29d9e0u: goto label_29d9e0;
        case 0x29d9e4u: goto label_29d9e4;
        case 0x29d9e8u: goto label_29d9e8;
        case 0x29d9ecu: goto label_29d9ec;
        case 0x29d9f0u: goto label_29d9f0;
        case 0x29d9f4u: goto label_29d9f4;
        case 0x29d9f8u: goto label_29d9f8;
        case 0x29d9fcu: goto label_29d9fc;
        case 0x29da00u: goto label_29da00;
        case 0x29da04u: goto label_29da04;
        case 0x29da08u: goto label_29da08;
        case 0x29da0cu: goto label_29da0c;
        case 0x29da10u: goto label_29da10;
        case 0x29da14u: goto label_29da14;
        case 0x29da18u: goto label_29da18;
        case 0x29da1cu: goto label_29da1c;
        case 0x29da20u: goto label_29da20;
        case 0x29da24u: goto label_29da24;
        case 0x29da28u: goto label_29da28;
        case 0x29da2cu: goto label_29da2c;
        case 0x29da30u: goto label_29da30;
        case 0x29da34u: goto label_29da34;
        case 0x29da38u: goto label_29da38;
        case 0x29da3cu: goto label_29da3c;
        case 0x29da40u: goto label_29da40;
        case 0x29da44u: goto label_29da44;
        case 0x29da48u: goto label_29da48;
        case 0x29da4cu: goto label_29da4c;
        case 0x29da50u: goto label_29da50;
        case 0x29da54u: goto label_29da54;
        case 0x29da58u: goto label_29da58;
        case 0x29da5cu: goto label_29da5c;
        case 0x29da60u: goto label_29da60;
        case 0x29da64u: goto label_29da64;
        case 0x29da68u: goto label_29da68;
        case 0x29da6cu: goto label_29da6c;
        case 0x29da70u: goto label_29da70;
        case 0x29da74u: goto label_29da74;
        default: break;
    }

    ctx->pc = 0x29d9e0u;

label_29d9e0:
    // 0x29d9e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29d9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29d9e4:
    // 0x29d9e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29d9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29d9e8:
    // 0x29d9e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29d9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29d9ec:
    // 0x29d9ec: 0x24930014  addiu       $s3, $a0, 0x14
    ctx->pc = 0x29d9ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_29d9f0:
    // 0x29d9f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29d9f4:
    // 0x29d9f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29d9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29d9f8:
    // 0x29d9f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29d9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29d9fc:
    // 0x29d9fc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x29d9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_29da00:
    // 0x29da00: 0xc0a78b0  jal         func_29E2C0
label_29da04:
    if (ctx->pc == 0x29DA04u) {
        ctx->pc = 0x29DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA00u;
        // 0x29da04: 0x24140014  addiu       $s4, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA08u;
        goto label_29da08;
    }
    ctx->pc = 0x29DA00u;
    SET_GPR_U32(ctx, 31, 0x29DA08u);
    ctx->pc = 0x29DA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DA00u;
    // 0x29da04: 0x24140014  addiu       $s4, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E2C0u, 0x29DA00u, 0x29DA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DA08u;
label_29da08:
    // 0x29da08: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29da08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29da0c:
    // 0x29da0c: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x29da0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29da10:
    // 0x29da10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29da10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29da14:
    // 0x29da14: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x29da14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29da18:
    // 0x29da18: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x29da18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_29da1c:
    // 0x29da1c: 0x0  nop
    ctx->pc = 0x29da1cu;
    // NOP
label_29da20:
    // 0x29da20: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29da20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29da24:
    // 0x29da24: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_29da28:
    if (ctx->pc == 0x29DA28u) {
        ctx->pc = 0x29DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA24u;
        // 0x29da28: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA2Cu;
        goto label_29da2c;
    }
    ctx->pc = 0x29DA24u;
    {
        const bool branch_taken_0x29da24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA24u;
        // 0x29da28: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da24) {
            ctx->pc = 0x29DA3Cu;
            goto label_29da3c;
        }
    }
    ctx->pc = 0x29DA2Cu;
label_29da2c:
    // 0x29da2c: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x29da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_29da30:
    // 0x29da30: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x29da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_29da34:
    // 0x29da34: 0x40f809  jalr        $v0
label_29da38:
    if (ctx->pc == 0x29DA38u) {
        ctx->pc = 0x29DA3Cu;
        goto label_29da3c;
    }
    ctx->pc = 0x29DA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29DA3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DA34u, 0x29DA3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DA3Cu;
label_29da3c:
    // 0x29da3c: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29da3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_29da40:
    // 0x29da40: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_29da44:
    if (ctx->pc == 0x29DA44u) {
        ctx->pc = 0x29DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA40u;
        // 0x29da44: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA48u;
        goto label_29da48;
    }
    ctx->pc = 0x29DA40u;
    {
        const bool branch_taken_0x29da40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA40u;
        // 0x29da44: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da40) {
            ctx->pc = 0x29DA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29da20;
        }
    }
    ctx->pc = 0x29DA48u;
label_29da48:
    // 0x29da48: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x29da48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29da4c:
    // 0x29da4c: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x29da4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_29da50:
    // 0x29da50: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_29da54:
    if (ctx->pc == 0x29DA54u) {
        ctx->pc = 0x29DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA50u;
        // 0x29da54: 0x741018  mult        $v0, $v1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA58u;
        goto label_29da58;
    }
    ctx->pc = 0x29DA50u;
    {
        const bool branch_taken_0x29da50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29da50) {
            ctx->pc = 0x29DA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DA50u;
            // 0x29da54: 0x741018  mult        $v0, $v1, $s4 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29da10;
        }
    }
    ctx->pc = 0x29DA58u;
label_29da58:
    // 0x29da58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29da58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29da5c:
    // 0x29da5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29da5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29da60:
    // 0x29da60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29da60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29da64:
    // 0x29da64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29da64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29da68:
    // 0x29da68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29da68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29da6c:
    // 0x29da6c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x29da6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29da70:
    // 0x29da70: 0x3e00008  jr          $ra
label_29da74:
    if (ctx->pc == 0x29DA74u) {
        ctx->pc = 0x29DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA70u;
        // 0x29da74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DA78u;
        goto label_fallthrough_0x29da70;
    }
    ctx->pc = 0x29DA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA70u;
        // 0x29da74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29da70:
    ctx->pc = 0x29DA78u;
}
