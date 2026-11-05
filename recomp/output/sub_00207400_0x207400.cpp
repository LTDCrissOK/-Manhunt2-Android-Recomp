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

// Function: sub_00207400
// Address: 0x207400 - 0x207490
void sub_00207400_0x207400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207400_0x207400");
#endif

    switch (ctx->pc) {
        case 0x20742cu: goto label_20742c;
        case 0x207440u: goto label_207440;
        case 0x207450u: goto label_207450;
        case 0x20746cu: goto label_20746c;
        default: break;
    }

    ctx->pc = 0x207400u;

    // 0x207400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x207404: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x207404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x207408: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20740c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20740cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207410: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x207414: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x207414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x207418: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x207418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x20741c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20741Cu;
    {
        const bool branch_taken_0x20741c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20741c) {
            ctx->pc = 0x207420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20741Cu;
            // 0x207420: 0x8e42006c  lw          $v0, 0x6C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x207430u;
            goto label_207430;
        }
    }
    ctx->pc = 0x207424u;
    // 0x207424: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x207424u;
    SET_GPR_U32(ctx, 31, 0x20742Cu);
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x207424u, 0x20742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20742Cu;
label_20742c:
    // 0x20742c: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x20742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_207430:
    // 0x207430: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x207430u;
    {
        const bool branch_taken_0x207430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207430u;
        // 0x207434: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207430) {
            ctx->pc = 0x207474u;
            goto label_207474;
        }
    }
    ctx->pc = 0x207438u;
    // 0x207438: 0xc08061e  jal         func_201878
    ctx->pc = 0x207438u;
    SET_GPR_U32(ctx, 31, 0x207440u);
    ctx->pc = 0x20743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x207438u;
    // 0x20743c: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201878u, 0x207438u, 0x207440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207440u;
label_207440:
    // 0x207440: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x207440u;
    {
        const bool branch_taken_0x207440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207440u;
        // 0x207444: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207440) {
            ctx->pc = 0x207478u;
            goto label_207478;
        }
    }
    ctx->pc = 0x207448u;
    // 0x207448: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x207448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20744c: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x20744cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_207450:
    // 0x207450: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x207450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x207454: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x207454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x207458: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x207458u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x20745c: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20745Cu;
    {
        const bool branch_taken_0x20745c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x207460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20745Cu;
        // 0x207460: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20745c) {
            ctx->pc = 0x20746Cu;
            goto label_20746c;
        }
    }
    ctx->pc = 0x207464u;
    // 0x207464: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x207464u;
    SET_GPR_U32(ctx, 31, 0x20746Cu);
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x207464u, 0x20746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20746Cu;
label_20746c:
    // 0x20746c: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20746Cu;
    {
        const bool branch_taken_0x20746c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x207470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20746Cu;
        // 0x207470: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20746c) {
            ctx->pc = 0x207450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207450;
        }
    }
    ctx->pc = 0x207474u;
label_207474:
    // 0x207474: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207474u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207478:
    // 0x207478: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207478u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20747c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20747cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207480: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x207484: 0x3e00008  jr          $ra
    ctx->pc = 0x207484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207484u;
        // 0x207488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20748Cu;
    // 0x20748c: 0x0  nop
    ctx->pc = 0x20748cu;
    // NOP
    ctx->pc = 0x207490u;
}
