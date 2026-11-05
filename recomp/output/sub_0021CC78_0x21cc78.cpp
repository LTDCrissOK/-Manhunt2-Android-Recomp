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

// Function: sub_0021CC78
// Address: 0x21cc78 - 0x21ccb0
void sub_0021CC78_0x21cc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CC78_0x21cc78");
#endif

    switch (ctx->pc) {
        case 0x21cc8cu: goto label_21cc8c;
        default: break;
    }

    ctx->pc = 0x21cc78u;

    // 0x21cc78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x21cc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21cc7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21cc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21cc80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x21cc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x21cc84: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x21CC84u;
    SET_GPR_U32(ctx, 31, 0x21CC8Cu);
    ctx->pc = 0x21CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CC84u;
    // 0x21cc88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x21CC84u, 0x21CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC8Cu;
label_21cc8c:
    // 0x21cc8c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x21cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x21cc90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21cc90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cc94: 0x24631690  addiu       $v1, $v1, 0x1690
    ctx->pc = 0x21cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5776));
    // 0x21cc98: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x21cc98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x21cc9c: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x21cc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x21cca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cca4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x21cca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21cca8: 0x3e00008  jr          $ra
    ctx->pc = 0x21CCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCA8u;
        // 0x21ccac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CCB0u;
}
