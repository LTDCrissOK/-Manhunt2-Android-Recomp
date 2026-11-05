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

// Function: sub_001722F0
// Address: 0x1722f0 - 0x172360
void sub_001722F0_0x1722f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001722F0_0x1722f0");
#endif

    switch (ctx->pc) {
        case 0x172314u: goto label_172314;
        case 0x172320u: goto label_172320;
        case 0x172334u: goto label_172334;
        case 0x172348u: goto label_172348;
        default: break;
    }

    ctx->pc = 0x1722f0u;

    // 0x1722f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1722f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1722f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1722f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1722f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1722f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1722fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1722fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172300: 0x8e020238  lw          $v0, 0x238($s0)
    ctx->pc = 0x172300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x172304: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x172304u;
    {
        const bool branch_taken_0x172304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172304u;
        // 0x172308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172304) {
            ctx->pc = 0x17234Cu;
            goto label_17234c;
        }
    }
    ctx->pc = 0x17230Cu;
    // 0x17230c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17230Cu;
    SET_GPR_U32(ctx, 31, 0x172314u);
    ctx->pc = 0x172310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17230Cu;
    // 0x172310: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17230Cu, 0x172314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172314u;
label_172314:
    // 0x172314: 0x8e050238  lw          $a1, 0x238($s0)
    ctx->pc = 0x172314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x172318: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x172318u;
    SET_GPR_U32(ctx, 31, 0x172320u);
    ctx->pc = 0x17231Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172318u;
    // 0x17231c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x172318u, 0x172320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172320u;
label_172320:
    // 0x172320: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x172320u;
    {
        const bool branch_taken_0x172320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172320) {
            ctx->pc = 0x172324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172320u;
            // 0x172324: 0xae000238  sw          $zero, 0x238($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17233Cu;
            goto label_17233c;
        }
    }
    ctx->pc = 0x172328u;
    // 0x172328: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17232c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17232Cu;
    SET_GPR_U32(ctx, 31, 0x172334u);
    ctx->pc = 0x172330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17232Cu;
    // 0x172330: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17232Cu, 0x172334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172334u;
label_172334:
    // 0x172334: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x172334u;
    {
        const bool branch_taken_0x172334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172334u;
        // 0x172338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172334) {
            ctx->pc = 0x17234Cu;
            goto label_17234c;
        }
    }
    ctx->pc = 0x17233Cu;
label_17233c:
    // 0x17233c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17233cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172340: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x172340u;
    SET_GPR_U32(ctx, 31, 0x172348u);
    ctx->pc = 0x172344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172340u;
    // 0x172344: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x172340u, 0x172348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172348u;
label_172348:
    // 0x172348: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x172348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17234c:
    // 0x17234c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17234cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172350: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x172350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x172354: 0x3e00008  jr          $ra
    ctx->pc = 0x172354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172354u;
        // 0x172358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17235Cu;
    // 0x17235c: 0x0  nop
    ctx->pc = 0x17235cu;
    // NOP
    ctx->pc = 0x172360u;
}
