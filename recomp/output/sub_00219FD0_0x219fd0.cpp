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

// Function: sub_00219FD0
// Address: 0x219fd0 - 0x21a090
void sub_00219FD0_0x219fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219FD0_0x219fd0");
#endif

    switch (ctx->pc) {
        case 0x219fd0u: goto label_219fd0;
        case 0x219fd4u: goto label_219fd4;
        case 0x219fd8u: goto label_219fd8;
        case 0x219fdcu: goto label_219fdc;
        case 0x219fe0u: goto label_219fe0;
        case 0x219fe4u: goto label_219fe4;
        case 0x219fe8u: goto label_219fe8;
        case 0x219fecu: goto label_219fec;
        case 0x219ff0u: goto label_219ff0;
        case 0x219ff4u: goto label_219ff4;
        case 0x219ff8u: goto label_219ff8;
        case 0x219ffcu: goto label_219ffc;
        case 0x21a000u: goto label_21a000;
        case 0x21a004u: goto label_21a004;
        case 0x21a008u: goto label_21a008;
        case 0x21a00cu: goto label_21a00c;
        case 0x21a010u: goto label_21a010;
        case 0x21a014u: goto label_21a014;
        case 0x21a018u: goto label_21a018;
        case 0x21a01cu: goto label_21a01c;
        case 0x21a020u: goto label_21a020;
        case 0x21a024u: goto label_21a024;
        case 0x21a028u: goto label_21a028;
        case 0x21a02cu: goto label_21a02c;
        case 0x21a030u: goto label_21a030;
        case 0x21a034u: goto label_21a034;
        case 0x21a038u: goto label_21a038;
        case 0x21a03cu: goto label_21a03c;
        case 0x21a040u: goto label_21a040;
        case 0x21a044u: goto label_21a044;
        case 0x21a048u: goto label_21a048;
        case 0x21a04cu: goto label_21a04c;
        case 0x21a050u: goto label_21a050;
        case 0x21a054u: goto label_21a054;
        case 0x21a058u: goto label_21a058;
        case 0x21a05cu: goto label_21a05c;
        case 0x21a060u: goto label_21a060;
        case 0x21a064u: goto label_21a064;
        case 0x21a068u: goto label_21a068;
        case 0x21a06cu: goto label_21a06c;
        case 0x21a070u: goto label_21a070;
        case 0x21a074u: goto label_21a074;
        case 0x21a078u: goto label_21a078;
        case 0x21a07cu: goto label_21a07c;
        case 0x21a080u: goto label_21a080;
        case 0x21a084u: goto label_21a084;
        case 0x21a088u: goto label_21a088;
        case 0x21a08cu: goto label_21a08c;
        default: break;
    }

    ctx->pc = 0x219fd0u;

label_219fd0:
    // 0x219fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x219fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_219fd4:
    // 0x219fd4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x219fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_219fd8:
    // 0x219fd8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x219fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_219fdc:
    // 0x219fdc: 0x3c11004a  lui         $s1, 0x4A
    ctx->pc = 0x219fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)74 << 16));
label_219fe0:
    // 0x219fe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x219fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_219fe4:
    // 0x219fe4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x219fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_219fe8:
    // 0x219fe8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x219fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_219fec:
    // 0x219fec: 0xc09eb04  jal         func_27AC10
label_219ff0:
    if (ctx->pc == 0x219FF0u) {
        ctx->pc = 0x219FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FECu;
        // 0x219ff0: 0x26303570  addiu       $s0, $s1, 0x3570 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x219FF4u;
        goto label_219ff4;
    }
    ctx->pc = 0x219FECu;
    SET_GPR_U32(ctx, 31, 0x219FF4u);
    ctx->pc = 0x219FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219FECu;
    // 0x219ff0: 0x26303570  addiu       $s0, $s1, 0x3570 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC10u, 0x219FECu, 0x219FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219FF4u;
label_219ff4:
    // 0x219ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x219ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_219ff8:
    // 0x219ff8: 0xc0d745c  jal         func_35D170
label_219ffc:
    if (ctx->pc == 0x219FFCu) {
        ctx->pc = 0x219FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219FF8u;
        // 0x219ffc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A000u;
        goto label_21a000;
    }
    ctx->pc = 0x219FF8u;
    SET_GPR_U32(ctx, 31, 0x21A000u);
    ctx->pc = 0x219FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219FF8u;
    // 0x219ffc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x219FF8u, 0x21A000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A000u;
label_21a000:
    // 0x21a000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21a004:
    // 0x21a004: 0xc0d756c  jal         func_35D5B0
label_21a008:
    if (ctx->pc == 0x21A008u) {
        ctx->pc = 0x21A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A004u;
        // 0x21a008: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A00Cu;
        goto label_21a00c;
    }
    ctx->pc = 0x21A004u;
    SET_GPR_U32(ctx, 31, 0x21A00Cu);
    ctx->pc = 0x21A008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A004u;
    // 0x21a008: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x21A004u, 0x21A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A00Cu;
