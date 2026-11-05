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

// Function: sub_001EB5A0
// Address: 0x1eb5a0 - 0x1ebb48
void sub_001EB5A0_0x1eb5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB5A0_0x1eb5a0");
#endif

    switch (ctx->pc) {
        case 0x1eb628u: goto label_1eb628;
        case 0x1eb648u: goto label_1eb648;
        case 0x1eb73cu: goto label_1eb73c;
        case 0x1eb754u: goto label_1eb754;
        case 0x1eb768u: goto label_1eb768;
        case 0x1eb7a4u: goto label_1eb7a4;
        case 0x1eb7b8u: goto label_1eb7b8;
        case 0x1eb7c4u: goto label_1eb7c4;
        case 0x1eb884u: goto label_1eb884;
        case 0x1eb8c0u: goto label_1eb8c0;
        case 0x1eb8ccu: goto label_1eb8cc;
        case 0x1eb908u: goto label_1eb908;
        case 0x1eb92cu: goto label_1eb92c;
        case 0x1eb978u: goto label_1eb978;
        case 0x1eb99cu: goto label_1eb99c;
        case 0x1eba18u: goto label_1eba18;
        case 0x1eba38u: goto label_1eba38;
        case 0x1eba70u: goto label_1eba70;
        default: break;
    }

    ctx->pc = 0x1eb5a0u;

    // 0x1eb5a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1eb5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1eb5a4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1eb5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1eb5a8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1eb5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1eb5ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1eb5acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb5b0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1eb5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1eb5b4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1eb5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1eb5b8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1eb5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1eb5bc: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1eb5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1eb5c0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1eb5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1eb5c4: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x1eb5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x1eb5c8: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x1eb5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x1eb5cc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1eb5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1eb5d0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1eb5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1eb5d4: 0x10400150  beqz        $v0, . + 4 + (0x150 << 2)
    ctx->pc = 0x1EB5D4u;
    {
        const bool branch_taken_0x1eb5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5D4u;
        // 0x1eb5d8: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5d4) {
            ctx->pc = 0x1EBB18u;
            goto label_1ebb18;
        }
    }
    ctx->pc = 0x1EB5DCu;
    // 0x1eb5dc: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x1eb5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1eb5e0: 0x8c83133c  lw          $v1, 0x133C($a0)
    ctx->pc = 0x1eb5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4924)));
    // 0x1eb5e4: 0x460014d  bltz        $v1, . + 4 + (0x14D << 2)
    ctx->pc = 0x1EB5E4u;
    {
        const bool branch_taken_0x1eb5e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1EB5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5E4u;
        // 0x1eb5e8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5e4) {
            ctx->pc = 0x1EBB1Cu;
            goto label_1ebb1c;
        }
    }
    ctx->pc = 0x1EB5ECu;
    // 0x1eb5ec: 0x8c8215e8  lw          $v0, 0x15E8($a0)
    ctx->pc = 0x1eb5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5608)));
    // 0x1eb5f0: 0x1440014b  bnez        $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x1EB5F0u;
    {
        const bool branch_taken_0x1eb5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB5F0u;
        // 0x1eb5f4: 0xdfb10038  ld          $s1, 0x38($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb5f0) {
            ctx->pc = 0x1EBB20u;
            goto label_1ebb20;
        }
    }
    ctx->pc = 0x1EB5F8u;
    // 0x1eb5f8: 0x90820d80  lbu         $v0, 0xD80($a0)
    ctx->pc = 0x1eb5f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3456)));
    // 0x1eb5fc: 0x90830d81  lbu         $v1, 0xD81($a0)
    ctx->pc = 0x1eb5fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3457)));
    // 0x1eb600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eb600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eb604: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1eb604u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb608: 0x12a00145  beqz        $s5, . + 4 + (0x145 << 2)
    ctx->pc = 0x1EB608u;
    {
        const bool branch_taken_0x1eb608 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB608u;
        // 0x1eb60c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb608) {
            ctx->pc = 0x1EBB20u;
            goto label_1ebb20;
        }
    }
    ctx->pc = 0x1EB610u;
    // 0x1eb610: 0x90970d80  lbu         $s7, 0xD80($a0)
    ctx->pc = 0x1eb610u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3456)));
    // 0x1eb614: 0x12e0005c  beqz        $s7, . + 4 + (0x5C << 2)
    ctx->pc = 0x1EB614u;
    {
        const bool branch_taken_0x1eb614 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB614u;
        // 0x1eb618: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb614) {
            ctx->pc = 0x1EB788u;
            goto label_1eb788;
        }
    }
    ctx->pc = 0x1EB61Cu;
    // 0x1eb61c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1eb61cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb620: 0x341e8420  ori         $fp, $zero, 0x8420
    ctx->pc = 0x1eb620u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1eb624: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1eb624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1eb628:
    // 0x1eb628: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1eb628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1eb62c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1eb62cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eb630: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1eb630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb634: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x1eb634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1eb638: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x1eb638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1eb63c: 0x8e020424  lw          $v0, 0x424($s0)
    ctx->pc = 0x1eb63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1060)));
    // 0x1eb640: 0xc07e666  jal         func_1F9998
    ctx->pc = 0x1EB640u;
    SET_GPR_U32(ctx, 31, 0x1EB648u);
    ctx->pc = 0x1EB644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB640u;
    // 0x1eb644: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x1EB640u, 0x1EB648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB648u;
