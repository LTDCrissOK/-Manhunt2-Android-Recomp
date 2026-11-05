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

// Function: sub_00102380
// Address: 0x102380 - 0x102428
void sub_00102380_0x102380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102380_0x102380");
#endif

    switch (ctx->pc) {
        case 0x1023a8u: goto label_1023a8;
        case 0x1023b0u: goto label_1023b0;
        case 0x1023f8u: goto label_1023f8;
        case 0x102400u: goto label_102400;
        default: break;
    }

    ctx->pc = 0x102380u;

    // 0x102380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x102384: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x102384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x102388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10238c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10238cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102390: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x102390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x102394: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x102394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x102398: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x102398u;
    {
        const bool branch_taken_0x102398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102398u;
        // 0x10239c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102398) {
            ctx->pc = 0x1023C0u;
            goto label_1023c0;
        }
    }
    ctx->pc = 0x1023A0u;
    // 0x1023a0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1023a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1023a4: 0x0  nop
    ctx->pc = 0x1023a4u;
    // NOP
label_1023a8:
    // 0x1023a8: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1023A8u;
    SET_GPR_U32(ctx, 31, 0x1023B0u);
    ctx->pc = 0x1023ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1023A8u;
    // 0x1023ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1023A8u, 0x1023B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1023B0u;
label_1023b0:
    // 0x1023b0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1023b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1023b4: 0x0  nop
    ctx->pc = 0x1023b4u;
    // NOP
    // 0x1023b8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1023B8u;
    {
        const bool branch_taken_0x1023b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1023b8) {
            ctx->pc = 0x1023BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1023B8u;
            // 0x1023bc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1023A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1023a8;
        }
    }
    ctx->pc = 0x1023C0u;
label_1023c0:
    // 0x1023c0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1023c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1023c4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1023c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1023c8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1023c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1023cc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1023ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1023d0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1023d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1023d4: 0x8c430714  lw          $v1, 0x714($v0)
    ctx->pc = 0x1023d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F0714u));
    // 0x1023d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1023D8u;
    {
        const bool branch_taken_0x1023d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1023DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023D8u;
        // 0x1023dc: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023d8) {
            ctx->pc = 0x1023ECu;
            goto label_1023ec;
        }
    }
    ctx->pc = 0x1023E0u;
    // 0x1023e0: 0x8c450718  lw          $a1, 0x718($v0)
    ctx->pc = 0x1023e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1816)));
    // 0x1023e4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1023E4u;
    {
        const bool branch_taken_0x1023e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1023E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023E4u;
        // 0x1023e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023e4) {
            ctx->pc = 0x1023F4u;
            goto label_1023f4;
        }
    }
    ctx->pc = 0x1023ECu;
label_1023ec:
    // 0x1023ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1023ECu;
    {
        const bool branch_taken_0x1023ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1023F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023ECu;
        // 0x1023f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023ec) {
            ctx->pc = 0x102414u;
            goto label_102414;
        }
    }
    ctx->pc = 0x1023F4u;
label_1023f4:
    // 0x1023f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1023f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1023f8:
    // 0x1023f8: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x1023F8u;
    SET_GPR_U32(ctx, 31, 0x102400u);
    ctx->pc = 0x1023FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1023F8u;
    // 0x1023fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x1023F8u, 0x102400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102400u;
label_102400:
    // 0x102400: 0x8e100014  lw          $s0, 0x14($s0)
    ctx->pc = 0x102400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x102404: 0x0  nop
    ctx->pc = 0x102404u;
    // NOP
    // 0x102408: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x102408u;
    {
        const bool branch_taken_0x102408 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102408u;
        // 0x10240c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102408) {
            ctx->pc = 0x1023F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1023f8;
        }
    }
    ctx->pc = 0x102410u;
    // 0x102410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_102414:
    // 0x102414: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102414u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102418: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x102418u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10241c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10241cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102420: 0x3e00008  jr          $ra
    ctx->pc = 0x102420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102420u;
        // 0x102424: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102428u;
}
