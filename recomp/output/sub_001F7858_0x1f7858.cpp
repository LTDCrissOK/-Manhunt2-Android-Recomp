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

// Function: sub_001F7858
// Address: 0x1f7858 - 0x1f7b80
void sub_001F7858_0x1f7858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7858_0x1f7858");
#endif

    switch (ctx->pc) {
        case 0x1f7990u: goto label_1f7990;
        case 0x1f79c8u: goto label_1f79c8;
        case 0x1f7b3cu: goto label_1f7b3c;
        case 0x1f7b4cu: goto label_1f7b4c;
        default: break;
    }

    ctx->pc = 0x1f7858u;

    // 0x1f7858: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f7858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f785c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f785cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7860: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f7860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f7864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7868: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f7868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f786c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f786cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f7870: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f7870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f7874: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f7874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f7878: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f7878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f787c: 0x8e0500f8  lw          $a1, 0xF8($s0)
    ctx->pc = 0x1f787cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x1f7880: 0x2ca235e2  sltiu       $v0, $a1, 0x35E2
    ctx->pc = 0x1f7880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)13794) ? 1 : 0);
    // 0x1f7884: 0x504000b6  beql        $v0, $zero, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1F7884u;
    {
        const bool branch_taken_0x1f7884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7884) {
            ctx->pc = 0x1F7888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7884u;
            // 0x1f7888: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7B60u;
            goto label_1f7b60;
        }
    }
    ctx->pc = 0x1F788Cu;
    // 0x1f788c: 0x920300fc  lbu         $v1, 0xFC($s0)
    ctx->pc = 0x1f788cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x1f7890: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1f7890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f7894: 0x544000b2  bnel        $v0, $zero, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1F7894u;
    {
        const bool branch_taken_0x1f7894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7894) {
            ctx->pc = 0x1F7898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7894u;
            // 0x1f7898: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7B60u;
            goto label_1f7b60;
        }
    }
    ctx->pc = 0x1F789Cu;
    // 0x1f789c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1f789cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f78a0: 0x106600ae  beq         $v1, $a2, . + 4 + (0xAE << 2)
    ctx->pc = 0x1F78A0u;
    {
        const bool branch_taken_0x1f78a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1F78A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78A0u;
        // 0x1f78a4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78a0) {
            ctx->pc = 0x1F7B5Cu;
            goto label_1f7b5c;
        }
    }
    ctx->pc = 0x1F78A8u;
    // 0x1f78a8: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x1f78a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f78ac: 0x8c8313dc  lw          $v1, 0x13DC($a0)
    ctx->pc = 0x1f78acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5084)));
    // 0x1f78b0: 0x54a30009  bnel        $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F78B0u;
    {
        const bool branch_taken_0x1f78b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f78b0) {
            ctx->pc = 0x1F78B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F78B0u;
            // 0x1f78b4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F78D8u;
            goto label_1f78d8;
        }
    }
    ctx->pc = 0x1F78B8u;
    // 0x1f78b8: 0x920300fc  lbu         $v1, 0xFC($s0)
    ctx->pc = 0x1f78b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x1f78bc: 0x8c8213e0  lw          $v0, 0x13E0($a0)
    ctx->pc = 0x1f78bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5088)));
    // 0x1f78c0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F78C0u;
    {
        const bool branch_taken_0x1f78c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f78c0) {
            ctx->pc = 0x1F78C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F78C0u;
            // 0x1f78c4: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F78D8u;
            goto label_1f78d8;
        }
    }
    ctx->pc = 0x1F78C8u;
    // 0x1f78c8: 0x240235e3  addiu       $v0, $zero, 0x35E3
    ctx->pc = 0x1f78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x1f78cc: 0xac8613e0  sw          $a2, 0x13E0($a0)
    ctx->pc = 0x1f78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5088), GPR_U32(ctx, 6));
    // 0x1f78d0: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1F78D0u;
    {
        const bool branch_taken_0x1f78d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78D0u;
        // 0x1f78d4: 0xac8213dc  sw          $v0, 0x13DC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78d0) {
            ctx->pc = 0x1F7B5Cu;
            goto label_1f7b5c;
        }
    }
    ctx->pc = 0x1F78D8u;
