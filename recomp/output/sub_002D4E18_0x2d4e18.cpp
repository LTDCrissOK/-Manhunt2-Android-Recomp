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

// Function: sub_002D4E18
// Address: 0x2d4e18 - 0x2d4e70
void sub_002D4E18_0x2d4e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D4E18_0x2d4e18");
#endif

    switch (ctx->pc) {
        case 0x2d4e2cu: goto label_2d4e2c;
        default: break;
    }

    ctx->pc = 0x2d4e18u;

    // 0x2d4e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d4e1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d4e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d4e20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d4e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d4e24: 0xc0b5352  jal         func_2D4D48
    ctx->pc = 0x2D4E24u;
    SET_GPR_U32(ctx, 31, 0x2D4E2Cu);
    ctx->pc = 0x2D4E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4E24u;
    // 0x2d4e28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4D48u, 0x2D4E24u, 0x2D4E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4E2Cu;
label_2d4e2c:
    // 0x2d4e2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d4e30: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2d4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2d4e34: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2d4e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2d4e38: 0x24633de8  addiu       $v1, $v1, 0x3DE8
    ctx->pc = 0x2d4e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15848));
    // 0x2d4e3c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2d4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2d4e40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d4e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4e44: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2d4e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2d4e48: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2d4e48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2d4e4c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2d4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2d4e50: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2d4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2d4e54: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2d4e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2d4e58: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2d4e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2d4e5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d4e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4e60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d4e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d4e64: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4E64u;
        // 0x2d4e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4E6Cu;
    // 0x2d4e6c: 0x0  nop
    ctx->pc = 0x2d4e6cu;
    // NOP
    ctx->pc = 0x2d4e70u;
}
