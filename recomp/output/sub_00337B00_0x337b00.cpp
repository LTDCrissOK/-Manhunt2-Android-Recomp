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

// Function: sub_00337B00
// Address: 0x337b00 - 0x337b58
void sub_00337B00_0x337b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337B00_0x337b00");
#endif

    switch (ctx->pc) {
        case 0x337b28u: goto label_337b28;
        default: break;
    }

    ctx->pc = 0x337b00u;

    // 0x337b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337b04: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x337b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337b08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x337b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x337b0c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x337b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x337b10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337b14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x337b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337b18: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x337b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x337b1c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x337b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x337b20: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x337B20u;
    SET_GPR_U32(ctx, 31, 0x337B28u);
    ctx->pc = 0x337B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337B20u;
    // 0x337b24: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x337B20u, 0x337B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337B28u;
label_337b28:
    // 0x337b28: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x337b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x337b2c: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x337b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x337b30: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x337b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337b34: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x337b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x337b38: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x337B38u;
    {
        const bool branch_taken_0x337b38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x337B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337B38u;
        // 0x337b3c: 0xae03005c  sw          $v1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337b38) {
            ctx->pc = 0x337B44u;
            goto label_337b44;
        }
    }
    ctx->pc = 0x337B40u;
    // 0x337b40: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x337b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_337b44:
    // 0x337b44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x337b44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337b48: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x337b48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337b4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x337b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x337b50: 0x3e00008  jr          $ra
    ctx->pc = 0x337B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337B50u;
        // 0x337b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337B58u;
}
