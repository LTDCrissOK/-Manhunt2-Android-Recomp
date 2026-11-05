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

// Function: sub_00130420
// Address: 0x130420 - 0x1304b8
void sub_00130420_0x130420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130420_0x130420");
#endif

    switch (ctx->pc) {
        case 0x13045cu: goto label_13045c;
        case 0x130468u: goto label_130468;
        case 0x130480u: goto label_130480;
        case 0x13048cu: goto label_13048c;
        case 0x130494u: goto label_130494;
        default: break;
    }

    ctx->pc = 0x130420u;

    // 0x130420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13042c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13042cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130430: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130434: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x130434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130438: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x130438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13043c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13043cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130440: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x130440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x130444: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130444u;
    {
        const bool branch_taken_0x130444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x130448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130444u;
        // 0x130448: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130444) {
            ctx->pc = 0x130454u;
            goto label_130454;
        }
    }
    ctx->pc = 0x13044Cu;
    // 0x13044c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x13044Cu;
    {
        const bool branch_taken_0x13044c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13044Cu;
        // 0x130450: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13044c) {
            ctx->pc = 0x13049Cu;
            goto label_13049c;
        }
    }
    ctx->pc = 0x130454u;
label_130454:
    // 0x130454: 0xc046044  jal         func_118110
    ctx->pc = 0x130454u;
    SET_GPR_U32(ctx, 31, 0x13045Cu);
    ctx->pc = 0x130458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130454u;
    // 0x130458: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x130454u, 0x13045Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13045Cu;
label_13045c:
    // 0x13045c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x13045cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130460: 0xc043920  jal         func_10E480
    ctx->pc = 0x130460u;
    SET_GPR_U32(ctx, 31, 0x130468u);
    ctx->pc = 0x130464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130460u;
    // 0x130464: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130460u, 0x130468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130468u;
label_130468:
    // 0x130468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13046c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x13046Cu;
    {
        const bool branch_taken_0x13046c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13046Cu;
        // 0x130470: 0x3a420001  xori        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13046c) {
            ctx->pc = 0x13049Cu;
            goto label_13049c;
        }
    }
    ctx->pc = 0x130474u;
    // 0x130474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130478: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130478u;
    SET_GPR_U32(ctx, 31, 0x130480u);
    ctx->pc = 0x13047Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130478u;
    // 0x13047c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130478u, 0x130480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130480u;
label_130480:
    // 0x130480: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x130480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130484: 0xc094f34  jal         func_253CD0
    ctx->pc = 0x130484u;
    SET_GPR_U32(ctx, 31, 0x13048Cu);
    ctx->pc = 0x130488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130484u;
    // 0x130488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253CD0u, 0x130484u, 0x13048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13048Cu;
label_13048c:
    // 0x13048c: 0xc095216  jal         func_254858
    ctx->pc = 0x13048Cu;
    SET_GPR_U32(ctx, 31, 0x130494u);
    ctx->pc = 0x130490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13048Cu;
    // 0x130490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254858u, 0x13048Cu, 0x130494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130494u;
label_130494:
    // 0x130494: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x130494u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x130498: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x130498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_13049c:
    // 0x13049c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13049cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1304a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1304a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1304a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1304a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1304a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1304a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1304ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1304acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1304b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1304B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1304B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1304B0u;
        // 0x1304b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1304B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1304B8u;
}
