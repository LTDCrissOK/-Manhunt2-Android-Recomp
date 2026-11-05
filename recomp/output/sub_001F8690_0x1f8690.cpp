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

// Function: sub_001F8690
// Address: 0x1f8690 - 0x1f8970
void sub_001F8690_0x1f8690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8690_0x1f8690");
#endif

    switch (ctx->pc) {
        case 0x1f86f8u: goto label_1f86f8;
        case 0x1f8760u: goto label_1f8760;
        case 0x1f87dcu: goto label_1f87dc;
        case 0x1f8810u: goto label_1f8810;
        case 0x1f883cu: goto label_1f883c;
        case 0x1f8900u: goto label_1f8900;
        case 0x1f892cu: goto label_1f892c;
        default: break;
    }

    ctx->pc = 0x1f8690u;

    // 0x1f8690: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1f8690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1f8694: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1f8694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1f8698: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1f8698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1f869c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f869cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f86a0: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1f86a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1f86a4: 0x260335ac  addiu       $v1, $s0, 0x35AC
    ctx->pc = 0x1f86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 13740));
    // 0x1f86a8: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x1f86a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x1f86ac: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x1f86acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x1f86b0: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x1f86b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x1f86b4: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x1f86b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x1f86b8: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x1f86b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
    // 0x1f86bc: 0x92020180  lbu         $v0, 0x180($s0)
    ctx->pc = 0x1f86bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1f86c0: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x1f86c0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1f86c4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1f86c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f86c8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f86c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f86cc: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x1F86CCu;
    {
        const bool branch_taken_0x1f86cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86CCu;
        // 0x1f86d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86cc) {
            ctx->pc = 0x1F8944u;
            goto label_1f8944;
        }
    }
    ctx->pc = 0x1F86D4u;
    // 0x1f86d4: 0x240219e0  addiu       $v0, $zero, 0x19E0
    ctx->pc = 0x1f86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6624));
    // 0x1f86d8: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x1f86d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1f86dc: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1f86dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f86e0: 0x243b018  mult        $s6, $s2, $v1
    ctx->pc = 0x1f86e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x1f86e4: 0x26133550  addiu       $s3, $s0, 0x3550
    ctx->pc = 0x1f86e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 13648));
    // 0x1f86e8: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x1f86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1f86ec: 0x202a821  addu        $s5, $s0, $v0
    ctx->pc = 0x1f86ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f86f0: 0x1161021  addu        $v0, $t0, $s6
    ctx->pc = 0x1f86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 22)));
    // 0x1f86f4: 0x0  nop
    ctx->pc = 0x1f86f4u;
    // NOP
label_1f86f8:
    // 0x1f86f8: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x1f86f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f86fc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f86fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f8700: 0x261135ac  addiu       $s1, $s0, 0x35AC
    ctx->pc = 0x1f8700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 13740));
    // 0x1f8704: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f8704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8708: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x1f8708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f870c: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x1f870cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1f8710: 0x8cc20070  lw          $v0, 0x70($a2)
    ctx->pc = 0x1f8710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x1f8714: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x1F8714u;
    {
        const bool branch_taken_0x1f8714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8714u;
        // 0x1f8718: 0x25140001  addiu       $s4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8714) {
            ctx->pc = 0x1F892Cu;
            goto label_1f892c;
        }
    }
    ctx->pc = 0x1F871Cu;
    // 0x1f871c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x1f871cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1f8720: 0x92050180  lbu         $a1, 0x180($s0)
    ctx->pc = 0x1f8720u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1f8724: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1f8724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1f8728: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1f8728u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f872c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f872cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1f8730: 0x2252021  addu        $a0, $s1, $a1
    ctx->pc = 0x1f8730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1f8734: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1f8734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f8738: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F8738u;
    {
        const bool branch_taken_0x1f8738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8738u;
        // 0x1f873c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8738) {
            ctx->pc = 0x1F87DCu;
            goto label_1f87dc;
        }
    }
    ctx->pc = 0x1F8740u;
    // 0x1f8740: 0x8cca0000  lw          $t2, 0x0($a2)
    ctx->pc = 0x1f8740u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f8744: 0x240e19e0  addiu       $t6, $zero, 0x19E0
    ctx->pc = 0x1f8744u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 6624));
    // 0x1f8748: 0x240d002e  addiu       $t5, $zero, 0x2E
    ctx->pc = 0x1f8748u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1f874c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1f874cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8750: 0x240c0090  addiu       $t4, $zero, 0x90
    ctx->pc = 0x1f8750u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f8754: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f8754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8758: 0xad1018  mult        $v0, $a1, $t5
    ctx->pc = 0x1f8758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f875c: 0x0  nop
    ctx->pc = 0x1f875cu;
    // NOP
