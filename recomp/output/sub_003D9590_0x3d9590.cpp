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

// Function: sub_003D9590
// Address: 0x3d9590 - 0x3d95f0
void sub_003D9590_0x3d9590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9590_0x3d9590");
#endif

    switch (ctx->pc) {
        case 0x3d95c0u: goto label_3d95c0;
        case 0x3d95d8u: goto label_3d95d8;
        default: break;
    }

    ctx->pc = 0x3d9590u;

    // 0x3d9590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d9590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d9594: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3d9594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3d9598: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3d9598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3d959c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d959cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d95a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3d95a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3d95a4: 0x30d100ff  andi        $s1, $a2, 0xFF
    ctx->pc = 0x3d95a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x3d95a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d95a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d95ac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3d95acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3d95b0: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x3d95b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3d95b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3d95b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d95b8: 0xc0f64c6  jal         func_3D9318
    ctx->pc = 0x3D95B8u;
    SET_GPR_U32(ctx, 31, 0x3D95C0u);
    ctx->pc = 0x3D95BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D95B8u;
    // 0x3d95bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9318u, 0x3D95B8u, 0x3D95C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D95C0u;
label_3d95c0:
    // 0x3d95c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D95C0u;
    {
        const bool branch_taken_0x3d95c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D95C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95C0u;
        // 0x3d95c4: 0x97a70000  lhu         $a3, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d95c0) {
            ctx->pc = 0x3D95D8u;
            goto label_3d95d8;
        }
    }
    ctx->pc = 0x3D95C8u;
    // 0x3d95c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d95c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d95cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d95ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d95d0: 0xc0f6530  jal         func_3D94C0
    ctx->pc = 0x3D95D0u;
    SET_GPR_U32(ctx, 31, 0x3D95D8u);
    ctx->pc = 0x3D95D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D95D0u;
    // 0x3d95d4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D94C0u, 0x3D95D0u, 0x3D95D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D95D8u;
label_3d95d8:
    // 0x3d95d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3d95d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d95dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3d95dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d95e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3d95e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d95e4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3d95e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3d95e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D95E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D95ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D95E8u;
        // 0x3d95ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D95E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D95F0u;
}