label_1eb648:
    // 0x1eb648: 0x92030468  lbu         $v1, 0x468($s0)
    ctx->pc = 0x1eb648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x1eb64c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EB64Cu;
    {
        const bool branch_taken_0x1eb64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB64Cu;
        // 0x1eb650: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb64c) {
            ctx->pc = 0x1EB65Cu;
            goto label_1eb65c;
        }
    }
    ctx->pc = 0x1EB654u;
    // 0x1eb654: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb658: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eb658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb65c:
    // 0x1eb65c: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1EB65Cu;
    {
        const bool branch_taken_0x1eb65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb65c) {
            ctx->pc = 0x1EB660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB65Cu;
            // 0x1eb660: 0x8e030450  lw          $v1, 0x450($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB704u;
            goto label_1eb704;
        }
    }
    ctx->pc = 0x1EB664u;
    // 0x1eb664: 0x12340024  beq         $s1, $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EB664u;
    {
        const bool branch_taken_0x1eb664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x1EB668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB664u;
        // 0x1eb668: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb664) {
            ctx->pc = 0x1EB6F8u;
            goto label_1eb6f8;
        }
    }
    ctx->pc = 0x1EB66Cu;
    // 0x1eb66c: 0x25e2821  addu        $a1, $s2, $fp
    ctx->pc = 0x1eb66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x1eb670: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1eb670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eb674: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1eb674u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1eb678: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x1eb678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1eb67c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1eb67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1eb680: 0x9e2021  addu        $a0, $a0, $fp
    ctx->pc = 0x1eb680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x1eb684: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1eb684u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb688: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1eb688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1eb68c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1eb68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1eb690: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1eb690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1eb694: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1eb694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1eb698: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1eb698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1eb69c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1eb69cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1eb6a0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1eb6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1eb6a4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1eb6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1eb6a8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1eb6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1eb6ac: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1eb6acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1eb6b0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1eb6b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1eb6b4: 0xf8810020  sqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1eb6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb6b8: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1eb6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1eb6bc: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1eb6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1eb6c0: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x1eb6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb6c4: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x1eb6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x1eb6c8: 0x90a20038  lbu         $v0, 0x38($a1)
    ctx->pc = 0x1eb6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1eb6cc: 0xa0820038  sb          $v0, 0x38($a0)
    ctx->pc = 0x1eb6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x1eb6d0: 0x90a30039  lbu         $v1, 0x39($a1)
    ctx->pc = 0x1eb6d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 57)));
    // 0x1eb6d4: 0xa0830039  sb          $v1, 0x39($a0)
    ctx->pc = 0x1eb6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb6d8: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x1eb6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1eb6dc: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x1eb6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x1eb6e0: 0x90a30040  lbu         $v1, 0x40($a1)
    ctx->pc = 0x1eb6e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x1eb6e4: 0xa0830040  sb          $v1, 0x40($a0)
    ctx->pc = 0x1eb6e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb6e8: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1eb6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x1eb6ec: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x1eb6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x1eb6f0: 0x90a30048  lbu         $v1, 0x48($a1)
    ctx->pc = 0x1eb6f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1eb6f4: 0xa0830048  sb          $v1, 0x48($a0)
    ctx->pc = 0x1eb6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 72), (uint8_t)GPR_U32(ctx, 3));
label_1eb6f8:
    // 0x1eb6f8: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1eb6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1eb6fc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1EB6FCu;
    {
        const bool branch_taken_0x1eb6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB6FCu;
        // 0x1eb700: 0x305400ff  andi        $s4, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb6fc) {
            ctx->pc = 0x1EB774u;
            goto label_1eb774;
        }
    }
    ctx->pc = 0x1EB704u;
