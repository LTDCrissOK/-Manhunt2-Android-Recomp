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

// Function: sub_00396058
// Address: 0x396058 - 0x3961d0
void sub_00396058_0x396058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396058_0x396058");
#endif

    switch (ctx->pc) {
        case 0x396094u: goto label_396094;
        case 0x39609cu: goto label_39609c;
        case 0x3960a4u: goto label_3960a4;
        case 0x3960acu: goto label_3960ac;
        case 0x3960b4u: goto label_3960b4;
        case 0x3960bcu: goto label_3960bc;
        case 0x3960c4u: goto label_3960c4;
        case 0x3960ccu: goto label_3960cc;
        case 0x3960d4u: goto label_3960d4;
        case 0x3960dcu: goto label_3960dc;
        case 0x3960e4u: goto label_3960e4;
        case 0x3960ecu: goto label_3960ec;
        case 0x3960fcu: goto label_3960fc;
        case 0x39610cu: goto label_39610c;
        case 0x396120u: goto label_396120;
        case 0x396140u: goto label_396140;
        case 0x39615cu: goto label_39615c;
        case 0x396180u: goto label_396180;
        case 0x3961a4u: goto label_3961a4;
        case 0x3961acu: goto label_3961ac;
        default: break;
    }

    ctx->pc = 0x396058u;

    // 0x396058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x396058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39605c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x39605cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x396060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x396060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x396064: 0x24900c08  addiu       $s0, $a0, 0xC08
    ctx->pc = 0x396064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3080));
    // 0x396068: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x396068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x39606c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x39606cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x396070: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x396070u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x400C08u));
    // 0x396074: 0x24636504  addiu       $v1, $v1, 0x6504
    ctx->pc = 0x396074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25860));
    // 0x396078: 0x2442ad10  addiu       $v0, $v0, -0x52F0
    ctx->pc = 0x396078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946064));
    // 0x39607c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x39607cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x396080: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x396080u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x656504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x656504u, _value); } while (0);
    // 0x396084: 0x5480004b  bnel        $a0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x396084u;
    {
        const bool branch_taken_0x396084 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x396084) {
            ctx->pc = 0x396088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x396084u;
            // 0x396088: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x39608Cu;
    // 0x39608c: 0xc0ebe38  jal         func_3AF8E0
    ctx->pc = 0x39608Cu;
    SET_GPR_U32(ctx, 31, 0x396094u);
    ctx->pc = 0x3AF8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF8E0u, 0x39608Cu, 0x396094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396094u;
label_396094:
    // 0x396094: 0xc0ebe50  jal         func_3AF940
    ctx->pc = 0x396094u;
    SET_GPR_U32(ctx, 31, 0x39609Cu);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x396094u, 0x39609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39609Cu;
label_39609c:
    // 0x39609c: 0xc0ead7a  jal         func_3AB5E8
    ctx->pc = 0x39609Cu;
    SET_GPR_U32(ctx, 31, 0x3960A4u);
    ctx->pc = 0x3AB5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB5E8u, 0x39609Cu, 0x3960A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3960A4u;
label_3960a4:
    // 0x3960a4: 0xc0eaa80  jal         func_3AAA00
    ctx->pc = 0x3960A4u;
    SET_GPR_U32(ctx, 31, 0x3960ACu);
    ctx->pc = 0x3AAA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAA00u, 0x3960A4u, 0x3960ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3960ACu;
label_3960ac:
    // 0x3960ac: 0xc0ea7fe  jal         func_3A9FF8
    ctx->pc = 0x3960ACu;
    SET_GPR_U32(ctx, 31, 0x3960B4u);
    ctx->pc = 0x3A9FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9FF8u, 0x3960ACu, 0x3960B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3960B4u;
label_3960b4:
    // 0x3960b4: 0xc0ec0e0  jal         func_3B0380
    ctx->pc = 0x3960B4u;
    SET_GPR_U32(ctx, 31, 0x3960BCu);
    ctx->pc = 0x3B0380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0380u, 0x3960B4u, 0x3960BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3960BCu;
label_3960bc:
    // 0x3960bc: 0xc0e64d8  jal         func_399360
    ctx->pc = 0x3960BCu;
    SET_GPR_U32(ctx, 31, 0x3960C4u);
    ctx->pc = 0x399360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399360u, 0x3960BCu, 0x3960C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3960C4u;
label_3960c4:
    // 0x3960c4: 0xc0e5f86  jal         func_397E18
    ctx->pc = 0x3960C4u;
    SET_GPR_U32(ctx, 31, 0x3960CCu);
    ctx->pc = 0x397E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397E18u, 0x3960C4u, 0x3960CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3960CCu;
label_3960cc:
    // 0x3960cc: 0xc0e4f50  jal         func_393D40
    ctx->pc = 0x3960CCu;
    SET_GPR_U32(ctx, 31, 0x3960D4u);
    ctx->pc = 0x393D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393D40u, 0x3960CCu, 0x3960D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3960D4u;
label_3960d4:
    // 0x3960d4: 0xc0e5efa  jal         func_397BE8
    ctx->pc = 0x3960D4u;
    SET_GPR_U32(ctx, 31, 0x3960DCu);
    ctx->pc = 0x397BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397BE8u, 0x3960D4u, 0x3960DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3960DCu;
label_3960dc:
    // 0x3960dc: 0xc0e9d68  jal         func_3A75A0
    ctx->pc = 0x3960DCu;
    SET_GPR_U32(ctx, 31, 0x3960E4u);
    ctx->pc = 0x3A75A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A75A0u, 0x3960DCu, 0x3960E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3960E4u;
label_3960e4:
    // 0x3960e4: 0xc0eb47a  jal         func_3AD1E8
    ctx->pc = 0x3960E4u;
    SET_GPR_U32(ctx, 31, 0x3960ECu);
    ctx->pc = 0x3AD1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD1E8u, 0x3960E4u, 0x3960ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3960ECu;
label_3960ec:
    // 0x3960ec: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x3960ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x3960f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3960f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3960f4: 0xc0e5f06  jal         func_397C18
    ctx->pc = 0x3960F4u;
    SET_GPR_U32(ctx, 31, 0x3960FCu);
    ctx->pc = 0x3960F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3960F4u;
    // 0x3960f8: 0x24845fc8  addiu       $a0, $a0, 0x5FC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397C18u, 0x3960F4u, 0x3960FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3960FCu;
label_3960fc:
    // 0x3960fc: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x3960fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x396100: 0x24845fe0  addiu       $a0, $a0, 0x5FE0
    ctx->pc = 0x396100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24544));
    // 0x396104: 0xc0e9d36  jal         func_3A74D8
    ctx->pc = 0x396104u;
    SET_GPR_U32(ctx, 31, 0x39610Cu);
    ctx->pc = 0x396108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396104u;
    // 0x396108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A74D8u, 0x396104u, 0x39610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39610Cu;
