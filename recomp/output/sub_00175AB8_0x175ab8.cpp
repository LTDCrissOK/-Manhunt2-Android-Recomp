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

// Function: sub_00175AB8
// Address: 0x175ab8 - 0x175ae8
void sub_00175AB8_0x175ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175AB8_0x175ab8");
#endif

    switch (ctx->pc) {
        case 0x175accu: goto label_175acc;
        case 0x175ad4u: goto label_175ad4;
        default: break;
    }

    ctx->pc = 0x175ab8u;

    // 0x175ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175abc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175ac0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x175ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x175ac4: 0xc04f7a6  jal         func_13DE98
    ctx->pc = 0x175AC4u;
    SET_GPR_U32(ctx, 31, 0x175ACCu);
    ctx->pc = 0x175AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175AC4u;
    // 0x175ac8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DE98u, 0x175AC4u, 0x175ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175ACCu;
label_175acc:
    // 0x175acc: 0xc05d90a  jal         func_176428
    ctx->pc = 0x175ACCu;
    SET_GPR_U32(ctx, 31, 0x175AD4u);
    ctx->pc = 0x175AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175ACCu;
    // 0x175ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176428u, 0x175ACCu, 0x175AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175AD4u;
label_175ad4:
    // 0x175ad4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x175ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x175ad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x175ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175adc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x175adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x175ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x175AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175AE0u;
        // 0x175ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175AE8u;
}