label_1eb704:
    // 0x1eb704: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EB704u;
    {
        const bool branch_taken_0x1eb704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB704u;
        // 0x1eb708: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb704) {
            ctx->pc = 0x1EB758u;
            goto label_1eb758;
        }
    }
    ctx->pc = 0x1EB70Cu;
    // 0x1eb70c: 0x8e020464  lw          $v0, 0x464($s0)
    ctx->pc = 0x1eb70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1124)));
    // 0x1eb710: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eb710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb714: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1eb714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1eb718: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EB718u;
    {
        const bool branch_taken_0x1eb718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB718u;
        // 0x1eb71c: 0xa043018c  sb          $v1, 0x18C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 396), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb718) {
            ctx->pc = 0x1EB754u;
            goto label_1eb754;
        }
    }
    ctx->pc = 0x1EB720u;
    // 0x1eb720: 0x8e05042c  lw          $a1, 0x42C($s0)
    ctx->pc = 0x1eb720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
    // 0x1eb724: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1eb724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1eb728: 0x8e060428  lw          $a2, 0x428($s0)
    ctx->pc = 0x1eb728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1064)));
    // 0x1eb72c: 0x24449c38  addiu       $a0, $v0, -0x63C8
    ctx->pc = 0x1eb72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941752));
    // 0x1eb730: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1eb730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb734: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1EB734u;
    SET_GPR_U32(ctx, 31, 0x1EB73Cu);
    ctx->pc = 0x1EB738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB734u;
    // 0x1eb738: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1EB734u, 0x1EB73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB73Cu;
label_1eb73c:
    // 0x1eb73c: 0x8e07042c  lw          $a3, 0x42C($s0)
    ctx->pc = 0x1eb73cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
    // 0x1eb740: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1eb740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb744: 0x92050460  lbu         $a1, 0x460($s0)
    ctx->pc = 0x1eb744u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x1eb748: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb74c: 0xc07e70c  jal         func_1F9C30
    ctx->pc = 0x1EB74Cu;
    SET_GPR_U32(ctx, 31, 0x1EB754u);
    ctx->pc = 0x1EB750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB74Cu;
    // 0x1eb750: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9C30u, 0x1EB74Cu, 0x1EB754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB754u;
label_1eb754:
    // 0x1eb754: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1eb754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1eb758:
    // 0x1eb758: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1eb758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eb75c: 0x5e2021  addu        $a0, $v0, $fp
    ctx->pc = 0x1eb75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1eb760: 0xc07ac3c  jal         func_1EB0F0
    ctx->pc = 0x1EB760u;
    SET_GPR_U32(ctx, 31, 0x1EB768u);
    ctx->pc = 0x1EB764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB760u;
    // 0x1eb764: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB0F0u, 0x1EB760u, 0x1EB768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB768u;
label_1eb768:
    // 0x1eb768: 0x92c20d80  lbu         $v0, 0xD80($s6)
    ctx->pc = 0x1eb768u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3456)));
    // 0x1eb76c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1eb76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1eb770: 0xa2c20d80  sb          $v0, 0xD80($s6)
    ctx->pc = 0x1eb770u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3456), (uint8_t)GPR_U32(ctx, 2));
label_1eb774:
    // 0x1eb774: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1eb774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1eb778: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1eb778u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb77c: 0x237182b  sltu        $v1, $s1, $s7
    ctx->pc = 0x1eb77cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1eb780: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
    ctx->pc = 0x1EB780u;
    {
        const bool branch_taken_0x1eb780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB780u;
        // 0x1eb784: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb780) {
            ctx->pc = 0x1EB628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb628;
        }
    }
    ctx->pc = 0x1EB788u;
label_1eb788:
    // 0x1eb788: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1eb788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1eb78c: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x1eb78cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1eb790: 0x92030d81  lbu         $v1, 0xD81($s0)
    ctx->pc = 0x1eb790u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3457)));
    // 0x1eb794: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1EB794u;
    {
        const bool branch_taken_0x1eb794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB794u;
        // 0x1eb798: 0x2621021  addu        $v0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb794) {
            ctx->pc = 0x1EB8A8u;
            goto label_1eb8a8;
        }
    }
    ctx->pc = 0x1EB79Cu;
    // 0x1eb79c: 0xc07af10  jal         func_1EBC40
    ctx->pc = 0x1EB79Cu;
    SET_GPR_U32(ctx, 31, 0x1EB7A4u);
    ctx->pc = 0x1EB7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB79Cu;
    // 0x1eb7a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBC40u, 0x1EB79Cu, 0x1EB7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB7A4u;
label_1eb7a4:
    // 0x1eb7a4: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x1eb7a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1eb7a8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1EB7A8u;
    {
        const bool branch_taken_0x1eb7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7A8u;
        // 0x1eb7ac: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb7a8) {
            ctx->pc = 0x1EB8A4u;
            goto label_1eb8a4;
        }
    }
    ctx->pc = 0x1EB7B0u;
    // 0x1eb7b0: 0x24160050  addiu       $s6, $zero, 0x50
    ctx->pc = 0x1eb7b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1eb7b4: 0x34128420  ori         $s2, $zero, 0x8420
    ctx->pc = 0x1eb7b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
