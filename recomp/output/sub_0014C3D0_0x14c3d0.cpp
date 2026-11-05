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

// Function: sub_0014C3D0
// Address: 0x14c3d0 - 0x14c410
void sub_0014C3D0_0x14c3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C3D0_0x14c3d0");
#endif

    ctx->pc = 0x14c3d0u;

    // 0x14c3d0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x14c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x14c3d4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14c3d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14c3d8: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x14c3d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x14c3dc: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x14c3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x14c3e0: 0x806204f0  lb          $v0, 0x4F0($v1)
    ctx->pc = 0x14c3e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1264)));
    // 0x14c3e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14c3e8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x14c3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x14c3ec: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x14c3ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x14c3f0: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C3F0u;
    {
        const bool branch_taken_0x14c3f0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x14c3f0) {
            ctx->pc = 0x14C3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C3F0u;
            // 0x14c3f4: 0xa06204f0  sb          $v0, 0x4F0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 1264), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C404u;
            goto label_14c404;
        }
    }
    ctx->pc = 0x14C3F8u;
    // 0x14c3f8: 0xa06004f0  sb          $zero, 0x4F0($v1)
    ctx->pc = 0x14c3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1264), (uint8_t)GPR_U32(ctx, 0));
    // 0x14c3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x14C3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C3FCu;
        // 0x14c400: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C404u;
label_14c404:
    // 0x14c404: 0x3e00008  jr          $ra
    ctx->pc = 0x14C404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C404u;
        // 0x14c408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C40Cu;
    // 0x14c40c: 0x0  nop
    ctx->pc = 0x14c40cu;
    // NOP
    ctx->pc = 0x14c410u;
}
