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

// Function: sub_00217FF8
// Address: 0x217ff8 - 0x218210
void sub_00217FF8_0x217ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217FF8_0x217ff8");
#endif

    switch (ctx->pc) {
        case 0x217ff8u: goto label_217ff8;
        case 0x217ffcu: goto label_217ffc;
        case 0x218000u: goto label_218000;
        case 0x218004u: goto label_218004;
        case 0x218008u: goto label_218008;
        case 0x21800cu: goto label_21800c;
        case 0x218010u: goto label_218010;
        case 0x218014u: goto label_218014;
        case 0x218018u: goto label_218018;
        case 0x21801cu: goto label_21801c;
        case 0x218020u: goto label_218020;
        case 0x218024u: goto label_218024;
        case 0x218028u: goto label_218028;
        case 0x21802cu: goto label_21802c;
        case 0x218030u: goto label_218030;
        case 0x218034u: goto label_218034;
        case 0x218038u: goto label_218038;
        case 0x21803cu: goto label_21803c;
        case 0x218040u: goto label_218040;
        case 0x218044u: goto label_218044;
        case 0x218048u: goto label_218048;
        case 0x21804cu: goto label_21804c;
        case 0x218050u: goto label_218050;
        case 0x218054u: goto label_218054;
        case 0x218058u: goto label_218058;
        case 0x21805cu: goto label_21805c;
        case 0x218060u: goto label_218060;
        case 0x218064u: goto label_218064;
        case 0x218068u: goto label_218068;
        case 0x21806cu: goto label_21806c;
        case 0x218070u: goto label_218070;
        case 0x218074u: goto label_218074;
        case 0x218078u: goto label_218078;
        case 0x21807cu: goto label_21807c;
        case 0x218080u: goto label_218080;
        case 0x218084u: goto label_218084;
        case 0x218088u: goto label_218088;
        case 0x21808cu: goto label_21808c;
        case 0x218090u: goto label_218090;
        case 0x218094u: goto label_218094;
        case 0x218098u: goto label_218098;
        case 0x21809cu: goto label_21809c;
        case 0x2180a0u: goto label_2180a0;
        case 0x2180a4u: goto label_2180a4;
        case 0x2180a8u: goto label_2180a8;
        case 0x2180acu: goto label_2180ac;
        case 0x2180b0u: goto label_2180b0;
        case 0x2180b4u: goto label_2180b4;
        case 0x2180b8u: goto label_2180b8;
        case 0x2180bcu: goto label_2180bc;
        case 0x2180c0u: goto label_2180c0;
        case 0x2180c4u: goto label_2180c4;
        case 0x2180c8u: goto label_2180c8;
        case 0x2180ccu: goto label_2180cc;
        case 0x2180d0u: goto label_2180d0;
        case 0x2180d4u: goto label_2180d4;
        case 0x2180d8u: goto label_2180d8;
        case 0x2180dcu: goto label_2180dc;
        case 0x2180e0u: goto label_2180e0;
        case 0x2180e4u: goto label_2180e4;
        case 0x2180e8u: goto label_2180e8;
        case 0x2180ecu: goto label_2180ec;
        case 0x2180f0u: goto label_2180f0;
        case 0x2180f4u: goto label_2180f4;
        case 0x2180f8u: goto label_2180f8;
        case 0x2180fcu: goto label_2180fc;
        case 0x218100u: goto label_218100;
        case 0x218104u: goto label_218104;
        case 0x218108u: goto label_218108;
        case 0x21810cu: goto label_21810c;
        case 0x218110u: goto label_218110;
        case 0x218114u: goto label_218114;
        case 0x218118u: goto label_218118;
        case 0x21811cu: goto label_21811c;
        case 0x218120u: goto label_218120;
        case 0x218124u: goto label_218124;
        case 0x218128u: goto label_218128;
        case 0x21812cu: goto label_21812c;
        case 0x218130u: goto label_218130;
        case 0x218134u: goto label_218134;
        case 0x218138u: goto label_218138;
        case 0x21813cu: goto label_21813c;
        case 0x218140u: goto label_218140;
        case 0x218144u: goto label_218144;
        case 0x218148u: goto label_218148;
        case 0x21814cu: goto label_21814c;
        case 0x218150u: goto label_218150;
        case 0x218154u: goto label_218154;
        case 0x218158u: goto label_218158;
        case 0x21815cu: goto label_21815c;
        case 0x218160u: goto label_218160;
        case 0x218164u: goto label_218164;
        case 0x218168u: goto label_218168;
        case 0x21816cu: goto label_21816c;
        case 0x218170u: goto label_218170;
        case 0x218174u: goto label_218174;
        case 0x218178u: goto label_218178;
        case 0x21817cu: goto label_21817c;
        case 0x218180u: goto label_218180;
        case 0x218184u: goto label_218184;
        case 0x218188u: goto label_218188;
        case 0x21818cu: goto label_21818c;
        case 0x218190u: goto label_218190;
        case 0x218194u: goto label_218194;
        case 0x218198u: goto label_218198;
        case 0x21819cu: goto label_21819c;
        case 0x2181a0u: goto label_2181a0;
        case 0x2181a4u: goto label_2181a4;
        case 0x2181a8u: goto label_2181a8;
        case 0x2181acu: goto label_2181ac;
        case 0x2181b0u: goto label_2181b0;
        case 0x2181b4u: goto label_2181b4;
        case 0x2181b8u: goto label_2181b8;
        case 0x2181bcu: goto label_2181bc;
        case 0x2181c0u: goto label_2181c0;
        case 0x2181c4u: goto label_2181c4;
        case 0x2181c8u: goto label_2181c8;
        case 0x2181ccu: goto label_2181cc;
        case 0x2181d0u: goto label_2181d0;
        case 0x2181d4u: goto label_2181d4;
        case 0x2181d8u: goto label_2181d8;
        case 0x2181dcu: goto label_2181dc;
        case 0x2181e0u: goto label_2181e0;
        case 0x2181e4u: goto label_2181e4;
        case 0x2181e8u: goto label_2181e8;
        case 0x2181ecu: goto label_2181ec;
        case 0x2181f0u: goto label_2181f0;
        case 0x2181f4u: goto label_2181f4;
        case 0x2181f8u: goto label_2181f8;
        case 0x2181fcu: goto label_2181fc;
        case 0x218200u: goto label_218200;
        case 0x218204u: goto label_218204;
        case 0x218208u: goto label_218208;
        case 0x21820cu: goto label_21820c;
        default: break;
    }

    ctx->pc = 0x217ff8u;