label_1eb7b8:
    // 0x1eb7b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1eb7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb7bc: 0xc07aed2  jal         func_1EBB48
    ctx->pc = 0x1EB7BCu;
    SET_GPR_U32(ctx, 31, 0x1EB7C4u);
    ctx->pc = 0x1EB7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB7BCu;
    // 0x1eb7c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBB48u, 0x1EB7BCu, 0x1EB7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB7C4u;
label_1eb7c4:
    // 0x1eb7c4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1EB7C4u;
    {
        const bool branch_taken_0x1eb7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7C4u;
        // 0x1eb7c8: 0x2361018  mult        $v0, $s1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb7c4) {
            ctx->pc = 0x1EB878u;
            goto label_1eb878;
        }
    }
    ctx->pc = 0x1EB7CCu;
    // 0x1eb7cc: 0x12340024  beq         $s1, $s4, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EB7CCu;
    {
        const bool branch_taken_0x1eb7cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x1EB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB7CCu;
        // 0x1eb7d0: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb7cc) {
            ctx->pc = 0x1EB860u;
            goto label_1eb860;
        }
    }
    ctx->pc = 0x1EB7D4u;
    // 0x1eb7d4: 0x2961018  mult        $v0, $s4, $s6
    ctx->pc = 0x1eb7d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eb7d8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1eb7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1eb7dc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1eb7dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1eb7e0: 0x24860020  addiu       $a2, $a0, 0x20
    ctx->pc = 0x1eb7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1eb7e4: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x1eb7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1eb7e8: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x1eb7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x1eb7ec: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1eb7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb7f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1eb7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1eb7f4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1eb7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1eb7f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1eb7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1eb7fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1eb7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1eb800: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1eb800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1eb804: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1eb804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x1eb808: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1eb808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1eb80c: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1eb80cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1eb810: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1eb810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1eb814: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x1eb814u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x1eb818: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1eb818u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1eb81c: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1eb81cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eb820: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1eb820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1eb824: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x1eb824u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x1eb828: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x1eb828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eb82c: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x1eb82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x1eb830: 0x90820038  lbu         $v0, 0x38($a0)
    ctx->pc = 0x1eb830u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1eb834: 0xa0a20038  sb          $v0, 0x38($a1)
    ctx->pc = 0x1eb834u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x1eb838: 0x90830039  lbu         $v1, 0x39($a0)
    ctx->pc = 0x1eb838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 57)));
    // 0x1eb83c: 0xa0a30039  sb          $v1, 0x39($a1)
    ctx->pc = 0x1eb83cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb840: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1eb840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1eb844: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x1eb844u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x1eb848: 0x90830040  lbu         $v1, 0x40($a0)
    ctx->pc = 0x1eb848u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1eb84c: 0xa0a30040  sb          $v1, 0x40($a1)
    ctx->pc = 0x1eb84cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb850: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1eb850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1eb854: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x1eb854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x1eb858: 0x90830048  lbu         $v1, 0x48($a0)
    ctx->pc = 0x1eb858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1eb85c: 0xa0a30048  sb          $v1, 0x48($a1)
    ctx->pc = 0x1eb85cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 3));
label_1eb860:
    // 0x1eb860: 0x92030d80  lbu         $v1, 0xD80($s0)
    ctx->pc = 0x1eb860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3456)));
    // 0x1eb864: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1eb864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1eb868: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x1eb868u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb86c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eb86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eb870: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EB870u;
    {
        const bool branch_taken_0x1eb870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB870u;
        // 0x1eb874: 0xa2030d80  sb          $v1, 0xD80($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3456), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb870) {
            ctx->pc = 0x1EB884u;
            goto label_1eb884;
        }
    }
    ctx->pc = 0x1EB878u;
label_1eb878:
    // 0x1eb878: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x1eb878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1eb87c: 0xc07ac3c  jal         func_1EB0F0
    ctx->pc = 0x1EB87Cu;
    SET_GPR_U32(ctx, 31, 0x1EB884u);
    ctx->pc = 0x1EB880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB87Cu;
    // 0x1eb880: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB0F0u, 0x1EB87Cu, 0x1EB884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB884u;
