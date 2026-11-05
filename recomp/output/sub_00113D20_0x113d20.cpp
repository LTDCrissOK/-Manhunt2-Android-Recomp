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

// Function: sub_00113D20
// Address: 0x113d20 - 0x113d98
void sub_00113D20_0x113d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113D20_0x113d20");
#endif

    switch (ctx->pc) {
        case 0x113d64u: goto label_113d64;
        case 0x113d8cu: goto label_113d8c;
        default: break;
    }

    ctx->pc = 0x113d20u;

    // 0x113d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113d24: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x113d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x113d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113d2c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x113d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x113d30: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x113d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x113d34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x113d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113d3c: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x113d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x113d40: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x113D40u;
    {
        const bool branch_taken_0x113d40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D40u;
        // 0x113d44: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d40) {
            ctx->pc = 0x113D8Cu;
            goto label_113d8c;
        }
    }
    ctx->pc = 0x113D48u;
    // 0x113d48: 0x8c85036c  lw          $a1, 0x36C($a0)
    ctx->pc = 0x113d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x113d4c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x113d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x113d50: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x113D50u;
    {
        const bool branch_taken_0x113d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x113D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D50u;
        // 0x113d54: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d50) {
            ctx->pc = 0x113D6Cu;
            goto label_113d6c;
        }
    }
    ctx->pc = 0x113D58u;
    // 0x113d58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x113d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113d5c: 0xc08f5b4  jal         func_23D6D0
    ctx->pc = 0x113D5Cu;
    SET_GPR_U32(ctx, 31, 0x113D64u);
    ctx->pc = 0x113D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D5Cu;
    // 0x113d60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D6D0u, 0x113D5Cu, 0x113D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D64u;
label_113d64:
    // 0x113d64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x113D64u;
    {
        const bool branch_taken_0x113d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D64u;
        // 0x113d68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d64) {
            ctx->pc = 0x113D90u;
            goto label_113d90;
        }
    }
    ctx->pc = 0x113D6Cu;
label_113d6c:
    // 0x113d6c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x113d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x113d70: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x113D70u;
    {
        const bool branch_taken_0x113d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x113D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D70u;
        // 0x113d74: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d70) {
            ctx->pc = 0x113D90u;
            goto label_113d90;
        }
    }
    ctx->pc = 0x113D78u;
    // 0x113d78: 0x8c84038c  lw          $a0, 0x38C($a0)
    ctx->pc = 0x113d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 908)));
    // 0x113d7c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113D7Cu;
    {
        const bool branch_taken_0x113d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x113D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D7Cu;
        // 0x113d80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d7c) {
            ctx->pc = 0x113D90u;
            goto label_113d90;
        }
    }
    ctx->pc = 0x113D84u;
    // 0x113d84: 0xc08f5b4  jal         func_23D6D0
    ctx->pc = 0x113D84u;
    SET_GPR_U32(ctx, 31, 0x113D8Cu);
    ctx->pc = 0x113D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113D84u;
    // 0x113d88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D6D0u, 0x113D84u, 0x113D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113D8Cu;
label_113d8c:
    // 0x113d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113d90:
    // 0x113d90: 0x3e00008  jr          $ra
    ctx->pc = 0x113D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D90u;
        // 0x113d94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113D98u;
}