label_217ff8:
    // 0x217ff8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x217ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_217ffc:
    // 0x217ffc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x217ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_218000:
    // 0x218000: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x218000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_218004:
    // 0x218004: 0x3c11004a  lui         $s1, 0x4A
    ctx->pc = 0x218004u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)74 << 16));
label_218008:
    // 0x218008: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x218008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_21800c:
    // 0x21800c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x21800cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_218010:
    // 0x218010: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x218010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_218014:
    // 0x218014: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x218014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_218018:
    // 0x218018: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x218018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_21801c:
    // 0x21801c: 0xc09eb04  jal         func_27AC10
label_218020:
    if (ctx->pc == 0x218020u) {
        ctx->pc = 0x218020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21801Cu;
        // 0x218020: 0x26303570  addiu       $s0, $s1, 0x3570 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218024u;
        goto label_218024;
    }
    ctx->pc = 0x21801Cu;
    SET_GPR_U32(ctx, 31, 0x218024u);
    ctx->pc = 0x218020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21801Cu;
    // 0x218020: 0x26303570  addiu       $s0, $s1, 0x3570 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x21801Cu, 0x218024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218024u;
label_218024:
    // 0x218024: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x218024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218028:
    // 0x218028: 0xc0d745c  jal         func_35D170
label_21802c:
    if (ctx->pc == 0x21802Cu) {
        ctx->pc = 0x21802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218028u;
        // 0x21802c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218030u;
        goto label_218030;
    }
    ctx->pc = 0x218028u;
    SET_GPR_U32(ctx, 31, 0x218030u);
    ctx->pc = 0x21802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218028u;
    // 0x21802c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x218028u, 0x218030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218030u;
