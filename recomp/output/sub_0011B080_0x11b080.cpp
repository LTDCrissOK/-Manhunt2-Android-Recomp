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

// Function: sub_0011B080
// Address: 0x11b080 - 0x11b1d8
void sub_0011B080_0x11b080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B080_0x11b080");
#endif

    switch (ctx->pc) {
        case 0x11b0dcu: goto label_11b0dc;
        case 0x11b0fcu: goto label_11b0fc;
        default: break;
    }

    ctx->pc = 0x11b080u;

    // 0x11b080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b084: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11b084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11b08c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11b08cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b090: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11b090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11b094: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11b094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b098: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11b098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11b09c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x11b09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b0a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11b0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11b0a4: 0x1a00003e  blez        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x11B0A4u;
    {
        const bool branch_taken_0x11b0a4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x11B0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0A4u;
        // 0x11b0a8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0a4) {
            ctx->pc = 0x11B1A0u;
            goto label_11b1a0;
        }
    }
    ctx->pc = 0x11B0ACu;
    // 0x11b0ac: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x11b0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x11b0b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B0B0u;
    {
        const bool branch_taken_0x11b0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b0b0) {
            ctx->pc = 0x11B0B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B0B0u;
            // 0x11b0b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B0C8u;
            goto label_11b0c8;
        }
    }
    ctx->pc = 0x11B0B8u;
    // 0x11b0b8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x11b0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11b0bc: 0x1602003e  bne         $s0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x11B0BCu;
    {
        const bool branch_taken_0x11b0bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0BCu;
        // 0x11b0c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0bc) {
            ctx->pc = 0x11B1B8u;
            goto label_11b1b8;
        }
    }
    ctx->pc = 0x11B0C4u;
    // 0x11b0c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11b0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b0c8:
    // 0x11b0c8: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x11B0C8u;
    {
        const bool branch_taken_0x11b0c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b0c8) {
            ctx->pc = 0x11B198u;
            goto label_11b198;
        }
    }
    ctx->pc = 0x11B0D0u;
    // 0x11b0d0: 0x8e320258  lw          $s2, 0x258($s1)
    ctx->pc = 0x11b0d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 600)));
    // 0x11b0d4: 0xc08952c  jal         func_2254B0
    ctx->pc = 0x11B0D4u;
    SET_GPR_U32(ctx, 31, 0x11B0DCu);
    ctx->pc = 0x11B0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0D4u;
    // 0x11b0d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2254B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2254B0u, 0x11B0D4u, 0x11B0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0DCu;
label_11b0dc:
    // 0x11b0dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x11b0dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b0e0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11B0E0u;
    {
        const bool branch_taken_0x11b0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B0E0u;
        // 0x11b0e4: 0x8e25025c  lw          $a1, 0x25C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0e0) {
            ctx->pc = 0x11B134u;
            goto label_11b134;
        }
    }
    ctx->pc = 0x11B0E8u;
    // 0x11b0e8: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x11b0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x11b0ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11b0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b0f0: 0x24847ee0  addiu       $a0, $a0, 0x7EE0
    ctx->pc = 0x11b0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
    // 0x11b0f4: 0xc0c362e  jal         func_30D8B8
    ctx->pc = 0x11B0F4u;
    SET_GPR_U32(ctx, 31, 0x11B0FCu);
    ctx->pc = 0x11B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B0F4u;
    // 0x11b0f8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D8B8u, 0x11B0F4u, 0x11B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B0FCu;
label_11b0fc:
    // 0x11b0fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11b0fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b100: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x11b100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11b104: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11B104u;
    {
        const bool branch_taken_0x11b104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B104u;
        // 0x11b108: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b104) {
            ctx->pc = 0x11B130u;
            goto label_11b130;
        }
    }
    ctx->pc = 0x11B10Cu;
    // 0x11b10c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B10Cu;
    {
        const bool branch_taken_0x11b10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B10Cu;
        // 0x11b110: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b10c) {
            ctx->pc = 0x11B124u;
            goto label_11b124;
        }
    }
    ctx->pc = 0x11B114u;
    // 0x11b114: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B114u;
    {
        const bool branch_taken_0x11b114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x11b114) {
            ctx->pc = 0x11B118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B114u;
            // 0x11b118: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B134u;
            goto label_11b134;
        }
    }
    ctx->pc = 0x11B11Cu;
    // 0x11b11c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11B11Cu;
    {
        const bool branch_taken_0x11b11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b11c) {
            ctx->pc = 0x11B134u;
            goto label_11b134;
        }
    }
    ctx->pc = 0x11B124u;
label_11b124:
    // 0x11b124: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11b124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11b128: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11B128u;
    {
        const bool branch_taken_0x11b128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11b128) {
            ctx->pc = 0x11B134u;
            goto label_11b134;
        }
    }
    ctx->pc = 0x11B130u;
