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

// Function: sub_0029AE68
// Address: 0x29ae68 - 0x29af40
void sub_0029AE68_0x29ae68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AE68_0x29ae68");
#endif

    switch (ctx->pc) {
        case 0x29aea4u: goto label_29aea4;
        case 0x29aec0u: goto label_29aec0;
        case 0x29aef0u: goto label_29aef0;
        default: break;
    }

    ctx->pc = 0x29ae68u;

    // 0x29ae68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29ae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29ae6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29ae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29ae70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29ae70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29ae74: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x29ae74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae78: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x29ae78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29ae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29ae80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29ae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29ae84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ae88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29ae88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29ae8c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29ae8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ae90: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29ae90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x29ae94: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x29ae94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x29ae98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29ae98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29ae9c: 0xc0a4334  jal         func_290CD0
    ctx->pc = 0x29AE9Cu;
    SET_GPR_U32(ctx, 31, 0x29AEA4u);
    ctx->pc = 0x29AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AE9Cu;
    // 0x29aea0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290CD0u, 0x29AE9Cu, 0x29AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AEA4u;
label_29aea4:
    // 0x29aea4: 0x1a40001a  blez        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x29AEA4u;
    {
        const bool branch_taken_0x29aea4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x29AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEA4u;
        // 0x29aea8: 0x96640000  lhu         $a0, 0x0($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aea4) {
            ctx->pc = 0x29AF10u;
            goto label_29af10;
        }
    }
    ctx->pc = 0x29AEACu;
    // 0x29aeac: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x29AEACu;
    {
        const bool branch_taken_0x29aeac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEACu;
        // 0x29aeb0: 0x2417007e  addiu       $s7, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aeac) {
            ctx->pc = 0x29AF10u;
            goto label_29af10;
        }
    }
    ctx->pc = 0x29AEB4u;
    // 0x29aeb4: 0x2416005f  addiu       $s6, $zero, 0x5F
    ctx->pc = 0x29aeb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x29aeb8: 0x24150020  addiu       $s5, $zero, 0x20
    ctx->pc = 0x29aeb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29aebc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x29aebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29aec0:
    // 0x29aec0: 0x14970003  bne         $a0, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AEC0u;
    {
        const bool branch_taken_0x29aec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 23));
        if (branch_taken_0x29aec0) {
            ctx->pc = 0x29AED0u;
            goto label_29aed0;
        }
    }
    ctx->pc = 0x29AEC8u;
    // 0x29aec8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29AEC8u;
    {
        const bool branch_taken_0x29aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEC8u;
        // 0x29aecc: 0x3a940001  xori        $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aec8) {
            ctx->pc = 0x29AEF4u;
            goto label_29aef4;
        }
    }
    ctx->pc = 0x29AED0u;
label_29aed0:
    // 0x29aed0: 0x56800009  bnel        $s4, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29AED0u;
    {
        const bool branch_taken_0x29aed0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x29aed0) {
            ctx->pc = 0x29AED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29AED0u;
            // 0x29aed4: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29AEF8u;
            goto label_29aef8;
        }
    }
    ctx->pc = 0x29AED8u;
    // 0x29aed8: 0x14960003  bne         $a0, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AED8u;
    {
        const bool branch_taken_0x29aed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        if (branch_taken_0x29aed8) {
            ctx->pc = 0x29AEE8u;
            goto label_29aee8;
        }
    }
    ctx->pc = 0x29AEE0u;
    // 0x29aee0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29AEE0u;
    {
        const bool branch_taken_0x29aee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AEE0u;
        // 0x29aee4: 0xa6150000  sh          $s5, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aee0) {
            ctx->pc = 0x29AEF4u;
            goto label_29aef4;
        }
    }
    ctx->pc = 0x29AEE8u;
label_29aee8:
    // 0x29aee8: 0xc0aea34  jal         func_2BA8D0
    ctx->pc = 0x29AEE8u;
    SET_GPR_U32(ctx, 31, 0x29AEF0u);
    ctx->pc = 0x2BA8D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA8D0u, 0x29AEE8u, 0x29AEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AEF0u;
label_29aef0:
    // 0x29aef0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x29aef0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_29aef4:
    // 0x29aef4: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x29aef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_29aef8:
    // 0x29aef8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29aef8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29aefc: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x29aefcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x29af00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29AF00u;
    {
        const bool branch_taken_0x29af00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF00u;
        // 0x29af04: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29af00) {
            ctx->pc = 0x29AF10u;
            goto label_29af10;
        }
    }
    ctx->pc = 0x29AF08u;
    // 0x29af08: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x29AF08u;
    {
        const bool branch_taken_0x29af08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29af08) {
            ctx->pc = 0x29AEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29aec0;
        }
    }
    ctx->pc = 0x29AF10u;
label_29af10:
    // 0x29af10: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x29af10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29af14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29af14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29af18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29af18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29af1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29af1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29af20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29af20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29af24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29af24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29af28: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29af28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29af2c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29af2cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29af30: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x29af30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29af34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29af34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29af38: 0x3e00008  jr          $ra
    ctx->pc = 0x29AF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AF38u;
        // 0x29af3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AF40u;
}
