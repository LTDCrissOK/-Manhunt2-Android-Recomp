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

// Function: sub_00119300
// Address: 0x119300 - 0x119358
void sub_00119300_0x119300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119300_0x119300");
#endif

    switch (ctx->pc) {
        case 0x119324u: goto label_119324;
        case 0x119330u: goto label_119330;
        case 0x119340u: goto label_119340;
        default: break;
    }

    ctx->pc = 0x119300u;

    // 0x119300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119308: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x119308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11930c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11930cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119310: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x119310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119314: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119318: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x119318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11931c: 0xc045efe  jal         func_117BF8
    ctx->pc = 0x11931Cu;
    SET_GPR_U32(ctx, 31, 0x119324u);
    ctx->pc = 0x119320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11931Cu;
    // 0x119320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BF8u, 0x11931Cu, 0x119324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119324u;
label_119324:
    // 0x119324: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119328: 0xc045f00  jal         func_117C00
    ctx->pc = 0x119328u;
    SET_GPR_U32(ctx, 31, 0x119330u);
    ctx->pc = 0x11932Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119328u;
    // 0x11932c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C00u, 0x119328u, 0x119330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119330u;
label_119330:
    // 0x119330: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119334: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119338: 0xc045ef8  jal         func_117BE0
    ctx->pc = 0x119338u;
    SET_GPR_U32(ctx, 31, 0x119340u);
    ctx->pc = 0x11933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119338u;
    // 0x11933c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BE0u, 0x119338u, 0x119340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119340u;
label_119340:
    // 0x119340: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119340u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119344: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119344u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119348: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x119348u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11934c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11934cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x119350: 0x3e00008  jr          $ra
    ctx->pc = 0x119350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119350u;
        // 0x119354: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119358u;
}
