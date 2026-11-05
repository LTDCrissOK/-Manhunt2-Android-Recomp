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

// Function: sub_001A74F8
// Address: 0x1a74f8 - 0x1a7810
void sub_001A74F8_0x1a74f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A74F8_0x1a74f8");
#endif

    switch (ctx->pc) {
        case 0x1a756cu: goto label_1a756c;
        case 0x1a75b0u: goto label_1a75b0;
        case 0x1a75bcu: goto label_1a75bc;
        case 0x1a7620u: goto label_1a7620;
        case 0x1a763cu: goto label_1a763c;
        case 0x1a764cu: goto label_1a764c;
        case 0x1a7664u: goto label_1a7664;
        case 0x1a7674u: goto label_1a7674;
        case 0x1a76e4u: goto label_1a76e4;
        case 0x1a7700u: goto label_1a7700;
        case 0x1a7710u: goto label_1a7710;
        case 0x1a7728u: goto label_1a7728;
        case 0x1a7738u: goto label_1a7738;
        case 0x1a77b8u: goto label_1a77b8;
        case 0x1a77c4u: goto label_1a77c4;
        case 0x1a77e8u: goto label_1a77e8;
        default: break;
    }

    ctx->pc = 0x1a74f8u;

    // 0x1a74f8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1a74f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1a74fc: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1a74fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x1a7500: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x1a7500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x1a7504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a7504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7508: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x1a7508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x1a750c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a750cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7510: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x1a7510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x1a7514: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1a7514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1a7518: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x1a7518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x1a751c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a751cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7520: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x1a7520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x1a7524: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1a7524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7528: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x1a7528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1a752c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a7530: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a7530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7534: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1A7534u;
    {
        const bool branch_taken_0x1a7534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7534u;
        // 0x1a7538: 0x8e14014c  lw          $s4, 0x14C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7534) {
            ctx->pc = 0x1A756Cu;
            goto label_1a756c;
        }
    }
    ctx->pc = 0x1A753Cu;
    // 0x1a753c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a7540: 0x8e060148  lw          $a2, 0x148($s0)
    ctx->pc = 0x1a7540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1a7544: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1a7544u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a7548: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1a7548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1a754c: 0x24630958  addiu       $v1, $v1, 0x958
    ctx->pc = 0x1a754cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2392));
    // 0x1a7550: 0x8cc700f8  lw          $a3, 0xF8($a2)
    ctx->pc = 0x1a7550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 248)));
    // 0x1a7554: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x1a7554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x1a7558: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a7558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a755c: 0x24a505d8  addiu       $a1, $a1, 0x5D8
    ctx->pc = 0x1a755cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1496));
    // 0x1a7560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a7560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a7564: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1A7564u;
    SET_GPR_U32(ctx, 31, 0x1A756Cu);
    ctx->pc = 0x1A7568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7564u;
    // 0x1a7568: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1A7564u, 0x1A756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A756Cu;
label_1a756c:
    // 0x1a756c: 0x1640000b  bnez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1A756Cu;
    {
        const bool branch_taken_0x1a756c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A756Cu;
        // 0x1a7570: 0x240205b4  addiu       $v0, $zero, 0x5B4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1460));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a756c) {
            ctx->pc = 0x1A759Cu;
            goto label_1a759c;
        }
    }
    ctx->pc = 0x1A7574u;
    // 0x1a7574: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a7574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a7578: 0x2462ffdd  addiu       $v0, $v1, -0x23
    ctx->pc = 0x1a7578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
    // 0x1a757c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1a757cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a7580: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x1A7580u;
    {
        const bool branch_taken_0x1a7580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7580u;
        // 0x1a7584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7580) {
            ctx->pc = 0x1A77ECu;
            goto label_1a77ec;
        }
    }
    ctx->pc = 0x1A7588u;
    // 0x1a7588: 0x2462ffd9  addiu       $v0, $v1, -0x27
    ctx->pc = 0x1a7588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967257));
    // 0x1a758c: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x1a758cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1a7590: 0x14400096  bnez        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x1A7590u;
    {
        const bool branch_taken_0x1a7590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7590u;
        // 0x1a7594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7590) {
            ctx->pc = 0x1A77ECu;
            goto label_1a77ec;
        }
    }
    ctx->pc = 0x1A7598u;
    // 0x1a7598: 0x240205b4  addiu       $v0, $zero, 0x5B4
    ctx->pc = 0x1a7598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1460));
