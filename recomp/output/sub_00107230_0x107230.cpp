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

// Function: sub_00107230
// Address: 0x107230 - 0x107268
void sub_00107230_0x107230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107230_0x107230");
#endif

    switch (ctx->pc) {
        case 0x107244u: goto label_107244;
        default: break;
    }

    ctx->pc = 0x107230u;

    // 0x107230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107234: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107238: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x107238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10723c: 0xc0ab3d4  jal         func_2ACF50
    ctx->pc = 0x10723Cu;
    SET_GPR_U32(ctx, 31, 0x107244u);
    ctx->pc = 0x107240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10723Cu;
    // 0x107240: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACF50u, 0x10723Cu, 0x107244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107244u;
label_107244:
    // 0x107244: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x107244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x107248: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x107248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10724c: 0x246302e8  addiu       $v1, $v1, 0x2E8
    ctx->pc = 0x10724cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 744));
    // 0x107250: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x107250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x107254: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x107254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x107258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10725c: 0x3e00008  jr          $ra
    ctx->pc = 0x10725Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10725Cu;
        // 0x107260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10725Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107264u;
    // 0x107264: 0x0  nop
    ctx->pc = 0x107264u;
    // NOP
    ctx->pc = 0x107268u;
}
