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

// Function: sub_001125F0
// Address: 0x1125f0 - 0x112638
void sub_001125F0_0x1125f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001125F0_0x1125f0");
#endif

    switch (ctx->pc) {
        case 0x112610u: goto label_112610;
        case 0x112620u: goto label_112620;
        default: break;
    }

    ctx->pc = 0x1125f0u;

    // 0x1125f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1125f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1125f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1125f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1125f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1125f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1125fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1125fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x112600: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x112600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x112604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x112604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x112608: 0xc041e4c  jal         func_107930
    ctx->pc = 0x112608u;
    SET_GPR_U32(ctx, 31, 0x112610u);
    ctx->pc = 0x11260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112608u;
    // 0x11260c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107930u, 0x112608u, 0x112610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112610u;
label_112610:
    // 0x112610: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112618: 0xc05dccc  jal         func_177330
    ctx->pc = 0x112618u;
    SET_GPR_U32(ctx, 31, 0x112620u);
    ctx->pc = 0x11261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112618u;
    // 0x11261c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177330u, 0x112618u, 0x112620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112620u;
label_112620:
    // 0x112620: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x112620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112628: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x112628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11262c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11262cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112630: 0x3e00008  jr          $ra
    ctx->pc = 0x112630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112630u;
        // 0x112634: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112638u;
}
