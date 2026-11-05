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

// Function: sub_00108588
// Address: 0x108588 - 0x1085c0
void sub_00108588_0x108588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108588_0x108588");
#endif

    switch (ctx->pc) {
        case 0x1085acu: goto label_1085ac;
        default: break;
    }

    ctx->pc = 0x108588u;

    // 0x108588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10858c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x10858cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x108590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108594: 0x24420310  addiu       $v0, $v0, 0x310
    ctx->pc = 0x108594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
    // 0x108598: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x108598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10859c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10859cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085a0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1085a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1085a4: 0xc042236  jal         func_1088D8
    ctx->pc = 0x1085A4u;
    SET_GPR_U32(ctx, 31, 0x1085ACu);
    ctx->pc = 0x1085A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1085A4u;
    // 0x1085a8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1088D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088D8u, 0x1085A4u, 0x1085ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1085ACu;
label_1085ac:
    // 0x1085ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1085acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1085b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1085b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1085b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1085b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1085b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1085B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1085BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1085B8u;
        // 0x1085bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1085B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1085C0u;
}
