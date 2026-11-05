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

// Function: sub_001052C8
// Address: 0x1052c8 - 0x105358
void sub_001052C8_0x1052c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001052C8_0x1052c8");
#endif

    switch (ctx->pc) {
        case 0x1052f8u: goto label_1052f8;
        case 0x105300u: goto label_105300;
        case 0x105308u: goto label_105308;
        case 0x10531cu: goto label_10531c;
        case 0x105328u: goto label_105328;
        default: break;
    }

    ctx->pc = 0x1052c8u;

    // 0x1052c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1052c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1052cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1052ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1052d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1052d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1052d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1052d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1052d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1052dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1052dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1052e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1052e4: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x1052e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x1052e8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1052E8u;
    {
        const bool branch_taken_0x1052e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1052ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052E8u;
        // 0x1052ec: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1052e8) {
            ctx->pc = 0x10533Cu;
            goto label_10533c;
        }
    }
    ctx->pc = 0x1052F0u;
    // 0x1052f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1052f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052f4: 0x0  nop
    ctx->pc = 0x1052f4u;
    // NOP
label_1052f8:
    // 0x1052f8: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x1052F8u;
    SET_GPR_U32(ctx, 31, 0x105300u);
    ctx->pc = 0x1052FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1052F8u;
    // 0x1052fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x1052F8u, 0x105300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105300u;
label_105300:
    // 0x105300: 0xc0414a2  jal         func_105288
    ctx->pc = 0x105300u;
    SET_GPR_U32(ctx, 31, 0x105308u);
    ctx->pc = 0x105304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105300u;
    // 0x105304: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x105300u, 0x105308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105308u;
label_105308:
    // 0x105308: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x105308u;
    {
        const bool branch_taken_0x105308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105308) {
            ctx->pc = 0x10530Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105308u;
            // 0x10530c: 0x92220022  lbu         $v0, 0x22($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10532Cu;
            goto label_10532c;
        }
    }
    ctx->pc = 0x105310u;
    // 0x105310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x105310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105314: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x105314u;
    SET_GPR_U32(ctx, 31, 0x10531Cu);
    ctx->pc = 0x105318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105314u;
    // 0x105318: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x105314u, 0x10531Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10531Cu;
label_10531c:
    // 0x10531c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10531cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x105320: 0xc0f6230  jal         func_3D88C0
    ctx->pc = 0x105320u;
    SET_GPR_U32(ctx, 31, 0x105328u);
    ctx->pc = 0x105324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105320u;
    // 0x105324: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D88C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D88C0u, 0x105320u, 0x105328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105328u;
label_105328:
    // 0x105328: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x105328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_10532c:
    // 0x10532c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10532cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x105330: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x105330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x105334: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x105334u;
    {
        const bool branch_taken_0x105334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105334) {
            ctx->pc = 0x105338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105334u;
            // 0x105338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1052F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1052f8;
        }
    }
    ctx->pc = 0x10533Cu;
label_10533c:
    // 0x10533c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10533cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105340: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x105340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105344: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x105344u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105348: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x105348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10534c: 0x3e00008  jr          $ra
    ctx->pc = 0x10534Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10534Cu;
        // 0x105350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10534Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105354u;
    // 0x105354: 0x0  nop
    ctx->pc = 0x105354u;
    // NOP
    ctx->pc = 0x105358u;
}
