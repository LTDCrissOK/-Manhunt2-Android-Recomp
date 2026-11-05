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

// Function: sub_0029DA78
// Address: 0x29da78 - 0x29db10
void sub_0029DA78_0x29da78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DA78_0x29da78");
#endif

    switch (ctx->pc) {
        case 0x29da78u: goto label_29da78;
        case 0x29da7cu: goto label_29da7c;
        case 0x29da80u: goto label_29da80;
        case 0x29da84u: goto label_29da84;
        case 0x29da88u: goto label_29da88;
        case 0x29da8cu: goto label_29da8c;
        case 0x29da90u: goto label_29da90;
        case 0x29da94u: goto label_29da94;
        case 0x29da98u: goto label_29da98;
        case 0x29da9cu: goto label_29da9c;
        case 0x29daa0u: goto label_29daa0;
        case 0x29daa4u: goto label_29daa4;
        case 0x29daa8u: goto label_29daa8;
        case 0x29daacu: goto label_29daac;
        case 0x29dab0u: goto label_29dab0;
        case 0x29dab4u: goto label_29dab4;
        case 0x29dab8u: goto label_29dab8;
        case 0x29dabcu: goto label_29dabc;
        case 0x29dac0u: goto label_29dac0;
        case 0x29dac4u: goto label_29dac4;
        case 0x29dac8u: goto label_29dac8;
        case 0x29daccu: goto label_29dacc;
        case 0x29dad0u: goto label_29dad0;
        case 0x29dad4u: goto label_29dad4;
        case 0x29dad8u: goto label_29dad8;
        case 0x29dadcu: goto label_29dadc;
        case 0x29dae0u: goto label_29dae0;
        case 0x29dae4u: goto label_29dae4;
        case 0x29dae8u: goto label_29dae8;
        case 0x29daecu: goto label_29daec;
        case 0x29daf0u: goto label_29daf0;
        case 0x29daf4u: goto label_29daf4;
        case 0x29daf8u: goto label_29daf8;
        case 0x29dafcu: goto label_29dafc;
        case 0x29db00u: goto label_29db00;
        case 0x29db04u: goto label_29db04;
        case 0x29db08u: goto label_29db08;
        case 0x29db0cu: goto label_29db0c;
        default: break;
    }

    ctx->pc = 0x29da78u;

label_29da78:
    // 0x29da78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29da78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29da7c:
    // 0x29da7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29da7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29da80:
    // 0x29da80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29da80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_29da84:
    // 0x29da84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29da84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_29da88:
    // 0x29da88: 0x24930014  addiu       $s3, $a0, 0x14
    ctx->pc = 0x29da88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
label_29da8c:
    // 0x29da8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29da8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29da90:
    // 0x29da90: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x29da90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_29da94:
    // 0x29da94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29da94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29da98:
    // 0x29da98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29da98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_29da9c:
    // 0x29da9c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x29da9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_29daa0:
    // 0x29daa0: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x29daa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29daa4:
    // 0x29daa4: 0x0  nop
    ctx->pc = 0x29daa4u;
    // NOP
label_29daa8:
    // 0x29daa8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29daa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29daac:
    // 0x29daac: 0x24720001  addiu       $s2, $v1, 0x1
    ctx->pc = 0x29daacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29dab0:
    // 0x29dab0: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x29dab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_29dab4:
    // 0x29dab4: 0x0  nop
    ctx->pc = 0x29dab4u;
    // NOP
label_29dab8:
    // 0x29dab8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29dabc:
    // 0x29dabc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_29dac0:
    if (ctx->pc == 0x29DAC0u) {
        ctx->pc = 0x29DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DABCu;
        // 0x29dac0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DAC4u;
        goto label_29dac4;
    }
    ctx->pc = 0x29DABCu;
    {
        const bool branch_taken_0x29dabc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DABCu;
        // 0x29dac0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dabc) {
            ctx->pc = 0x29DAD4u;
            goto label_29dad4;
        }
    }
    ctx->pc = 0x29DAC4u;
label_29dac4:
    // 0x29dac4: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x29dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_29dac8:
    // 0x29dac8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x29dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_29dacc:
    // 0x29dacc: 0x40f809  jalr        $v0
label_29dad0:
    if (ctx->pc == 0x29DAD0u) {
        ctx->pc = 0x29DAD4u;
        goto label_29dad4;
    }
    ctx->pc = 0x29DACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29DAD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DACCu, 0x29DAD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29DAD4u;
label_29dad4:
    // 0x29dad4: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29dad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_29dad8:
    // 0x29dad8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_29dadc:
    if (ctx->pc == 0x29DADCu) {
        ctx->pc = 0x29DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAD8u;
        // 0x29dadc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DAE0u;
        goto label_29dae0;
    }
    ctx->pc = 0x29DAD8u;
    {
        const bool branch_taken_0x29dad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAD8u;
        // 0x29dadc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dad8) {
            ctx->pc = 0x29DAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29dab8;
        }
    }
    ctx->pc = 0x29DAE0u;
label_29dae0:
    // 0x29dae0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x29dae0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29dae4:
    // 0x29dae4: 0x2c620019  sltiu       $v0, $v1, 0x19
    ctx->pc = 0x29dae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_29dae8:
    // 0x29dae8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_29daec:
    if (ctx->pc == 0x29DAECu) {
        ctx->pc = 0x29DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DAE8u;
        // 0x29daec: 0x741018  mult        $v0, $v1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DAF0u;
        goto label_29daf0;
    }
    ctx->pc = 0x29DAE8u;
    {
        const bool branch_taken_0x29dae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29dae8) {
            ctx->pc = 0x29DAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29DAE8u;
            // 0x29daec: 0x741018  mult        $v0, $v1, $s4 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x29DAA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29daa8;
        }
    }
    ctx->pc = 0x29DAF0u;
label_29daf0:
    // 0x29daf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29daf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29daf4:
    // 0x29daf4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29daf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29daf8:
    // 0x29daf8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29daf8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29dafc:
    // 0x29dafc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29dafcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_29db00:
    // 0x29db00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29db00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29db04:
    // 0x29db04: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x29db04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_29db08:
    // 0x29db08: 0x3e00008  jr          $ra
label_29db0c:
    if (ctx->pc == 0x29DB0Cu) {
        ctx->pc = 0x29DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB08u;
        // 0x29db0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29DB10u;
        goto label_fallthrough_0x29db08;
    }
    ctx->pc = 0x29DB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DB08u;
        // 0x29db0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29db08:
    ctx->pc = 0x29DB10u;
}
