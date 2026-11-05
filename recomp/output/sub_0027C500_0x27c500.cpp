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

// Function: sub_0027C500
// Address: 0x27c500 - 0x27c688
void sub_0027C500_0x27c500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C500_0x27c500");
#endif

    switch (ctx->pc) {
        case 0x27c538u: goto label_27c538;
        case 0x27c5d8u: goto label_27c5d8;
        default: break;
    }

    ctx->pc = 0x27c500u;

    // 0x27c500: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27c500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c504: 0x8cc20700  lw          $v0, 0x700($a2)
    ctx->pc = 0x27c504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1792)));
    // 0x27c508: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x27C508u;
    {
        const bool branch_taken_0x27c508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C508u;
        // 0x27c50c: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c508) {
            ctx->pc = 0x27C67Cu;
            goto label_27c67c;
        }
    }
    ctx->pc = 0x27C510u;
    // 0x27c510: 0x8cc2070c  lw          $v0, 0x70C($a2)
    ctx->pc = 0x27c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1804)));
    // 0x27c514: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c514u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c518: 0x8cc30704  lw          $v1, 0x704($a2)
    ctx->pc = 0x27c518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1796)));
    // 0x27c51c: 0xacc20718  sw          $v0, 0x718($a2)
    ctx->pc = 0x27c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1816), GPR_U32(ctx, 2));
    // 0x27c520: 0x18600055  blez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x27C520u;
    {
        const bool branch_taken_0x27c520 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C520u;
        // 0x27c524: 0xacc0073c  sw          $zero, 0x73C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1852), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c520) {
            ctx->pc = 0x27C678u;
            goto label_27c678;
        }
    }
    ctx->pc = 0x27C528u;
    // 0x27c528: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x27c528u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c52c: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x27c52cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27c530: 0x8cc2073c  lw          $v0, 0x73C($a2)
    ctx->pc = 0x27c530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1852)));
    // 0x27c534: 0x0  nop
    ctx->pc = 0x27c534u;
    // NOP
label_27c538:
    // 0x27c538: 0x144b0006  bne         $v0, $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C538u;
    {
        const bool branch_taken_0x27c538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x27C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C538u;
        // 0x27c53c: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c538) {
            ctx->pc = 0x27C554u;
            goto label_27c554;
        }
    }
    ctx->pc = 0x27C540u;
    // 0x27c540: 0x8cc20728  lw          $v0, 0x728($a2)
    ctx->pc = 0x27c540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1832)));
    // 0x27c544: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27c544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27c548: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27c548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27c54c: 0xacc40734  sw          $a0, 0x734($a2)
    ctx->pc = 0x27c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1844), GPR_U32(ctx, 4));
    // 0x27c550: 0x8cc2073c  lw          $v0, 0x73C($a2)
    ctx->pc = 0x27c550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1852)));
label_27c554:
    // 0x27c554: 0x544a000c  bnel        $v0, $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x27C554u;
    {
        const bool branch_taken_0x27c554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x27c554) {
            ctx->pc = 0x27C558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C554u;
            // 0x27c558: 0x8cc7073c  lw          $a3, 0x73C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1852)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C588u;
            goto label_27c588;
        }
    }
    ctx->pc = 0x27C55Cu;
    // 0x27c55c: 0x8cc30728  lw          $v1, 0x728($a2)
    ctx->pc = 0x27c55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1832)));
    // 0x27c560: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x27c560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x27c564: 0x8cc50734  lw          $a1, 0x734($a2)
    ctx->pc = 0x27c564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1844)));
    // 0x27c568: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27c56c: 0x8cc40718  lw          $a0, 0x718($a2)
    ctx->pc = 0x27c56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1816)));
    // 0x27c570: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27c570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c574: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x27c574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x27c578: 0xacc30738  sw          $v1, 0x738($a2)
    ctx->pc = 0x27c578u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1848), GPR_U32(ctx, 3));
    // 0x27c57c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27c580: 0xacc40718  sw          $a0, 0x718($a2)
    ctx->pc = 0x27c580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1816), GPR_U32(ctx, 4));
    // 0x27c584: 0x8cc7073c  lw          $a3, 0x73C($a2)
    ctx->pc = 0x27c584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1852)));
label_27c588:
    // 0x27c588: 0x14e00032  bnez        $a3, . + 4 + (0x32 << 2)
    ctx->pc = 0x27C588u;
    {
        const bool branch_taken_0x27c588 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C588u;
        // 0x27c58c: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c588) {
            ctx->pc = 0x27C654u;
            goto label_27c654;
        }
    }
    ctx->pc = 0x27C590u;
    // 0x27c590: 0x8cc20728  lw          $v0, 0x728($a2)
    ctx->pc = 0x27c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1832)));
    // 0x27c594: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x27c594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x27c598: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x27c598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27c59c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x27c59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27c5a0: 0x1524002c  bne         $t1, $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x27C5A0u;
    {
        const bool branch_taken_0x27c5a0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 4));
        ctx->pc = 0x27C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5A0u;
        // 0x27c5a4: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5a0) {
            ctx->pc = 0x27C654u;
            goto label_27c654;
        }
    }
    ctx->pc = 0x27C5A8u;
    // 0x27c5a8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27c5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27c5ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c5acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c5b0: 0xacc20734  sw          $v0, 0x734($a2)
    ctx->pc = 0x27c5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1844), GPR_U32(ctx, 2));
    // 0x27c5b4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x27c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x27c5b8: 0xacc30714  sw          $v1, 0x714($a2)
    ctx->pc = 0x27c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1812), GPR_U32(ctx, 3));
    // 0x27c5bc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27c5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x27c5c0: 0xacc00754  sw          $zero, 0x754($a2)
    ctx->pc = 0x27c5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1876), GPR_U32(ctx, 0));
    // 0x27c5c4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x27c5c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27c5c8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x27c5c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27c5cc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27C5CCu;
    {
        const bool branch_taken_0x27c5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C5CCu;
        // 0x27c5d0: 0xacc40738  sw          $a0, 0x738($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1848), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c5cc) {
            ctx->pc = 0x27C64Cu;
            goto label_27c64c;
        }
    }
    ctx->pc = 0x27C5D4u;
    // 0x27c5d4: 0x24c70748  addiu       $a3, $a2, 0x748
    ctx->pc = 0x27c5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1864));
