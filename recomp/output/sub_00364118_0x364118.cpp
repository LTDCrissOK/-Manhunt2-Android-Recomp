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

// Function: sub_00364118
// Address: 0x364118 - 0x364200
void sub_00364118_0x364118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364118_0x364118");
#endif

    switch (ctx->pc) {
        case 0x364118u: goto label_364118;
        case 0x36411cu: goto label_36411c;
        case 0x364120u: goto label_364120;
        case 0x364124u: goto label_364124;
        case 0x364128u: goto label_364128;
        case 0x36412cu: goto label_36412c;
        case 0x364130u: goto label_364130;
        case 0x364134u: goto label_364134;
        case 0x364138u: goto label_364138;
        case 0x36413cu: goto label_36413c;
        case 0x364140u: goto label_364140;
        case 0x364144u: goto label_364144;
        case 0x364148u: goto label_364148;
        case 0x36414cu: goto label_36414c;
        case 0x364150u: goto label_364150;
        case 0x364154u: goto label_364154;
        case 0x364158u: goto label_364158;
        case 0x36415cu: goto label_36415c;
        case 0x364160u: goto label_364160;
        case 0x364164u: goto label_364164;
        case 0x364168u: goto label_364168;
        case 0x36416cu: goto label_36416c;
        case 0x364170u: goto label_364170;
        case 0x364174u: goto label_364174;
        case 0x364178u: goto label_364178;
        case 0x36417cu: goto label_36417c;
        case 0x364180u: goto label_364180;
        case 0x364184u: goto label_364184;
        case 0x364188u: goto label_364188;
        case 0x36418cu: goto label_36418c;
        case 0x364190u: goto label_364190;
        case 0x364194u: goto label_364194;
        case 0x364198u: goto label_364198;
        case 0x36419cu: goto label_36419c;
        case 0x3641a0u: goto label_3641a0;
        case 0x3641a4u: goto label_3641a4;
        case 0x3641a8u: goto label_3641a8;
        case 0x3641acu: goto label_3641ac;
        case 0x3641b0u: goto label_3641b0;
        case 0x3641b4u: goto label_3641b4;
        case 0x3641b8u: goto label_3641b8;
        case 0x3641bcu: goto label_3641bc;
        case 0x3641c0u: goto label_3641c0;
        case 0x3641c4u: goto label_3641c4;
        case 0x3641c8u: goto label_3641c8;
        case 0x3641ccu: goto label_3641cc;
        case 0x3641d0u: goto label_3641d0;
        case 0x3641d4u: goto label_3641d4;
        case 0x3641d8u: goto label_3641d8;
        case 0x3641dcu: goto label_3641dc;
        case 0x3641e0u: goto label_3641e0;
        case 0x3641e4u: goto label_3641e4;
        case 0x3641e8u: goto label_3641e8;
        case 0x3641ecu: goto label_3641ec;
        case 0x3641f0u: goto label_3641f0;
        case 0x3641f4u: goto label_3641f4;
        case 0x3641f8u: goto label_3641f8;
        case 0x3641fcu: goto label_3641fc;
        default: break;
    }

    ctx->pc = 0x364118u;

label_364118:
    // 0x364118: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36411c:
    // 0x36411c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x36411cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_364120:
    // 0x364120: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x364120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_364124:
    // 0x364124: 0x244245c0  addiu       $v0, $v0, 0x45C0
    ctx->pc = 0x364124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17856));
label_364128:
    // 0x364128: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x364128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_36412c:
    // 0x36412c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36412cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_364130:
    // 0x364130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x364130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_364134:
    // 0x364134: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x364134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_364138:
    // 0x364138: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x364138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_36413c:
    // 0x36413c: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x36413cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
label_364140:
    // 0x364140: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x364140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_364144:
    // 0x364144: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
label_364148:
    if (ctx->pc == 0x364148u) {
        ctx->pc = 0x364148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364144u;
        // 0x364148: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36414Cu;
        goto label_36414c;
    }
    ctx->pc = 0x364144u;
    {
        const bool branch_taken_0x364144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x364148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364144u;
        // 0x364148: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364144) {
            ctx->pc = 0x3641D0u;
            goto label_3641d0;
        }
    }
    ctx->pc = 0x36414Cu;
label_36414c:
    // 0x36414c: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x36414cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_364150:
    // 0x364150: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_364154:
    if (ctx->pc == 0x364154u) {
        ctx->pc = 0x364154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364150u;
        // 0x364154: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364158u;
        goto label_364158;
    }
    ctx->pc = 0x364150u;
    {
        const bool branch_taken_0x364150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364150u;
        // 0x364154: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364150) {
            ctx->pc = 0x3641BCu;
            goto label_3641bc;
        }
    }
    ctx->pc = 0x364158u;
label_364158:
    // 0x364158: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x364158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_36415c:
    // 0x36415c: 0x0  nop
    ctx->pc = 0x36415cu;
    // NOP
label_364160:
    // 0x364160: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x364160u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_364164:
    // 0x364164: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x364164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_364168:
    // 0x364168: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x364168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36416c:
    // 0x36416c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x36416cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_364170:
    // 0x364170: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x364170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_364174:
    // 0x364174: 0x40f809  jalr        $v0
label_364178:
    if (ctx->pc == 0x364178u) {
        ctx->pc = 0x36417Cu;
        goto label_36417c;
    }
    ctx->pc = 0x364174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36417Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364174u, 0x36417Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36417Cu;
