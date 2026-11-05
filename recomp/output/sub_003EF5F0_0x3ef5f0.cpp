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

// Function: sub_003EF5F0
// Address: 0x3ef5f0 - 0x3ef638
void sub_003EF5F0_0x3ef5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF5F0_0x3ef5f0");
#endif

    switch (ctx->pc) {
        case 0x3ef60cu: goto label_3ef60c;
        default: break;
    }

    ctx->pc = 0x3ef5f0u;

    // 0x3ef5f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ef5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ef5f4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3ef5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3ef5f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ef5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ef5fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3ef5fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef600: 0x244245f8  addiu       $v0, $v0, 0x45F8
    ctx->pc = 0x3ef600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17912));
    // 0x3ef604: 0xc0d8da4  jal         func_363690
    ctx->pc = 0x3EF604u;
    SET_GPR_U32(ctx, 31, 0x3EF60Cu);
    ctx->pc = 0x3EF608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF604u;
    // 0x3ef608: 0xac62005c  sw          $v0, 0x5C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363690u, 0x3EF604u, 0x3EF60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF60Cu;
label_3ef60c:
    // 0x3ef60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ef60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ef610: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF610u;
        // 0x3ef614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF618u;
    // 0x3ef618: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3ef618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ef61c: 0x0  nop
    ctx->pc = 0x3ef61cu;
    // NOP
    // 0x3ef620: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x3ef620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x3ef624: 0x0  nop
    ctx->pc = 0x3ef624u;
    // NOP
    // 0x3ef628: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3ef628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3ef62c: 0x0  nop
    ctx->pc = 0x3ef62cu;
    // NOP
    // 0x3ef630: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ef630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3ef634: 0x0  nop
    ctx->pc = 0x3ef634u;
    // NOP
    ctx->pc = 0x3ef638u;
}