label_1f8760:
    // 0x1f8760: 0x472021  addu        $a0, $v0, $a3
    ctx->pc = 0x1f8760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1f8764: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1f8764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1f8768: 0xae1018  mult        $v0, $a1, $t6
    ctx->pc = 0x1f8768u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f876c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1f876cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f8770: 0x6c1818  mult        $v1, $v1, $t4
    ctx->pc = 0x1f8770u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f8774: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x1f8774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1f8778: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f8778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f877c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1f877cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f8780: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1f8780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f8784: 0x5544000e  bnel        $t2, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F8784u;
    {
        const bool branch_taken_0x1f8784 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f8784) {
            ctx->pc = 0x1F8788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8784u;
            // 0x1f8788: 0x92050180  lbu         $a1, 0x180($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F87C0u;
            goto label_1f87c0;
        }
    }
    ctx->pc = 0x1F878Cu;
    // 0x1f878c: 0x94c30004  lhu         $v1, 0x4($a2)
    ctx->pc = 0x1f878cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1f8790: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1f8790u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1f8794: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8794u;
    {
        const bool branch_taken_0x1f8794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f8794) {
            ctx->pc = 0x1F8798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8794u;
            // 0x1f8798: 0x92050180  lbu         $a1, 0x180($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F87C0u;
            goto label_1f87c0;
        }
    }
    ctx->pc = 0x1F879Cu;
    // 0x1f879c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1f879cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1f87a0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1f87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1f87a4: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F87A4u;
    {
        const bool branch_taken_0x1f87a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f87a4) {
            ctx->pc = 0x1F87A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F87A4u;
            // 0x1f87a8: 0x92050180  lbu         $a1, 0x180($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F87C0u;
            goto label_1f87c0;
        }
    }
    ctx->pc = 0x1F87ACu;
    // 0x1f87ac: 0x90a3000c  lbu         $v1, 0xC($a1)
    ctx->pc = 0x1f87acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1f87b0: 0x90c2000c  lbu         $v0, 0xC($a2)
    ctx->pc = 0x1f87b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1f87b4: 0x10430023  beq         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F87B4u;
    {
        const bool branch_taken_0x1f87b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87B4u;
        // 0x1f87b8: 0x3ab1821  addu        $v1, $sp, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f87b4) {
            ctx->pc = 0x1F8844u;
            goto label_1f8844;
        }
    }
    ctx->pc = 0x1F87BCu;
    // 0x1f87bc: 0x92050180  lbu         $a1, 0x180($s0)
    ctx->pc = 0x1f87bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 384)));
label_1f87c0:
    // 0x1f87c0: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1f87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1f87c4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x1f87c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f87c8: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x1f87c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1f87cc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f87ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f87d0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1f87d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f87d4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1F87D4u;
    {
        const bool branch_taken_0x1f87d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F87D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F87D4u;
        // 0x1f87d8: 0xad1018  mult        $v0, $a1, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f87d4) {
            ctx->pc = 0x1F8760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8760;
        }
    }
    ctx->pc = 0x1F87DCu;