label_36417c:
    // 0x36417c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_364180:
    if (ctx->pc == 0x364180u) {
        ctx->pc = 0x364180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36417Cu;
        // 0x364180: 0x8e420064  lw          $v0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364184u;
        goto label_364184;
    }
    ctx->pc = 0x36417Cu;
    {
        const bool branch_taken_0x36417c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36417c) {
            ctx->pc = 0x364180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36417Cu;
            // 0x364180: 0x8e420064  lw          $v0, 0x64($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3641ACu;
            goto label_3641ac;
        }
    }
    ctx->pc = 0x364184u;
label_364184:
    // 0x364184: 0x8e420060  lw          $v0, 0x60($s2)
    ctx->pc = 0x364184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_364188:
    // 0x364188: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x364188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_36418c:
    // 0x36418c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36418cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_364190:
    // 0x364190: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_364194:
    if (ctx->pc == 0x364194u) {
        ctx->pc = 0x364194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364190u;
        // 0x364194: 0x8e420064  lw          $v0, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364198u;
        goto label_364198;
    }
    ctx->pc = 0x364190u;
    {
        const bool branch_taken_0x364190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x364190) {
            ctx->pc = 0x364194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364190u;
            // 0x364194: 0x8e420064  lw          $v0, 0x64($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3641ACu;
            goto label_3641ac;
        }
    }
    ctx->pc = 0x364198u;
label_364198:
    // 0x364198: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x364198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_36419c:
    // 0x36419c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36419cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3641a0:
    // 0x3641a0: 0x40f809  jalr        $v0
label_3641a4:
    if (ctx->pc == 0x3641A4u) {
        ctx->pc = 0x3641A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3641A0u;
        // 0x3641a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3641A8u;
        goto label_3641a8;
    }
    ctx->pc = 0x3641A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3641A8u);
        ctx->pc = 0x3641A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3641A0u;
        // 0x3641a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3641A0u, 0x3641A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3641A8u;
label_3641a8:
    // 0x3641a8: 0x8e420064  lw          $v0, 0x64($s2)
    ctx->pc = 0x3641a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
label_3641ac:
    // 0x3641ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3641acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3641b0:
    // 0x3641b0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3641b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3641b4:
    // 0x3641b4: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
label_3641b8:
    if (ctx->pc == 0x3641B8u) {
        ctx->pc = 0x3641B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3641B4u;
        // 0x3641b8: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3641BCu;
        goto label_3641bc;
    }
    ctx->pc = 0x3641B4u;
    {
        const bool branch_taken_0x3641b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3641b4) {
            ctx->pc = 0x3641B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3641B4u;
            // 0x3641b8: 0x8e420060  lw          $v0, 0x60($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364160;
        }
    }
    ctx->pc = 0x3641BCu;
label_3641bc:
    // 0x3641bc: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x3641bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_3641c0:
    // 0x3641c0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3641c4:
    if (ctx->pc == 0x3641C4u) {
        ctx->pc = 0x3641C8u;
        goto label_3641c8;
    }
    ctx->pc = 0x3641C0u;
    {
        const bool branch_taken_0x3641c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3641c0) {
            ctx->pc = 0x3641D0u;
            goto label_3641d0;
        }
    }
    ctx->pc = 0x3641C8u;
label_3641c8:
    // 0x3641c8: 0xc0f528a  jal         func_3D4A28
label_3641cc:
    if (ctx->pc == 0x3641CCu) {
        ctx->pc = 0x3641D0u;
        goto label_3641d0;
    }
    ctx->pc = 0x3641C8u;
    SET_GPR_U32(ctx, 31, 0x3641D0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3641C8u, 0x3641D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3641D0u;
label_3641d0:
    // 0x3641d0: 0xc0d94b6  jal         func_3652D8
label_3641d4:
    if (ctx->pc == 0x3641D4u) {
        ctx->pc = 0x3641D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3641D0u;
        // 0x3641d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3641D8u;
        goto label_3641d8;
    }
    ctx->pc = 0x3641D0u;
    SET_GPR_U32(ctx, 31, 0x3641D8u);
    ctx->pc = 0x3641D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3641D0u;
    // 0x3641d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3652D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3652D8u, 0x3641D0u, 0x3641D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3641D8u;
label_3641d8:
    // 0x3641d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3641d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3641dc:
    // 0x3641dc: 0xc0d8da4  jal         func_363690
label_3641e0:
    if (ctx->pc == 0x3641E0u) {
        ctx->pc = 0x3641E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3641DCu;
        // 0x3641e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3641E4u;
        goto label_3641e4;
    }
    ctx->pc = 0x3641DCu;
    SET_GPR_U32(ctx, 31, 0x3641E4u);
    ctx->pc = 0x3641E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3641DCu;
    // 0x3641e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363690u, 0x3641DCu, 0x3641E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3641E4u;
label_3641e4:
    // 0x3641e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3641e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3641e8:
    // 0x3641e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3641e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3641ec:
    // 0x3641ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3641ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3641f0:
    // 0x3641f0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3641f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3641f4:
    // 0x3641f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3641f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3641f8:
    // 0x3641f8: 0x3e00008  jr          $ra
label_3641fc:
    if (ctx->pc == 0x3641FCu) {
        ctx->pc = 0x3641FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3641F8u;
        // 0x3641fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364200u;
        goto label_fallthrough_0x3641f8;
    }
    ctx->pc = 0x3641F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3641FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3641F8u;
        // 0x3641fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3641F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3641f8:
    ctx->pc = 0x364200u;
}