label_27c5d8:
    // 0x27c5d8: 0x8cc30714  lw          $v1, 0x714($a2)
    ctx->pc = 0x27c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1812)));
    // 0x27c5dc: 0x8cc40718  lw          $a0, 0x718($a2)
    ctx->pc = 0x27c5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1816)));
    // 0x27c5e0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x27c5e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27c5e4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x27c5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27c5e8: 0x8cc30754  lw          $v1, 0x754($a2)
    ctx->pc = 0x27c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1876)));
    // 0x27c5ec: 0x8cc50718  lw          $a1, 0x718($a2)
    ctx->pc = 0x27c5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1816)));
    // 0x27c5f0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x27c5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x27c5f4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x27c5f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27c5f8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x27c5f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27c5fc: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x27c5fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x27c600: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x27c600u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27c604: 0x8cc30754  lw          $v1, 0x754($a2)
    ctx->pc = 0x27c604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1876)));
    // 0x27c608: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27c608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27c60c: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x27c60cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x27c610: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27C610u;
    {
        const bool branch_taken_0x27c610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C610u;
        // 0x27c614: 0xacc30754  sw          $v1, 0x754($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1876), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c610) {
            ctx->pc = 0x27C61Cu;
            goto label_27c61c;
        }
    }
    ctx->pc = 0x27C618u;
    // 0x27c618: 0xacc00754  sw          $zero, 0x754($a2)
    ctx->pc = 0x27c618u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1876), GPR_U32(ctx, 0));
label_27c61c:
    // 0x27c61c: 0x8cc40734  lw          $a0, 0x734($a2)
    ctx->pc = 0x27c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1844)));
    // 0x27c620: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x27c620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x27c624: 0x8cc50738  lw          $a1, 0x738($a2)
    ctx->pc = 0x27c624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1848)));
    // 0x27c628: 0x8cc30718  lw          $v1, 0x718($a2)
    ctx->pc = 0x27c628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1816)));
    // 0x27c62c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x27c62cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27c630: 0x8cc20714  lw          $v0, 0x714($a2)
    ctx->pc = 0x27c630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1812)));
    // 0x27c634: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27c634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27c638: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c63c: 0xacc30718  sw          $v1, 0x718($a2)
    ctx->pc = 0x27c63cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1816), GPR_U32(ctx, 3));
    // 0x27c640: 0x104202a  slt         $a0, $t0, $a0
    ctx->pc = 0x27c640u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27c644: 0x1480ffe4  bnez        $a0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x27C644u;
    {
        const bool branch_taken_0x27c644 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C644u;
        // 0x27c648: 0xacc20714  sw          $v0, 0x714($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c644) {
            ctx->pc = 0x27C5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c5d8;
        }
    }
    ctx->pc = 0x27C64Cu;
label_27c64c:
    // 0x27c64c: 0x3e00008  jr          $ra
    ctx->pc = 0x27C64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C64Cu;
        // 0x27c650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C654u;
label_27c654:
    // 0x27c654: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x27c654u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x27c658: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27C658u;
    {
        const bool branch_taken_0x27c658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C658u;
        // 0x27c65c: 0xacc2073c  sw          $v0, 0x73C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c658) {
            ctx->pc = 0x27C664u;
            goto label_27c664;
        }
    }
    ctx->pc = 0x27C660u;
    // 0x27c660: 0xacc0073c  sw          $zero, 0x73C($a2)
    ctx->pc = 0x27c660u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1852), GPR_U32(ctx, 0));
label_27c664:
    // 0x27c664: 0x8cc20704  lw          $v0, 0x704($a2)
    ctx->pc = 0x27c664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1796)));
    // 0x27c668: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x27c668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x27c66c: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x27c66cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27c670: 0x5440ffb1  bnel        $v0, $zero, . + 4 + (-0x4F << 2)
    ctx->pc = 0x27C670u;
    {
        const bool branch_taken_0x27c670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c670) {
            ctx->pc = 0x27C674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C670u;
            // 0x27c674: 0x8cc2073c  lw          $v0, 0x73C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1852)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c538;
        }
    }
    ctx->pc = 0x27C678u;
label_27c678:
    // 0x27c678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c67c:
    // 0x27c67c: 0x3e00008  jr          $ra
    ctx->pc = 0x27C67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C684u;
    // 0x27c684: 0x0  nop
    ctx->pc = 0x27c684u;
    // NOP
    ctx->pc = 0x27c688u;
}