label_1f87dc:
    // 0x1f87dc: 0x3ab1021  addu        $v0, $sp, $t3
    ctx->pc = 0x1f87dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 11)));
    // 0x1f87e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f87e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f87e4: 0x54600052  bnel        $v1, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x1F87E4u;
    {
        const bool branch_taken_0x1f87e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f87e4) {
            ctx->pc = 0x1F87E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F87E4u;
            // 0x1f87e8: 0x2321821  addu        $v1, $s1, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8930u;
            goto label_1f8930;
        }
    }
    ctx->pc = 0x1F87ECu;
    // 0x1f87ec: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x1f87ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1f87f0: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x1f87f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1f87f4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F87F4u;
    {
        const bool branch_taken_0x1f87f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f87f4) {
            ctx->pc = 0x1F87F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F87F4u;
            // 0x1f87f8: 0x8cc40068  lw          $a0, 0x68($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8854u;
            goto label_1f8854;
        }
    }
    ctx->pc = 0x1F87FCu;
    // 0x1f87fc: 0x90c20058  lbu         $v0, 0x58($a2)
    ctx->pc = 0x1f87fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 88)));
    // 0x1f8800: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F8800u;
    {
        const bool branch_taken_0x1f8800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8800u;
        // 0x1f8804: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8800) {
            ctx->pc = 0x1F8850u;
            goto label_1f8850;
        }
    }
    ctx->pc = 0x1F8808u;
    // 0x1f8808: 0x260300f0  addiu       $v1, $s0, 0xF0
    ctx->pc = 0x1f8808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x1f880c: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1f880cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1f8810:
    // 0x1f8810: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x1f8810u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8814: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x1f8814u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f8818: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x1f8818u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x1f881c: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x1f881cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
    // 0x1f8820: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1f8820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1f8824: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F8824u;
    {
        const bool branch_taken_0x1f8824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8824u;
        // 0x1f8828: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8824) {
            ctx->pc = 0x1F8810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8810;
        }
    }
    ctx->pc = 0x1F882Cu;
    // 0x1f882c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x1f882cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8834: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F8834u;
    SET_GPR_U32(ctx, 31, 0x1F883Cu);
    ctx->pc = 0x1F8838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8834u;
    // 0x1f8838: 0x7c650000  sq          $a1, 0x0($v1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F8834u, 0x1F883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F883Cu;
label_1f883c:
    // 0x1f883c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1F883Cu;
    {
        const bool branch_taken_0x1f883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F883Cu;
        // 0x1f8840: 0x2321821  addu        $v1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f883c) {
            ctx->pc = 0x1F8930u;
            goto label_1f8930;
        }
    }
    ctx->pc = 0x1F8844u;
label_1f8844:
    // 0x1f8844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8848: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1F8848u;
    {
        const bool branch_taken_0x1f8848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8848u;
        // 0x1f884c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8848) {
            ctx->pc = 0x1F87DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f87dc;
        }
    }
    ctx->pc = 0x1F8850u;
label_1f8850:
    // 0x1f8850: 0x8cc40068  lw          $a0, 0x68($a2)
    ctx->pc = 0x1f8850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
label_1f8854:
    // 0x1f8854: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1F8854u;
    {
        const bool branch_taken_0x1f8854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8854u;
        // 0x1f8858: 0x2321821  addu        $v1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8854) {
            ctx->pc = 0x1F8930u;
            goto label_1f8930;
        }
    }
    ctx->pc = 0x1F885Cu;
    // 0x1f885c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x1f885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x1f8860: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F8860u;
    {
        const bool branch_taken_0x1f8860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8860) {
            ctx->pc = 0x1F8864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8860u;
            // 0x1f8864: 0x8cc20068  lw          $v0, 0x68($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F88C4u;
            goto label_1f88c4;
        }
    }
    ctx->pc = 0x1F8868u;
    // 0x1f8868: 0x80c30078  lb          $v1, 0x78($a2)
    ctx->pc = 0x1f8868u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x1f886c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f8870: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F8870u;
    {
        const bool branch_taken_0x1f8870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F8874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8870u;
        // 0x1f8874: 0x24c5001c  addiu       $a1, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8870) {
            ctx->pc = 0x1F88A0u;
            goto label_1f88a0;
        }
    }
    ctx->pc = 0x1F8878u;
    // 0x1f8878: 0x90c2001c  lbu         $v0, 0x1C($a2)
    ctx->pc = 0x1f8878u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x1f887c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F887Cu;
    {
        const bool branch_taken_0x1f887c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f887c) {
            ctx->pc = 0x1F8880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F887Cu;
            // 0x1f8880: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8884u;
            goto label_1f8884;
        }
    }
    ctx->pc = 0x1F8884u;
label_1f8884:
    // 0x1f8884: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1f8884u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1f8888: 0x1012  mflo        $v0
    ctx->pc = 0x1f8888u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f888c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1f888cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f8890: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8890u;
    {
        const bool branch_taken_0x1f8890 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1F8894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8890u;
        // 0x1f8894: 0xa0c20078  sb          $v0, 0x78($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 120), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8890) {
            ctx->pc = 0x1F88A0u;
            goto label_1f88a0;
        }
    }
    ctx->pc = 0x1F8898u;
    // 0x1f8898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f889c: 0xa0c20078  sb          $v0, 0x78($a2)
    ctx->pc = 0x1f889cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 120), (uint8_t)GPR_U32(ctx, 2));
