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

// Function: sub_003566F0
// Address: 0x3566f0 - 0x356728
void sub_003566F0_0x3566f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003566F0_0x3566f0");
#endif

    ctx->pc = 0x3566f0u;

    // 0x3566f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3566f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3566f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3566f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3566f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3566f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3566fc: 0x2442ca20  addiu       $v0, $v0, -0x35E0
    ctx->pc = 0x3566fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953504));
    // 0x356700: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x356700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x356704: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x356704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x356708: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x356708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35670c: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x35670cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x356710: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x356710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x356714: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x356714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x356718: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x356718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x35671c: 0x3e00008  jr          $ra
    ctx->pc = 0x35671Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35671Cu;
        // 0x356720: 0xa0800010  sb          $zero, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35671Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356724u;
    // 0x356724: 0x0  nop
    ctx->pc = 0x356724u;
    // NOP
    ctx->pc = 0x356728u;
}
