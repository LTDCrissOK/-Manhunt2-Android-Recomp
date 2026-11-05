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

// Function: sub_0016E5C8
// Address: 0x16e5c8 - 0x16e600
void sub_0016E5C8_0x16e5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E5C8_0x16e5c8");
#endif

    switch (ctx->pc) {
        case 0x16e5dcu: goto label_16e5dc;
        case 0x16e5e4u: goto label_16e5e4;
        case 0x16e5ecu: goto label_16e5ec;
        default: break;
    }

    ctx->pc = 0x16e5c8u;

    // 0x16e5c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e5cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e5d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16e5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16e5d4: 0xc04f820  jal         func_13E080
    ctx->pc = 0x16E5D4u;
    SET_GPR_U32(ctx, 31, 0x16E5DCu);
    ctx->pc = 0x16E5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E5D4u;
    // 0x16e5d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x16E5D4u, 0x16E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E5DCu;
label_16e5dc:
    // 0x16e5dc: 0xc05b3da  jal         func_16CF68
    ctx->pc = 0x16E5DCu;
    SET_GPR_U32(ctx, 31, 0x16E5E4u);
    ctx->pc = 0x16E5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E5DCu;
    // 0x16e5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CF68u, 0x16E5DCu, 0x16E5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E5E4u;
label_16e5e4:
    // 0x16e5e4: 0xc05ba08  jal         func_16E820
    ctx->pc = 0x16E5E4u;
    SET_GPR_U32(ctx, 31, 0x16E5ECu);
    ctx->pc = 0x16E5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E5E4u;
    // 0x16e5e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E820u, 0x16E5E4u, 0x16E5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E5ECu;
label_16e5ec:
    // 0x16e5ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e5f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x16E5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E5F4u;
        // 0x16e5f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E5FCu;
    // 0x16e5fc: 0x0  nop
    ctx->pc = 0x16e5fcu;
    // NOP
    ctx->pc = 0x16e600u;
}
