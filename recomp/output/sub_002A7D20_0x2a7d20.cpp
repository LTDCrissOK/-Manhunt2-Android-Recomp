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

// Function: sub_002A7D20
// Address: 0x2a7d20 - 0x2a7d78
void sub_002A7D20_0x2a7d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7D20_0x2a7d20");
#endif

    switch (ctx->pc) {
        case 0x2a7d48u: goto label_2a7d48;
        case 0x2a7d5cu: goto label_2a7d5c;
        default: break;
    }

    ctx->pc = 0x2a7d20u;

    // 0x2a7d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a7d24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a7d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a7d28: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x2a7d28u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x2a7d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a7d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a7d30: 0x8e2223fc  lw          $v0, 0x23FC($s1)
    ctx->pc = 0x2a7d30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C23FCu));
    // 0x2a7d34: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x2a7d34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x2a7d38: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7D38u;
    {
        const bool branch_taken_0x2a7d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D38u;
        // 0x2a7d3c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7d38) {
            ctx->pc = 0x2A7D5Cu;
            goto label_2a7d5c;
        }
    }
    ctx->pc = 0x2A7D40u;
    // 0x2a7d40: 0xc0a9efc  jal         func_2A7BF0
    ctx->pc = 0x2A7D40u;
    SET_GPR_U32(ctx, 31, 0x2A7D48u);
    ctx->pc = 0x2A7D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7D40u;
    // 0x2a7d44: 0x260423a0  addiu       $a0, $s0, 0x23A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7BF0u, 0x2A7D40u, 0x2A7D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7D48u;
label_2a7d48:
    // 0x2a7d48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7d4c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2a7d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2a7d50: 0xae2223fc  sw          $v0, 0x23FC($s1)
    ctx->pc = 0x2a7d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 9212), GPR_U32(ctx, 2));
    // 0x2a7d54: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x2A7D54u;
    SET_GPR_U32(ctx, 31, 0x2A7D5Cu);
    ctx->pc = 0x2A7D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7D54u;
    // 0x2a7d58: 0x24847cf8  addiu       $a0, $a0, 0x7CF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x2A7D54u, 0x2A7D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7D5Cu;
label_2a7d5c:
    // 0x2a7d5c: 0x260223a0  addiu       $v0, $s0, 0x23A0
    ctx->pc = 0x2a7d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 9120));
    // 0x2a7d60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a7d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a7d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7d68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7D6Cu;
        // 0x2a7d70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7D74u;
    // 0x2a7d74: 0x0  nop
    ctx->pc = 0x2a7d74u;
    // NOP
    ctx->pc = 0x2a7d78u;
}
