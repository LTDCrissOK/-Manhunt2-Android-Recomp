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

// Function: sub_00116D20
// Address: 0x116d20 - 0x116d88
void sub_00116D20_0x116d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116D20_0x116d20");
#endif

    switch (ctx->pc) {
        case 0x116d40u: goto label_116d40;
        case 0x116d50u: goto label_116d50;
        case 0x116d60u: goto label_116d60;
        default: break;
    }

    ctx->pc = 0x116d20u;

    // 0x116d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116d24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x116d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x116d28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x116d2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x116d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116d30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116d34: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x116d34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x116d38: 0xc0f7da4  jal         func_3DF690
    ctx->pc = 0x116D38u;
    SET_GPR_U32(ctx, 31, 0x116D40u);
    ctx->pc = 0x116D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D38u;
    // 0x116d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x116D38u, 0x116D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D40u;
label_116d40:
    // 0x116d40: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x116D40u;
    {
        const bool branch_taken_0x116d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116d40) {
            ctx->pc = 0x116D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116D40u;
            // 0x116d44: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116D6Cu;
            goto label_116d6c;
        }
    }
    ctx->pc = 0x116D48u;
    // 0x116d48: 0xc0f7da0  jal         func_3DF680
    ctx->pc = 0x116D48u;
    SET_GPR_U32(ctx, 31, 0x116D50u);
    ctx->pc = 0x116D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D48u;
    // 0x116d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x116D48u, 0x116D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D50u;
label_116d50:
    // 0x116d50: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x116D50u;
    {
        const bool branch_taken_0x116d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116d50) {
            ctx->pc = 0x116D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116D50u;
            // 0x116d54: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116D6Cu;
            goto label_116d6c;
        }
    }
    ctx->pc = 0x116D58u;
    // 0x116d58: 0xc0f7da8  jal         func_3DF6A0
    ctx->pc = 0x116D58u;
    SET_GPR_U32(ctx, 31, 0x116D60u);
    ctx->pc = 0x116D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116D58u;
    // 0x116d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x116D58u, 0x116D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116D60u;
label_116d60:
    // 0x116d60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116D60u;
    {
        const bool branch_taken_0x116d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D60u;
        // 0x116d64: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d60) {
            ctx->pc = 0x116D70u;
            goto label_116d70;
        }
    }
    ctx->pc = 0x116D68u;
    // 0x116d68: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x116d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_116d6c:
    // 0x116d6c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x116d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116d70:
    // 0x116d70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116d74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116d74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116d78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x116d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x116D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D7Cu;
        // 0x116d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116D84u;
    // 0x116d84: 0x0  nop
    ctx->pc = 0x116d84u;
    // NOP
    ctx->pc = 0x116d88u;
}