label_21a00c:
    // 0x21a00c: 0x8e243570  lw          $a0, 0x3570($s1)
    ctx->pc = 0x21a00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13680)));
label_21a010:
    // 0x21a010: 0xc09dcc6  jal         func_277318
label_21a014:
    if (ctx->pc == 0x21A014u) {
        ctx->pc = 0x21A014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A010u;
        // 0x21a014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A018u;
        goto label_21a018;
    }
    ctx->pc = 0x21A010u;
    SET_GPR_U32(ctx, 31, 0x21A018u);
    ctx->pc = 0x21A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21A010u;
    // 0x21a014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x21A010u, 0x21A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A018u;
label_21a018:
    // 0x21a018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21a018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21a01c:
    // 0x21a01c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_21a020:
    if (ctx->pc == 0x21A020u) {
        ctx->pc = 0x21A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A01Cu;
        // 0x21a020: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A024u;
        goto label_21a024;
    }
    ctx->pc = 0x21A01Cu;
    {
        const bool branch_taken_0x21a01c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A01Cu;
        // 0x21a020: 0x3c050067  lui         $a1, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a01c) {
            ctx->pc = 0x21A070u;
            goto label_21a070;
        }
    }
    ctx->pc = 0x21A024u;
label_21a024:
    // 0x21a024: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21a024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21a028:
    // 0x21a028: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x21a028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
label_21a02c:
    // 0x21a02c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21a02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21a030:
    // 0x21a030: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x21a030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_21a034:
    // 0x21a034: 0x24a5fc40  addiu       $a1, $a1, -0x3C0
    ctx->pc = 0x21a034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966336));
label_21a038:
    // 0x21a038: 0x40f809  jalr        $v0
label_21a03c:
    if (ctx->pc == 0x21A03Cu) {
        ctx->pc = 0x21A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A038u;
        // 0x21a03c: 0x34c6b000  ori         $a2, $a2, 0xB000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A040u;
        goto label_21a040;
    }
    ctx->pc = 0x21A038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A040u);
        ctx->pc = 0x21A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A038u;
        // 0x21a03c: 0x34c6b000  ori         $a2, $a2, 0xB000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A038u, 0x21A040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A040u;
label_21a040:
    // 0x21a040: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21a044:
    // 0x21a044: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21a044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21a048:
    // 0x21a048: 0x40f809  jalr        $v0
label_21a04c:
    if (ctx->pc == 0x21A04Cu) {
        ctx->pc = 0x21A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A048u;
        // 0x21a04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A050u;
        goto label_21a050;
    }
    ctx->pc = 0x21A048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A050u);
        ctx->pc = 0x21A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A048u;
        // 0x21a04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A048u, 0x21A050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A050u;
label_21a050:
    // 0x21a050: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_21a054:
    if (ctx->pc == 0x21A054u) {
        ctx->pc = 0x21A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A050u;
        // 0x21a054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A058u;
        goto label_21a058;
    }
    ctx->pc = 0x21A050u;
    {
        const bool branch_taken_0x21a050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a050) {
            ctx->pc = 0x21A054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A050u;
            // 0x21a054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A074u;
            goto label_21a074;
        }
    }
    ctx->pc = 0x21A058u;
label_21a058:
    // 0x21a058: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21a058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_21a05c:
    // 0x21a05c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_21a060:
    // 0x21a060: 0x40f809  jalr        $v0
label_21a064:
    if (ctx->pc == 0x21A064u) {
        ctx->pc = 0x21A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A060u;
        // 0x21a064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A068u;
        goto label_21a068;
    }
    ctx->pc = 0x21A060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21A068u);
        ctx->pc = 0x21A064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A060u;
        // 0x21a064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A060u, 0x21A068u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21A068u;
label_21a068:
    // 0x21a068: 0x10000002  b           . + 4 + (0x2 << 2)
label_21a06c:
    if (ctx->pc == 0x21A06Cu) {
        ctx->pc = 0x21A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A068u;
        // 0x21a06c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A070u;
        goto label_21a070;
    }
    ctx->pc = 0x21A068u;
    {
        const bool branch_taken_0x21a068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A068u;
        // 0x21a06c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a068) {
            ctx->pc = 0x21A074u;
            goto label_21a074;
        }
    }
    ctx->pc = 0x21A070u;
label_21a070:
    // 0x21a070: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21a074:
    // 0x21a074: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21a074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21a078:
    // 0x21a078: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21a078u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_21a07c:
    // 0x21a07c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21a07cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21a080:
    // 0x21a080: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21a080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_21a084:
    // 0x21a084: 0x3e00008  jr          $ra
label_21a088:
    if (ctx->pc == 0x21A088u) {
        ctx->pc = 0x21A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A084u;
        // 0x21a088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21A08Cu;
        goto label_21a08c;
    }
    ctx->pc = 0x21A084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A084u;
        // 0x21a088: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A08Cu;
label_21a08c:
    // 0x21a08c: 0x0  nop
    ctx->pc = 0x21a08cu;
    // NOP
    ctx->pc = 0x21a090u;
}
