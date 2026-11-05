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

// Function: sub_0027C688
// Address: 0x27c688 - 0x27c818
void sub_0027C688_0x27c688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C688_0x27c688");
#endif

    switch (ctx->pc) {
        case 0x27c6c0u: goto label_27c6c0;
        case 0x27c760u: goto label_27c760;
        default: break;
    }

    ctx->pc = 0x27c688u;

    // 0x27c688: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27c688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c68c: 0x8cc20700  lw          $v0, 0x700($a2)
    ctx->pc = 0x27c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1792)));
    // 0x27c690: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x27C690u;
    {
        const bool branch_taken_0x27c690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C690u;
        // 0x27c694: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c690) {
            ctx->pc = 0x27C804u;
            goto label_27c804;
        }
    }
    ctx->pc = 0x27C698u;
    // 0x27c698: 0x8cc2070c  lw          $v0, 0x70C($a2)
    ctx->pc = 0x27c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1804)));
    // 0x27c69c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c69cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c6a0: 0x8cc30704  lw          $v1, 0x704($a2)
    ctx->pc = 0x27c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1796)));
    // 0x27c6a4: 0xacc20714  sw          $v0, 0x714($a2)
    ctx->pc = 0x27c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1812), GPR_U32(ctx, 2));
    // 0x27c6a8: 0x18600055  blez        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x27C6A8u;
    {
        const bool branch_taken_0x27c6a8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x27C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6A8u;
        // 0x27c6ac: 0xacc0073c  sw          $zero, 0x73C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1852), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6a8) {
            ctx->pc = 0x27C800u;
            goto label_27c800;
        }
    }
    ctx->pc = 0x27C6B0u;
    // 0x27c6b0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x27c6b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c6b4: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x27c6b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27c6b8: 0x8cc2073c  lw          $v0, 0x73C($a2)
    ctx->pc = 0x27c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1852)));
    // 0x27c6bc: 0x0  nop
    ctx->pc = 0x27c6bcu;
    // NOP
label_27c6c0:
    // 0x27c6c0: 0x144b0006  bne         $v0, $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C6C0u;
    {
        const bool branch_taken_0x27c6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x27C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C6C0u;
        // 0x27c6c4: 0x81880  sll         $v1, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6c0) {
            ctx->pc = 0x27C6DCu;
            goto label_27c6dc;
        }
    }
    ctx->pc = 0x27C6C8u;
    // 0x27c6c8: 0x8cc20728  lw          $v0, 0x728($a2)
    ctx->pc = 0x27c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1832)));
    // 0x27c6cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27c6d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27c6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27c6d4: 0xacc40734  sw          $a0, 0x734($a2)
    ctx->pc = 0x27c6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1844), GPR_U32(ctx, 4));
    // 0x27c6d8: 0x8cc2073c  lw          $v0, 0x73C($a2)
    ctx->pc = 0x27c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1852)));
label_27c6dc:
    // 0x27c6dc: 0x544a000c  bnel        $v0, $t2, . + 4 + (0xC << 2)
    ctx->pc = 0x27C6DCu;
    {
        const bool branch_taken_0x27c6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x27c6dc) {
            ctx->pc = 0x27C6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C6DCu;
            // 0x27c6e0: 0x8cc7073c  lw          $a3, 0x73C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1852)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C710u;
            goto label_27c710;
        }
    }
    ctx->pc = 0x27C6E4u;
    // 0x27c6e4: 0x8cc30728  lw          $v1, 0x728($a2)
    ctx->pc = 0x27c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1832)));
    // 0x27c6e8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x27c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x27c6ec: 0x8cc50734  lw          $a1, 0x734($a2)
    ctx->pc = 0x27c6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1844)));
    // 0x27c6f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27c6f4: 0x8cc40714  lw          $a0, 0x714($a2)
    ctx->pc = 0x27c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1812)));
    // 0x27c6f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c6fc: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x27c6fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x27c700: 0xacc30738  sw          $v1, 0x738($a2)
    ctx->pc = 0x27c700u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1848), GPR_U32(ctx, 3));
    // 0x27c704: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x27c704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x27c708: 0xacc40714  sw          $a0, 0x714($a2)
    ctx->pc = 0x27c708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1812), GPR_U32(ctx, 4));
    // 0x27c70c: 0x8cc7073c  lw          $a3, 0x73C($a2)
    ctx->pc = 0x27c70cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1852)));
label_27c710:
    // 0x27c710: 0x14e00032  bnez        $a3, . + 4 + (0x32 << 2)
    ctx->pc = 0x27C710u;
    {
        const bool branch_taken_0x27c710 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C710u;
        // 0x27c714: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c710) {
            ctx->pc = 0x27C7DCu;
            goto label_27c7dc;
        }
    }
    ctx->pc = 0x27C718u;
    // 0x27c718: 0x8cc20728  lw          $v0, 0x728($a2)
    ctx->pc = 0x27c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1832)));
    // 0x27c71c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x27c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x27c720: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x27c720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27c724: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x27c724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27c728: 0x1524002c  bne         $t1, $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x27C728u;
    {
        const bool branch_taken_0x27c728 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 4));
        ctx->pc = 0x27C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C728u;
        // 0x27c72c: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c728) {
            ctx->pc = 0x27C7DCu;
            goto label_27c7dc;
        }
    }
    ctx->pc = 0x27C730u;
    // 0x27c730: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x27c730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27c734: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c734u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c738: 0xacc20734  sw          $v0, 0x734($a2)
    ctx->pc = 0x27c738u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1844), GPR_U32(ctx, 2));
    // 0x27c73c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x27c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x27c740: 0xacc30718  sw          $v1, 0x718($a2)
    ctx->pc = 0x27c740u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1816), GPR_U32(ctx, 3));
    // 0x27c744: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x27c744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x27c748: 0xacc00754  sw          $zero, 0x754($a2)
    ctx->pc = 0x27c748u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1876), GPR_U32(ctx, 0));
    // 0x27c74c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x27c74cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27c750: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x27c750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27c754: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27C754u;
    {
        const bool branch_taken_0x27c754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C754u;
        // 0x27c758: 0xacc40738  sw          $a0, 0x738($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1848), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c754) {
            ctx->pc = 0x27C7D4u;
            goto label_27c7d4;
        }
    }
    ctx->pc = 0x27C75Cu;
    // 0x27c75c: 0x24c70748  addiu       $a3, $a2, 0x748
    ctx->pc = 0x27c75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1864));
