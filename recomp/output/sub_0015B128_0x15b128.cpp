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

// Function: sub_0015B128
// Address: 0x15b128 - 0x15b380
void sub_0015B128_0x15b128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B128_0x15b128");
#endif

    switch (ctx->pc) {
        case 0x15b17cu: goto label_15b17c;
        case 0x15b1b0u: goto label_15b1b0;
        case 0x15b1bcu: goto label_15b1bc;
        case 0x15b1ccu: goto label_15b1cc;
        case 0x15b240u: goto label_15b240;
        case 0x15b28cu: goto label_15b28c;
        case 0x15b29cu: goto label_15b29c;
        case 0x15b2d4u: goto label_15b2d4;
        case 0x15b2f4u: goto label_15b2f4;
        case 0x15b310u: goto label_15b310;
        case 0x15b31cu: goto label_15b31c;
        case 0x15b340u: goto label_15b340;
        case 0x15b350u: goto label_15b350;
        default: break;
    }

    ctx->pc = 0x15b128u;

    // 0x15b128: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15b128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15b12c: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x15b12cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x15b130: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15b130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15b134: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x15b134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    // 0x15b138: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15b138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15b13c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15b13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15b140: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15b140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b144: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x15b148: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15b148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b14c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15b14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x15b150: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15b150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15b154: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x15b154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x15b158: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x15b158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x15b15c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x15b15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x15b160: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15b160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b164: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x15b164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x15b168: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x15b168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x15b16c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x15b16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x15b170: 0x8e220214  lw          $v0, 0x214($s1)
    ctx->pc = 0x15b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
    // 0x15b174: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x15B174u;
    SET_GPR_U32(ctx, 31, 0x15B17Cu);
    ctx->pc = 0x15B178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B174u;
    // 0x15b178: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x15B174u, 0x15B17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B17Cu;
label_15b17c:
    // 0x15b17c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15b17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b180: 0x12000073  beqz        $s0, . + 4 + (0x73 << 2)
    ctx->pc = 0x15B180u;
    {
        const bool branch_taken_0x15b180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B180u;
        // 0x15b184: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b180) {
            ctx->pc = 0x15B350u;
            goto label_15b350;
        }
    }
    ctx->pc = 0x15B188u;
    // 0x15b188: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15b18c: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x15b18cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15b190: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x15b190u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x15b194: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x15b194u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15b198: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15b198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15b19c: 0x8e150010  lw          $s5, 0x10($s0)
    ctx->pc = 0x15b19cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15b1a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B1A0u;
    {
        const bool branch_taken_0x15b1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1A0u;
        // 0x15b1a4: 0x8e1e000c  lw          $fp, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1a0) {
            ctx->pc = 0x15B1B4u;
            goto label_15b1b4;
        }
    }
    ctx->pc = 0x15B1A8u;
    // 0x15b1a8: 0xc0f70d8  jal         func_3DC360
    ctx->pc = 0x15B1A8u;
    SET_GPR_U32(ctx, 31, 0x15B1B0u);
    ctx->pc = 0x15B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B1A8u;
    // 0x15b1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC360u, 0x15B1A8u, 0x15B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1B0u;
label_15b1b0:
    // 0x15b1b0: 0x2c570001  sltiu       $s7, $v0, 0x1
    ctx->pc = 0x15b1b0u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_15b1b4:
    // 0x15b1b4: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x15B1B4u;
    SET_GPR_U32(ctx, 31, 0x15B1BCu);
    ctx->pc = 0x15B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B1B4u;
    // 0x15b1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x15B1B4u, 0x15B1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1BCu;
label_15b1bc:
    // 0x15b1bc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15b1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x15b1c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b1c4: 0xc042128  jal         func_1084A0
    ctx->pc = 0x15B1C4u;
    SET_GPR_U32(ctx, 31, 0x15B1CCu);
    ctx->pc = 0x15B1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B1C4u;
    // 0x15b1c8: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x15B1C4u, 0x15B1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1CCu;
