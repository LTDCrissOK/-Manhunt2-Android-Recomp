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

// Function: sub_00104D28
// Address: 0x104d28 - 0x104d80
void sub_00104D28_0x104d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104D28_0x104d28");
#endif

    switch (ctx->pc) {
        case 0x104d34u: goto label_104d34;
        case 0x104d58u: goto label_104d58;
        default: break;
    }

    ctx->pc = 0x104d28u;

    // 0x104d28: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x104d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x104d2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x104D2Cu;
    {
        const bool branch_taken_0x104d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D2Cu;
        // 0x104d30: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d2c) {
            ctx->pc = 0x104D3Cu;
            goto label_104d3c;
        }
    }
    ctx->pc = 0x104D34u;
label_104d34:
    // 0x104d34: 0x3e00008  jr          $ra
    ctx->pc = 0x104D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D34u;
        // 0x104d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104D3Cu;
label_104d3c:
    // 0x104d3c: 0x9082002c  lbu         $v0, 0x2C($a0)
    ctx->pc = 0x104d3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x104d40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x104D40u;
    {
        const bool branch_taken_0x104d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D40u;
        // 0x104d44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d40) {
            ctx->pc = 0x104D74u;
            goto label_104d74;
        }
    }
    ctx->pc = 0x104D48u;
    // 0x104d48: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x104d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x104d4c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x104d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d50: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x104d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x104d54: 0x0  nop
    ctx->pc = 0x104d54u;
    // NOP
label_104d58:
    // 0x104d58: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x104d58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x104d5c: 0x1065fff5  beq         $v1, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x104D5Cu;
    {
        const bool branch_taken_0x104d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x104D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D5Cu;
        // 0x104d60: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d5c) {
            ctx->pc = 0x104D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104d34;
        }
    }
    ctx->pc = 0x104D64u;
    // 0x104d64: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x104d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x104d68: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x104d68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x104d6c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x104D6Cu;
    {
        const bool branch_taken_0x104d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x104D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D6Cu;
        // 0x104d70: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d6c) {
            ctx->pc = 0x104D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104d58;
        }
    }
    ctx->pc = 0x104D74u;
label_104d74:
    // 0x104d74: 0x3e00008  jr          $ra
    ctx->pc = 0x104D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D74u;
        // 0x104d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104D7Cu;
    // 0x104d7c: 0x0  nop
    ctx->pc = 0x104d7cu;
    // NOP
    ctx->pc = 0x104d80u;
}