label_218030:
    // 0x218030: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x218030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_218034:
    // 0x218034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x218034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218038:
    // 0x218038: 0xc0d756c  jal         func_35D5B0
label_21803c:
    if (ctx->pc == 0x21803Cu) {
        ctx->pc = 0x21803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218038u;
        // 0x21803c: 0x24a5ee80  addiu       $a1, $a1, -0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218040u;
        goto label_218040;
    }
    ctx->pc = 0x218038u;
    SET_GPR_U32(ctx, 31, 0x218040u);
    ctx->pc = 0x21803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218038u;
    // 0x21803c: 0x24a5ee80  addiu       $a1, $a1, -0x1180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x218038u, 0x218040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218040u;
label_218040:
    // 0x218040: 0x8e243570  lw          $a0, 0x3570($s1)
    ctx->pc = 0x218040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13680)));
label_218044:
    // 0x218044: 0xc09dcc6  jal         func_277318
label_218048:
    if (ctx->pc == 0x218048u) {
        ctx->pc = 0x218048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218044u;
        // 0x218048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21804Cu;
        goto label_21804c;
    }
    ctx->pc = 0x218044u;
    SET_GPR_U32(ctx, 31, 0x21804Cu);
    ctx->pc = 0x218048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218044u;
    // 0x218048: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x218044u, 0x21804Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21804Cu;
label_21804c:
    // 0x21804c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21804cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218050:
    // 0x218050: 0x12000066  beqz        $s0, . + 4 + (0x66 << 2)
label_218054:
    if (ctx->pc == 0x218054u) {
        ctx->pc = 0x218054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218050u;
        // 0x218054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218058u;
        goto label_218058;
    }
    ctx->pc = 0x218050u;
    {
        const bool branch_taken_0x218050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x218054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218050u;
        // 0x218054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218050) {
            ctx->pc = 0x2181ECu;
            goto label_2181ec;
        }
    }
    ctx->pc = 0x218058u;
label_218058:
    // 0x218058: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x218058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21805c:
    // 0x21805c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x21805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_218060:
    // 0x218060: 0x40f809  jalr        $v0
label_218064:
    if (ctx->pc == 0x218064u) {
        ctx->pc = 0x218064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218060u;
        // 0x218064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218068u;
        goto label_218068;
    }
    ctx->pc = 0x218060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218068u);
        ctx->pc = 0x218064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218060u;
        // 0x218064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218060u, 0x218068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x218068u;
label_218068:
    // 0x218068: 0xc0f52a8  jal         func_3D4AA0
label_21806c:
    if (ctx->pc == 0x21806Cu) {
        ctx->pc = 0x21806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218068u;
        // 0x21806c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218070u;
        goto label_218070;
    }
    ctx->pc = 0x218068u;
    SET_GPR_U32(ctx, 31, 0x218070u);
    ctx->pc = 0x21806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218068u;
    // 0x21806c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x218068u, 0x218070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218070u;
label_218070:
    // 0x218070: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x218070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_218074:
    // 0x218074: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x218074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_218078:
    // 0x218078: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x218078u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
label_21807c:
    // 0x21807c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21807cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_218080:
    // 0x218080: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x218080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_218084:
    // 0x218084: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x218084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_218088:
    // 0x218088: 0x40f809  jalr        $v0
label_21808c:
    if (ctx->pc == 0x21808Cu) {
        ctx->pc = 0x21808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218088u;
        // 0x21808c: 0x34c6b000  ori         $a2, $a2, 0xB000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
        ctx->in_delay_slot = false;
        ctx->pc = 0x218090u;
        goto label_218090;
    }
    ctx->pc = 0x218088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x218090u);
        ctx->pc = 0x21808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218088u;
        // 0x21808c: 0x34c6b000  ori         $a2, $a2, 0xB000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218088u, 0x218090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x218090u;
