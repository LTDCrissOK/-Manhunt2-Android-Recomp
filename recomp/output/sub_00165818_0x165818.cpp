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

// Function: sub_00165818
// Address: 0x165818 - 0x1658d0
void sub_00165818_0x165818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165818_0x165818");
#endif

    switch (ctx->pc) {
        case 0x165854u: goto label_165854;
        case 0x165864u: goto label_165864;
        case 0x165874u: goto label_165874;
        case 0x165888u: goto label_165888;
        case 0x165890u: goto label_165890;
        case 0x1658acu: goto label_1658ac;
        case 0x1658b4u: goto label_1658b4;
        case 0x1658bcu: goto label_1658bc;
        default: break;
    }

    ctx->pc = 0x165818u;

    // 0x165818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16581c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x16581cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x165820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x165820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165824: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x165824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x165828: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16582c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16582cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165830: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165834: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x165834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x165838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x165838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16583c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16583cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x165840: 0x8c71020c  lw          $s1, 0x20C($v1)
    ctx->pc = 0x165840u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x165844: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x165844u;
    {
        const bool branch_taken_0x165844 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x165844) {
            ctx->pc = 0x165880u;
            goto label_165880;
        }
    }
    ctx->pc = 0x16584Cu;
    // 0x16584c: 0xc059a62  jal         func_166988
    ctx->pc = 0x16584Cu;
    SET_GPR_U32(ctx, 31, 0x165854u);
    ctx->pc = 0x165850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16584Cu;
    // 0x165850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166988u, 0x16584Cu, 0x165854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165854u;
label_165854:
    // 0x165854: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165854u;
    {
        const bool branch_taken_0x165854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165854u;
        // 0x165858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165854) {
            ctx->pc = 0x16586Cu;
            goto label_16586c;
        }
    }
    ctx->pc = 0x16585Cu;
    // 0x16585c: 0xc0596f4  jal         func_165BD0
    ctx->pc = 0x16585Cu;
    SET_GPR_U32(ctx, 31, 0x165864u);
    ctx->pc = 0x165860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16585Cu;
    // 0x165860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165BD0u, 0x16585Cu, 0x165864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165864u;
label_165864:
    // 0x165864: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x165864u;
    {
        const bool branch_taken_0x165864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165864u;
        // 0x165868: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165864) {
            ctx->pc = 0x1658C0u;
            goto label_1658c0;
        }
    }
    ctx->pc = 0x16586Cu;
label_16586c:
    // 0x16586c: 0xc043958  jal         func_10E560
    ctx->pc = 0x16586Cu;
    SET_GPR_U32(ctx, 31, 0x165874u);
    ctx->pc = 0x165870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16586Cu;
    // 0x165870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x16586Cu, 0x165874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165874u;
label_165874:
    // 0x165874: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x165874u;
    {
        const bool branch_taken_0x165874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165874) {
            ctx->pc = 0x165878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165874u;
            // 0x165878: 0x8e020214  lw          $v0, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165898u;
            goto label_165898;
        }
    }
    ctx->pc = 0x16587Cu;
    // 0x16587c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16587cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_165880:
    // 0x165880: 0xc059670  jal         func_1659C0
    ctx->pc = 0x165880u;
    SET_GPR_U32(ctx, 31, 0x165888u);
    ctx->pc = 0x1659C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659C0u, 0x165880u, 0x165888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165888u;
label_165888:
    // 0x165888: 0xc059ce4  jal         func_167390
    ctx->pc = 0x165888u;
    SET_GPR_U32(ctx, 31, 0x165890u);
    ctx->pc = 0x16588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165888u;
    // 0x16588c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167390u, 0x165888u, 0x165890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165890u;
label_165890:
    // 0x165890: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x165890u;
    {
        const bool branch_taken_0x165890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165890u;
        // 0x165894: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165890) {
            ctx->pc = 0x1658C0u;
            goto label_1658c0;
        }
    }
    ctx->pc = 0x165898u;
label_165898:
    // 0x165898: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x165898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16589c: 0x8e0602e0  lw          $a2, 0x2E0($s0)
    ctx->pc = 0x16589cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x1658a0: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x1658a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x1658a4: 0xc04add4  jal         func_12B750
    ctx->pc = 0x1658A4u;
    SET_GPR_U32(ctx, 31, 0x1658ACu);
    ctx->pc = 0x1658A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1658A4u;
    // 0x1658a8: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B750u, 0x1658A4u, 0x1658ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658ACu;
label_1658ac:
    // 0x1658ac: 0xc059634  jal         func_1658D0
    ctx->pc = 0x1658ACu;
    SET_GPR_U32(ctx, 31, 0x1658B4u);
    ctx->pc = 0x1658B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1658ACu;
    // 0x1658b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1658D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1658D0u, 0x1658ACu, 0x1658B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658B4u;
label_1658b4:
    // 0x1658b4: 0xc059ce4  jal         func_167390
    ctx->pc = 0x1658B4u;
    SET_GPR_U32(ctx, 31, 0x1658BCu);
    ctx->pc = 0x1658B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1658B4u;
    // 0x1658b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167390u, 0x1658B4u, 0x1658BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658BCu;
label_1658bc:
    // 0x1658bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1658bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1658c0:
    // 0x1658c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1658c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1658c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1658c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1658c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1658C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1658CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1658C8u;
        // 0x1658cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1658C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1658D0u;
}
