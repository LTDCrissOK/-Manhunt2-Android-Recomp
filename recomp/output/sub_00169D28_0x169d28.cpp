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

// Function: sub_00169D28
// Address: 0x169d28 - 0x169d78
void sub_00169D28_0x169d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169D28_0x169d28");
#endif

    switch (ctx->pc) {
        case 0x169d50u: goto label_169d50;
        case 0x169d60u: goto label_169d60;
        default: break;
    }

    ctx->pc = 0x169d28u;

    // 0x169d28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169d30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x169d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x169d34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169d38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169d3c: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x169d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169d40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169D40u;
    {
        const bool branch_taken_0x169d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D40u;
        // 0x169d44: 0x30b100ff  andi        $s1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x169d40) {
            ctx->pc = 0x169D54u;
            goto label_169d54;
        }
    }
    ctx->pc = 0x169D48u;
    // 0x169d48: 0xc05a798  jal         func_169E60
    ctx->pc = 0x169D48u;
    SET_GPR_U32(ctx, 31, 0x169D50u);
    ctx->pc = 0x169D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D48u;
    // 0x169d4c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E60u, 0x169D48u, 0x169D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D50u;
label_169d50:
    // 0x169d50: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x169d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
label_169d54:
    // 0x169d54: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x169d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x169d58: 0xc046226  jal         func_118898
    ctx->pc = 0x169D58u;
    SET_GPR_U32(ctx, 31, 0x169D60u);
    ctx->pc = 0x169D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169D58u;
    // 0x169d5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x169D58u, 0x169D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169D60u;
label_169d60:
    // 0x169d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169d64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x169d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169d68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x169D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169D6Cu;
        // 0x169d70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169D74u;
    // 0x169d74: 0x0  nop
    ctx->pc = 0x169d74u;
    // NOP
    ctx->pc = 0x169d78u;
}