label_218090:
    // 0x218090: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x218090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_218094:
    // 0x218094: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x218094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_218098:
    // 0x218098: 0x40f809  jalr        $v0
label_21809c:
    if (ctx->pc == 0x21809Cu) {
        ctx->pc = 0x21809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218098u;
        // 0x21809c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180A0u;
        goto label_2180a0;
    }
    ctx->pc = 0x218098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2180A0u);
        ctx->pc = 0x21809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218098u;
        // 0x21809c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218098u, 0x2180A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2180A0u;
label_2180a0:
    // 0x2180a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2180a4:
    if (ctx->pc == 0x2180A4u) {
        ctx->pc = 0x2180A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180A0u;
        // 0x2180a4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180A8u;
        goto label_2180a8;
    }
    ctx->pc = 0x2180A0u;
    {
        const bool branch_taken_0x2180a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2180a0) {
            ctx->pc = 0x2180A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2180A0u;
            // 0x2180a4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2180B0u;
            goto label_2180b0;
        }
    }
    ctx->pc = 0x2180A8u;
label_2180a8:
    // 0x2180a8: 0x10000050  b           . + 4 + (0x50 << 2)
label_2180ac:
    if (ctx->pc == 0x2180ACu) {
        ctx->pc = 0x2180ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180A8u;
        // 0x2180ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180B0u;
        goto label_2180b0;
    }
    ctx->pc = 0x2180A8u;
    {
        const bool branch_taken_0x2180a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2180ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180A8u;
        // 0x2180ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2180a8) {
            ctx->pc = 0x2181ECu;
            goto label_2181ec;
        }
    }
    ctx->pc = 0x2180B0u;
label_2180b0:
    // 0x2180b0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2180b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2180b4:
    // 0x2180b4: 0x40f809  jalr        $v0
label_2180b8:
    if (ctx->pc == 0x2180B8u) {
        ctx->pc = 0x2180B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180B4u;
        // 0x2180b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180BCu;
        goto label_2180bc;
    }
    ctx->pc = 0x2180B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2180BCu);
        ctx->pc = 0x2180B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180B4u;
        // 0x2180b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2180B4u, 0x2180BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2180BCu;
label_2180bc:
    // 0x2180bc: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x2180bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2180c0:
    // 0x2180c0: 0x26620004  addiu       $v0, $s3, 0x4
    ctx->pc = 0x2180c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2180c4:
    // 0x2180c4: 0x2a430401  slti        $v1, $s2, 0x401
    ctx->pc = 0x2180c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)1025) ? 1 : 0);
label_2180c8:
    // 0x2180c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2180cc:
    if (ctx->pc == 0x2180CCu) {
        ctx->pc = 0x2180CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180C8u;
        // 0x2180cc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180D0u;
        goto label_2180d0;
    }
    ctx->pc = 0x2180C8u;
    {
        const bool branch_taken_0x2180c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2180CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180C8u;
        // 0x2180cc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2180c8) {
            ctx->pc = 0x2180D8u;
            goto label_2180d8;
        }
    }
    ctx->pc = 0x2180D0u;
label_2180d0:
    // 0x2180d0: 0xc0dbe86  jal         func_36FA18
label_2180d4:
    if (ctx->pc == 0x2180D4u) {
        ctx->pc = 0x2180D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180D0u;
        // 0x2180d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180D8u;
        goto label_2180d8;
    }
    ctx->pc = 0x2180D0u;
    SET_GPR_U32(ctx, 31, 0x2180D8u);
    ctx->pc = 0x2180D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180D0u;
    // 0x2180d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FA18u, 0x2180D0u, 0x2180D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180D8u;
