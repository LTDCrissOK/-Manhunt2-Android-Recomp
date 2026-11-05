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

// Function: sub_00130810
// Address: 0x130810 - 0x1308d0
void sub_00130810_0x130810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130810_0x130810");
#endif

    switch (ctx->pc) {
        case 0x130854u: goto label_130854;
        case 0x130860u: goto label_130860;
        case 0x130878u: goto label_130878;
        case 0x130884u: goto label_130884;
        case 0x13088cu: goto label_13088c;
        case 0x1308a0u: goto label_1308a0;
        case 0x1308acu: goto label_1308ac;
        default: break;
    }

    ctx->pc = 0x130810u;

    // 0x130810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130814: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130818: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x130818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13081c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13081cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130824: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130828: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x130828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13082c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13082cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x130830: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x130830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130834: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x130834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x130838: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130838u;
    {
        const bool branch_taken_0x130838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130838u;
        // 0x13083c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130838) {
            ctx->pc = 0x130848u;
            goto label_130848;
        }
    }
    ctx->pc = 0x130840u;
    // 0x130840: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x130840u;
    {
        const bool branch_taken_0x130840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130840u;
        // 0x130844: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130840) {
            ctx->pc = 0x1308B0u;
            goto label_1308b0;
        }
    }
    ctx->pc = 0x130848u;
label_130848:
    // 0x130848: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x130848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13084c: 0xc046044  jal         func_118110
    ctx->pc = 0x13084Cu;
    SET_GPR_U32(ctx, 31, 0x130854u);
    ctx->pc = 0x130850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13084Cu;
    // 0x130850: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x13084Cu, 0x130854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130854u;
label_130854:
    // 0x130854: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x130854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130858: 0xc043920  jal         func_10E480
    ctx->pc = 0x130858u;
    SET_GPR_U32(ctx, 31, 0x130860u);
    ctx->pc = 0x13085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130858u;
    // 0x13085c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130858u, 0x130860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130860u;
label_130860:
    // 0x130860: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130864: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x130864u;
    {
        const bool branch_taken_0x130864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x130864) {
            ctx->pc = 0x130890u;
            goto label_130890;
        }
    }
    ctx->pc = 0x13086Cu;
    // 0x13086c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13086cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130870: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130870u;
    SET_GPR_U32(ctx, 31, 0x130878u);
    ctx->pc = 0x130874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130870u;
    // 0x130874: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130870u, 0x130878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130878u;
label_130878:
    // 0x130878: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x130878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13087c: 0xc094f06  jal         func_253C18
    ctx->pc = 0x13087Cu;
    SET_GPR_U32(ctx, 31, 0x130884u);
    ctx->pc = 0x130880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13087Cu;
    // 0x130880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C18u, 0x13087Cu, 0x130884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130884u;
label_130884:
    // 0x130884: 0xc095216  jal         func_254858
    ctx->pc = 0x130884u;
    SET_GPR_U32(ctx, 31, 0x13088Cu);
    ctx->pc = 0x130888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130884u;
    // 0x130888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254858u, 0x130884u, 0x13088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13088Cu;
label_13088c:
    // 0x13088c: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x13088cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_130890:
    // 0x130890: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x130890u;
    {
        const bool branch_taken_0x130890 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x130890) {
            ctx->pc = 0x130894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130890u;
            // 0x130894: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1308B0u;
            goto label_1308b0;
        }
    }
    ctx->pc = 0x130898u;
    // 0x130898: 0xc04611e  jal         func_118478
    ctx->pc = 0x130898u;
    SET_GPR_U32(ctx, 31, 0x1308A0u);
    ctx->pc = 0x13089Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130898u;
    // 0x13089c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118478u, 0x130898u, 0x1308A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308A0u;
label_1308a0:
    // 0x1308a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1308a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1308a4: 0xc04c500  jal         func_131400
    ctx->pc = 0x1308A4u;
    SET_GPR_U32(ctx, 31, 0x1308ACu);
    ctx->pc = 0x1308A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1308A4u;
    // 0x1308a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131400u, 0x1308A4u, 0x1308ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308ACu;
label_1308ac:
    // 0x1308ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1308acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1308b0:
    // 0x1308b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1308b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1308b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1308b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1308b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1308b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1308bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1308bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1308c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1308c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1308c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1308c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1308c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1308C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1308CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1308C8u;
        // 0x1308cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1308C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1308D0u;
}
