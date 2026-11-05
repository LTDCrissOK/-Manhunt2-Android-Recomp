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

// Function: sub_003D8368
// Address: 0x3d8368 - 0x3d83b8
void sub_003D8368_0x3d8368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8368_0x3d8368");
#endif

    switch (ctx->pc) {
        case 0x3d838cu: goto label_3d838c;
        case 0x3d83a4u: goto label_3d83a4;
        default: break;
    }

    ctx->pc = 0x3d8368u;

    // 0x3d8368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d8368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d836c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d836cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3d8370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d8370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d8374: 0x8c6271b8  lw          $v0, 0x71B8($v1)
    ctx->pc = 0x3d8374u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C71B8u));
    // 0x3d8378: 0x247071b8  addiu       $s0, $v1, 0x71B8
    ctx->pc = 0x3d8378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29112));
    // 0x3d837c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D837Cu;
    {
        const bool branch_taken_0x3d837c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D837Cu;
        // 0x3d8380: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d837c) {
            ctx->pc = 0x3D83A4u;
            goto label_3d83a4;
        }
    }
    ctx->pc = 0x3D8384u;
    // 0x3d8384: 0xc0f5e2e  jal         func_3D78B8
    ctx->pc = 0x3D8384u;
    SET_GPR_U32(ctx, 31, 0x3D838Cu);
    ctx->pc = 0x3D78B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D78B8u, 0x3D8384u, 0x3D838Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D838Cu;
label_3d838c:
    // 0x3d838c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d838cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d8390: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x3d8390u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x3d8394: 0x24a527d8  addiu       $a1, $a1, 0x27D8
    ctx->pc = 0x3d8394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10200));
    // 0x3d8398: 0x24c62d68  addiu       $a2, $a2, 0x2D68
    ctx->pc = 0x3d8398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11624));
    // 0x3d839c: 0xc0f5cb0  jal         func_3D72C0
    ctx->pc = 0x3D839Cu;
    SET_GPR_U32(ctx, 31, 0x3D83A4u);
    ctx->pc = 0x3D83A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D839Cu;
    // 0x3d83a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D72C0u, 0x3D839Cu, 0x3D83A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D83A4u;
label_3d83a4:
    // 0x3d83a4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d83a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d83a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d83a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d83ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d83acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d83b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3D83B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D83B0u;
        // 0x3d83b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D83B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D83B8u;
}
