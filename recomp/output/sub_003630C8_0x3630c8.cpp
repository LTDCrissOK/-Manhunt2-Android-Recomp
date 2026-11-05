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

// Function: sub_003630C8
// Address: 0x3630c8 - 0x363108
void sub_003630C8_0x3630c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003630C8_0x3630c8");
#endif

    switch (ctx->pc) {
        case 0x3630dcu: goto label_3630dc;
        default: break;
    }

    ctx->pc = 0x3630c8u;

    // 0x3630c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3630c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3630cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3630ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3630d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3630d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3630d4: 0xc0d761a  jal         func_35D868
    ctx->pc = 0x3630D4u;
    SET_GPR_U32(ctx, 31, 0x3630DCu);
    ctx->pc = 0x3630D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3630D4u;
    // 0x3630d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D868u, 0x3630D4u, 0x3630DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3630DCu;
label_3630dc:
    // 0x3630dc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3630dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3630e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3630e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3630e4: 0x24634530  addiu       $v1, $v1, 0x4530
    ctx->pc = 0x3630e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17712));
    // 0x3630e8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x3630e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x3630ec: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3630ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x3630f0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x3630f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x3630f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3630f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3630f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3630f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3630fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3630FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3630FCu;
        // 0x363100: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3630FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363104u;
    // 0x363104: 0x0  nop
    ctx->pc = 0x363104u;
    // NOP
    ctx->pc = 0x363108u;
}
