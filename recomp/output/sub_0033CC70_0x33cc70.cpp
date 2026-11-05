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

// Function: sub_0033CC70
// Address: 0x33cc70 - 0x33cd18
void sub_0033CC70_0x33cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CC70_0x33cc70");
#endif

    ctx->pc = 0x33cc70u;

    // 0x33cc70: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x33cc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x33cc74: 0x10a20024  beq         $a1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x33CC74u;
    {
        const bool branch_taken_0x33cc74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33CC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC74u;
        // 0x33cc78: 0x28a2001c  slti        $v0, $a1, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)28) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc74) {
            ctx->pc = 0x33CD08u;
            goto label_33cd08;
        }
    }
    ctx->pc = 0x33CC7Cu;
    // 0x33cc7c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33CC7Cu;
    {
        const bool branch_taken_0x33cc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC7Cu;
        // 0x33cc80: 0x28a20017  slti        $v0, $a1, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc7c) {
            ctx->pc = 0x33CCB8u;
            goto label_33ccb8;
        }
    }
    ctx->pc = 0x33CC84u;
    // 0x33cc84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33CC84u;
    {
        const bool branch_taken_0x33cc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC84u;
        // 0x33cc88: 0x28a20012  slti        $v0, $a1, 0x12 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)18) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc84) {
            ctx->pc = 0x33CCA4u;
            goto label_33cca4;
        }
    }
    ctx->pc = 0x33CC8Cu;
    // 0x33cc8c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x33CC8Cu;
    {
        const bool branch_taken_0x33cc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC8Cu;
        // 0x33cc90: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc8c) {
            ctx->pc = 0x33CD08u;
            goto label_33cd08;
        }
    }
    ctx->pc = 0x33CC94u;
    // 0x33cc94: 0x10a2001a  beq         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x33CC94u;
    {
        const bool branch_taken_0x33cc94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC94u;
        // 0x33cc98: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cc94) {
            ctx->pc = 0x33CD00u;
            goto label_33cd00;
        }
    }
    ctx->pc = 0x33CC9Cu;
    // 0x33cc9c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x33CC9Cu;
    {
        const bool branch_taken_0x33cc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33cc9c) {
            ctx->pc = 0x33CD10u;
            goto label_33cd10;
        }
    }
    ctx->pc = 0x33CCA4u;
label_33cca4:
    // 0x33cca4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x33cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33cca8: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x33CCA8u;
    {
        const bool branch_taken_0x33cca8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCA8u;
        // 0x33ccac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cca8) {
            ctx->pc = 0x33CD08u;
            goto label_33cd08;
        }
    }
    ctx->pc = 0x33CCB0u;
    // 0x33ccb0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x33CCB0u;
    {
        const bool branch_taken_0x33ccb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ccb0) {
            ctx->pc = 0x33CD10u;
            goto label_33cd10;
        }
    }
    ctx->pc = 0x33CCB8u;
label_33ccb8:
    // 0x33ccb8: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x33ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x33ccbc: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x33CCBCu;
    {
        const bool branch_taken_0x33ccbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33CCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCBCu;
        // 0x33ccc0: 0x28a2007a  slti        $v0, $a1, 0x7A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)122) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ccbc) {
            ctx->pc = 0x33CD08u;
            goto label_33cd08;
        }
    }
    ctx->pc = 0x33CCC4u;
    // 0x33ccc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33CCC4u;
    {
        const bool branch_taken_0x33ccc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCC4u;
        // 0x33ccc8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ccc4) {
            ctx->pc = 0x33CCE4u;
            goto label_33cce4;
        }
    }
    ctx->pc = 0x33CCCCu;
    // 0x33cccc: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33CCCCu;
    {
        const bool branch_taken_0x33cccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCCCu;
        // 0x33ccd0: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cccc) {
            ctx->pc = 0x33CD08u;
            goto label_33cd08;
        }
    }
    ctx->pc = 0x33CCD4u;
    // 0x33ccd4: 0x10a2000c  beq         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33CCD4u;
    {
        const bool branch_taken_0x33ccd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCD4u;
        // 0x33ccd8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ccd4) {
            ctx->pc = 0x33CD08u;
            goto label_33cd08;
        }
    }
    ctx->pc = 0x33CCDCu;
    // 0x33ccdc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33CCDCu;
    {
        const bool branch_taken_0x33ccdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ccdc) {
            ctx->pc = 0x33CD10u;
            goto label_33cd10;
        }
    }
    ctx->pc = 0x33CCE4u;
label_33cce4:
    // 0x33cce4: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x33cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x33cce8: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33CCE8u;
    {
        const bool branch_taken_0x33cce8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCE8u;
        // 0x33ccec: 0x24020089  addiu       $v0, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cce8) {
            ctx->pc = 0x33CD08u;
            goto label_33cd08;
        }
    }
    ctx->pc = 0x33CCF0u;
    // 0x33ccf0: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33CCF0u;
    {
        const bool branch_taken_0x33ccf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CCF0u;
        // 0x33ccf4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ccf0) {
            ctx->pc = 0x33CD08u;
            goto label_33cd08;
        }
    }
    ctx->pc = 0x33CCF8u;
    // 0x33ccf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33CCF8u;
    {
        const bool branch_taken_0x33ccf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ccf8) {
            ctx->pc = 0x33CD10u;
            goto label_33cd10;
        }
    }
    ctx->pc = 0x33CD00u;
label_33cd00:
    // 0x33cd00: 0x3e00008  jr          $ra
    ctx->pc = 0x33CD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD00u;
        // 0x33cd04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CD08u;
label_33cd08:
    // 0x33cd08: 0x3e00008  jr          $ra
    ctx->pc = 0x33CD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD08u;
        // 0x33cd0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CD10u;
label_33cd10:
    // 0x33cd10: 0x3e00008  jr          $ra
    ctx->pc = 0x33CD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CD18u;
}