label_1eb884:
    // 0x1eb884: 0x92020d81  lbu         $v0, 0xD81($s0)
    ctx->pc = 0x1eb884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3457)));
    // 0x1eb888: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1eb888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1eb88c: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1eb88cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eb890: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1eb890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1eb894: 0x235182b  sltu        $v1, $s1, $s5
    ctx->pc = 0x1eb894u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1eb898: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1EB898u;
    {
        const bool branch_taken_0x1eb898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB898u;
        // 0x1eb89c: 0xa2020d81  sb          $v0, 0xD81($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3457), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb898) {
            ctx->pc = 0x1EB7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb7b8;
        }
    }
    ctx->pc = 0x1EB8A0u;
    // 0x1eb8a0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1eb8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1eb8a4:
    // 0x1eb8a4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1eb8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1eb8a8:
    // 0x1eb8a8: 0x90500d80  lbu         $s0, 0xD80($v0)
    ctx->pc = 0x1eb8a8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3456)));
    // 0x1eb8ac: 0x215182b  sltu        $v1, $s0, $s5
    ctx->pc = 0x1eb8acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1eb8b0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1EB8B0u;
    {
        const bool branch_taken_0x1eb8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8B0u;
        // 0x1eb8b4: 0x34118420  ori         $s1, $zero, 0x8420 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8b0) {
            ctx->pc = 0x1EB8E0u;
            goto label_1eb8e0;
        }
    }
    ctx->pc = 0x1EB8B8u;
    // 0x1eb8b8: 0x24120050  addiu       $s2, $zero, 0x50
    ctx->pc = 0x1eb8b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1eb8bc: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x1eb8bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1eb8c0:
    // 0x1eb8c0: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x1eb8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1eb8c4: 0xc07abea  jal         func_1EAFA8
    ctx->pc = 0x1EB8C4u;
    SET_GPR_U32(ctx, 31, 0x1EB8CCu);
    ctx->pc = 0x1EB8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB8C4u;
    // 0x1eb8c8: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFA8u, 0x1EB8C4u, 0x1EB8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB8CCu;
label_1eb8cc:
    // 0x1eb8cc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1eb8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1eb8d0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1eb8d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb8d4: 0x215182b  sltu        $v1, $s0, $s5
    ctx->pc = 0x1eb8d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1eb8d8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1EB8D8u;
    {
        const bool branch_taken_0x1eb8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8D8u;
        // 0x1eb8dc: 0x2121018  mult        $v0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8d8) {
            ctx->pc = 0x1EB8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb8c0;
        }
    }
    ctx->pc = 0x1EB8E0u;
label_1eb8e0:
    // 0x1eb8e0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1eb8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1eb8e4: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1eb8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1eb8e8: 0x90620d80  lbu         $v0, 0xD80($v1)
    ctx->pc = 0x1eb8e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3456)));
    // 0x1eb8ec: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EB8ECu;
    {
        const bool branch_taken_0x1eb8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB8ECu;
        // 0x1eb8f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb8ec) {
            ctx->pc = 0x1EB944u;
            goto label_1eb944;
        }
    }
    ctx->pc = 0x1EB8F4u;
    // 0x1eb8f4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1eb8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb8f8: 0x24140050  addiu       $s4, $zero, 0x50
    ctx->pc = 0x1eb8f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1eb8fc: 0x34128420  ori         $s2, $zero, 0x8420
    ctx->pc = 0x1eb8fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1eb900: 0x2341818  mult        $v1, $s1, $s4
    ctx->pc = 0x1eb900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1eb904: 0x0  nop
    ctx->pc = 0x1eb904u;
    // NOP
label_1eb908:
    // 0x1eb908: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1eb908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1eb90c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1eb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1eb910: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1eb910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb914: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1eb914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1eb918: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB918u;
    {
        const bool branch_taken_0x1eb918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB918u;
        // 0x1eb91c: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb918) {
            ctx->pc = 0x1EB930u;
            goto label_1eb930;
        }
    }
    ctx->pc = 0x1EB920u;
    // 0x1eb920: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1eb920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb924: 0xc07efcc  jal         func_1FBF30
    ctx->pc = 0x1EB924u;
    SET_GPR_U32(ctx, 31, 0x1EB92Cu);
    ctx->pc = 0x1EB928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB924u;
    // 0x1eb928: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBF30u, 0x1EB924u, 0x1EB92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB92Cu;
label_1eb92c:
    // 0x1eb92c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1eb92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1eb930:
    // 0x1eb930: 0x92020d80  lbu         $v0, 0xD80($s0)
    ctx->pc = 0x1eb930u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3456)));
    // 0x1eb934: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1eb934u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eb938: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1eb938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1eb93c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1EB93Cu;
    {
        const bool branch_taken_0x1eb93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB93Cu;
        // 0x1eb940: 0x2341818  mult        $v1, $s1, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb93c) {
            ctx->pc = 0x1EB908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb908;
        }
    }
    ctx->pc = 0x1EB944u;
