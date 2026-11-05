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

// Function: sub_00335D08
// Address: 0x335d08 - 0x335db0
void sub_00335D08_0x335d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335D08_0x335d08");
#endif

    switch (ctx->pc) {
        case 0x335d44u: goto label_335d44;
        case 0x335d50u: goto label_335d50;
        case 0x335d58u: goto label_335d58;
        default: break;
    }

    ctx->pc = 0x335d08u;

    // 0x335d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x335d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x335d0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335d10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x335d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x335d14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x335d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335d18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x335d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x335d1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x335d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335d20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335d24: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x335d24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335d28: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x335D28u;
    {
        const bool branch_taken_0x335d28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D28u;
        // 0x335d2c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d28) {
            ctx->pc = 0x335D8Cu;
            goto label_335d8c;
        }
    }
    ctx->pc = 0x335D30u;
    // 0x335d30: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x335d30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x335d34: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x335D34u;
    {
        const bool branch_taken_0x335d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335d34) {
            ctx->pc = 0x335D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335D34u;
            // 0x335d38: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335D70u;
            goto label_335d70;
        }
    }
    ctx->pc = 0x335D3Cu;
    // 0x335d3c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x335D3Cu;
    {
        const bool branch_taken_0x335d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D3Cu;
        // 0x335d40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d3c) {
            ctx->pc = 0x335D90u;
            goto label_335d90;
        }
    }
    ctx->pc = 0x335D44u;
label_335d44:
    // 0x335d44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x335D44u;
    {
        const bool branch_taken_0x335d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D44u;
        // 0x335d48: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d44) {
            ctx->pc = 0x335D90u;
            goto label_335d90;
        }
    }
    ctx->pc = 0x335D4Cu;
    // 0x335d4c: 0x0  nop
    ctx->pc = 0x335d4cu;
    // NOP
label_335d50:
    // 0x335d50: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x335D50u;
    SET_GPR_U32(ctx, 31, 0x335D58u);
    ctx->pc = 0x335D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335D50u;
    // 0x335d54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x335D50u, 0x335D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335D58u;
label_335d58:
    // 0x335d58: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x335D58u;
    {
        const bool branch_taken_0x335d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D58u;
        // 0x335d5c: 0x2131026  xor         $v0, $s0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d58) {
            ctx->pc = 0x335D44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335d44;
        }
    }
    ctx->pc = 0x335D60u;
    // 0x335d60: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x335d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x335d64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x335D64u;
    {
        const bool branch_taken_0x335d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D64u;
        // 0x335d68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d64) {
            ctx->pc = 0x335D84u;
            goto label_335d84;
        }
    }
    ctx->pc = 0x335D6Cu;
    // 0x335d6c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x335d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_335d70:
    // 0x335d70: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x335d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x335d74: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x335d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x335d78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x335D78u;
    {
        const bool branch_taken_0x335d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D78u;
        // 0x335d7c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d78) {
            ctx->pc = 0x335D84u;
            goto label_335d84;
        }
    }
    ctx->pc = 0x335D80u;
    // 0x335d80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x335d80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_335d84:
    // 0x335d84: 0x5600fff2  bnel        $s0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x335D84u;
    {
        const bool branch_taken_0x335d84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x335d84) {
            ctx->pc = 0x335D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335D84u;
            // 0x335d88: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335d50;
        }
    }
    ctx->pc = 0x335D8Cu;
label_335d8c:
    // 0x335d8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x335d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335d90:
    // 0x335d90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335d90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335d94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335d94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335d98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x335d98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335d9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x335d9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x335da0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x335da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335da4: 0x3e00008  jr          $ra
    ctx->pc = 0x335DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DA4u;
        // 0x335da8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335DACu;
    // 0x335dac: 0x0  nop
    ctx->pc = 0x335dacu;
    // NOP
    ctx->pc = 0x335db0u;
}
