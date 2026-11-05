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

// Function: sub_00224FA0
// Address: 0x224fa0 - 0x224fd8
void sub_00224FA0_0x224fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224FA0_0x224fa0");
#endif

    switch (ctx->pc) {
        case 0x224fb4u: goto label_224fb4;
        default: break;
    }

    ctx->pc = 0x224fa0u;

    // 0x224fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224fa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x224fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x224fac: 0xc089352  jal         func_224D48
    ctx->pc = 0x224FACu;
    SET_GPR_U32(ctx, 31, 0x224FB4u);
    ctx->pc = 0x224FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224FACu;
    // 0x224fb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224D48u, 0x224FACu, 0x224FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FB4u;
label_224fb4:
    // 0x224fb4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x224fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x224fb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x224fb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224fbc: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x224fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x224fc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x224fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224fc4: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x224fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    // 0x224fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x224FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224FCCu;
        // 0x224fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224FD4u;
    // 0x224fd4: 0x0  nop
    ctx->pc = 0x224fd4u;
    // NOP
    ctx->pc = 0x224fd8u;
}