label_15b1cc:
    // 0x15b1cc: 0x12a00060  beqz        $s5, . + 4 + (0x60 << 2)
    ctx->pc = 0x15B1CCu;
    {
        const bool branch_taken_0x15b1cc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1CCu;
        // 0x15b1d0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1cc) {
            ctx->pc = 0x15B350u;
            goto label_15b350;
        }
    }
    ctx->pc = 0x15B1D4u;
    // 0x15b1d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15b1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b1d8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15b1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15b1dc: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15B1DCu;
    {
        const bool branch_taken_0x15b1dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x15B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1DCu;
        // 0x15b1e0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1dc) {
            ctx->pc = 0x15B1FCu;
            goto label_15b1fc;
        }
    }
    ctx->pc = 0x15B1E4u;
    // 0x15b1e4: 0x1a600005  blez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B1E4u;
    {
        const bool branch_taken_0x15b1e4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x15B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1E4u;
        // 0x15b1e8: 0x2a620002  slti        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1e4) {
            ctx->pc = 0x15B1FCu;
            goto label_15b1fc;
        }
    }
    ctx->pc = 0x15B1ECu;
    // 0x15b1ec: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x15b1ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b1f0: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x15b1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b1f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b1f8: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x15b1f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_15b1fc:
    // 0x15b1fc: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x15B1FCu;
    {
        const bool branch_taken_0x15b1fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1FCu;
        // 0x15b200: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1fc) {
            ctx->pc = 0x15B228u;
            goto label_15b228;
        }
    }
    ctx->pc = 0x15B204u;
    // 0x15b204: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15b204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15b208: 0x12820007  beq         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15B208u;
    {
        const bool branch_taken_0x15b208 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x15B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B208u;
        // 0x15b20c: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b208) {
            ctx->pc = 0x15B228u;
            goto label_15b228;
        }
    }
    ctx->pc = 0x15B210u;
    // 0x15b210: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15B210u;
    {
        const bool branch_taken_0x15b210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B210u;
        // 0x15b214: 0x2a820003  slti        $v0, $s4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b210) {
            ctx->pc = 0x15B228u;
            goto label_15b228;
        }
    }
    ctx->pc = 0x15B218u;
    // 0x15b218: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x15b218u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b21c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x15b21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b220: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15b220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b224: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x15b224u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_15b228:
    // 0x15b228: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x15B228u;
    {
        const bool branch_taken_0x15b228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B228u;
        // 0x15b22c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b228) {
            ctx->pc = 0x15B350u;
            goto label_15b350;
        }
    }
    ctx->pc = 0x15B230u;
    // 0x15b230: 0x8e2502e4  lw          $a1, 0x2E4($s1)
    ctx->pc = 0x15b230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
    // 0x15b234: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15b234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b238: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15B238u;
    SET_GPR_U32(ctx, 31, 0x15B240u);
    ctx->pc = 0x15B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B238u;
    // 0x15b23c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15B238u, 0x15B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B240u;
label_15b240:
    // 0x15b240: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15b240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15b244: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15b244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15b248: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15b248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15b24c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15b24cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15b250: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15b250u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15b254: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15b254u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15b258: 0xc62002f0  lwc1        $f0, 0x2F0($s1)
    ctx->pc = 0x15b258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b25c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15b25cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15b260: 0x0  nop
    ctx->pc = 0x15b260u;
    // NOP
    // 0x15b264: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15B264u;
    {
        const bool branch_taken_0x15b264 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15b264) {
            ctx->pc = 0x15B268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B264u;
            // 0x15b268: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B26Cu;
            goto label_15b26c;
        }
    }
    ctx->pc = 0x15B26Cu;
label_15b26c:
    // 0x15b26c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15b26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b270: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15b270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b278: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15b278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b27c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x15b27cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b280: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x15b280u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b284: 0xc057e02  jal         func_15F808
    ctx->pc = 0x15B284u;
    SET_GPR_U32(ctx, 31, 0x15B28Cu);
    ctx->pc = 0x15B288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B284u;
    // 0x15b288: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F808u, 0x15B284u, 0x15B28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B28Cu;
label_15b28c:
    // 0x15b28c: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x15B28Cu;
    {
        const bool branch_taken_0x15b28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b28c) {
            ctx->pc = 0x15B290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15B28Cu;
            // 0x15b290: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15B354u;
            goto label_15b354;
        }
    }
    ctx->pc = 0x15B294u;
    // 0x15b294: 0xc04f02a  jal         func_13C0A8
    ctx->pc = 0x15B294u;
    SET_GPR_U32(ctx, 31, 0x15B29Cu);
    ctx->pc = 0x15B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B294u;
    // 0x15b298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x15B294u, 0x15B29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B29Cu;
label_15b29c:
    // 0x15b29c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15b29cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b2a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B2A0u;
    {
        const bool branch_taken_0x15b2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2A0u;
        // 0x15b2a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2a0) {
            ctx->pc = 0x15B2B4u;
            goto label_15b2b4;
        }
    }
    ctx->pc = 0x15B2A8u;
    // 0x15b2a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15b2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15b2ac: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B2ACu;
    {
        const bool branch_taken_0x15b2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b2ac) {
            ctx->pc = 0x15B2B8u;
            goto label_15b2b8;
        }
    }
    ctx->pc = 0x15B2B4u;