label_11b130:
    // 0x11b130: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x11b130u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b134:
    // 0x11b134: 0x56600008  bnel        $s3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B134u;
    {
        const bool branch_taken_0x11b134 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b134) {
            ctx->pc = 0x11B138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B134u;
            // 0x11b138: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B158u;
            goto label_11b158;
        }
    }
    ctx->pc = 0x11B13Cu;
    // 0x11b13c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b140: 0x1203001d  beq         $s0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x11B140u;
    {
        const bool branch_taken_0x11b140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x11B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B140u;
        // 0x11b144: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b140) {
            ctx->pc = 0x11B1B8u;
            goto label_11b1b8;
        }
    }
    ctx->pc = 0x11B148u;
    // 0x11b148: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11b148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11b14c: 0x3a030004  xori        $v1, $s0, 0x4
    ctx->pc = 0x11b14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)4);
    // 0x11b150: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11B150u;
    {
        const bool branch_taken_0x11b150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B150u;
        // 0x11b154: 0x203100b  movn        $v0, $s0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b150) {
            ctx->pc = 0x11B1B8u;
            goto label_11b1b8;
        }
    }
    ctx->pc = 0x11B158u;
label_11b158:
    // 0x11b158: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11B158u;
    {
        const bool branch_taken_0x11b158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B158u;
        // 0x11b15c: 0x2a020003  slti        $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b158) {
            ctx->pc = 0x11B188u;
            goto label_11b188;
        }
    }
    ctx->pc = 0x11B160u;
    // 0x11b160: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B160u;
    {
        const bool branch_taken_0x11b160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B160u;
        // 0x11b164: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b160) {
            ctx->pc = 0x11B178u;
            goto label_11b178;
        }
    }
    ctx->pc = 0x11B168u;
    // 0x11b168: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B168u;
    {
        const bool branch_taken_0x11b168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B168u;
        // 0x11b16c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b168) {
            ctx->pc = 0x11B180u;
            goto label_11b180;
        }
    }
    ctx->pc = 0x11B170u;
    // 0x11b170: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11B170u;
    {
        const bool branch_taken_0x11b170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B170u;
        // 0x11b174: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b170) {
            ctx->pc = 0x11B1BCu;
            goto label_11b1bc;
        }
    }
    ctx->pc = 0x11B178u;
label_11b178:
    // 0x11b178: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11B178u;
    {
        const bool branch_taken_0x11b178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B178u;
        // 0x11b17c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b178) {
            ctx->pc = 0x11B190u;
            goto label_11b190;
        }
    }
    ctx->pc = 0x11B180u;
label_11b180:
    // 0x11b180: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x11B180u;
    {
        const bool branch_taken_0x11b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B180u;
        // 0x11b184: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b180) {
            ctx->pc = 0x11B1B8u;
            goto label_11b1b8;
        }
    }
    ctx->pc = 0x11B188u;
label_11b188:
    // 0x11b188: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x11B188u;
    {
        const bool branch_taken_0x11b188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B188u;
        // 0x11b18c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b188) {
            ctx->pc = 0x11B1B8u;
            goto label_11b1b8;
        }
    }
    ctx->pc = 0x11B190u;
label_11b190:
    // 0x11b190: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11B190u;
    {
        const bool branch_taken_0x11b190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B190u;
        // 0x11b194: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b190) {
            ctx->pc = 0x11B1B8u;
            goto label_11b1b8;
        }
    }
    ctx->pc = 0x11B198u;
label_11b198:
    // 0x11b198: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B198u;
    {
        const bool branch_taken_0x11b198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b198) {
            ctx->pc = 0x11B19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B198u;
            // 0x11b19c: 0x8e2300b8  lw          $v1, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B1A8u;
            goto label_11b1a8;
        }
    }
    ctx->pc = 0x11B1A0u;
label_11b1a0:
    // 0x11b1a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11B1A0u;
    {
        const bool branch_taken_0x11b1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1A0u;
        // 0x11b1a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b1a0) {
            ctx->pc = 0x11B1B8u;
            goto label_11b1b8;
        }
    }
    ctx->pc = 0x11B1A8u;
label_11b1a8:
    // 0x11b1a8: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x11b1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x11b1ac: 0x84640054  lh          $a0, 0x54($v1)
    ctx->pc = 0x11b1acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x11b1b0: 0x38840020  xori        $a0, $a0, 0x20
    ctx->pc = 0x11b1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)32);
    // 0x11b1b4: 0x204100b  movn        $v0, $s0, $a0
    ctx->pc = 0x11b1b4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_11b1b8:
    // 0x11b1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b1bc:
    // 0x11b1bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11b1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11b1c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11b1c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b1c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11b1c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11b1c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b1c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x11B1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B1CCu;
        // 0x11b1d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B1D4u;
    // 0x11b1d4: 0x0  nop
    ctx->pc = 0x11b1d4u;
    // NOP
    ctx->pc = 0x11b1d8u;
}
