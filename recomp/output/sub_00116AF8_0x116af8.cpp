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

// Function: sub_00116AF8
// Address: 0x116af8 - 0x116b38
void sub_00116AF8_0x116af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116AF8_0x116af8");
#endif

    switch (ctx->pc) {
        case 0x116b14u: goto label_116b14;
        default: break;
    }

    ctx->pc = 0x116af8u;

    // 0x116af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x116b00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x116b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116b04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x116b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x116b08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x116b0c: 0xc045b6a  jal         func_116DA8
    ctx->pc = 0x116B0Cu;
    SET_GPR_U32(ctx, 31, 0x116B14u);
    ctx->pc = 0x116B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B0Cu;
    // 0x116b10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116DA8u, 0x116B0Cu, 0x116B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B14u;
label_116b14:
    // 0x116b14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x116b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x116b18: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x116b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x116b1c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x116b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x116b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x116b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x116b24: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x116b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x116b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116b2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x116b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116b30: 0x3e00008  jr          $ra
    ctx->pc = 0x116B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B30u;
        // 0x116b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116B38u;
}