label_27c760:
    // 0x27c760: 0x8cc30714  lw          $v1, 0x714($a2)
    ctx->pc = 0x27c760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1812)));
    // 0x27c764: 0x8cc40718  lw          $a0, 0x718($a2)
    ctx->pc = 0x27c764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1816)));
    // 0x27c768: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x27c768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27c76c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x27c76cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27c770: 0x8cc30754  lw          $v1, 0x754($a2)
    ctx->pc = 0x27c770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1876)));
    // 0x27c774: 0x8cc50718  lw          $a1, 0x718($a2)
    ctx->pc = 0x27c774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1816)));
    // 0x27c778: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x27c778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x27c77c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x27c77cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27c780: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x27c780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27c784: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x27c784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x27c788: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x27c788u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x27c78c: 0x8cc30754  lw          $v1, 0x754($a2)
    ctx->pc = 0x27c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1876)));
    // 0x27c790: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27c790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27c794: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x27c794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x27c798: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27C798u;
    {
        const bool branch_taken_0x27c798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C798u;
        // 0x27c79c: 0xacc30754  sw          $v1, 0x754($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1876), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c798) {
            ctx->pc = 0x27C7A4u;
            goto label_27c7a4;
        }
    }
    ctx->pc = 0x27C7A0u;
    // 0x27c7a0: 0xacc00754  sw          $zero, 0x754($a2)
    ctx->pc = 0x27c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1876), GPR_U32(ctx, 0));
label_27c7a4:
    // 0x27c7a4: 0x8cc40734  lw          $a0, 0x734($a2)
    ctx->pc = 0x27c7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1844)));
    // 0x27c7a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x27c7a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x27c7ac: 0x8cc50738  lw          $a1, 0x738($a2)
    ctx->pc = 0x27c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1848)));
    // 0x27c7b0: 0x8cc30718  lw          $v1, 0x718($a2)
    ctx->pc = 0x27c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1816)));
    // 0x27c7b4: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x27c7b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27c7b8: 0x8cc20714  lw          $v0, 0x714($a2)
    ctx->pc = 0x27c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1812)));
    // 0x27c7bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x27c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x27c7c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c7c4: 0xacc30718  sw          $v1, 0x718($a2)
    ctx->pc = 0x27c7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1816), GPR_U32(ctx, 3));
    // 0x27c7c8: 0x104202a  slt         $a0, $t0, $a0
    ctx->pc = 0x27c7c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27c7cc: 0x1480ffe4  bnez        $a0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x27C7CCu;
    {
        const bool branch_taken_0x27c7cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7CCu;
        // 0x27c7d0: 0xacc20714  sw          $v0, 0x714($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7cc) {
            ctx->pc = 0x27C760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c760;
        }
    }
    ctx->pc = 0x27C7D4u;
label_27c7d4:
    // 0x27c7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x27C7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7D4u;
        // 0x27c7d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C7DCu;
label_27c7dc:
    // 0x27c7dc: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x27c7dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x27c7e0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x27C7E0u;
    {
        const bool branch_taken_0x27c7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C7E0u;
        // 0x27c7e4: 0xacc2073c  sw          $v0, 0x73C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1852), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c7e0) {
            ctx->pc = 0x27C7ECu;
            goto label_27c7ec;
        }
    }
    ctx->pc = 0x27C7E8u;
    // 0x27c7e8: 0xacc0073c  sw          $zero, 0x73C($a2)
    ctx->pc = 0x27c7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1852), GPR_U32(ctx, 0));
label_27c7ec:
    // 0x27c7ec: 0x8cc20704  lw          $v0, 0x704($a2)
    ctx->pc = 0x27c7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1796)));
    // 0x27c7f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x27c7f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x27c7f4: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x27c7f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27c7f8: 0x5440ffb1  bnel        $v0, $zero, . + 4 + (-0x4F << 2)
    ctx->pc = 0x27C7F8u;
    {
        const bool branch_taken_0x27c7f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c7f8) {
            ctx->pc = 0x27C7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C7F8u;
            // 0x27c7fc: 0x8cc2073c  lw          $v0, 0x73C($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1852)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c6c0;
        }
    }
    ctx->pc = 0x27C800u;
label_27c800:
    // 0x27c800: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c804:
    // 0x27c804: 0x3e00008  jr          $ra
    ctx->pc = 0x27C804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C80Cu;
    // 0x27c80c: 0x0  nop
    ctx->pc = 0x27c80cu;
    // NOP
    // 0x27c810: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27c810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27c814: 0x0  nop
    ctx->pc = 0x27c814u;
    // NOP
    ctx->pc = 0x27c818u;
}