label_1eb944:
    // 0x1eb944: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1eb944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1eb948: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1eb948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1eb94c: 0x90620d80  lbu         $v0, 0xD80($v1)
    ctx->pc = 0x1eb94cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3456)));
    // 0x1eb950: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EB950u;
    {
        const bool branch_taken_0x1eb950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB950u;
        // 0x1eb954: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb950) {
            ctx->pc = 0x1EB9E0u;
            goto label_1eb9e0;
        }
    }
    ctx->pc = 0x1EB958u;
    // 0x1eb958: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1eb958u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb95c: 0x24100050  addiu       $s0, $zero, 0x50
    ctx->pc = 0x1eb95cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1eb960: 0x34178420  ori         $s7, $zero, 0x8420
    ctx->pc = 0x1eb960u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1eb964: 0x34168000  ori         $s6, $zero, 0x8000
    ctx->pc = 0x1eb964u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1eb968: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x1eb968u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1eb96c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1eb96cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eb970: 0x2301818  mult        $v1, $s1, $s0
    ctx->pc = 0x1eb970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1eb974: 0x0  nop
    ctx->pc = 0x1eb974u;
    // NOP
label_1eb978:
    // 0x1eb978: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1eb978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1eb97c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x1eb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1eb980: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1eb980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eb984: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1eb984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1eb988: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1EB988u;
    {
        const bool branch_taken_0x1eb988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB988u;
        // 0x1eb98c: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb988) {
            ctx->pc = 0x1EB9CCu;
            goto label_1eb9cc;
        }
    }
    ctx->pc = 0x1EB990u;
    // 0x1eb990: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1eb990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb994: 0xc07af9c  jal         func_1EBE70
    ctx->pc = 0x1EB994u;
    SET_GPR_U32(ctx, 31, 0x1EB99Cu);
    ctx->pc = 0x1EB998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB994u;
    // 0x1eb998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBE70u, 0x1EB994u, 0x1EB99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB99Cu;
label_1eb99c:
    // 0x1eb99c: 0x2301818  mult        $v1, $s1, $s0
    ctx->pc = 0x1eb99cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1eb9a0: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1eb9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1eb9a4: 0x562021  addu        $a0, $v0, $s6
    ctx->pc = 0x1eb9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1eb9a8: 0x8c830450  lw          $v1, 0x450($a0)
    ctx->pc = 0x1eb9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
    // 0x1eb9ac: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB9ACu;
    {
        const bool branch_taken_0x1eb9ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eb9ac) {
            ctx->pc = 0x1EB9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB9ACu;
            // 0x1eb9b0: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB9CCu;
            goto label_1eb9cc;
        }
    }
    ctx->pc = 0x1EB9B4u;
    // 0x1eb9b4: 0x8c820464  lw          $v0, 0x464($a0)
    ctx->pc = 0x1eb9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1124)));
    // 0x1eb9b8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eb9bc: 0x9043018c  lbu         $v1, 0x18C($v0)
    ctx->pc = 0x1eb9bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 396)));
    // 0x1eb9c0: 0x50750001  beql        $v1, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EB9C0u;
    {
        const bool branch_taken_0x1eb9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x1eb9c0) {
            ctx->pc = 0x1EB9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EB9C0u;
            // 0x1eb9c4: 0xa0940468  sb          $s4, 0x468($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 1128), (uint8_t)GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EB9C8u;
            goto label_1eb9c8;
        }
    }
    ctx->pc = 0x1EB9C8u;
label_1eb9c8:
    // 0x1eb9c8: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1eb9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1eb9cc:
    // 0x1eb9cc: 0x92420d80  lbu         $v0, 0xD80($s2)
    ctx->pc = 0x1eb9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3456)));
    // 0x1eb9d0: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1eb9d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1eb9d4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1eb9d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1eb9d8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1EB9D8u;
    {
        const bool branch_taken_0x1eb9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB9D8u;
        // 0x1eb9dc: 0x2301818  mult        $v1, $s1, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb9d8) {
            ctx->pc = 0x1EB978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb978;
        }
    }
    ctx->pc = 0x1EB9E0u;