label_1a759c:
    // 0x1a759c: 0x56220009  bnel        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A759Cu;
    {
        const bool branch_taken_0x1a759c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a759c) {
            ctx->pc = 0x1A75A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A759Cu;
            // 0x1a75a0: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A75C4u;
            goto label_1a75c4;
        }
    }
    ctx->pc = 0x1A75A4u;
    // 0x1a75a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a75a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a75a8: 0xc069b78  jal         func_1A6DE0
    ctx->pc = 0x1A75A8u;
    SET_GPR_U32(ctx, 31, 0x1A75B0u);
    ctx->pc = 0x1A75ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75A8u;
    // 0x1a75ac: 0x240505b4  addiu       $a1, $zero, 0x5B4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6DE0u, 0x1A75A8u, 0x1A75B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75B0u;
label_1a75b0:
    // 0x1a75b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a75b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a75b4: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x1A75B4u;
    SET_GPR_U32(ctx, 31, 0x1A75BCu);
    ctx->pc = 0x1A75B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A75B4u;
    // 0x1a75b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x1A75B4u, 0x1A75BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A75BCu;
label_1a75bc:
    // 0x1a75bc: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x1A75BCu;
    {
        const bool branch_taken_0x1a75bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75BCu;
        // 0x1a75c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75bc) {
            ctx->pc = 0x1A77ECu;
            goto label_1a77ec;
        }
    }
    ctx->pc = 0x1A75C4u;
label_1a75c4:
    // 0x1a75c4: 0x2442ffed  addiu       $v0, $v0, -0x13
    ctx->pc = 0x1a75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967277));
    // 0x1a75c8: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1a75c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a75cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A75CCu;
    {
        const bool branch_taken_0x1a75cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75CCu;
        // 0x1a75d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75cc) {
            ctx->pc = 0x1A75D8u;
            goto label_1a75d8;
        }
    }
    ctx->pc = 0x1A75D4u;
    // 0x1a75d4: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1a75d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_1a75d8:
    // 0x1a75d8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1a75d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1a75dc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a75dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a75e0: 0x24636a00  addiu       $v1, $v1, 0x6A00
    ctx->pc = 0x1a75e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27136));
    // 0x1a75e4: 0x8c6200d8  lw          $v0, 0xD8($v1)
    ctx->pc = 0x1a75e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F6AD8u));
    // 0x1a75e8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a75e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a75ec: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A75ECu;
    {
        const bool branch_taken_0x1a75ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A75F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75ECu;
        // 0x1a75f0: 0x8c620108  lw          $v0, 0x108($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75ec) {
            ctx->pc = 0x1A76A4u;
            goto label_1a76a4;
        }
    }
    ctx->pc = 0x1A75F4u;
    // 0x1a75f4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a75f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a75f8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1A75F8u;
    {
        const bool branch_taken_0x1a75f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A75FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A75F8u;
        // 0x1a75fc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a75f8) {
            ctx->pc = 0x1A76B0u;
            goto label_1a76b0;
        }
    }
    ctx->pc = 0x1A7600u;
    // 0x1a7600: 0x8e060140  lw          $a2, 0x140($s0)
    ctx->pc = 0x1a7600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1a7604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a7604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7608: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a7608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a760c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a7610: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a7610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7614: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1a7614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7618: 0xc069880  jal         func_1A6200
    ctx->pc = 0x1A7618u;
    SET_GPR_U32(ctx, 31, 0x1A7620u);
    ctx->pc = 0x1A761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7618u;
    // 0x1a761c: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6200u, 0x1A7618u, 0x1A7620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7620u;
label_1a7620:
    // 0x1a7620: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1a7620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a7624: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A7624u;
    {
        const bool branch_taken_0x1a7624 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7624) {
            ctx->pc = 0x1A7654u;
            goto label_1a7654;
        }
    }
    ctx->pc = 0x1A762Cu;
    // 0x1a762c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A762Cu;
    {
        const bool branch_taken_0x1a762c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A762Cu;
        // 0x1a7630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a762c) {
            ctx->pc = 0x1A7644u;
            goto label_1a7644;
        }
    }
    ctx->pc = 0x1A7634u;
    // 0x1a7634: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x1A7634u;
    SET_GPR_U32(ctx, 31, 0x1A763Cu);
    ctx->pc = 0x1A7638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7634u;
    // 0x1a7638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x1A7634u, 0x1A763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A763Cu;
