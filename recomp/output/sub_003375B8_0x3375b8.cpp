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

// Function: sub_003375B8
// Address: 0x3375b8 - 0x337678
void sub_003375B8_0x3375b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003375B8_0x3375b8");
#endif

    switch (ctx->pc) {
        case 0x3375d8u: goto label_3375d8;
        case 0x3375f0u: goto label_3375f0;
        case 0x337608u: goto label_337608;
        case 0x337610u: goto label_337610;
        case 0x33762cu: goto label_33762c;
        case 0x337640u: goto label_337640;
        case 0x33764cu: goto label_33764c;
        default: break;
    }

    ctx->pc = 0x3375b8u;

    // 0x3375b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3375b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3375bc: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x3375bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x3375c0: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x3375c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x3375c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3375c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3375c8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3375c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3375cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3375ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3375d0: 0xc0d75ee  jal         func_35D7B8
    ctx->pc = 0x3375D0u;
    SET_GPR_U32(ctx, 31, 0x3375D8u);
    ctx->pc = 0x3375D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3375D0u;
    // 0x3375d4: 0x26040490  addiu       $a0, $s0, 0x490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D7B8u, 0x3375D0u, 0x3375D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3375D8u;
label_3375d8:
    // 0x3375d8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3375d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3375dc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3375DCu;
    {
        const bool branch_taken_0x3375dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3375dc) {
            ctx->pc = 0x3375E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3375DCu;
            // 0x3375e0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3375F8u;
            goto label_3375f8;
        }
    }
    ctx->pc = 0x3375E4u;
    // 0x3375e4: 0x8c4500f8  lw          $a1, 0xF8($v0)
    ctx->pc = 0x3375e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x3375e8: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3375E8u;
    SET_GPR_U32(ctx, 31, 0x3375F0u);
    ctx->pc = 0x3375ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3375E8u;
    // 0x3375ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3375E8u, 0x3375F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3375F0u;
label_3375f0:
    // 0x3375f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3375F0u;
    {
        const bool branch_taken_0x3375f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3375F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3375F0u;
        // 0x3375f4: 0xae000488  sw          $zero, 0x488($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3375f0) {
            ctx->pc = 0x337640u;
            goto label_337640;
        }
    }
    ctx->pc = 0x3375F8u;
label_3375f8:
    // 0x3375f8: 0xdc435c60  ld          $v1, 0x5C60($v0)
    ctx->pc = 0x3375f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 23648)));
    // 0x3375fc: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3375fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x337600: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x337600u;
    {
        const bool branch_taken_0x337600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337600u;
        // 0x337604: 0xae000488  sw          $zero, 0x488($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337600) {
            ctx->pc = 0x337640u;
            goto label_337640;
        }
    }
    ctx->pc = 0x337608u;
label_337608:
    // 0x337608: 0xc0cddec  jal         func_3377B0
    ctx->pc = 0x337608u;
    SET_GPR_U32(ctx, 31, 0x337610u);
    ctx->pc = 0x33760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337608u;
    // 0x33760c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3377B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3377B0u, 0x337608u, 0x337610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337610u;
label_337610:
    // 0x337610: 0x8e020498  lw          $v0, 0x498($s0)
    ctx->pc = 0x337610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x337614: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x337614u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x337618: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x337618u;
    {
        const bool branch_taken_0x337618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x337618) {
            ctx->pc = 0x33761Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337618u;
            // 0x33761c: 0x8e020498  lw          $v0, 0x498($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337630u;
            goto label_337630;
        }
    }
    ctx->pc = 0x337620u;
    // 0x337620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337624: 0xc0ce020  jal         func_338080
    ctx->pc = 0x337624u;
    SET_GPR_U32(ctx, 31, 0x33762Cu);
    ctx->pc = 0x337628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337624u;
    // 0x337628: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338080u, 0x337624u, 0x33762Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33762Cu;
label_33762c:
    // 0x33762c: 0x8e020498  lw          $v0, 0x498($s0)
    ctx->pc = 0x33762cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
label_337630:
    // 0x337630: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337630u;
    {
        const bool branch_taken_0x337630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337630u;
        // 0x337634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337630) {
            ctx->pc = 0x337644u;
            goto label_337644;
        }
    }
    ctx->pc = 0x337638u;
    // 0x337638: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x337638u;
    SET_GPR_U32(ctx, 31, 0x337640u);
    ctx->pc = 0x33763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337638u;
    // 0x33763c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x337638u, 0x337640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337640u;
label_337640:
    // 0x337640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_337644:
    // 0x337644: 0xc0cdd9e  jal         func_337678
    ctx->pc = 0x337644u;
    SET_GPR_U32(ctx, 31, 0x33764Cu);
    ctx->pc = 0x337648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337644u;
    // 0x337648: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337678u, 0x337644u, 0x33764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33764Cu;
label_33764c:
    // 0x33764c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x33764Cu;
    {
        const bool branch_taken_0x33764c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33764Cu;
        // 0x337650: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33764c) {
            ctx->pc = 0x337608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337608;
        }
    }
    ctx->pc = 0x337654u;
    // 0x337654: 0x8e03048c  lw          $v1, 0x48C($s0)
    ctx->pc = 0x337654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1164)));
    // 0x337658: 0x8e040488  lw          $a0, 0x488($s0)
    ctx->pc = 0x337658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
    // 0x33765c: 0x8e020498  lw          $v0, 0x498($s0)
    ctx->pc = 0x33765cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1176)));
    // 0x337660: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x337660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x337664: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x337664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x337668: 0xae03048c  sw          $v1, 0x48C($s0)
    ctx->pc = 0x337668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1164), GPR_U32(ctx, 3));
    // 0x33766c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x33766cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x337670: 0x3e00008  jr          $ra
    ctx->pc = 0x337670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337670u;
        // 0x337674: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337678u;
}
