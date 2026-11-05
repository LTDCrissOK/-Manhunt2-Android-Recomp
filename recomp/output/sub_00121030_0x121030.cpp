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

// Function: sub_00121030
// Address: 0x121030 - 0x121110
void sub_00121030_0x121030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121030_0x121030");
#endif

    switch (ctx->pc) {
        case 0x121044u: goto label_121044;
        case 0x12104cu: goto label_12104c;
        case 0x121054u: goto label_121054;
        case 0x12105cu: goto label_12105c;
        case 0x121064u: goto label_121064;
        case 0x12106cu: goto label_12106c;
        case 0x121078u: goto label_121078;
        case 0x121080u: goto label_121080;
        case 0x121088u: goto label_121088;
        case 0x1210acu: goto label_1210ac;
        case 0x1210b4u: goto label_1210b4;
        case 0x1210bcu: goto label_1210bc;
        case 0x1210c4u: goto label_1210c4;
        case 0x1210ccu: goto label_1210cc;
        case 0x1210d4u: goto label_1210d4;
        default: break;
    }

    ctx->pc = 0x121030u;

    // 0x121030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x121030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x121034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x121034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x121038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12103c: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x12103Cu;
    SET_GPR_U32(ctx, 31, 0x121044u);
    ctx->pc = 0x121040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12103Cu;
    // 0x121040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128CE0u, 0x12103Cu, 0x121044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121044u;
label_121044:
    // 0x121044: 0xc049a1a  jal         func_126868
    ctx->pc = 0x121044u;
    SET_GPR_U32(ctx, 31, 0x12104Cu);
    ctx->pc = 0x121048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121044u;
    // 0x121048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126868u, 0x121044u, 0x12104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12104Cu;
label_12104c:
    // 0x12104c: 0xc049a40  jal         func_126900
    ctx->pc = 0x12104Cu;
    SET_GPR_U32(ctx, 31, 0x121054u);
    ctx->pc = 0x121050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12104Cu;
    // 0x121050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126900u, 0x12104Cu, 0x121054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121054u;
label_121054:
    // 0x121054: 0xc049912  jal         func_126448
    ctx->pc = 0x121054u;
    SET_GPR_U32(ctx, 31, 0x12105Cu);
    ctx->pc = 0x121058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121054u;
    // 0x121058: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126448u, 0x121054u, 0x12105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12105Cu;
label_12105c:
    // 0x12105c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x12105Cu;
    SET_GPR_U32(ctx, 31, 0x121064u);
    ctx->pc = 0x121060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12105Cu;
    // 0x121060: 0x240403c0  addiu       $a0, $zero, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x12105Cu, 0x121064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121064u;
label_121064:
    // 0x121064: 0xc042464  jal         func_109190
    ctx->pc = 0x121064u;
    SET_GPR_U32(ctx, 31, 0x12106Cu);
    ctx->pc = 0x121068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121064u;
    // 0x121068: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109190u, 0x121064u, 0x12106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12106Cu;
label_12106c:
    // 0x12106c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12106cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121070: 0xc042486  jal         func_109218
    ctx->pc = 0x121070u;
    SET_GPR_U32(ctx, 31, 0x121078u);
    ctx->pc = 0x121074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121070u;
    // 0x121074: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109218u, 0x121070u, 0x121078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121078u;
label_121078:
    // 0x121078: 0xc0499b0  jal         func_1266C0
    ctx->pc = 0x121078u;
    SET_GPR_U32(ctx, 31, 0x121080u);
    ctx->pc = 0x12107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121078u;
    // 0x12107c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1266C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1266C0u, 0x121078u, 0x121080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121080u;
label_121080:
    // 0x121080: 0xc049aaa  jal         func_126AA8
    ctx->pc = 0x121080u;
    SET_GPR_U32(ctx, 31, 0x121088u);
    ctx->pc = 0x121084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121080u;
    // 0x121084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126AA8u, 0x121080u, 0x121088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121088u;