label_1a763c:
    // 0x1a763c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A763Cu;
    {
        const bool branch_taken_0x1a763c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A763Cu;
        // 0x1a7640: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a763c) {
            ctx->pc = 0x1A7678u;
            goto label_1a7678;
        }
    }
    ctx->pc = 0x1A7644u;
label_1a7644:
    // 0x1a7644: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1A7644u;
    SET_GPR_U32(ctx, 31, 0x1A764Cu);
    ctx->pc = 0x1A7648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7644u;
    // 0x1a7648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1A7644u, 0x1A764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A764Cu;
label_1a764c:
    // 0x1a764c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A764Cu;
    {
        const bool branch_taken_0x1a764c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A764Cu;
        // 0x1a7650: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a764c) {
            ctx->pc = 0x1A7678u;
            goto label_1a7678;
        }
    }
    ctx->pc = 0x1A7654u;
label_1a7654:
    // 0x1a7654: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7654u;
    {
        const bool branch_taken_0x1a7654 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7654u;
        // 0x1a7658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7654) {
            ctx->pc = 0x1A766Cu;
            goto label_1a766c;
        }
    }
    ctx->pc = 0x1A765Cu;
    // 0x1a765c: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x1A765Cu;
    SET_GPR_U32(ctx, 31, 0x1A7664u);
    ctx->pc = 0x1A7660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A765Cu;
    // 0x1a7660: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x1A765Cu, 0x1A7664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7664u;
label_1a7664:
    // 0x1a7664: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7664u;
    {
        const bool branch_taken_0x1a7664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7664u;
        // 0x1a7668: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7664) {
            ctx->pc = 0x1A7678u;
            goto label_1a7678;
        }
    }
    ctx->pc = 0x1A766Cu;
label_1a766c:
    // 0x1a766c: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1A766Cu;
    SET_GPR_U32(ctx, 31, 0x1A7674u);
    ctx->pc = 0x1A7670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A766Cu;
    // 0x1a7670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1A766Cu, 0x1A7674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7674u;
label_1a7674:
    // 0x1a7674: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x1a7674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1a7678:
    // 0x1a7678: 0x2482fff7  addiu       $v0, $a0, -0x9
    ctx->pc = 0x1a7678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967287));
    // 0x1a767c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a767cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a7680: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1A7680u;
    {
        const bool branch_taken_0x1a7680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7680u;
        // 0x1a7684: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7680) {
            ctx->pc = 0x1A77D4u;
            goto label_1a77d4;
        }
    }
    ctx->pc = 0x1A7688u;
    // 0x1a7688: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a7688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a768c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a768cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7690: 0x54710051  bnel        $v1, $s1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1A7690u;
    {
        const bool branch_taken_0x1a7690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x1a7690) {
            ctx->pc = 0x1A7694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7690u;
            // 0x1a7694: 0xae14014c  sw          $s4, 0x14C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A77D8u;
            goto label_1a77d8;
        }
    }
    ctx->pc = 0x1A7698u;
    // 0x1a7698: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x1a7698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1a769c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1A769Cu;
    {
        const bool branch_taken_0x1a769c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A769Cu;
        // 0x1a76a0: 0x2442fff7  addiu       $v0, $v0, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a769c) {
            ctx->pc = 0x1A7764u;
            goto label_1a7764;
        }
    }
    ctx->pc = 0x1A76A4u;
label_1a76a4:
    // 0x1a76a4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a76a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a76a8: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1A76A8u;
    {
        const bool branch_taken_0x1a76a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A76ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76A8u;
        // 0x1a76ac: 0x24836a00  addiu       $v1, $a0, 0x6A00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 27136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76a8) {
            ctx->pc = 0x1A7778u;
            goto label_1a7778;
        }
    }
    ctx->pc = 0x1A76B0u;
