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

// Function: sub_0025A5F8
// Address: 0x25a5f8 - 0x25a690
void sub_0025A5F8_0x25a5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A5F8_0x25a5f8");
#endif

    ctx->pc = 0x25a5f8u;

    // 0x25a5f8: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x25a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x25a5fc: 0x10a2001e  beq         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x25A5FCu;
    {
        const bool branch_taken_0x25a5fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A5FCu;
        // 0x25a600: 0x28a20084  slti        $v0, $a1, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)132) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a5fc) {
            ctx->pc = 0x25A678u;
            goto label_25a678;
        }
    }
    ctx->pc = 0x25A604u;
    // 0x25a604: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25A604u;
    {
        const bool branch_taken_0x25a604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A604u;
        // 0x25a608: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a604) {
            ctx->pc = 0x25A640u;
            goto label_25a640;
        }
    }
    ctx->pc = 0x25A60Cu;
    // 0x25a60c: 0x10a20018  beq         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25A60Cu;
    {
        const bool branch_taken_0x25a60c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A60Cu;
        // 0x25a610: 0x28a20070  slti        $v0, $a1, 0x70 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)112) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a60c) {
            ctx->pc = 0x25A670u;
            goto label_25a670;
        }
    }
    ctx->pc = 0x25A614u;
    // 0x25a614: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A614u;
    {
        const bool branch_taken_0x25a614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A614u;
        // 0x25a618: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a614) {
            ctx->pc = 0x25A62Cu;
            goto label_25a62c;
        }
    }
    ctx->pc = 0x25A61Cu;
    // 0x25a61c: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25A61Cu;
    {
        const bool branch_taken_0x25a61c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A61Cu;
        // 0x25a620: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a61c) {
            ctx->pc = 0x25A670u;
            goto label_25a670;
        }
    }
    ctx->pc = 0x25A624u;
    // 0x25a624: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25A624u;
    {
        const bool branch_taken_0x25a624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a624) {
            ctx->pc = 0x25A688u;
            goto label_25a688;
        }
    }
    ctx->pc = 0x25A62Cu;
label_25a62c:
    // 0x25a62c: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x25a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x25a630: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25A630u;
    {
        const bool branch_taken_0x25a630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A630u;
        // 0x25a634: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a630) {
            ctx->pc = 0x25A678u;
            goto label_25a678;
        }
    }
    ctx->pc = 0x25A638u;
    // 0x25a638: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x25A638u;
    {
        const bool branch_taken_0x25a638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a638) {
            ctx->pc = 0x25A688u;
            goto label_25a688;
        }
    }
    ctx->pc = 0x25A640u;
label_25a640:
    // 0x25a640: 0x24020097  addiu       $v0, $zero, 0x97
    ctx->pc = 0x25a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x25a644: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25A644u;
    {
        const bool branch_taken_0x25a644 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A644u;
        // 0x25a648: 0x28a20098  slti        $v0, $a1, 0x98 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)152) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a644) {
            ctx->pc = 0x25A680u;
            goto label_25a680;
        }
    }
    ctx->pc = 0x25A64Cu;
    // 0x25a64c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A64Cu;
    {
        const bool branch_taken_0x25a64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A64Cu;
        // 0x25a650: 0x2402008d  addiu       $v0, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a64c) {
            ctx->pc = 0x25A664u;
            goto label_25a664;
        }
    }
    ctx->pc = 0x25A654u;
    // 0x25a654: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25A654u;
    {
        const bool branch_taken_0x25a654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A654u;
        // 0x25a658: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a654) {
            ctx->pc = 0x25A680u;
            goto label_25a680;
        }
    }
    ctx->pc = 0x25A65Cu;
    // 0x25a65c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25A65Cu;
    {
        const bool branch_taken_0x25a65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a65c) {
            ctx->pc = 0x25A688u;
            goto label_25a688;
        }
    }
    ctx->pc = 0x25A664u;
label_25a664:
    // 0x25a664: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x25a664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x25a668: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25A668u;
    {
        const bool branch_taken_0x25a668 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x25A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A668u;
        // 0x25a66c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a668) {
            ctx->pc = 0x25A688u;
            goto label_25a688;
        }
    }
    ctx->pc = 0x25A670u;
label_25a670:
    // 0x25a670: 0x3e00008  jr          $ra
    ctx->pc = 0x25A670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A670u;
        // 0x25a674: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A678u;
label_25a678:
    // 0x25a678: 0x3e00008  jr          $ra
    ctx->pc = 0x25A678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A678u;
        // 0x25a67c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A680u;
label_25a680:
    // 0x25a680: 0x3e00008  jr          $ra
    ctx->pc = 0x25A680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A680u;
        // 0x25a684: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A688u;
label_25a688:
    // 0x25a688: 0x3e00008  jr          $ra
    ctx->pc = 0x25A688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A690u;
}
