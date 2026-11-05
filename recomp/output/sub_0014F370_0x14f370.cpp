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

// Function: sub_0014F370
// Address: 0x14f370 - 0x14f3f0
void sub_0014F370_0x14f370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F370_0x14f370");
#endif

    switch (ctx->pc) {
        case 0x14f3a8u: goto label_14f3a8;
        case 0x14f3b4u: goto label_14f3b4;
        case 0x14f3c8u: goto label_14f3c8;
        case 0x14f3d8u: goto label_14f3d8;
        default: break;
    }

    ctx->pc = 0x14f370u;

    // 0x14f370: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14f370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14f374: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x14f374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14f378: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x14f378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14f37c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f37cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f380: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14f380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14f384: 0x24840518  addiu       $a0, $a0, 0x518
    ctx->pc = 0x14f384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1304));
    // 0x14f388: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14f388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14f38c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14f390: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x14f390u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14f394: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x14f394u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f398: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14F398u;
    {
        const bool branch_taken_0x14f398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F398u;
        // 0x14f39c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f398) {
            ctx->pc = 0x14F3DCu;
            goto label_14f3dc;
        }
    }
    ctx->pc = 0x14F3A0u;
    // 0x14f3a0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14F3A0u;
    SET_GPR_U32(ctx, 31, 0x14F3A8u);
    ctx->pc = 0x14F3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3A0u;
    // 0x14f3a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14F3A0u, 0x14F3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3A8u;
label_14f3a8:
    // 0x14f3a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f3ac: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x14F3ACu;
    SET_GPR_U32(ctx, 31, 0x14F3B4u);
    ctx->pc = 0x14F3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3ACu;
    // 0x14f3b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x14F3ACu, 0x14F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3B4u;
label_14f3b4:
    // 0x14f3b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F3B4u;
    {
        const bool branch_taken_0x14f3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3B4u;
        // 0x14f3b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3b4) {
            ctx->pc = 0x14F3D0u;
            goto label_14f3d0;
        }
    }
    ctx->pc = 0x14F3BCu;
    // 0x14f3bc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x14f3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14f3c0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14F3C0u;
    SET_GPR_U32(ctx, 31, 0x14F3C8u);
    ctx->pc = 0x14F3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3C0u;
    // 0x14f3c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14F3C0u, 0x14F3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3C8u;
label_14f3c8:
    // 0x14f3c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F3C8u;
    {
        const bool branch_taken_0x14f3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3C8u;
        // 0x14f3cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f3c8) {
            ctx->pc = 0x14F3DCu;
            goto label_14f3dc;
        }
    }
    ctx->pc = 0x14F3D0u;
label_14f3d0:
    // 0x14f3d0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14F3D0u;
    SET_GPR_U32(ctx, 31, 0x14F3D8u);
    ctx->pc = 0x14F3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F3D0u;
    // 0x14f3d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14F3D0u, 0x14F3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F3D8u;
label_14f3d8:
    // 0x14f3d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f3d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f3dc:
    // 0x14f3dc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14f3dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f3e0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14f3e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f3e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x14F3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F3E8u;
        // 0x14f3ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F3F0u;
}