label_1eb9e0:
    // 0x1eb9e0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1eb9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1eb9e4: 0x2622821  addu        $a1, $s3, $v0
    ctx->pc = 0x1eb9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1eb9e8: 0x90a30d80  lbu         $v1, 0xD80($a1)
    ctx->pc = 0x1eb9e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3456)));
    // 0x1eb9ec: 0x90a40d81  lbu         $a0, 0xD81($a1)
    ctx->pc = 0x1eb9ecu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3457)));
    // 0x1eb9f0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1eb9f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb9f4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x1eb9f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eb9f8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1eb9f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1eb9fc: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1EB9FCu;
    {
        const bool branch_taken_0x1eb9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB9FCu;
        // 0x1eba00: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb9fc) {
            ctx->pc = 0x1EBB18u;
            goto label_1ebb18;
        }
    }
    ctx->pc = 0x1EBA04u;
    // 0x1eba04: 0x34178000  ori         $s7, $zero, 0x8000
    ctx->pc = 0x1eba04u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1eba08: 0x24160050  addiu       $s6, $zero, 0x50
    ctx->pc = 0x1eba08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1eba0c: 0x34158420  ori         $s5, $zero, 0x8420
    ctx->pc = 0x1eba0cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1eba10: 0x2362018  mult        $a0, $s1, $s6
    ctx->pc = 0x1eba10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1eba14: 0x0  nop
    ctx->pc = 0x1eba14u;
    // NOP
label_1eba18:
    // 0x1eba18: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x1eba18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x1eba1c: 0x578021  addu        $s0, $v0, $s7
    ctx->pc = 0x1eba1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x1eba20: 0x92030468  lbu         $v1, 0x468($s0)
    ctx->pc = 0x1eba20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1128)));
    // 0x1eba24: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1EBA24u;
    {
        const bool branch_taken_0x1eba24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA24u;
        // 0x1eba28: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba24) {
            ctx->pc = 0x1EBB08u;
            goto label_1ebb08;
        }
    }
    ctx->pc = 0x1EBA2Cu;
    // 0x1eba2c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x1eba2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x1eba30: 0xc07ac3c  jal         func_1EB0F0
    ctx->pc = 0x1EBA30u;
    SET_GPR_U32(ctx, 31, 0x1EBA38u);
    ctx->pc = 0x1EBA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBA30u;
    // 0x1eba34: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB0F0u, 0x1EBA30u, 0x1EBA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBA38u;
