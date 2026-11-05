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

// Function: sub_0016E670
// Address: 0x16e670 - 0x16e6a8
void sub_0016E670_0x16e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E670_0x16e670");
#endif

    switch (ctx->pc) {
        case 0x16e684u: goto label_16e684;
        case 0x16e68cu: goto label_16e68c;
        case 0x16e694u: goto label_16e694;
        default: break;
    }

    ctx->pc = 0x16e670u;

    // 0x16e670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e678: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16e678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16e67c: 0xc04f820  jal         func_13E080
    ctx->pc = 0x16E67Cu;
    SET_GPR_U32(ctx, 31, 0x16E684u);
    ctx->pc = 0x16E680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E67Cu;
    // 0x16e680: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x16E67Cu, 0x16E684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E684u;
label_16e684:
    // 0x16e684: 0xc05b3da  jal         func_16CF68
    ctx->pc = 0x16E684u;
    SET_GPR_U32(ctx, 31, 0x16E68Cu);
    ctx->pc = 0x16E688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E684u;
    // 0x16e688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CF68u, 0x16E684u, 0x16E68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E68Cu;
label_16e68c:
    // 0x16e68c: 0xc05ba08  jal         func_16E820
    ctx->pc = 0x16E68Cu;
    SET_GPR_U32(ctx, 31, 0x16E694u);
    ctx->pc = 0x16E690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E68Cu;
    // 0x16e690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E820u, 0x16E68Cu, 0x16E694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E694u;
label_16e694:
    // 0x16e694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e698: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e69c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E69Cu;
        // 0x16e6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E6A4u;
    // 0x16e6a4: 0x0  nop
    ctx->pc = 0x16e6a4u;
    // NOP
    ctx->pc = 0x16e6a8u;
}