label_1f78d8:
    // 0x1f78d8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F78D8u;
    {
        const bool branch_taken_0x1f78d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f78d8) {
            ctx->pc = 0x1F78DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F78D8u;
            // 0x1f78dc: 0x92080180  lbu         $t0, 0x180($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 384)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F78F0u;
            goto label_1f78f0;
        }
    }
    ctx->pc = 0x1F78E0u;
    // 0x1f78e0: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x1f78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x1f78e4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F78E4u;
    {
        const bool branch_taken_0x1f78e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f78e4) {
            ctx->pc = 0x1F78E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F78E4u;
            // 0x1f78e8: 0xae000144  sw          $zero, 0x144($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F78ECu;
            goto label_1f78ec;
        }
    }
    ctx->pc = 0x1F78ECu;
label_1f78ec:
    // 0x1f78ec: 0x92080180  lbu         $t0, 0x180($s0)
    ctx->pc = 0x1f78ecu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 384)));
label_1f78f0:
    // 0x1f78f0: 0x260235ac  addiu       $v0, $s0, 0x35AC
    ctx->pc = 0x1f78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 13740));
    // 0x1f78f4: 0x9206010c  lbu         $a2, 0x10C($s0)
    ctx->pc = 0x1f78f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1f78f8: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1f78f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1f78fc: 0x483821  addu        $a3, $v0, $t0
    ctx->pc = 0x1f78fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1f7900: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x1f7900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1f7904: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x1f7904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f7908: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1f7908u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f790c: 0x92040008  lbu         $a0, 0x8($s0)
    ctx->pc = 0x1f790cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f7910: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1f7910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1f7914: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7914u;
    {
        const bool branch_taken_0x1f7914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7914u;
        // 0x1f7918: 0x659818  mult        $s3, $v1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7914) {
            ctx->pc = 0x1F7930u;
            goto label_1f7930;
        }
    }
    ctx->pc = 0x1F791Cu;
    // 0x1f791c: 0x90f10000  lbu         $s1, 0x0($a3)
    ctx->pc = 0x1f791cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f7920: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1f7920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f7924: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x1f7924u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7928: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1F7928u;
    {
        const bool branch_taken_0x1f7928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7928u;
        // 0x1f792c: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7928) {
            ctx->pc = 0x1F79DCu;
            goto label_1f79dc;
        }
    }
    ctx->pc = 0x1F7930u;
label_1f7930:
    // 0x1f7930: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x1f7930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1f7934: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x1f7934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f7938: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x1f7938u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f793c: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x1f793cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f7940: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x1f7940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7944: 0x241419e0  addiu       $s4, $zero, 0x19E0
    ctx->pc = 0x1f7944u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6624));
    // 0x1f7948: 0x1142818  mult        $a1, $t0, $s4
    ctx->pc = 0x1f7948u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1f794c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f794cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f7950: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f7950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f7954: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f7954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f7958: 0x90513550  lbu         $s1, 0x3550($v0)
    ctx->pc = 0x1f7958u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13648)));
    // 0x1f795c: 0x2269018  mult        $s2, $s1, $a2
    ctx->pc = 0x1f795cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x1f7960: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x1f7960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f7964: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x1f7964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1f7968: 0x8c620204  lw          $v0, 0x204($v1)
    ctx->pc = 0x1f7968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x1f796c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1f796cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f7970: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7970u;
    {
        const bool branch_taken_0x1f7970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7970u;
        // 0x1f7974: 0x309500ff  andi        $s5, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7970) {
            ctx->pc = 0x1F7998u;
            goto label_1f7998;
        }
    }
    ctx->pc = 0x1F7978u;
    // 0x1f7978: 0x8e050144  lw          $a1, 0x144($s0)
    ctx->pc = 0x1f7978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x1f797c: 0x50a00078  beql        $a1, $zero, . + 4 + (0x78 << 2)
    ctx->pc = 0x1F797Cu;
    {
        const bool branch_taken_0x1f797c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f797c) {
            ctx->pc = 0x1F7980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F797Cu;
            // 0x1f7980: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7B60u;
            goto label_1f7b60;
        }
    }
    ctx->pc = 0x1F7984u;
    // 0x1f7984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7988: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F7988u;
    SET_GPR_U32(ctx, 31, 0x1F7990u);
    ctx->pc = 0x1F798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7988u;
    // 0x1f798c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F7988u, 0x1F7990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7990u;
