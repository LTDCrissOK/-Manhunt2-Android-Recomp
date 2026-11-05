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

// Function: sub_0015AE60
// Address: 0x15ae60 - 0x15aed0
void sub_0015AE60_0x15ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AE60_0x15ae60");
#endif

    ctx->pc = 0x15ae60u;

    // 0x15ae60: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15ae60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15ae64: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15ae68: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x15ae68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15ae6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15ae70: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15ae70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15ae74: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x15ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15ae78: 0xaca20328  sw          $v0, 0x328($a1)
    ctx->pc = 0x15ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 808), GPR_U32(ctx, 2));
    // 0x15ae7c: 0xaca30324  sw          $v1, 0x324($a1)
    ctx->pc = 0x15ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 804), GPR_U32(ctx, 3));
    // 0x15ae80: 0xaca00320  sw          $zero, 0x320($a1)
    ctx->pc = 0x15ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 800), GPR_U32(ctx, 0));
    // 0x15ae84: 0xaca0032c  sw          $zero, 0x32C($a1)
    ctx->pc = 0x15ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 812), GPR_U32(ctx, 0));
    // 0x15ae88: 0xaca00330  sw          $zero, 0x330($a1)
    ctx->pc = 0x15ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 816), GPR_U32(ctx, 0));
    // 0x15ae8c: 0xaca00334  sw          $zero, 0x334($a1)
    ctx->pc = 0x15ae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 820), GPR_U32(ctx, 0));
    // 0x15ae90: 0xaca00338  sw          $zero, 0x338($a1)
    ctx->pc = 0x15ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 824), GPR_U32(ctx, 0));
    // 0x15ae94: 0xaca0033c  sw          $zero, 0x33C($a1)
    ctx->pc = 0x15ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 828), GPR_U32(ctx, 0));
    // 0x15ae98: 0xaca00340  sw          $zero, 0x340($a1)
    ctx->pc = 0x15ae98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 832), GPR_U32(ctx, 0));
    // 0x15ae9c: 0xaca00344  sw          $zero, 0x344($a1)
    ctx->pc = 0x15ae9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 836), GPR_U32(ctx, 0));
    // 0x15aea0: 0xaca00348  sw          $zero, 0x348($a1)
    ctx->pc = 0x15aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 840), GPR_U32(ctx, 0));
    // 0x15aea4: 0xaca00360  sw          $zero, 0x360($a1)
    ctx->pc = 0x15aea4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 864), GPR_U32(ctx, 0));
    // 0x15aea8: 0x7ca00370  sq          $zero, 0x370($a1)
    ctx->pc = 0x15aea8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 880), GPR_VEC(ctx, 0));
    // 0x15aeac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15aeacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15aeb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15aeb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15aeb4: 0x0  nop
    ctx->pc = 0x15aeb4u;
    // NOP
    // 0x15aeb8: 0xe4a00380  swc1        $f0, 0x380($a1)
    ctx->pc = 0x15aeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 896), bits); }
    // 0x15aebc: 0x7ca00350  sq          $zero, 0x350($a1)
    ctx->pc = 0x15aebcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 848), GPR_VEC(ctx, 0));
    // 0x15aec0: 0xaca00388  sw          $zero, 0x388($a1)
    ctx->pc = 0x15aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 904), GPR_U32(ctx, 0));
    // 0x15aec4: 0x3e00008  jr          $ra
    ctx->pc = 0x15AEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AEC4u;
        // 0x15aec8: 0xaca00384  sw          $zero, 0x384($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 900), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AECCu;
    // 0x15aecc: 0x0  nop
    ctx->pc = 0x15aeccu;
    // NOP
    ctx->pc = 0x15aed0u;
}
