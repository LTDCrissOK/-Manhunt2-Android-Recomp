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

// Function: sub_00180218
// Address: 0x180218 - 0x180260
void sub_00180218_0x180218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180218_0x180218");
#endif

    switch (ctx->pc) {
        case 0x180238u: goto label_180238;
        case 0x180248u: goto label_180248;
        default: break;
    }

    ctx->pc = 0x180218u;

    // 0x180218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18021c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x18021cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x180220: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x180220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x180224: 0x24848758  addiu       $a0, $a0, -0x78A8
    ctx->pc = 0x180224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    // 0x180228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18022c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18022cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x180230: 0xc041ea4  jal         func_107A90
    ctx->pc = 0x180230u;
    SET_GPR_U32(ctx, 31, 0x180238u);
    ctx->pc = 0x180234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180230u;
    // 0x180234: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107A90u, 0x180230u, 0x180238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180238u;
label_180238:
    // 0x180238: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x180238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18023c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18023cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180240: 0xc045edc  jal         func_117B70
    ctx->pc = 0x180240u;
    SET_GPR_U32(ctx, 31, 0x180248u);
    ctx->pc = 0x180244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180240u;
    // 0x180244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x180240u, 0x180248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180248u;
label_180248:
    // 0x180248: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18024c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18024cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180258: 0x3e00008  jr          $ra
    ctx->pc = 0x180258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180258u;
        // 0x18025c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180260u;
}
