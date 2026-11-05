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

// Function: sub_0035CE10
// Address: 0x35ce10 - 0x35ce50
void sub_0035CE10_0x35ce10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CE10_0x35ce10");
#endif

    switch (ctx->pc) {
        case 0x35ce38u: goto label_35ce38;
        default: break;
    }

    ctx->pc = 0x35ce10u;

    // 0x35ce10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ce10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ce14: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x35ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x35ce18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ce1c: 0x2442caf0  addiu       $v0, $v0, -0x3510
    ctx->pc = 0x35ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953712));
    // 0x35ce20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35ce20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35ce24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35ce24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce28: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x35ce28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x35ce2c: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x35ce2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x35ce30: 0xc0d73a6  jal         func_35CE98
    ctx->pc = 0x35CE30u;
    SET_GPR_U32(ctx, 31, 0x35CE38u);
    ctx->pc = 0x35CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CE30u;
    // 0x35ce34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE98u, 0x35CE30u, 0x35CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CE38u;
label_35ce38:
    // 0x35ce38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35ce38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ce3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35ce3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ce40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ce40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ce44: 0x3e00008  jr          $ra
    ctx->pc = 0x35CE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CE44u;
        // 0x35ce48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CE4Cu;
    // 0x35ce4c: 0x0  nop
    ctx->pc = 0x35ce4cu;
    // NOP
    ctx->pc = 0x35ce50u;
}
