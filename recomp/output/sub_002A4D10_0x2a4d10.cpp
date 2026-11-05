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

// Function: sub_002A4D10
// Address: 0x2a4d10 - 0x2a4d68
void sub_002A4D10_0x2a4d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4D10_0x2a4d10");
#endif

    switch (ctx->pc) {
        case 0x2a4d38u: goto label_2a4d38;
        case 0x2a4d4cu: goto label_2a4d4c;
        default: break;
    }

    ctx->pc = 0x2a4d10u;

    // 0x2a4d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a4d14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a4d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a4d18: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x2a4d18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x2a4d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a4d20: 0x8e222320  lw          $v0, 0x2320($s1)
    ctx->pc = 0x2a4d20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2320u));
    // 0x2a4d24: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x2a4d24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x2a4d28: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4D28u;
    {
        const bool branch_taken_0x2a4d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D28u;
        // 0x2a4d2c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d28) {
            ctx->pc = 0x2A4D4Cu;
            goto label_2a4d4c;
        }
    }
    ctx->pc = 0x2A4D30u;
    // 0x2a4d30: 0xc0a9302  jal         func_2A4C08
    ctx->pc = 0x2A4D30u;
    SET_GPR_U32(ctx, 31, 0x2A4D38u);
    ctx->pc = 0x2A4D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4D30u;
    // 0x2a4d34: 0x26041890  addiu       $a0, $s0, 0x1890 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4C08u, 0x2A4D30u, 0x2A4D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D38u;
label_2a4d38:
    // 0x2a4d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4d3c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2a4d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2a4d40: 0xae222320  sw          $v0, 0x2320($s1)
    ctx->pc = 0x2a4d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8992), GPR_U32(ctx, 2));
    // 0x2a4d44: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x2A4D44u;
    SET_GPR_U32(ctx, 31, 0x2A4D4Cu);
    ctx->pc = 0x2A4D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4D44u;
    // 0x2a4d48: 0x24844ce8  addiu       $a0, $a0, 0x4CE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x2A4D44u, 0x2A4D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D4Cu;
label_2a4d4c:
    // 0x2a4d4c: 0x26021890  addiu       $v0, $s0, 0x1890
    ctx->pc = 0x2a4d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 6288));
    // 0x2a4d50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a4d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a4d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a4d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4d58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a4d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D5Cu;
        // 0x2a4d60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4D64u;
    // 0x2a4d64: 0x0  nop
    ctx->pc = 0x2a4d64u;
    // NOP
    ctx->pc = 0x2a4d68u;
}
