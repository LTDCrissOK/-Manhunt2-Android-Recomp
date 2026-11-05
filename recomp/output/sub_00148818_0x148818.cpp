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

// Function: sub_00148818
// Address: 0x148818 - 0x148870
void sub_00148818_0x148818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148818_0x148818");
#endif

    switch (ctx->pc) {
        case 0x148830u: goto label_148830;
        case 0x148844u: goto label_148844;
        case 0x148850u: goto label_148850;
        case 0x14885cu: goto label_14885c;
        default: break;
    }

    ctx->pc = 0x148818u;

    // 0x148818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x148818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14881c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14881cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x148820: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x148820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x148824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x148824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148828: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x148828u;
    SET_GPR_U32(ctx, 31, 0x148830u);
    ctx->pc = 0x14882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148828u;
    // 0x14882c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x148828u, 0x148830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148830u;
label_148830:
    // 0x148830: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x148830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x148834: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x148834u;
    {
        const bool branch_taken_0x148834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x148838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148834u;
        // 0x148838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148834) {
            ctx->pc = 0x148860u;
            goto label_148860;
        }
    }
    ctx->pc = 0x14883Cu;
    // 0x14883c: 0xc0524ae  jal         func_1492B8
    ctx->pc = 0x14883Cu;
    SET_GPR_U32(ctx, 31, 0x148844u);
    ctx->pc = 0x148840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14883Cu;
    // 0x148840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1492B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1492B8u, 0x14883Cu, 0x148844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148844u;
label_148844:
    // 0x148844: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x148844u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x148848: 0xc05248c  jal         func_149230
    ctx->pc = 0x148848u;
    SET_GPR_U32(ctx, 31, 0x148850u);
    ctx->pc = 0x14884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148848u;
    // 0x14884c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149230u, 0x148848u, 0x148850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148850u;
label_148850:
    // 0x148850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148854: 0xc0523e4  jal         func_148F90
    ctx->pc = 0x148854u;
    SET_GPR_U32(ctx, 31, 0x14885Cu);
    ctx->pc = 0x148858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148854u;
    // 0x148858: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148F90u, 0x148854u, 0x14885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14885Cu;
label_14885c:
    // 0x14885c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14885cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148860:
    // 0x148860: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x148860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148864: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x148864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x148868: 0x3e00008  jr          $ra
    ctx->pc = 0x148868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14886Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148868u;
        // 0x14886c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148870u;
}