label_2180d8:
    // 0x2180d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2180d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2180dc:
    // 0x2180dc: 0xc0d7384  jal         func_35CE10
label_2180e0:
    if (ctx->pc == 0x2180E0u) {
        ctx->pc = 0x2180E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180DCu;
        // 0x2180e0: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180E4u;
        goto label_2180e4;
    }
    ctx->pc = 0x2180DCu;
    SET_GPR_U32(ctx, 31, 0x2180E4u);
    ctx->pc = 0x2180E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2180DCu;
    // 0x2180e0: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x2180DCu, 0x2180E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2180E4u;
label_2180e4:
    // 0x2180e4: 0x1a400035  blez        $s2, . + 4 + (0x35 << 2)
label_2180e8:
    if (ctx->pc == 0x2180E8u) {
        ctx->pc = 0x2180E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180E4u;
        // 0x2180e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2180ECu;
        goto label_2180ec;
    }
    ctx->pc = 0x2180E4u;
    {
        const bool branch_taken_0x2180e4 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x2180E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2180E4u;
        // 0x2180e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2180e4) {
            ctx->pc = 0x2181BCu;
            goto label_2181bc;
        }
    }
    ctx->pc = 0x2180ECu;
label_2180ec:
    // 0x2180ec: 0x3c150046  lui         $s5, 0x46
    ctx->pc = 0x2180ecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)70 << 16));
label_2180f0:
    // 0x2180f0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2180f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2180f4:
    // 0x2180f4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2180f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2180f8:
    // 0x2180f8: 0xa7a00004  sh          $zero, 0x4($sp)
    ctx->pc = 0x2180f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 0));
label_2180fc:
    // 0x2180fc: 0x0  nop
    ctx->pc = 0x2180fcu;
    // NOP
label_218100:
    // 0x218100: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x218100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_218104:
    // 0x218104: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x218104u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_218108:
    // 0x218108: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_21810c:
    if (ctx->pc == 0x21810Cu) {
        ctx->pc = 0x21810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218108u;
        // 0x21810c: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218110u;
        goto label_218110;
    }
    ctx->pc = 0x218108u;
    {
        const bool branch_taken_0x218108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218108u;
        // 0x21810c: 0x24710001  addiu       $s1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218108) {
            ctx->pc = 0x218134u;
            goto label_218134;
        }
    }
    ctx->pc = 0x218110u;
label_218110:
    // 0x218110: 0x80a50000  lb          $a1, 0x0($a1)
    ctx->pc = 0x218110u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_218114:
    // 0x218114: 0xc0d755e  jal         func_35D578
label_218118:
    if (ctx->pc == 0x218118u) {
        ctx->pc = 0x218118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218114u;
        // 0x218118: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21811Cu;
        goto label_21811c;
    }
    ctx->pc = 0x218114u;
    SET_GPR_U32(ctx, 31, 0x21811Cu);
    ctx->pc = 0x218118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218114u;
    // 0x218118: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D578u, 0x218114u, 0x21811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21811Cu;
label_21811c:
    // 0x21811c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x21811cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_218120:
    // 0x218120: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x218120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_218124:
    // 0x218124: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x218124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_218128:
    // 0x218128: 0x80640001  lb          $a0, 0x1($v1)
    ctx->pc = 0x218128u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_21812c:
    // 0x21812c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
label_218130:
    if (ctx->pc == 0x218130u) {
        ctx->pc = 0x218130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21812Cu;
        // 0x218130: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218134u;
        goto label_218134;
    }
    ctx->pc = 0x21812Cu;
    {
        const bool branch_taken_0x21812c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x218130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21812Cu;
        // 0x218130: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21812c) {
            ctx->pc = 0x218110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218110;
        }
    }
    ctx->pc = 0x218134u;
label_218134:
    // 0x218134: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x218134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
label_218138:
    // 0x218138: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x218138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_21813c:
    // 0x21813c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x21813cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_218140:
    // 0x218140: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x218140u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_218144:
    // 0x218144: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x218144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_218148:
    // 0x218148: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x218148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_21814c:
    // 0x21814c: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x21814cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
