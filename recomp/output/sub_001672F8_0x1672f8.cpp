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

// Function: sub_001672F8
// Address: 0x1672f8 - 0x167390
void sub_001672F8_0x1672f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001672F8_0x1672f8");
#endif

    switch (ctx->pc) {
        case 0x167320u: goto label_167320;
        case 0x167330u: goto label_167330;
        case 0x16733cu: goto label_16733c;
        case 0x167348u: goto label_167348;
        case 0x167354u: goto label_167354;
        case 0x167360u: goto label_167360;
        case 0x16737cu: goto label_16737c;
        default: break;
    }

    ctx->pc = 0x1672f8u;

    // 0x1672f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1672f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1672fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1672fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x167300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x167300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x167304: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16730c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x16730cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x167310: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x167310u;
    {
        const bool branch_taken_0x167310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167310u;
        // 0x167314: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167310) {
            ctx->pc = 0x167380u;
            goto label_167380;
        }
    }
    ctx->pc = 0x167318u;
    // 0x167318: 0xc04f0b6  jal         func_13C2D8
    ctx->pc = 0x167318u;
    SET_GPR_U32(ctx, 31, 0x167320u);
    ctx->pc = 0x16731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167318u;
    // 0x16731c: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x167318u, 0x167320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167320u;
label_167320:
    // 0x167320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x167320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167328: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x167328u;
    SET_GPR_U32(ctx, 31, 0x167330u);
    ctx->pc = 0x16732Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167328u;
    // 0x16732c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x167328u, 0x167330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167330u;
label_167330:
    // 0x167330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167334: 0xc046190  jal         func_118640
    ctx->pc = 0x167334u;
    SET_GPR_U32(ctx, 31, 0x16733Cu);
    ctx->pc = 0x167338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167334u;
    // 0x167338: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x167334u, 0x16733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16733Cu;
label_16733c:
    // 0x16733c: 0x8e2502e4  lw          $a1, 0x2E4($s1)
    ctx->pc = 0x16733cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
    // 0x167340: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x167340u;
    SET_GPR_U32(ctx, 31, 0x167348u);
    ctx->pc = 0x167344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167340u;
    // 0x167344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x167340u, 0x167348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167348u;
label_167348:
    // 0x167348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16734c: 0xc046058  jal         func_118160
    ctx->pc = 0x16734Cu;
    SET_GPR_U32(ctx, 31, 0x167354u);
    ctx->pc = 0x167350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16734Cu;
    // 0x167350: 0x262502f0  addiu       $a1, $s1, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x16734Cu, 0x167354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167354u;
label_167354:
    // 0x167354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167358: 0xc0460c4  jal         func_118310
    ctx->pc = 0x167358u;
    SET_GPR_U32(ctx, 31, 0x167360u);
    ctx->pc = 0x16735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167358u;
    // 0x16735c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x167358u, 0x167360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167360u;
label_167360:
    // 0x167360: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x167360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x167364: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x167364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x167368: 0x8e2602e0  lw          $a2, 0x2E0($s1)
    ctx->pc = 0x167368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x16736c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x16736cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x167370: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x167370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x167374: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x167374u;
    SET_GPR_U32(ctx, 31, 0x16737Cu);
    ctx->pc = 0x167378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167374u;
    // 0x167378: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x167374u, 0x16737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16737Cu;
label_16737c:
    // 0x16737c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16737cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167380:
    // 0x167380: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x167380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x167384: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167388: 0x3e00008  jr          $ra
    ctx->pc = 0x167388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167388u;
        // 0x16738c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167390u;
}