label_39610c:
    // 0x39610c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x39610cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x396110: 0x24840c28  addiu       $a0, $a0, 0xC28
    ctx->pc = 0x396110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3112));
    // 0x396114: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x396114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396118: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x396118u;
    SET_GPR_U32(ctx, 31, 0x396120u);
    ctx->pc = 0x39611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396118u;
    // 0x39611c: 0x24060c80  addiu       $a2, $zero, 0xC80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x396118u, 0x396120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396120u;
label_396120:
    // 0x396120: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x396120u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x396124: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x396124u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x396128: 0x24c66018  addiu       $a2, $a2, 0x6018
    ctx->pc = 0x396128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24600));
    // 0x39612c: 0x2508ad60  addiu       $t0, $t0, -0x52A0
    ctx->pc = 0x39612cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946144));
    // 0x396130: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x396130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x396134: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x396134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x396138: 0xc0eb35c  jal         func_3ACD70
    ctx->pc = 0x396138u;
    SET_GPR_U32(ctx, 31, 0x396140u);
    ctx->pc = 0x39613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396138u;
    // 0x39613c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACD70u, 0x396138u, 0x396140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396140u;
label_396140:
    // 0x396140: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x396140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x396144: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x396144u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x396148: 0x24a56038  addiu       $a1, $a1, 0x6038
    ctx->pc = 0x396148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24632));
    // 0x39614c: 0x24e7ad70  addiu       $a3, $a3, -0x5290
    ctx->pc = 0x39614cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946160));
    // 0x396150: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x396150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x396154: 0xc0eb2dc  jal         func_3ACB70
    ctx->pc = 0x396154u;
    SET_GPR_U32(ctx, 31, 0x39615Cu);
    ctx->pc = 0x396158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396154u;
    // 0x396158: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACB70u, 0x396154u, 0x39615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39615Cu;
label_39615c:
    // 0x39615c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x39615cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x396160: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x396160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x396164: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x396164u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x396168: 0x24e7ad80  addiu       $a3, $a3, -0x5280
    ctx->pc = 0x396168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946176));
    // 0x39616c: 0x24a55ff8  addiu       $a1, $a1, 0x5FF8
    ctx->pc = 0x39616cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24568));
    // 0x396170: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396174: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x396174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x396178: 0xc0eb2dc  jal         func_3ACB70
    ctx->pc = 0x396178u;
    SET_GPR_U32(ctx, 31, 0x396180u);
    ctx->pc = 0x39617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396178u;
    // 0x39617c: 0xac620c1c  sw          $v0, 0xC1C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 3100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACB70u, 0x396178u, 0x396180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396180u;
label_396180:
    // 0x396180: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x396180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x396184: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x396184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x396188: 0x24630c20  addiu       $v1, $v1, 0xC20
    ctx->pc = 0x396188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3104));
    // 0x39618c: 0xaca20c10  sw          $v0, 0xC10($a1)
    ctx->pc = 0x39618cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x400C10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400C10u, _value); } while (0);
    // 0x396190: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x396190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400C20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400C20u, _value); } while (0);
    // 0x396194: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x396194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x396198: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x396198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x39619c: 0xc0e708c  jal         func_39C230
    ctx->pc = 0x39619Cu;
    SET_GPR_U32(ctx, 31, 0x3961A4u);
    ctx->pc = 0x3961A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39619Cu;
    // 0x3961a0: 0xacc00c18  sw          $zero, 0xC18($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 3096), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C230u, 0x39619Cu, 0x3961A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3961A4u;
label_3961a4:
    // 0x3961a4: 0xc0ebe56  jal         func_3AF958
    ctx->pc = 0x3961A4u;
    SET_GPR_U32(ctx, 31, 0x3961ACu);
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x3961A4u, 0x3961ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3961ACu;
label_3961ac:
    // 0x3961ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3961acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3961b0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3961b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3961b4:
    // 0x3961b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3961b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3961b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3961b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3961bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3961bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3961c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3961C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3961C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3961C0u;
        // 0x3961c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3961C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3961C8u;
    // 0x3961c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3961c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3961cc: 0x0  nop
    ctx->pc = 0x3961ccu;
    // NOP
    ctx->pc = 0x3961d0u;
}