label_1f88a0:
    // 0x1f88a0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1f88a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f88a4: 0x90c30078  lbu         $v1, 0x78($a2)
    ctx->pc = 0x1f88a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x1f88a8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1f88a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f88ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F88ACu;
    {
        const bool branch_taken_0x1f88ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F88B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88ACu;
        // 0x1f88b0: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88ac) {
            ctx->pc = 0x1F88BCu;
            goto label_1f88bc;
        }
    }
    ctx->pc = 0x1F88B4u;
    // 0x1f88b4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1F88B4u;
    {
        const bool branch_taken_0x1f88b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88B4u;
        // 0x1f88b8: 0xacc00068  sw          $zero, 0x68($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88b4) {
            ctx->pc = 0x1F892Cu;
            goto label_1f892c;
        }
    }
    ctx->pc = 0x1F88BCu;
label_1f88bc:
    // 0x1f88bc: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x1f88bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f88c0: 0x8cc20068  lw          $v0, 0x68($a2)
    ctx->pc = 0x1f88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
label_1f88c4:
    // 0x1f88c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f88c8: 0xacc20068  sw          $v0, 0x68($a2)
    ctx->pc = 0x1f88c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 104), GPR_U32(ctx, 2));
    // 0x1f88cc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f88ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f88d0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F88D0u;
    {
        const bool branch_taken_0x1f88d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F88D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F88D0u;
        // 0x1f88d4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f88d0) {
            ctx->pc = 0x1F88F4u;
            goto label_1f88f4;
        }
    }
    ctx->pc = 0x1F88D8u;
    // 0x1f88d8: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x1f88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x1f88dc: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x1f88dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f88e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F88E0u;
    {
        const bool branch_taken_0x1f88e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f88e0) {
            ctx->pc = 0x1F88E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F88E0u;
            // 0x1f88e4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F88F4u;
            goto label_1f88f4;
        }
    }
    ctx->pc = 0x1F88E8u;
    // 0x1f88e8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f88e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f88ec: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x1f88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x1f88f0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1f88f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f88f4:
    // 0x1f88f4: 0xacc00034  sw          $zero, 0x34($a2)
    ctx->pc = 0x1f88f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 0));
    // 0x1f88f8: 0x24640080  addiu       $a0, $v1, 0x80
    ctx->pc = 0x1f88f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1f88fc: 0x260200f0  addiu       $v0, $s0, 0xF0
    ctx->pc = 0x1f88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_1f8900:
    // 0x1f8900: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1f8900u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8904: 0x78660010  lq          $a2, 0x10($v1)
    ctx->pc = 0x1f8904u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1f8908: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x1f8908u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x1f890c: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x1f890cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    // 0x1f8910: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f8910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1f8914: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F8914u;
    {
        const bool branch_taken_0x1f8914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1F8918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8914u;
        // 0x1f8918: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8914) {
            ctx->pc = 0x1F8900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8900;
        }
    }
    ctx->pc = 0x1F891Cu;
    // 0x1f891c: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x1f891cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8924: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1F8924u;
    SET_GPR_U32(ctx, 31, 0x1F892Cu);
    ctx->pc = 0x1F8928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8924u;
    // 0x1f8928: 0x7c450000  sq          $a1, 0x0($v0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1F8924u, 0x1F892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F892Cu;
label_1f892c:
    // 0x1f892c: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x1f892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1f8930:
    // 0x1f8930: 0x328800ff  andi        $t0, $s4, 0xFF
    ctx->pc = 0x1f8930u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1f8934: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1f8934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f8938: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x1f8938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f893c: 0x1440ff6e  bnez        $v0, . + 4 + (-0x92 << 2)
    ctx->pc = 0x1F893Cu;
    {
        const bool branch_taken_0x1f893c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F893Cu;
        // 0x1f8940: 0x1161021  addu        $v0, $t0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f893c) {
            ctx->pc = 0x1F86F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f86f8;
        }
    }
    ctx->pc = 0x1F8944u;
label_1f8944:
    // 0x1f8944: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1f8944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f8948: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1f8948u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1f894c: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1f894cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f8950: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x1f8950u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1f8954: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x1f8954u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f8958: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x1f8958u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1f895c: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x1f895cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f8960: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x1f8960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1f8964: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8964u;
        // 0x1f8968: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F896Cu;
    // 0x1f896c: 0x0  nop
    ctx->pc = 0x1f896cu;
    // NOP
    ctx->pc = 0x1f8970u;
}
