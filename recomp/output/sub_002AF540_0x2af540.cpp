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

// Function: sub_002AF540
// Address: 0x2af540 - 0x2af6d8
void sub_002AF540_0x2af540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF540_0x2af540");
#endif

    switch (ctx->pc) {
        case 0x2af570u: goto label_2af570;
        case 0x2af598u: goto label_2af598;
        default: break;
    }

    ctx->pc = 0x2af540u;

    // 0x2af540: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2af540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2af544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2af544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af548: 0x24492488  addiu       $t1, $v0, 0x2488
    ctx->pc = 0x2af548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 9352));
    // 0x2af54c: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x2af54cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2af550: 0x252a0064  addiu       $t2, $t1, 0x64
    ctx->pc = 0x2af550u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 100));
    // 0x2af554: 0x2538fffc  addiu       $t8, $t1, -0x4
    ctx->pc = 0x2af554u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967292));
    // 0x2af558: 0x252ffff8  addiu       $t7, $t1, -0x8
    ctx->pc = 0x2af558u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x2af55c: 0x3c0d004c  lui         $t5, 0x4C
    ctx->pc = 0x2af55cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)76 << 16));
    // 0x2af560: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x2af560u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2af564: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x2af564u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2af568: 0xae2018  mult        $a0, $a1, $t6
    ctx->pc = 0x2af568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2af56c: 0x0  nop
    ctx->pc = 0x2af56cu;
    // NOP
label_2af570:
    // 0x2af570: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x2af570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x2af574: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2af574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2af578: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2AF578u;
    {
        const bool branch_taken_0x2af578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF578u;
        // 0x2af57c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af578) {
            ctx->pc = 0x2AF5D0u;
            goto label_2af5d0;
        }
    }
    ctx->pc = 0x2AF580u;
    // 0x2af580: 0x28a20009  slti        $v0, $a1, 0x9
    ctx->pc = 0x2af580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2af584: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2AF584u;
    {
        const bool branch_taken_0x2af584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF584u;
        // 0x2af588: 0x24a80001  addiu       $t0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af584) {
            ctx->pc = 0x2AF5C0u;
            goto label_2af5c0;
        }
    }
    ctx->pc = 0x2AF58Cu;
    // 0x2af58c: 0xab1018  mult        $v0, $a1, $t3
    ctx->pc = 0x2af58cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2af590: 0x4f3021  addu        $a2, $v0, $t7
    ctx->pc = 0x2af590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2af594: 0x0  nop
    ctx->pc = 0x2af594u;
    // NOP
label_2af598:
    // 0x2af598: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x2af598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2af59c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2af59cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2af5a0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2af5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2af5a4: 0x28e50009  slti        $a1, $a3, 0x9
    ctx->pc = 0x2af5a4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2af5a8: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2af5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2af5ac: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x2af5acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x2af5b0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2af5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x2af5b4: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2af5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2af5b8: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2AF5B8u;
    {
        const bool branch_taken_0x2af5b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF5B8u;
        // 0x2af5bc: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af5b8) {
            ctx->pc = 0x2AF598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af598;
        }
    }
    ctx->pc = 0x2AF5C0u;
label_2af5c0:
    // 0x2af5c0: 0xadac24ec  sw          $t4, 0x24EC($t5)
    ctx->pc = 0x2af5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 9452), GPR_U32(ctx, 12));
    // 0x2af5c4: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x2af5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x2af5c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AF5C8u;
    {
        const bool branch_taken_0x2af5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF5C8u;
        // 0x2af5cc: 0xad400008  sw          $zero, 0x8($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af5c8) {
            ctx->pc = 0x2AF5DCu;
            goto label_2af5dc;
        }
    }
    ctx->pc = 0x2AF5D0u;
label_2af5d0:
    // 0x2af5d0: 0x981021  addu        $v0, $a0, $t8
    ctx->pc = 0x2af5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x2af5d4: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x2af5d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2af5d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2af5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2af5dc:
    // 0x2af5dc: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2af5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af5e0: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x2af5e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2af5e4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2AF5E4u;
    {
        const bool branch_taken_0x2af5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF5E4u;
        // 0x2af5e8: 0xae2018  mult        $a0, $a1, $t6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af5e4) {
            ctx->pc = 0x2AF570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af570;
        }
    }
    ctx->pc = 0x2AF5ECu;
    // 0x2af5ec: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2af5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2af5f0: 0x24452470  addiu       $a1, $v0, 0x2470
    ctx->pc = 0x2af5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 9328));
    // 0x2af5f4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2af5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C2478u));
    // 0x2af5f8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2af5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2af5fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AF5FCu;
    {
        const bool branch_taken_0x2af5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF5FCu;
        // 0x2af600: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af5fc) {
            ctx->pc = 0x2AF620u;
            goto label_2af620;
        }
    }
    ctx->pc = 0x2AF604u;
    // 0x2af604: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2af608: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2af608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2af60c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2af60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2af610: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2af610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2af614: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2af614u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2af618: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2af618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2af61c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2af61cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2af620:
    // 0x2af620: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF620u;
    {
        const bool branch_taken_0x2af620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af620) {
            ctx->pc = 0x2AF624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF620u;
            // 0x2af624: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF640u;
            goto label_2af640;
        }
    }
    ctx->pc = 0x2AF628u;
    // 0x2af628: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2af62c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x2af62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x2af630: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2af630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2af634: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2af634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2af638: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2af638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2af63c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2af63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2af640:
    // 0x2af640: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2af640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2af644: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF644u;
    {
        const bool branch_taken_0x2af644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af644) {
            ctx->pc = 0x2AF648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF644u;
            // 0x2af648: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF664u;
            goto label_2af664;
        }
    }
    ctx->pc = 0x2AF64Cu;
    // 0x2af64c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2af650: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x2af650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x2af654: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2af654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2af658: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2af658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2af65c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2af65cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2af660: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2af660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2af664:
    // 0x2af664: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x2af664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2af668: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF668u;
    {
        const bool branch_taken_0x2af668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af668) {
            ctx->pc = 0x2AF66Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF668u;
            // 0x2af66c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF688u;
            goto label_2af688;
        }
    }
    ctx->pc = 0x2AF670u;
    // 0x2af670: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2af674: 0x3442ffbf  ori         $v0, $v0, 0xFFBF
    ctx->pc = 0x2af674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65471);
    // 0x2af678: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2af678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2af67c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2af67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2af680: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2af680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2af684: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2af684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2af688:
    // 0x2af688: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x2af688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2af68c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AF68Cu;
    {
        const bool branch_taken_0x2af68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2af68c) {
            ctx->pc = 0x2AF690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AF68Cu;
            // 0x2af690: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AF6ACu;
            goto label_2af6ac;
        }
    }
    ctx->pc = 0x2AF694u;
    // 0x2af694: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2af698: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x2af698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
    // 0x2af69c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2af69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2af6a0: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2af6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2af6a4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x2af6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x2af6a8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2af6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2af6ac:
    // 0x2af6ac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2af6b0: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x2af6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x2af6b4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x2af6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x2af6b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2af6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2af6bc: 0x3484f7ff  ori         $a0, $a0, 0xF7FF
    ctx->pc = 0x2af6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63487);
    // 0x2af6c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2af6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2af6c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2af6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2af6c8: 0x3442efff  ori         $v0, $v0, 0xEFFF
    ctx->pc = 0x2af6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61439);
    // 0x2af6cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2af6ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2af6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF6D0u;
        // 0x2af6d4: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF6D8u;
}