label_1a76b0:
    // 0x1a76b0: 0x24836a00  addiu       $v1, $a0, 0x6A00
    ctx->pc = 0x1a76b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 27136));
    // 0x1a76b4: 0x8c620138  lw          $v0, 0x138($v1)
    ctx->pc = 0x1a76b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1a76b8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a76b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a76bc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1A76BCu;
    {
        const bool branch_taken_0x1a76bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76BCu;
        // 0x1a76c0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76bc) {
            ctx->pc = 0x1A7778u;
            goto label_1a7778;
        }
    }
    ctx->pc = 0x1A76C4u;
    // 0x1a76c4: 0x8e060140  lw          $a2, 0x140($s0)
    ctx->pc = 0x1a76c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1a76c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a76c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a76cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a76ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a76d0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a76d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a76d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a76d8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1a76d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a76dc: 0xc069888  jal         func_1A6220
    ctx->pc = 0x1A76DCu;
    SET_GPR_U32(ctx, 31, 0x1A76E4u);
    ctx->pc = 0x1A76E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A76DCu;
    // 0x1a76e0: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6220u, 0x1A76DCu, 0x1A76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A76E4u;
label_1a76e4:
    // 0x1a76e4: 0x24020117  addiu       $v0, $zero, 0x117
    ctx->pc = 0x1a76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
    // 0x1a76e8: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A76E8u;
    {
        const bool branch_taken_0x1a76e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a76e8) {
            ctx->pc = 0x1A7718u;
            goto label_1a7718;
        }
    }
    ctx->pc = 0x1A76F0u;
    // 0x1a76f0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A76F0u;
    {
        const bool branch_taken_0x1a76f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A76F0u;
        // 0x1a76f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a76f0) {
            ctx->pc = 0x1A7708u;
            goto label_1a7708;
        }
    }
    ctx->pc = 0x1A76F8u;
    // 0x1a76f8: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x1A76F8u;
    SET_GPR_U32(ctx, 31, 0x1A7700u);
    ctx->pc = 0x1A76FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A76F8u;
    // 0x1a76fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x1A76F8u, 0x1A7700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7700u;
label_1a7700:
    // 0x1a7700: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A7700u;
    {
        const bool branch_taken_0x1a7700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7700u;
        // 0x1a7704: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7700) {
            ctx->pc = 0x1A773Cu;
            goto label_1a773c;
        }
    }
    ctx->pc = 0x1A7708u;
label_1a7708:
    // 0x1a7708: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1A7708u;
    SET_GPR_U32(ctx, 31, 0x1A7710u);
    ctx->pc = 0x1A770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7708u;
    // 0x1a770c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1A7708u, 0x1A7710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7710u;
label_1a7710:
    // 0x1a7710: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A7710u;
    {
        const bool branch_taken_0x1a7710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7710u;
        // 0x1a7714: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7710) {
            ctx->pc = 0x1A773Cu;
            goto label_1a773c;
        }
    }
    ctx->pc = 0x1A7718u;
label_1a7718:
    // 0x1a7718: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7718u;
    {
        const bool branch_taken_0x1a7718 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7718u;
        // 0x1a771c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7718) {
            ctx->pc = 0x1A7730u;
            goto label_1a7730;
        }
    }
    ctx->pc = 0x1A7720u;
    // 0x1a7720: 0xc06a05e  jal         func_1A8178
    ctx->pc = 0x1A7720u;
    SET_GPR_U32(ctx, 31, 0x1A7728u);
    ctx->pc = 0x1A7724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7720u;
    // 0x1a7724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x1A7720u, 0x1A7728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7728u;
label_1a7728:
    // 0x1a7728: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7728u;
    {
        const bool branch_taken_0x1a7728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7728u;
        // 0x1a772c: 0x8e040150  lw          $a0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7728) {
            ctx->pc = 0x1A773Cu;
            goto label_1a773c;
        }
    }
    ctx->pc = 0x1A7730u;
label_1a7730:
    // 0x1a7730: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1A7730u;
    SET_GPR_U32(ctx, 31, 0x1A7738u);
    ctx->pc = 0x1A7734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7730u;
    // 0x1a7734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1A7730u, 0x1A7738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7738u;
label_1a7738:
    // 0x1a7738: 0x8e040150  lw          $a0, 0x150($s0)
    ctx->pc = 0x1a7738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1a773c:
    // 0x1a773c: 0x2482fff5  addiu       $v0, $a0, -0xB
    ctx->pc = 0x1a773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967285));
    // 0x1a7740: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a7740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a7744: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A7744u;
    {
        const bool branch_taken_0x1a7744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7744u;
        // 0x1a7748: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7744) {
            ctx->pc = 0x1A77D4u;
            goto label_1a77d4;
        }
    }
    ctx->pc = 0x1A774Cu;
    // 0x1a774c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1a7750: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a7750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7754: 0x54710020  bnel        $v1, $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A7754u;
    {
        const bool branch_taken_0x1a7754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x1a7754) {
            ctx->pc = 0x1A7758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7754u;
            // 0x1a7758: 0xae14014c  sw          $s4, 0x14C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A77D8u;
            goto label_1a77d8;
        }
    }
    ctx->pc = 0x1A775Cu;
    // 0x1a775c: 0x8e02014c  lw          $v0, 0x14C($s0)
    ctx->pc = 0x1a775cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1a7760: 0x2442fff5  addiu       $v0, $v0, -0xB
    ctx->pc = 0x1a7760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967285));
