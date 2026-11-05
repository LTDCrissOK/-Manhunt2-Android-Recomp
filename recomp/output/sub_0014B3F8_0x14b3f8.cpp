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

// Function: sub_0014B3F8
// Address: 0x14b3f8 - 0x14b450
void sub_0014B3F8_0x14b3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B3F8_0x14b3f8");
#endif

    switch (ctx->pc) {
        case 0x14b41cu: goto label_14b41c;
        case 0x14b428u: goto label_14b428;
        case 0x14b438u: goto label_14b438;
        default: break;
    }

    ctx->pc = 0x14b3f8u;

    // 0x14b3f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b3fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14b3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14b400: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14b400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14b404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b408: 0x8e02059c  lw          $v0, 0x59C($s0)
    ctx->pc = 0x14b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1436)));
    // 0x14b40c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14B40Cu;
    {
        const bool branch_taken_0x14b40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b40c) {
            ctx->pc = 0x14B410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B40Cu;
            // 0x14b410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B43Cu;
            goto label_14b43c;
        }
    }
    ctx->pc = 0x14B414u;
    // 0x14b414: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14B414u;
    SET_GPR_U32(ctx, 31, 0x14B41Cu);
    ctx->pc = 0x14B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B414u;
    // 0x14b418: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14B414u, 0x14B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B41Cu;
label_14b41c:
    // 0x14b41c: 0x8e05059c  lw          $a1, 0x59C($s0)
    ctx->pc = 0x14b41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1436)));
    // 0x14b420: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x14B420u;
    SET_GPR_U32(ctx, 31, 0x14B428u);
    ctx->pc = 0x14B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B420u;
    // 0x14b424: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x14B420u, 0x14B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B428u;
label_14b428:
    // 0x14b428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14b428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b42c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14b42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b430: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14B430u;
    SET_GPR_U32(ctx, 31, 0x14B438u);
    ctx->pc = 0x14B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B430u;
    // 0x14b434: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14B430u, 0x14B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B438u;
label_14b438:
    // 0x14b438: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14b438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14b43c:
    // 0x14b43c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14b43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b440: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14b440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14b444: 0x3e00008  jr          $ra
    ctx->pc = 0x14B444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B444u;
        // 0x14b448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B44Cu;
    // 0x14b44c: 0x0  nop
    ctx->pc = 0x14b44cu;
    // NOP
    ctx->pc = 0x14b450u;
}
