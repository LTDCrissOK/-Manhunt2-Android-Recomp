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

// Function: sub_0018E3A0
// Address: 0x18e3a0 - 0x18e410
void sub_0018E3A0_0x18e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E3A0_0x18e3a0");
#endif

    switch (ctx->pc) {
        case 0x18e3a0u: goto label_18e3a0;
        case 0x18e3a4u: goto label_18e3a4;
        case 0x18e3a8u: goto label_18e3a8;
        case 0x18e3acu: goto label_18e3ac;
        case 0x18e3b0u: goto label_18e3b0;
        case 0x18e3b4u: goto label_18e3b4;
        case 0x18e3b8u: goto label_18e3b8;
        case 0x18e3bcu: goto label_18e3bc;
        case 0x18e3c0u: goto label_18e3c0;
        case 0x18e3c4u: goto label_18e3c4;
        case 0x18e3c8u: goto label_18e3c8;
        case 0x18e3ccu: goto label_18e3cc;
        case 0x18e3d0u: goto label_18e3d0;
        case 0x18e3d4u: goto label_18e3d4;
        case 0x18e3d8u: goto label_18e3d8;
        case 0x18e3dcu: goto label_18e3dc;
        case 0x18e3e0u: goto label_18e3e0;
        case 0x18e3e4u: goto label_18e3e4;
        case 0x18e3e8u: goto label_18e3e8;
        case 0x18e3ecu: goto label_18e3ec;
        case 0x18e3f0u: goto label_18e3f0;
        case 0x18e3f4u: goto label_18e3f4;
        case 0x18e3f8u: goto label_18e3f8;
        case 0x18e3fcu: goto label_18e3fc;
        case 0x18e400u: goto label_18e400;
        case 0x18e404u: goto label_18e404;
        case 0x18e408u: goto label_18e408;
        case 0x18e40cu: goto label_18e40c;
        default: break;
    }

    ctx->pc = 0x18e3a0u;

label_18e3a0:
    // 0x18e3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18e3a4:
    // 0x18e3a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18e3a8:
    // 0x18e3a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18e3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18e3ac:
    // 0x18e3ac: 0xc061a12  jal         func_186848
label_18e3b0:
    if (ctx->pc == 0x18E3B0u) {
        ctx->pc = 0x18E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3ACu;
        // 0x18e3b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3B4u;
        goto label_18e3b4;
    }
    ctx->pc = 0x18E3ACu;
    SET_GPR_U32(ctx, 31, 0x18E3B4u);
    ctx->pc = 0x18E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E3ACu;
    // 0x18e3b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E3ACu, 0x18E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3B4u;
label_18e3b4:
    // 0x18e3b4: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18e3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18e3b8:
    // 0x18e3b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e3bc:
    // 0x18e3bc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_18e3c0:
    // 0x18e3c0: 0x40f809  jalr        $v0
label_18e3c4:
    if (ctx->pc == 0x18E3C4u) {
        ctx->pc = 0x18E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3C0u;
        // 0x18e3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3C8u;
        goto label_18e3c8;
    }
    ctx->pc = 0x18E3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E3C8u);
        ctx->pc = 0x18E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3C0u;
        // 0x18e3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E3C0u, 0x18E3C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E3C8u;
label_18e3c8:
    // 0x18e3c8: 0xc061a12  jal         func_186848
label_18e3cc:
    if (ctx->pc == 0x18E3CCu) {
        ctx->pc = 0x18E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3C8u;
        // 0x18e3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3D0u;
        goto label_18e3d0;
    }
    ctx->pc = 0x18E3C8u;
    SET_GPR_U32(ctx, 31, 0x18E3D0u);
    ctx->pc = 0x18E3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E3C8u;
    // 0x18e3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E3C8u, 0x18E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E3D0u;
label_18e3d0:
    // 0x18e3d0: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18e3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18e3d4:
    // 0x18e3d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e3d8:
    // 0x18e3d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18e3dc:
    // 0x18e3dc: 0x40f809  jalr        $v0
label_18e3e0:
    if (ctx->pc == 0x18E3E0u) {
        ctx->pc = 0x18E3E4u;
        goto label_18e3e4;
    }
    ctx->pc = 0x18E3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E3E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E3DCu, 0x18E3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E3E4u;
label_18e3e4:
    // 0x18e3e4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_18e3e8:
    if (ctx->pc == 0x18E3E8u) {
        ctx->pc = 0x18E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3E4u;
        // 0x18e3e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3ECu;
        goto label_18e3ec;
    }
    ctx->pc = 0x18E3E4u;
    {
        const bool branch_taken_0x18e3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e3e4) {
            ctx->pc = 0x18E3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E3E4u;
            // 0x18e3e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E400u;
            goto label_18e400;
        }
    }
    ctx->pc = 0x18E3ECu;
label_18e3ec:
    // 0x18e3ec: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18e3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18e3f0:
    // 0x18e3f0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18e3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18e3f4:
    // 0x18e3f4: 0x40f809  jalr        $v0
label_18e3f8:
    if (ctx->pc == 0x18E3F8u) {
        ctx->pc = 0x18E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3F4u;
        // 0x18e3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E3FCu;
        goto label_18e3fc;
    }
    ctx->pc = 0x18E3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E3FCu);
        ctx->pc = 0x18E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E3F4u;
        // 0x18e3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E3F4u, 0x18E3FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E3FCu;
label_18e3fc:
    // 0x18e3fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18e400:
    // 0x18e400: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18e400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18e404:
    // 0x18e404: 0x3e00008  jr          $ra
label_18e408:
    if (ctx->pc == 0x18E408u) {
        ctx->pc = 0x18E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E404u;
        // 0x18e408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E40Cu;
        goto label_18e40c;
    }
    ctx->pc = 0x18E404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E404u;
        // 0x18e408: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E40Cu;
label_18e40c:
    // 0x18e40c: 0x0  nop
    ctx->pc = 0x18e40cu;
    // NOP
    ctx->pc = 0x18e410u;
}
