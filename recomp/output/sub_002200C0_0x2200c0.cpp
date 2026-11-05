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

// Function: sub_002200C0
// Address: 0x2200c0 - 0x2201e0
void sub_002200C0_0x2200c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002200C0_0x2200c0");
#endif

    switch (ctx->pc) {
        case 0x2200e4u: goto label_2200e4;
        case 0x220104u: goto label_220104;
        case 0x220110u: goto label_220110;
        case 0x220120u: goto label_220120;
        case 0x22012cu: goto label_22012c;
        case 0x220154u: goto label_220154;
        case 0x22015cu: goto label_22015c;
        case 0x220168u: goto label_220168;
        case 0x220198u: goto label_220198;
        case 0x2201acu: goto label_2201ac;
        default: break;
    }

    ctx->pc = 0x2200c0u;

    // 0x2200c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2200c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2200c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2200c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2200c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2200c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2200cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2200ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2200d0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2200d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2200d4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2200d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2200d8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2200d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2200dc: 0xc0878f2  jal         func_21E3C8
    ctx->pc = 0x2200DCu;
    SET_GPR_U32(ctx, 31, 0x2200E4u);
    ctx->pc = 0x2200E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200DCu;
    // 0x2200e0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E3C8u, 0x2200DCu, 0x2200E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2200E4u;
label_2200e4:
    // 0x2200e4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2200e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2200e8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2200E8u;
    {
        const bool branch_taken_0x2200e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2200e8) {
            ctx->pc = 0x2200ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2200E8u;
            // 0x2200ec: 0x864201c4  lh          $v0, 0x1C4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 452)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220130u;
            goto label_220130;
        }
    }
    ctx->pc = 0x2200F0u;
    // 0x2200f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2200f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2200f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2200f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2200f8: 0x24a52700  addiu       $a1, $a1, 0x2700
    ctx->pc = 0x2200f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9984));
    // 0x2200fc: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2200FCu;
    SET_GPR_U32(ctx, 31, 0x220104u);
    ctx->pc = 0x220100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2200FCu;
    // 0x220100: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2200FCu, 0x220104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220104u;
label_220104:
    // 0x220104: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x220104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220108: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x220108u;
    SET_GPR_U32(ctx, 31, 0x220110u);
    ctx->pc = 0x22010Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220108u;
    // 0x22010c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x220108u, 0x220110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220110u;
label_220110:
    // 0x220110: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220114: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x220114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220118: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x220118u;
    SET_GPR_U32(ctx, 31, 0x220120u);
    ctx->pc = 0x22011Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220118u;
    // 0x22011c: 0x24a52728  addiu       $a1, $a1, 0x2728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x220118u, 0x220120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220120u;
label_220120:
    // 0x220120: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x220120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220124: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x220124u;
    SET_GPR_U32(ctx, 31, 0x22012Cu);
    ctx->pc = 0x220128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220124u;
    // 0x220128: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x220124u, 0x22012Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22012Cu;
label_22012c:
    // 0x22012c: 0x864201c4  lh          $v0, 0x1C4($s2)
    ctx->pc = 0x22012cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 452)));
label_220130:
    // 0x220130: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x220130u;
    {
        const bool branch_taken_0x220130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220130u;
        // 0x220134: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220130) {
            ctx->pc = 0x22013Cu;
            goto label_22013c;
        }
    }
    ctx->pc = 0x220138u;
    // 0x220138: 0x8e4201c0  lw          $v0, 0x1C0($s2)
    ctx->pc = 0x220138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
label_22013c:
    // 0x22013c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22013Cu;
    {
        const bool branch_taken_0x22013c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22013c) {
            ctx->pc = 0x220154u;
            goto label_220154;
        }
    }
    ctx->pc = 0x220144u;
    // 0x220144: 0x8e4601c0  lw          $a2, 0x1C0($s2)
    ctx->pc = 0x220144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x220148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22014c: 0xc087996  jal         func_21E658
    ctx->pc = 0x22014Cu;
    SET_GPR_U32(ctx, 31, 0x220154u);
    ctx->pc = 0x220150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22014Cu;
    // 0x220150: 0x264501c8  addiu       $a1, $s2, 0x1C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E658u, 0x22014Cu, 0x220154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220154u;
label_220154:
    // 0x220154: 0xc0c3158  jal         func_30C560
    ctx->pc = 0x220154u;
    SET_GPR_U32(ctx, 31, 0x22015Cu);
    ctx->pc = 0x220158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220154u;
    // 0x220158: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C560u, 0x220154u, 0x22015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22015Cu;
label_22015c:
    // 0x22015c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x22015cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x220160: 0xc0c49d2  jal         func_312748
    ctx->pc = 0x220160u;
    SET_GPR_U32(ctx, 31, 0x220168u);
    ctx->pc = 0x220164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220160u;
    // 0x220164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312748u, 0x220160u, 0x220168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220168u;
label_220168:
    // 0x220168: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x220168u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22016c: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x22016cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x220170: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x220170u;
    {
        const bool branch_taken_0x220170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220170u;
        // 0x220174: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220170) {
            ctx->pc = 0x22017Cu;
            goto label_22017c;
        }
    }
    ctx->pc = 0x220178u;
    // 0x220178: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x220178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22017c:
    // 0x22017c: 0x8e4213f8  lw          $v0, 0x13F8($s2)
    ctx->pc = 0x22017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5112)));
    // 0x220180: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x220180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220184: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x220184u;
    {
        const bool branch_taken_0x220184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220184u;
        // 0x220188: 0xae4413e8  sw          $a0, 0x13E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5096), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220184) {
            ctx->pc = 0x2201C0u;
            goto label_2201c0;
        }
    }
    ctx->pc = 0x22018Cu;
    // 0x22018c: 0x3c14004a  lui         $s4, 0x4A
    ctx->pc = 0x22018cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)74 << 16));
    // 0x220190: 0x265113ec  addiu       $s1, $s2, 0x13EC
    ctx->pc = 0x220190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 5100));
    // 0x220194: 0x265013d0  addiu       $s0, $s2, 0x13D0
    ctx->pc = 0x220194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5072));
label_220198:
    // 0x220198: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x220198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22019c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x22019cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2201a0: 0x8e843578  lw          $a0, 0x3578($s4)
    ctx->pc = 0x2201a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 13688)));
    // 0x2201a4: 0xc0c7a76  jal         func_31E9D8
    ctx->pc = 0x2201A4u;
    SET_GPR_U32(ctx, 31, 0x2201ACu);
    ctx->pc = 0x2201A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2201A4u;
    // 0x2201a8: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E9D8u, 0x2201A4u, 0x2201ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2201ACu;
label_2201ac:
    // 0x2201ac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2201acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2201b0: 0x8e4213f8  lw          $v0, 0x13F8($s2)
    ctx->pc = 0x2201b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5112)));
    // 0x2201b4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x2201b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2201b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2201B8u;
    {
        const bool branch_taken_0x2201b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2201BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201B8u;
        // 0x2201bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2201b8) {
            ctx->pc = 0x220198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220198;
        }
    }
    ctx->pc = 0x2201C0u;
label_2201c0:
    // 0x2201c0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2201c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2201c4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2201c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2201c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2201c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2201cc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2201ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2201d0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2201d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2201d4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2201d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2201d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2201D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2201DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2201D8u;
        // 0x2201dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2201D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2201E0u;
}
