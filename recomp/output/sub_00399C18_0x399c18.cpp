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

// Function: sub_00399C18
// Address: 0x399c18 - 0x399c58
void sub_00399C18_0x399c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399C18_0x399c18");
#endif

    switch (ctx->pc) {
        case 0x399c2cu: goto label_399c2c;
        case 0x399c34u: goto label_399c34;
        case 0x399c44u: goto label_399c44;
        default: break;
    }

    ctx->pc = 0x399c18u;

    // 0x399c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399c1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399c20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x399c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x399c24: 0xc0e6a60  jal         func_39A980
    ctx->pc = 0x399C24u;
    SET_GPR_U32(ctx, 31, 0x399C2Cu);
    ctx->pc = 0x399C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C24u;
    // 0x399c28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A980u, 0x399C24u, 0x399C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C2Cu;
label_399c2c:
    // 0x399c2c: 0xc0e66ea  jal         func_399BA8
    ctx->pc = 0x399C2Cu;
    SET_GPR_U32(ctx, 31, 0x399C34u);
    ctx->pc = 0x399C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C2Cu;
    // 0x399c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BA8u, 0x399C2Cu, 0x399C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C34u;
label_399c34:
    // 0x399c34: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x399c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x399c38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x399c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x399c3c: 0xc0e6a66  jal         func_39A998
    ctx->pc = 0x399C3Cu;
    SET_GPR_U32(ctx, 31, 0x399C44u);
    ctx->pc = 0x399C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C3Cu;
    // 0x399c40: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A998u, 0x399C3Cu, 0x399C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C44u;
label_399c44:
    // 0x399c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399c48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399c4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x399c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399c50: 0x3e00008  jr          $ra
    ctx->pc = 0x399C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C50u;
        // 0x399c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399C58u;
}
