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

// Function: sub_002E3D50
// Address: 0x2e3d50 - 0x2e3da0
void sub_002E3D50_0x2e3d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3D50_0x2e3d50");
#endif

    ctx->pc = 0x2e3d50u;

    // 0x2e3d50: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x2E3D50u;
    {
        const bool branch_taken_0x2e3d50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D50u;
        // 0x2e3d54: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d50) {
            ctx->pc = 0x2E3D7Cu;
            goto label_2e3d7c;
        }
    }
    ctx->pc = 0x2E3D58u;
    // 0x2e3d58: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2e3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e3d5c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2e3d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e3d60: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x2e3d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2e3d64: 0xe46c046c  swc1        $f12, 0x46C($v1)
    ctx->pc = 0x2e3d64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1132), bits); }
    // 0x2e3d68: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e3d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d6c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e3d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d70: 0xe48d0470  swc1        $f13, 0x470($a0)
    ctx->pc = 0x2e3d70u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1136), bits); }
    // 0x2e3d74: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D74u;
        // 0x2e3d78: 0xe44e0474  swc1        $f14, 0x474($v0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3D7Cu;
label_2e3d7c:
    // 0x2e3d7c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2e3d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e3d80: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x2e3d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e3d84: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x2e3d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2e3d88: 0xe46c0478  swc1        $f12, 0x478($v1)
    ctx->pc = 0x2e3d88u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1144), bits); }
    // 0x2e3d8c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2e3d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d90: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e3d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d94: 0xe48d047c  swc1        $f13, 0x47C($a0)
    ctx->pc = 0x2e3d94u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1148), bits); }
    // 0x2e3d98: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D98u;
        // 0x2e3d9c: 0xe44e0480  swc1        $f14, 0x480($v0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3DA0u;
}
