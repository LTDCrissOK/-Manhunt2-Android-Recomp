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

// Function: sub_003D9A80
// Address: 0x3d9a80 - 0x3d9ac8
void sub_003D9A80_0x3d9a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9A80_0x3d9a80");
#endif

    switch (ctx->pc) {
        case 0x3d9a9cu: goto label_3d9a9c;
        case 0x3d9ab4u: goto label_3d9ab4;
        default: break;
    }

    ctx->pc = 0x3d9a80u;

    // 0x3d9a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d9a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d9a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d9a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d9a88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3d9a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3d9a90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d9a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d9a94: 0xc0f6680  jal         func_3D9A00
    ctx->pc = 0x3D9A94u;
    SET_GPR_U32(ctx, 31, 0x3D9A9Cu);
    ctx->pc = 0x3D9A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9A94u;
    // 0x3d9a98: 0x30b1ffff  andi        $s1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9A00u, 0x3D9A94u, 0x3D9A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9A9Cu;
label_3d9a9c:
    // 0x3d9a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9aa0: 0xa6110004  sh          $s1, 0x4($s0)
    ctx->pc = 0x3d9aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3d9aa4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3d9aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3d9aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d9aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9aac: 0xc0f6692  jal         func_3D9A48
    ctx->pc = 0x3D9AACu;
    SET_GPR_U32(ctx, 31, 0x3D9AB4u);
    ctx->pc = 0x3D9AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9AACu;
    // 0x3d9ab0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9A48u, 0x3D9AACu, 0x3D9AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9AB4u;
label_3d9ab4:
    // 0x3d9ab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d9ab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9ab8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3d9ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d9abc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d9abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d9ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9AC0u;
        // 0x3d9ac4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9AC8u;
}