label_1f7990:
    // 0x1f7990: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1F7990u;
    {
        const bool branch_taken_0x1f7990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7990u;
        // 0x1f7994: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7990) {
            ctx->pc = 0x1F7B60u;
            goto label_1f7b60;
        }
    }
    ctx->pc = 0x1F7998u;
label_1f7998:
    // 0x1f7998: 0x8c6501e4  lw          $a1, 0x1E4($v1)
    ctx->pc = 0x1f7998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 484)));
    // 0x1f799c: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F799Cu;
    {
        const bool branch_taken_0x1f799c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f799c) {
            ctx->pc = 0x1F79A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F799Cu;
            // 0x1f79a0: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F79E0u;
            goto label_1f79e0;
        }
    }
    ctx->pc = 0x1F79A4u;
    // 0x1f79a4: 0x8c620190  lw          $v0, 0x190($v1)
    ctx->pc = 0x1f79a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 400)));
    // 0x1f79a8: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x1f79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f79ac: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1f79acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f79b0: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1f79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1f79b4: 0x8c444f98  lw          $a0, 0x4F98($v0)
    ctx->pc = 0x1f79b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20376)));
    // 0x1f79b8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F79B8u;
    {
        const bool branch_taken_0x1f79b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79B8u;
        // 0x1f79bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79b8) {
            ctx->pc = 0x1F79C8u;
            goto label_1f79c8;
        }
    }
    ctx->pc = 0x1F79C0u;
    // 0x1f79c0: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F79C0u;
    SET_GPR_U32(ctx, 31, 0x1F79C8u);
    ctx->pc = 0x1F79C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F79C0u;
    // 0x1f79c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F79C0u, 0x1F79C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F79C8u;
label_1f79c8:
    // 0x1f79c8: 0x92020180  lbu         $v0, 0x180($s0)
    ctx->pc = 0x1f79c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1f79cc: 0x541818  mult        $v1, $v0, $s4
    ctx->pc = 0x1f79ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f79d0: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1f79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f79d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f79d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f79d8: 0xac4001e4  sw          $zero, 0x1E4($v0)
    ctx->pc = 0x1f79d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 484), GPR_U32(ctx, 0));
label_1f79dc:
    // 0x1f79dc: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x1f79dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_1f79e0:
    // 0x1f79e0: 0xae130164  sw          $s3, 0x164($s0)
    ctx->pc = 0x1f79e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 19));
    // 0x1f79e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F79E4u;
    {
        const bool branch_taken_0x1f79e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F79E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F79E4u;
        // 0x1f79e8: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f79e4) {
            ctx->pc = 0x1F79F4u;
            goto label_1f79f4;
        }
    }
    ctx->pc = 0x1F79ECu;
    // 0x1f79ec: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1f79ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1f79f0: 0xa2000148  sb          $zero, 0x148($s0)
    ctx->pc = 0x1f79f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
label_1f79f4:
    // 0x1f79f4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f79f8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F79F8u;
    {
        const bool branch_taken_0x1f79f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f79f8) {
            ctx->pc = 0x1F79FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F79F8u;
            // 0x1f79fc: 0xa2000148  sb          $zero, 0x148($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7A14u;
            goto label_1f7a14;
        }
    }
    ctx->pc = 0x1F7A00u;
    // 0x1f7a00: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1f7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1f7a04: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7A04u;
    {
        const bool branch_taken_0x1f7a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7a04) {
            ctx->pc = 0x1F7A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7A04u;
            // 0x1f7a08: 0xa2000148  sb          $zero, 0x148($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 328), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7A14u;
            goto label_1f7a14;
        }
    }
    ctx->pc = 0x1F7A0Cu;
    // 0x1f7a0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7A0Cu;
    {
        const bool branch_taken_0x1f7a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7A0Cu;
        // 0x1f7a10: 0x8e12014c  lw          $s2, 0x14C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7a0c) {
            ctx->pc = 0x1F7A18u;
            goto label_1f7a18;
        }
    }
    ctx->pc = 0x1F7A14u;