label_121088:
    // 0x121088: 0xae000428  sw          $zero, 0x428($s0)
    ctx->pc = 0x121088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1064), GPR_U32(ctx, 0));
    // 0x12108c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12108cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121090: 0xae00042c  sw          $zero, 0x42C($s0)
    ctx->pc = 0x121090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1068), GPR_U32(ctx, 0));
    // 0x121094: 0xae000434  sw          $zero, 0x434($s0)
    ctx->pc = 0x121094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1076), GPR_U32(ctx, 0));
    // 0x121098: 0xae000438  sw          $zero, 0x438($s0)
    ctx->pc = 0x121098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1080), GPR_U32(ctx, 0));
    // 0x12109c: 0xae00043c  sw          $zero, 0x43C($s0)
    ctx->pc = 0x12109cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1084), GPR_U32(ctx, 0));
    // 0x1210a0: 0xae000440  sw          $zero, 0x440($s0)
    ctx->pc = 0x1210a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1088), GPR_U32(ctx, 0));
    // 0x1210a4: 0xc049ed6  jal         func_127B58
    ctx->pc = 0x1210A4u;
    SET_GPR_U32(ctx, 31, 0x1210ACu);
    ctx->pc = 0x1210A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1210A4u;
    // 0x1210a8: 0xae000444  sw          $zero, 0x444($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1092), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B58u, 0x1210A4u, 0x1210ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1210ACu;
label_1210ac:
    // 0x1210ac: 0xc049ede  jal         func_127B78
    ctx->pc = 0x1210ACu;
    SET_GPR_U32(ctx, 31, 0x1210B4u);
    ctx->pc = 0x1210B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1210ACu;
    // 0x1210b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B78u, 0x1210ACu, 0x1210B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1210B4u;
label_1210b4:
    // 0x1210b4: 0xc049fbe  jal         func_127EF8
    ctx->pc = 0x1210B4u;
    SET_GPR_U32(ctx, 31, 0x1210BCu);
    ctx->pc = 0x1210B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1210B4u;
    // 0x1210b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127EF8u, 0x1210B4u, 0x1210BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1210BCu;
label_1210bc:
    // 0x1210bc: 0xc04a10c  jal         func_128430
    ctx->pc = 0x1210BCu;
    SET_GPR_U32(ctx, 31, 0x1210C4u);
    ctx->pc = 0x1210C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1210BCu;
    // 0x1210c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128430u, 0x1210BCu, 0x1210C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1210C4u;
label_1210c4:
    // 0x1210c4: 0xc04a1b0  jal         func_1286C0
    ctx->pc = 0x1210C4u;
    SET_GPR_U32(ctx, 31, 0x1210CCu);
    ctx->pc = 0x1210C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1210C4u;
    // 0x1210c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1286C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1286C0u, 0x1210C4u, 0x1210CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1210CCu;
label_1210cc:
    // 0x1210cc: 0xc04a174  jal         func_1285D0
    ctx->pc = 0x1210CCu;
    SET_GPR_U32(ctx, 31, 0x1210D4u);
    ctx->pc = 0x1210D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1210CCu;
    // 0x1210d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1285D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1285D0u, 0x1210CCu, 0x1210D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1210D4u;
label_1210d4:
    // 0x1210d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1210d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1210d8: 0xae000fbc  sw          $zero, 0xFBC($s0)
    ctx->pc = 0x1210d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4028), GPR_U32(ctx, 0));
    // 0x1210dc: 0xa2020fd8  sb          $v0, 0xFD8($s0)
    ctx->pc = 0x1210dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4056), (uint8_t)GPR_U32(ctx, 2));
    // 0x1210e0: 0xae000fc0  sw          $zero, 0xFC0($s0)
    ctx->pc = 0x1210e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4032), GPR_U32(ctx, 0));
    // 0x1210e4: 0xae000fc4  sw          $zero, 0xFC4($s0)
    ctx->pc = 0x1210e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4036), GPR_U32(ctx, 0));
    // 0x1210e8: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x1210e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x1210ec: 0xae000fc8  sw          $zero, 0xFC8($s0)
    ctx->pc = 0x1210ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4040), GPR_U32(ctx, 0));
    // 0x1210f0: 0xae000fcc  sw          $zero, 0xFCC($s0)
    ctx->pc = 0x1210f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4044), GPR_U32(ctx, 0));
    // 0x1210f4: 0xae000fd0  sw          $zero, 0xFD0($s0)
    ctx->pc = 0x1210f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 0));
    // 0x1210f8: 0xae000fd4  sw          $zero, 0xFD4($s0)
    ctx->pc = 0x1210f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4052), GPR_U32(ctx, 0));
    // 0x1210fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1210fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121100: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x121100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121104: 0x3e00008  jr          $ra
    ctx->pc = 0x121104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121104u;
        // 0x121108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12110Cu;
    // 0x12110c: 0x0  nop
    ctx->pc = 0x12110cu;
    // NOP
    ctx->pc = 0x121110u;
}