label_218150:
    // 0x218150: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_218154:
    if (ctx->pc == 0x218154u) {
        ctx->pc = 0x218154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218150u;
        // 0x218154: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218158u;
        goto label_218158;
    }
    ctx->pc = 0x218150u;
    {
        const bool branch_taken_0x218150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218150u;
        // 0x218154: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218150) {
            ctx->pc = 0x21817Cu;
            goto label_21817c;
        }
    }
    ctx->pc = 0x218158u;
label_218158:
    // 0x218158: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x218158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_21815c:
    // 0x21815c: 0x285182a  slt         $v1, $s4, $a1
    ctx->pc = 0x21815cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_218160:
    // 0x218160: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x218160u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_218164:
    // 0x218164: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x218164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_218168:
    // 0x218168: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x218168u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_21816c:
    // 0x21816c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21816cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_218170:
    // 0x218170: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x218170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_218174:
    // 0x218174: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x218174u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_218178:
    // 0x218178: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x218178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_21817c:
    // 0x21817c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21817cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_218180:
    // 0x218180: 0xc0d73cc  jal         func_35CF30
label_218184:
    if (ctx->pc == 0x218184u) {
        ctx->pc = 0x218184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218180u;
        // 0x218184: 0x26a51640  addiu       $a1, $s5, 0x1640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 5696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218188u;
        goto label_218188;
    }
    ctx->pc = 0x218180u;
    SET_GPR_U32(ctx, 31, 0x218188u);
    ctx->pc = 0x218184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218180u;
    // 0x218184: 0x26a51640  addiu       $a1, $s5, 0x1640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 5696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x218180u, 0x218188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218188u;
label_218188:
    // 0x218188: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x218188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_21818c:
    // 0x21818c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_218190:
    if (ctx->pc == 0x218190u) {
        ctx->pc = 0x218190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21818Cu;
        // 0x218190: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218194u;
        goto label_218194;
    }
    ctx->pc = 0x21818Cu;
    {
        const bool branch_taken_0x21818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21818Cu;
        // 0x218190: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21818c) {
            ctx->pc = 0x2181A4u;
            goto label_2181a4;
        }
    }
    ctx->pc = 0x218194u;
label_218194:
    // 0x218194: 0xc086486  jal         func_219218
label_218198:
    if (ctx->pc == 0x218198u) {
        ctx->pc = 0x218198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218194u;
        // 0x218198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21819Cu;
        goto label_21819c;
    }
    ctx->pc = 0x218194u;
    SET_GPR_U32(ctx, 31, 0x21819Cu);
    ctx->pc = 0x218198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218194u;
    // 0x218198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219218u, 0x218194u, 0x21819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21819Cu;
label_21819c:
    // 0x21819c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2181a0:
    if (ctx->pc == 0x2181A0u) {
        ctx->pc = 0x2181A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21819Cu;
        // 0x2181a0: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2181A4u;
        goto label_2181a4;
    }
    ctx->pc = 0x21819Cu;
    {
        const bool branch_taken_0x21819c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2181A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21819Cu;
        // 0x2181a0: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21819c) {
            ctx->pc = 0x2181B0u;
            goto label_2181b0;
        }
    }
    ctx->pc = 0x2181A4u;
label_2181a4:
    // 0x2181a4: 0xc08612a  jal         func_2184A8
label_2181a8:
    if (ctx->pc == 0x2181A8u) {
        ctx->pc = 0x2181A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181A4u;
        // 0x2181a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2181ACu;
        goto label_2181ac;
    }
    ctx->pc = 0x2181A4u;
    SET_GPR_U32(ctx, 31, 0x2181ACu);
    ctx->pc = 0x2181A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181A4u;
    // 0x2181a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2184A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2184A8u, 0x2181A4u, 0x2181ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181ACu;
