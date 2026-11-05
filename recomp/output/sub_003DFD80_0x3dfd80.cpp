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

// Function: sub_003DFD80
// Address: 0x3dfd80 - 0x3dfdb8
void sub_003DFD80_0x3dfd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DFD80_0x3dfd80");
#endif

    ctx->pc = 0x3dfd80u;

    // 0x3dfd80: 0x3e00008  jr          $ra
    ctx->pc = 0x3DFD80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DFD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DFD80u;
        // 0x3dfd84: 0x8c820048  lw          $v0, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DFD80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DFD88u;
    // 0x3dfd88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dfd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dfd8c: 0x0  nop
    ctx->pc = 0x3dfd8cu;
    // NOP
    // 0x3dfd90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3dfd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3dfd94: 0x0  nop
    ctx->pc = 0x3dfd94u;
    // NOP
    // 0x3dfd98: 0xe48c1a30  swc1        $f12, 0x1A30($a0)
    ctx->pc = 0x3dfd98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6704), bits); }
    // 0x3dfd9c: 0x0  nop
    ctx->pc = 0x3dfd9cu;
    // NOP
    // 0x3dfda0: 0xe48c1a3c  swc1        $f12, 0x1A3C($a0)
    ctx->pc = 0x3dfda0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6716), bits); }
    // 0x3dfda4: 0x0  nop
    ctx->pc = 0x3dfda4u;
    // NOP
    // 0x3dfda8: 0xe48c1a40  swc1        $f12, 0x1A40($a0)
    ctx->pc = 0x3dfda8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6720), bits); }
    // 0x3dfdac: 0x0  nop
    ctx->pc = 0x3dfdacu;
    // NOP
    // 0x3dfdb0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3dfdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3dfdb4: 0x0  nop
    ctx->pc = 0x3dfdb4u;
    // NOP
    ctx->pc = 0x3dfdb8u;
}
