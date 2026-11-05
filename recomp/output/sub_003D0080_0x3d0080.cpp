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

// Function: sub_003D0080
// Address: 0x3d0080 - 0x3d00e8
void sub_003D0080_0x3d0080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0080_0x3d0080");
#endif

    switch (ctx->pc) {
        case 0x3d00bcu: goto label_3d00bc;
        case 0x3d00ccu: goto label_3d00cc;
        default: break;
    }

    ctx->pc = 0x3d0080u;

    // 0x3d0080: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3d0080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3d0084: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d0084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d0088: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d0088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d008c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d008cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d0090: 0x24421f70  addiu       $v0, $v0, 0x1F70
    ctx->pc = 0x3d0090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8048));
    // 0x3d0094: 0x24a51f80  addiu       $a1, $a1, 0x1F80
    ctx->pc = 0x3d0094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8064));
    // 0x3d0098: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d0098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3d009c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d009cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d00a0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3d00a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3d00a4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x3d00a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x3d00a8: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x3d00a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x3d00ac: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3d00acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3d00b0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x3d00b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x3d00b4: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x3D00B4u;
    SET_GPR_U32(ctx, 31, 0x3D00BCu);
    ctx->pc = 0x3D00B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D00B4u;
    // 0x3d00b8: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3D00B4u, 0x3D00BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D00BCu;
label_3d00bc:
    // 0x3d00bc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d00bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3d00c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d00c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3d00c4: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x3D00C4u;
    SET_GPR_U32(ctx, 31, 0x3D00CCu);
    ctx->pc = 0x3D00C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D00C4u;
    // 0x3d00c8: 0xac62d6c8  sw          $v0, -0x2938($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956744), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3D00C4u, 0x3D00CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D00CCu;
label_3d00cc:
    // 0x3d00cc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3d00ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3d00d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d00d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d00d4: 0xac62d6cc  sw          $v0, -0x2934($v1)
    ctx->pc = 0x3d00d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x42D6CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42D6CCu, _value); } while (0);
    // 0x3d00d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D00D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D00DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D00D8u;
        // 0x3d00dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D00D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D00E0u;
    // 0x3d00e0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3d00e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x3d00e4: 0x0  nop
    ctx->pc = 0x3d00e4u;
    // NOP
    ctx->pc = 0x3d00e8u;
}