label_1eba38:
    // 0x1eba38: 0x8e030464  lw          $v1, 0x464($s0)
    ctx->pc = 0x1eba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1124)));
    // 0x1eba3c: 0x264cffff  addiu       $t4, $s2, -0x1
    ctx->pc = 0x1eba3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1eba40: 0x8e020450  lw          $v0, 0x450($s0)
    ctx->pc = 0x1eba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1104)));
    // 0x1eba44: 0x232202a  slt         $a0, $s1, $s2
    ctx->pc = 0x1eba44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1eba48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eba48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eba4c: 0x1080002a  beqz        $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1EBA4Cu;
    {
        const bool branch_taken_0x1eba4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA4Cu;
        // 0x1eba50: 0xa040018c  sb          $zero, 0x18C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 396), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba4c) {
            ctx->pc = 0x1EBAF8u;
            goto label_1ebaf8;
        }
    }
    ctx->pc = 0x1EBA54u;
    // 0x1eba54: 0x2361818  mult        $v1, $s1, $s6
    ctx->pc = 0x1eba54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1eba58: 0x34028440  ori         $v0, $zero, 0x8440
    ctx->pc = 0x1eba58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33856);
    // 0x1eba5c: 0x2515823  subu        $t3, $s2, $s1
    ctx->pc = 0x1eba5cu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1eba60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1eba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1eba64: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1eba64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1eba68: 0x535021  addu        $t2, $v0, $s3
    ctx->pc = 0x1eba68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1eba6c: 0x734821  addu        $t1, $v1, $s3
    ctx->pc = 0x1eba6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_1eba70:
    // 0x1eba70: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1eba70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1eba74: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x1eba74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1eba78: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x1eba78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1eba7c: 0x8d25000c  lw          $a1, 0xC($t1)
    ctx->pc = 0x1eba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x1eba80: 0x8d260010  lw          $a2, 0x10($t1)
    ctx->pc = 0x1eba80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1eba84: 0x8d270014  lw          $a3, 0x14($t1)
    ctx->pc = 0x1eba84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x1eba88: 0xa122ffb0  sb          $v0, -0x50($t1)
    ctx->pc = 0x1eba88u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4294967216), (uint8_t)GPR_U32(ctx, 2));
    // 0x1eba8c: 0xad23ffb4  sw          $v1, -0x4C($t1)
    ctx->pc = 0x1eba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967220), GPR_U32(ctx, 3));
    // 0x1eba90: 0xad24ffb8  sw          $a0, -0x48($t1)
    ctx->pc = 0x1eba90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967224), GPR_U32(ctx, 4));
    // 0x1eba94: 0xad25ffbc  sw          $a1, -0x44($t1)
    ctx->pc = 0x1eba94u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967228), GPR_U32(ctx, 5));
    // 0x1eba98: 0xad26ffc0  sw          $a2, -0x40($t1)
    ctx->pc = 0x1eba98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967232), GPR_U32(ctx, 6));
    // 0x1eba9c: 0xad27ffc4  sw          $a3, -0x3C($t1)
    ctx->pc = 0x1eba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967236), GPR_U32(ctx, 7));
    // 0x1ebaa0: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x1ebaa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1ebaa4: 0xf921ffd0  sqc2        $vf1, -0x30($t1)
    ctx->pc = 0x1ebaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 4294967248), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ebaa8: 0x8d280030  lw          $t0, 0x30($t1)
    ctx->pc = 0x1ebaa8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x1ebaac: 0x254a0050  addiu       $t2, $t2, 0x50
    ctx->pc = 0x1ebaacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
    // 0x1ebab0: 0xc5200034  lwc1        $f0, 0x34($t1)
    ctx->pc = 0x1ebab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ebab4: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x1ebab4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x1ebab8: 0x91220038  lbu         $v0, 0x38($t1)
    ctx->pc = 0x1ebab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 56)));
    // 0x1ebabc: 0x91230039  lbu         $v1, 0x39($t1)
    ctx->pc = 0x1ebabcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 57)));
    // 0x1ebac0: 0x8d24003c  lw          $a0, 0x3C($t1)
    ctx->pc = 0x1ebac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 60)));
    // 0x1ebac4: 0x91250040  lbu         $a1, 0x40($t1)
    ctx->pc = 0x1ebac4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 64)));
    // 0x1ebac8: 0x8d260044  lw          $a2, 0x44($t1)
    ctx->pc = 0x1ebac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x1ebacc: 0x91270048  lbu         $a3, 0x48($t1)
    ctx->pc = 0x1ebaccu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 72)));
    // 0x1ebad0: 0xad28ffe0  sw          $t0, -0x20($t1)
    ctx->pc = 0x1ebad0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967264), GPR_U32(ctx, 8));
    // 0x1ebad4: 0xe520ffe4  swc1        $f0, -0x1C($t1)
    ctx->pc = 0x1ebad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294967268), bits); }
    // 0x1ebad8: 0xa122ffe8  sb          $v0, -0x18($t1)
    ctx->pc = 0x1ebad8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4294967272), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ebadc: 0xa123ffe9  sb          $v1, -0x17($t1)
    ctx->pc = 0x1ebadcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4294967273), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ebae0: 0xad24ffec  sw          $a0, -0x14($t1)
    ctx->pc = 0x1ebae0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967276), GPR_U32(ctx, 4));
    // 0x1ebae4: 0xa125fff0  sb          $a1, -0x10($t1)
    ctx->pc = 0x1ebae4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4294967280), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ebae8: 0xad26fff4  sw          $a2, -0xC($t1)
    ctx->pc = 0x1ebae8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294967284), GPR_U32(ctx, 6));
    // 0x1ebaec: 0xa127fff8  sb          $a3, -0x8($t1)
    ctx->pc = 0x1ebaecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4294967288), (uint8_t)GPR_U32(ctx, 7));
    // 0x1ebaf0: 0x1560ffdf  bnez        $t3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1EBAF0u;
    {
        const bool branch_taken_0x1ebaf0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAF0u;
        // 0x1ebaf4: 0x25290050  addiu       $t1, $t1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebaf0) {
            ctx->pc = 0x1EBA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eba70;
        }
    }
    ctx->pc = 0x1EBAF8u;
label_1ebaf8:
    // 0x1ebaf8: 0x92820d81  lbu         $v0, 0xD81($s4)
    ctx->pc = 0x1ebaf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3457)));
    // 0x1ebafc: 0x180902d  daddu       $s2, $t4, $zero
    ctx->pc = 0x1ebafcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ebb00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ebb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ebb04: 0xa2820d81  sb          $v0, 0xD81($s4)
    ctx->pc = 0x1ebb04u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3457), (uint8_t)GPR_U32(ctx, 2));
label_1ebb08:
    // 0x1ebb08: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x1ebb08u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1ebb0c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1ebb0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ebb10: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1EBB10u;
    {
        const bool branch_taken_0x1ebb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB10u;
        // 0x1ebb14: 0x2362018  mult        $a0, $s1, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebb10) {
            ctx->pc = 0x1EBA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eba18;
        }
    }
    ctx->pc = 0x1EBB18u;
label_1ebb18:
    // 0x1ebb18: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1ebb18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ebb1c:
    // 0x1ebb1c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1ebb1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1ebb20:
    // 0x1ebb20: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1ebb20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ebb24: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1ebb24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ebb28: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ebb28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ebb2c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1ebb2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ebb30: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1ebb30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ebb34: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x1ebb34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ebb38: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x1ebb38u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ebb3c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x1ebb3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ebb40: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBB40u;
        // 0x1ebb44: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBB48u;
}
