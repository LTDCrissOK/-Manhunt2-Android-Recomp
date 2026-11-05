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

// Function: sub_0010C3B8
// Address: 0x10c3b8 - 0x10c420
void sub_0010C3B8_0x10c3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C3B8_0x10c3b8");
#endif

    switch (ctx->pc) {
        case 0x10c3e0u: goto label_10c3e0;
        case 0x10c40cu: goto label_10c40c;
        default: break;
    }

    ctx->pc = 0x10c3b8u;

    // 0x10c3b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10c3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10c3bc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10c3c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c3c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c3c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10c3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10c3cc: 0x8c449c1c  lw          $a0, -0x63E4($v0)
    ctx->pc = 0x10c3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x489C1Cu));
    // 0x10c3d0: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x10C3D0u;
    {
        const bool branch_taken_0x10c3d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c3d0) {
            ctx->pc = 0x10C3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C3D0u;
            // 0x10c3d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C410u;
            goto label_10c410;
        }
    }
    ctx->pc = 0x10C3D8u;
    // 0x10c3d8: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x10C3D8u;
    SET_GPR_U32(ctx, 31, 0x10C3E0u);
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x10C3D8u, 0x10C3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C3E0u;
label_10c3e0:
    // 0x10c3e0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x10C3E0u;
    {
        const bool branch_taken_0x10c3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c3e0) {
            ctx->pc = 0x10C3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C3E0u;
            // 0x10c3e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C410u;
            goto label_10c410;
        }
    }
    ctx->pc = 0x10C3E8u;
    // 0x10c3e8: 0x90430020  lbu         $v1, 0x20($v0)
    ctx->pc = 0x10c3e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x10c3ec: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x10c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x10c3f0: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C3F0u;
    {
        const bool branch_taken_0x10c3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10c3f0) {
            ctx->pc = 0x10C3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C3F0u;
            // 0x10c3f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C410u;
            goto label_10c410;
        }
    }
    ctx->pc = 0x10C3F8u;
    // 0x10c3f8: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x10c3f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10c3fc: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C3FCu;
    {
        const bool branch_taken_0x10c3fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10c3fc) {
            ctx->pc = 0x10C400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C3FCu;
            // 0x10c400: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C410u;
            goto label_10c410;
        }
    }
    ctx->pc = 0x10C404u;
    // 0x10c404: 0xc043108  jal         func_10C420
    ctx->pc = 0x10C404u;
    SET_GPR_U32(ctx, 31, 0x10C40Cu);
    ctx->pc = 0x10C408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C404u;
    // 0x10c408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C420u, 0x10C404u, 0x10C40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C40Cu;
label_10c40c:
    // 0x10c40c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10c410:
    // 0x10c410: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10c410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10c414: 0x3e00008  jr          $ra
    ctx->pc = 0x10C414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C414u;
        // 0x10c418: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C41Cu;
    // 0x10c41c: 0x0  nop
    ctx->pc = 0x10c41cu;
    // NOP
    ctx->pc = 0x10c420u;
}