label_15b2b4:
    // 0x15b2b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15b2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b2b8:
    // 0x15b2b8: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x15B2B8u;
    {
        const bool branch_taken_0x15b2b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b2b8) {
            ctx->pc = 0x15B2FCu;
            goto label_15b2fc;
        }
    }
    ctx->pc = 0x15B2C0u;
    // 0x15b2c0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15B2C0u;
    {
        const bool branch_taken_0x15b2c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b2c0) {
            ctx->pc = 0x15B2DCu;
            goto label_15b2dc;
        }
    }
    ctx->pc = 0x15B2C8u;
    // 0x15b2c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b2cc: 0xc057032  jal         func_15C0C8
    ctx->pc = 0x15B2CCu;
    SET_GPR_U32(ctx, 31, 0x15B2D4u);
    ctx->pc = 0x15B2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B2CCu;
    // 0x15b2d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C0C8u, 0x15B2CCu, 0x15B2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B2D4u;
label_15b2d4:
    // 0x15b2d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x15B2D4u;
    {
        const bool branch_taken_0x15b2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2D4u;
        // 0x15b2d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2d4) {
            ctx->pc = 0x15B314u;
            goto label_15b314;
        }
    }
    ctx->pc = 0x15B2DCu;
label_15b2dc:
    // 0x15b2dc: 0x14800013  bnez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x15B2DCu;
    {
        const bool branch_taken_0x15b2dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2DCu;
        // 0x15b2e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2dc) {
            ctx->pc = 0x15B32Cu;
            goto label_15b32c;
        }
    }
    ctx->pc = 0x15B2E4u;
    // 0x15b2e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15b2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b2e8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x15b2e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b2ec: 0xc057052  jal         func_15C148
    ctx->pc = 0x15B2ECu;
    SET_GPR_U32(ctx, 31, 0x15B2F4u);
    ctx->pc = 0x15B2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B2ECu;
    // 0x15b2f0: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C148u, 0x15B2ECu, 0x15B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B2F4u;
label_15b2f4:
    // 0x15b2f4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15B2F4u;
    {
        const bool branch_taken_0x15b2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B2F4u;
        // 0x15b2f8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b2f4) {
            ctx->pc = 0x15B354u;
            goto label_15b354;
        }
    }
    ctx->pc = 0x15B2FCu;
label_15b2fc:
    // 0x15b2fc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15B2FCu;
    {
        const bool branch_taken_0x15b2fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b2fc) {
            ctx->pc = 0x15B324u;
            goto label_15b324;
        }
    }
    ctx->pc = 0x15B304u;
    // 0x15b304: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b308: 0xc05706c  jal         func_15C1B0
    ctx->pc = 0x15B308u;
    SET_GPR_U32(ctx, 31, 0x15B310u);
    ctx->pc = 0x15B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B308u;
    // 0x15b30c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C1B0u, 0x15B308u, 0x15B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B310u;
label_15b310:
    // 0x15b310: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15b314:
    // 0x15b314: 0xc058064  jal         func_160190
    ctx->pc = 0x15B314u;
    SET_GPR_U32(ctx, 31, 0x15B31Cu);
    ctx->pc = 0x15B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B314u;
    // 0x15b318: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160190u, 0x15B314u, 0x15B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B31Cu;
label_15b31c:
    // 0x15b31c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15B31Cu;
    {
        const bool branch_taken_0x15b31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B31Cu;
        // 0x15b320: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b31c) {
            ctx->pc = 0x15B354u;
            goto label_15b354;
        }
    }
    ctx->pc = 0x15B324u;
label_15b324:
    // 0x15b324: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x15B324u;
    {
        const bool branch_taken_0x15b324 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B324u;
        // 0x15b328: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b324) {
            ctx->pc = 0x15B348u;
            goto label_15b348;
        }
    }
    ctx->pc = 0x15B32Cu;
label_15b32c:
    // 0x15b32c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15b32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b330: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x15b330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b334: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x15b334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b338: 0xc0570b2  jal         func_15C2C8
    ctx->pc = 0x15B338u;
    SET_GPR_U32(ctx, 31, 0x15B340u);
    ctx->pc = 0x15B33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B338u;
    // 0x15b33c: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C2C8u, 0x15B338u, 0x15B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B340u;
label_15b340:
    // 0x15b340: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15B340u;
    {
        const bool branch_taken_0x15b340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B340u;
        // 0x15b344: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b340) {
            ctx->pc = 0x15B354u;
            goto label_15b354;
        }
    }
    ctx->pc = 0x15B348u;
label_15b348:
    // 0x15b348: 0xc05709a  jal         func_15C268
    ctx->pc = 0x15B348u;
    SET_GPR_U32(ctx, 31, 0x15B350u);
    ctx->pc = 0x15B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B348u;
    // 0x15b34c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C268u, 0x15B348u, 0x15B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B350u;
label_15b350:
    // 0x15b350: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15b350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15b354:
    // 0x15b354: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15b354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b358: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15b358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b35c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15b35cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15b360: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15b360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15b364: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15b364u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15b368: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x15b368u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15b36c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x15b36cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15b370: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x15b370u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b374: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x15b374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15b378: 0x3e00008  jr          $ra
    ctx->pc = 0x15B378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B378u;
        // 0x15b37c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B380u;
}