label_2181ac:
    // 0x2181ac: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2181acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2181b0:
    // 0x2181b0: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x2181b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2181b4:
    // 0x2181b4: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
label_2181b8:
    if (ctx->pc == 0x2181B8u) {
        ctx->pc = 0x2181B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181B4u;
        // 0x2181b8: 0xa7a00004  sh          $zero, 0x4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2181BCu;
        goto label_2181bc;
    }
    ctx->pc = 0x2181B4u;
    {
        const bool branch_taken_0x2181b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2181b4) {
            ctx->pc = 0x2181B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2181B4u;
            // 0x2181b8: 0xa7a00004  sh          $zero, 0x4($sp) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x218100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218100;
        }
    }
    ctx->pc = 0x2181BCu;
label_2181bc:
    // 0x2181bc: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
label_2181c0:
    if (ctx->pc == 0x2181C0u) {
        ctx->pc = 0x2181C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181BCu;
        // 0x2181c0: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2181C4u;
        goto label_2181c4;
    }
    ctx->pc = 0x2181BCu;
    {
        const bool branch_taken_0x2181bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2181bc) {
            ctx->pc = 0x2181C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2181BCu;
            // 0x2181c0: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2181D0u;
            goto label_2181d0;
        }
    }
    ctx->pc = 0x2181C4u;
label_2181c4:
    // 0x2181c4: 0xc0f528a  jal         func_3D4A28
label_2181c8:
    if (ctx->pc == 0x2181C8u) {
        ctx->pc = 0x2181C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181C4u;
        // 0x2181c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2181CCu;
        goto label_2181cc;
    }
    ctx->pc = 0x2181C4u;
    SET_GPR_U32(ctx, 31, 0x2181CCu);
    ctx->pc = 0x2181C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181C4u;
    // 0x2181c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2181C4u, 0x2181CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181CCu;
label_2181cc:
    // 0x2181cc: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2181ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_2181d0:
    // 0x2181d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2181d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2181d4:
    // 0x2181d4: 0xc082930  jal         func_20A4C0
label_2181d8:
    if (ctx->pc == 0x2181D8u) {
        ctx->pc = 0x2181D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181D4u;
        // 0x2181d8: 0x24841650  addiu       $a0, $a0, 0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2181DCu;
        goto label_2181dc;
    }
    ctx->pc = 0x2181D4u;
    SET_GPR_U32(ctx, 31, 0x2181DCu);
    ctx->pc = 0x2181D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181D4u;
    // 0x2181d8: 0x24841650  addiu       $a0, $a0, 0x1650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A4C0u, 0x2181D4u, 0x2181DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181DCu;
label_2181dc:
    // 0x2181dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2181dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2181e0:
    // 0x2181e0: 0xc0d7412  jal         func_35D048
label_2181e4:
    if (ctx->pc == 0x2181E4u) {
        ctx->pc = 0x2181E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2181E0u;
        // 0x2181e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2181E8u;
        goto label_2181e8;
    }
    ctx->pc = 0x2181E0u;
    SET_GPR_U32(ctx, 31, 0x2181E8u);
    ctx->pc = 0x2181E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2181E0u;
    // 0x2181e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2181E0u, 0x2181E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2181E8u;
label_2181e8:
    // 0x2181e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2181e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2181ec:
    // 0x2181ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2181ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2181f0:
    // 0x2181f0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2181f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2181f4:
    // 0x2181f4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2181f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2181f8:
    // 0x2181f8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2181f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2181fc:
    // 0x2181fc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2181fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_218200:
    // 0x218200: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x218200u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_218204:
    // 0x218204: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x218204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_218208:
    // 0x218208: 0x3e00008  jr          $ra
label_21820c:
    if (ctx->pc == 0x21820Cu) {
        ctx->pc = 0x21820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218208u;
        // 0x21820c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x218210u;
        goto label_fallthrough_0x218208;
    }
    ctx->pc = 0x218208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218208u;
        // 0x21820c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x218208:
    ctx->pc = 0x218210u;
}