label_1f7a14:
    // 0x1f7a14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f7a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f7a18:
    // 0x1f7a18: 0x92040180  lbu         $a0, 0x180($s0)
    ctx->pc = 0x1f7a18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x1f7a1c: 0x240319e0  addiu       $v1, $zero, 0x19E0
    ctx->pc = 0x1f7a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6624));
    // 0x1f7a20: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x1f7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1f7a24: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x1f7a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
    // 0x1f7a28: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x1f7a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1f7a2c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x1f7a2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f7a30: 0x260800f0  addiu       $t0, $s0, 0xF0
    ctx->pc = 0x1f7a30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x1f7a34: 0x26060130  addiu       $a2, $s0, 0x130
    ctx->pc = 0x1f7a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1f7a38: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x1f7a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x1f7a3c: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x1f7a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1f7a40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f7a44: 0x24420190  addiu       $v0, $v0, 0x190
    ctx->pc = 0x1f7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x1f7a48: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1f7a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1f7a4c: 0x95030004  lhu         $v1, 0x4($t0)
    ctx->pc = 0x1f7a4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1f7a50: 0xa4430004  sh          $v1, 0x4($v0)
    ctx->pc = 0x1f7a50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f7a54: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1f7a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1f7a58: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1f7a58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1f7a5c: 0x9103000c  lbu         $v1, 0xC($t0)
    ctx->pc = 0x1f7a5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x1f7a60: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x1f7a60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f7a64: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x1f7a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x1f7a68: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x1f7a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x1f7a6c: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x1f7a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1f7a70: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1f7a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1f7a74: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x1f7a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7a78: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1f7a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1f7a7c: 0x9103001c  lbu         $v1, 0x1C($t0)
    ctx->pc = 0x1f7a7cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x1f7a80: 0xa043001c  sb          $v1, 0x1C($v0)
    ctx->pc = 0x1f7a80u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f7a84: 0xc5000020  lwc1        $f0, 0x20($t0)
    ctx->pc = 0x1f7a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7a88: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1f7a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1f7a8c: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x1f7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x1f7a90: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1f7a90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1f7a94: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x1f7a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7a98: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1f7a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1f7a9c: 0x9103002c  lbu         $v1, 0x2C($t0)
    ctx->pc = 0x1f7a9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x1f7aa0: 0xa043002c  sb          $v1, 0x2C($v0)
    ctx->pc = 0x1f7aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f7aa4: 0xc5000030  lwc1        $f0, 0x30($t0)
    ctx->pc = 0x1f7aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7aa8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1f7aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1f7aac: 0x8d030034  lw          $v1, 0x34($t0)
    ctx->pc = 0x1f7aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x1f7ab0: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x1f7ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x1f7ab4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1f7ab4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1f7ab8: 0xf8410040  sqc2        $vf1, 0x40($v0)
    ctx->pc = 0x1f7ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f7abc: 0x8d070050  lw          $a3, 0x50($t0)
    ctx->pc = 0x1f7abcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x1f7ac0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f7ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ac4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f7ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7acc: 0xac470050  sw          $a3, 0x50($v0)
    ctx->pc = 0x1f7accu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 7));
    // 0x1f7ad0: 0x8d030054  lw          $v1, 0x54($t0)
    ctx->pc = 0x1f7ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x1f7ad4: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x1f7ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x1f7ad8: 0x91070058  lbu         $a3, 0x58($t0)
    ctx->pc = 0x1f7ad8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 88)));
    // 0x1f7adc: 0xa0470058  sb          $a3, 0x58($v0)
    ctx->pc = 0x1f7adcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 88), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f7ae0: 0x8d03005c  lw          $v1, 0x5C($t0)
    ctx->pc = 0x1f7ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 92)));
    // 0x1f7ae4: 0xac43005c  sw          $v1, 0x5C($v0)
    ctx->pc = 0x1f7ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 3));
    // 0x1f7ae8: 0x8d070060  lw          $a3, 0x60($t0)
    ctx->pc = 0x1f7ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x1f7aec: 0xac470060  sw          $a3, 0x60($v0)
    ctx->pc = 0x1f7aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 7));
    // 0x1f7af0: 0x91030064  lbu         $v1, 0x64($t0)
    ctx->pc = 0x1f7af0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 100)));
    // 0x1f7af4: 0xa0430064  sb          $v1, 0x64($v0)
    ctx->pc = 0x1f7af4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f7af8: 0x8d070068  lw          $a3, 0x68($t0)
    ctx->pc = 0x1f7af8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 104)));
    // 0x1f7afc: 0xac470068  sw          $a3, 0x68($v0)
    ctx->pc = 0x1f7afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 7));
    // 0x1f7b00: 0x8d03006c  lw          $v1, 0x6C($t0)
    ctx->pc = 0x1f7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 108)));
    // 0x1f7b04: 0xac43006c  sw          $v1, 0x6C($v0)
    ctx->pc = 0x1f7b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 3));
    // 0x1f7b08: 0x8d070070  lw          $a3, 0x70($t0)
    ctx->pc = 0x1f7b08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 112)));
    // 0x1f7b0c: 0xac470070  sw          $a3, 0x70($v0)
    ctx->pc = 0x1f7b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 7));
    // 0x1f7b10: 0x8d030074  lw          $v1, 0x74($t0)
    ctx->pc = 0x1f7b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 116)));
    // 0x1f7b14: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x1f7b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x1f7b18: 0x91070078  lbu         $a3, 0x78($t0)
    ctx->pc = 0x1f7b18u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 120)));
    // 0x1f7b1c: 0xa0470078  sb          $a3, 0x78($v0)
    ctx->pc = 0x1f7b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f7b20: 0x91030079  lbu         $v1, 0x79($t0)
    ctx->pc = 0x1f7b20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 121)));
    // 0x1f7b24: 0xa0430079  sb          $v1, 0x79($v0)
    ctx->pc = 0x1f7b24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 121), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f7b28: 0xc500007c  lwc1        $f0, 0x7C($t0)
    ctx->pc = 0x1f7b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7b2c: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1f7b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x1f7b30: 0x91030080  lbu         $v1, 0x80($t0)
    ctx->pc = 0x1f7b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x1f7b34: 0xc07dee0  jal         func_1F7B80
    ctx->pc = 0x1F7B34u;
    SET_GPR_U32(ctx, 31, 0x1F7B3Cu);
    ctx->pc = 0x1F7B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B34u;
    // 0x1f7b38: 0xa0430080  sb          $v1, 0x80($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7B80u, 0x1F7B34u, 0x1F7B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B3Cu;
label_1f7b3c:
    // 0x1f7b3c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7B3Cu;
    {
        const bool branch_taken_0x1f7b3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B3Cu;
        // 0x1f7b40: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b3c) {
            ctx->pc = 0x1F7B50u;
            goto label_1f7b50;
        }
    }
    ctx->pc = 0x1F7B44u;
    // 0x1f7b44: 0xc07df32  jal         func_1F7CC8
    ctx->pc = 0x1F7B44u;
    SET_GPR_U32(ctx, 31, 0x1F7B4Cu);
    ctx->pc = 0x1F7B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B44u;
    // 0x1f7b48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7CC8u, 0x1F7B44u, 0x1F7B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B4Cu;
label_1f7b4c:
    // 0x1f7b4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f7b50:
    // 0x1f7b50: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x1f7b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x1f7b54: 0xa2020169  sb          $v0, 0x169($s0)
    ctx->pc = 0x1f7b54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 361), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f7b58: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x1f7b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
label_1f7b5c:
    // 0x1f7b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f7b60:
    // 0x1f7b60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f7b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7b64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f7b64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7b68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f7b68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7b6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f7b6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7b70: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f7b70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f7b74: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f7b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7b78: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B78u;
        // 0x1f7b7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7B80u;
}
