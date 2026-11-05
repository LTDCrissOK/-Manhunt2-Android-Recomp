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

// Function: sub_002C46E8
// Address: 0x2c46e8 - 0x2c4718
void sub_002C46E8_0x2c46e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C46E8_0x2c46e8");
#endif

    ctx->pc = 0x2c46e8u;

    // 0x2c46e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c46e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c46ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c46ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c46f0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c46f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c46f4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2c46f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2c46f8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2c46f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c46fc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2c46fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2c4700: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2c4700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c4704: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2c4704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2c4708: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2c4708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2c470c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C470Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C470Cu;
        // 0x2c4710: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C470Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4714u;
    // 0x2c4714: 0x0  nop
    ctx->pc = 0x2c4714u;
    // NOP
    ctx->pc = 0x2c4718u;
}
