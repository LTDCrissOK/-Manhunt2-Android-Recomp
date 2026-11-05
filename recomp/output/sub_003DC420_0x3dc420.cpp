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

// Function: sub_003DC420
// Address: 0x3dc420 - 0x3dc468
void sub_003DC420_0x3dc420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC420_0x3dc420");
#endif

    switch (ctx->pc) {
        case 0x3dc43cu: goto label_3dc43c;
        case 0x3dc454u: goto label_3dc454;
        default: break;
    }

    ctx->pc = 0x3dc420u;

    // 0x3dc420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dc420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dc424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dc424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dc428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dc428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc42c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dc42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dc430: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3dc430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3dc434: 0xc0f70e8  jal         func_3DC3A0
    ctx->pc = 0x3DC434u;
    SET_GPR_U32(ctx, 31, 0x3DC43Cu);
    ctx->pc = 0x3DC438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC434u;
    // 0x3dc438: 0x30b1ffff  andi        $s1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC3A0u, 0x3DC434u, 0x3DC43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC43Cu;
label_3dc43c:
    // 0x3dc43c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dc43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dc440: 0xa6110004  sh          $s1, 0x4($s0)
    ctx->pc = 0x3dc440u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3dc444: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3dc444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3dc448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dc448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dc44c: 0xc0f70fa  jal         func_3DC3E8
    ctx->pc = 0x3DC44Cu;
    SET_GPR_U32(ctx, 31, 0x3DC454u);
    ctx->pc = 0x3DC450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC44Cu;
    // 0x3dc450: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC3E8u, 0x3DC44Cu, 0x3DC454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC454u;
label_3dc454:
    // 0x3dc454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dc454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dc458: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dc458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dc45c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3dc45cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dc460: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC460u;
        // 0x3dc464: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC468u;
}
