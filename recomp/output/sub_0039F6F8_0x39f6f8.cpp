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

// Function: sub_0039F6F8
// Address: 0x39f6f8 - 0x39f730
void sub_0039F6F8_0x39f6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F6F8_0x39f6f8");
#endif

    switch (ctx->pc) {
        case 0x39f70cu: goto label_39f70c;
        case 0x39f714u: goto label_39f714;
        case 0x39f71cu: goto label_39f71c;
        default: break;
    }

    ctx->pc = 0x39f6f8u;

    // 0x39f6f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39f6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39f6fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39f6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39f700: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39f700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x39f704: 0xc0ecbf0  jal         func_3B2FC0
    ctx->pc = 0x39F704u;
    SET_GPR_U32(ctx, 31, 0x39F70Cu);
    ctx->pc = 0x39F708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F704u;
    // 0x39f708: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC0u, 0x39F704u, 0x39F70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F70Cu;
label_39f70c:
    // 0x39f70c: 0xc0e7dcc  jal         func_39F730
    ctx->pc = 0x39F70Cu;
    SET_GPR_U32(ctx, 31, 0x39F714u);
    ctx->pc = 0x39F710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F70Cu;
    // 0x39f710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F730u, 0x39F70Cu, 0x39F714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F714u;
label_39f714:
    // 0x39f714: 0xc0ecbf2  jal         func_3B2FC8
    ctx->pc = 0x39F714u;
    SET_GPR_U32(ctx, 31, 0x39F71Cu);
    ctx->pc = 0x39F718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F714u;
    // 0x39f718: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC8u, 0x39F714u, 0x39F71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F71Cu;
label_39f71c:
    // 0x39f71c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39f71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39f720: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39f720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f728: 0x3e00008  jr          $ra
    ctx->pc = 0x39F728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F728u;
        // 0x39f72c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F730u;
}