label_1a7764:
    // 0x1a7764: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a7764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a7768: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A7768u;
    {
        const bool branch_taken_0x1a7768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7768) {
            ctx->pc = 0x1A776Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7768u;
            // 0x1a776c: 0xae04014c  sw          $a0, 0x14C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A77E0u;
            goto label_1a77e0;
        }
    }
    ctx->pc = 0x1A7770u;
    // 0x1a7770: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1A7770u;
    {
        const bool branch_taken_0x1a7770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7770) {
            ctx->pc = 0x1A77E0u;
            goto label_1a77e0;
        }
    }
    ctx->pc = 0x1A7778u;
label_1a7778:
    // 0x1a7778: 0x8c620198  lw          $v0, 0x198($v1)
    ctx->pc = 0x1a7778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x1a777c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a777cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7780: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A7780u;
    {
        const bool branch_taken_0x1a7780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7780) {
            ctx->pc = 0x1A77E0u;
            goto label_1a77e0;
        }
    }
    ctx->pc = 0x1A7788u;
    // 0x1a7788: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x1a7788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x1a778c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a778cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7790: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A7790u;
    {
        const bool branch_taken_0x1a7790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7790u;
        // 0x1a7794: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7790) {
            ctx->pc = 0x1A77E0u;
            goto label_1a77e0;
        }
    }
    ctx->pc = 0x1A7798u;
    // 0x1a7798: 0x8e060140  lw          $a2, 0x140($s0)
    ctx->pc = 0x1a7798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x1a779c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a779cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a77a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a77a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a77a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a77ac: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1a77acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a77b0: 0xc06994a  jal         func_1A6528
    ctx->pc = 0x1A77B0u;
    SET_GPR_U32(ctx, 31, 0x1A77B8u);
    ctx->pc = 0x1A77B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77B0u;
    // 0x1a77b4: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6528u, 0x1A77B0u, 0x1A77B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77B8u;
label_1a77b8:
    // 0x1a77b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a77b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a77bc: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1A77BCu;
    SET_GPR_U32(ctx, 31, 0x1A77C4u);
    ctx->pc = 0x1A77C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77BCu;
    // 0x1a77c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1A77BCu, 0x1A77C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77C4u;
label_1a77c4:
    // 0x1a77c4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x1a77c8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1a77c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1a77cc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A77CCu;
    {
        const bool branch_taken_0x1a77cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a77cc) {
            ctx->pc = 0x1A77E0u;
            goto label_1a77e0;
        }
    }
    ctx->pc = 0x1A77D4u;
label_1a77d4:
    // 0x1a77d4: 0xae14014c  sw          $s4, 0x14C($s0)
    ctx->pc = 0x1a77d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 20));
label_1a77d8:
    // 0x1a77d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A77D8u;
    {
        const bool branch_taken_0x1a77d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A77D8u;
        // 0x1a77dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a77d8) {
            ctx->pc = 0x1A77ECu;
            goto label_1a77ec;
        }
    }
    ctx->pc = 0x1A77E0u;
label_1a77e0:
    // 0x1a77e0: 0xc06a328  jal         func_1A8CA0
    ctx->pc = 0x1A77E0u;
    SET_GPR_U32(ctx, 31, 0x1A77E8u);
    ctx->pc = 0x1A77E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A77E0u;
    // 0x1a77e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8CA0u, 0x1A77E0u, 0x1A77E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A77E8u;
label_1a77e8:
    // 0x1a77e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a77ec:
    // 0x1a77ec: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x1a77ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a77f0: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x1a77f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1a77f4: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x1a77f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1a77f8: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x1a77f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1a77fc: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x1a77fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1a7800: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1a7800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1a7804: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7804u;
        // 0x1a7808: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A780Cu;
    // 0x1a780c: 0x0  nop
    ctx->pc = 0x1a780cu;
    // NOP
    ctx->pc = 0x1a7810u;
}
