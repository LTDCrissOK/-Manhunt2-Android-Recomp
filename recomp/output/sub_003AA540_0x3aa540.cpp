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

// Function: sub_003AA540
// Address: 0x3aa540 - 0x3aa620
void sub_003AA540_0x3aa540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA540_0x3aa540");
#endif

    switch (ctx->pc) {
        case 0x3aa540u: goto label_3aa540;
        case 0x3aa544u: goto label_3aa544;
        case 0x3aa548u: goto label_3aa548;
        case 0x3aa54cu: goto label_3aa54c;
        case 0x3aa550u: goto label_3aa550;
        case 0x3aa554u: goto label_3aa554;
        case 0x3aa558u: goto label_3aa558;
        case 0x3aa55cu: goto label_3aa55c;
        case 0x3aa560u: goto label_3aa560;
        case 0x3aa564u: goto label_3aa564;
        case 0x3aa568u: goto label_3aa568;
        case 0x3aa56cu: goto label_3aa56c;
        case 0x3aa570u: goto label_3aa570;
        case 0x3aa574u: goto label_3aa574;
        case 0x3aa578u: goto label_3aa578;
        case 0x3aa57cu: goto label_3aa57c;
        case 0x3aa580u: goto label_3aa580;
        case 0x3aa584u: goto label_3aa584;
        case 0x3aa588u: goto label_3aa588;
        case 0x3aa58cu: goto label_3aa58c;
        case 0x3aa590u: goto label_3aa590;
        case 0x3aa594u: goto label_3aa594;
        case 0x3aa598u: goto label_3aa598;
        case 0x3aa59cu: goto label_3aa59c;
        case 0x3aa5a0u: goto label_3aa5a0;
        case 0x3aa5a4u: goto label_3aa5a4;
        case 0x3aa5a8u: goto label_3aa5a8;
        case 0x3aa5acu: goto label_3aa5ac;
        case 0x3aa5b0u: goto label_3aa5b0;
        case 0x3aa5b4u: goto label_3aa5b4;
        case 0x3aa5b8u: goto label_3aa5b8;
        case 0x3aa5bcu: goto label_3aa5bc;
        case 0x3aa5c0u: goto label_3aa5c0;
        case 0x3aa5c4u: goto label_3aa5c4;
        case 0x3aa5c8u: goto label_3aa5c8;
        case 0x3aa5ccu: goto label_3aa5cc;
        case 0x3aa5d0u: goto label_3aa5d0;
        case 0x3aa5d4u: goto label_3aa5d4;
        case 0x3aa5d8u: goto label_3aa5d8;
        case 0x3aa5dcu: goto label_3aa5dc;
        case 0x3aa5e0u: goto label_3aa5e0;
        case 0x3aa5e4u: goto label_3aa5e4;
        case 0x3aa5e8u: goto label_3aa5e8;
        case 0x3aa5ecu: goto label_3aa5ec;
        case 0x3aa5f0u: goto label_3aa5f0;
        case 0x3aa5f4u: goto label_3aa5f4;
        case 0x3aa5f8u: goto label_3aa5f8;
        case 0x3aa5fcu: goto label_3aa5fc;
        case 0x3aa600u: goto label_3aa600;
        case 0x3aa604u: goto label_3aa604;
        case 0x3aa608u: goto label_3aa608;
        case 0x3aa60cu: goto label_3aa60c;
        case 0x3aa610u: goto label_3aa610;
        case 0x3aa614u: goto label_3aa614;
        case 0x3aa618u: goto label_3aa618;
        case 0x3aa61cu: goto label_3aa61c;
        default: break;
    }

    ctx->pc = 0x3aa540u;

label_3aa540:
    // 0x3aa540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3aa544:
    // 0x3aa544: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3aa544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aa548:
    // 0x3aa548: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_3aa54c:
    if (ctx->pc == 0x3AA54Cu) {
        ctx->pc = 0x3AA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA548u;
        // 0x3aa54c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA550u;
        goto label_3aa550;
    }
    ctx->pc = 0x3AA548u;
    {
        const bool branch_taken_0x3aa548 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA548u;
        // 0x3aa54c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa548) {
            ctx->pc = 0x3AA570u;
            goto label_3aa570;
        }
    }
    ctx->pc = 0x3AA550u;
label_3aa550:
    // 0x3aa550: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3aa554:
    // 0x3aa554: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3aa558:
    // 0x3aa558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa55c:
    // 0x3aa55c: 0x2484ee40  addiu       $a0, $a0, -0x11C0
    ctx->pc = 0x3aa55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962752));
label_3aa560:
    // 0x3aa560: 0x24a5ed90  addiu       $a1, $a1, -0x1270
    ctx->pc = 0x3aa560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962576));
label_3aa564:
    // 0x3aa564: 0x80ea7ec  j           func_3A9FB0
label_3aa568:
    if (ctx->pc == 0x3AA568u) {
        ctx->pc = 0x3AA568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA564u;
        // 0x3aa568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA56Cu;
        goto label_3aa56c;
    }
    ctx->pc = 0x3AA564u;
    ctx->pc = 0x3AA568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA564u;
    // 0x3aa568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9FB0u;
    sub_003A9FB0_0x3a9fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA56Cu;
label_3aa56c:
    // 0x3aa56c: 0x0  nop
    ctx->pc = 0x3aa56cu;
    // NOP
label_3aa570:
    // 0x3aa570: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x3aa570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_3aa574:
    // 0x3aa574: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3aa578:
    if (ctx->pc == 0x3AA578u) {
        ctx->pc = 0x3AA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA574u;
        // 0x3aa578: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA57Cu;
        goto label_3aa57c;
    }
    ctx->pc = 0x3AA574u;
    {
        const bool branch_taken_0x3aa574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA574u;
        // 0x3aa578: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa574) {
            ctx->pc = 0x3AA598u;
            goto label_3aa598;
        }
    }
    ctx->pc = 0x3AA57Cu;
label_3aa57c:
    // 0x3aa57c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aa57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3aa580:
    // 0x3aa580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa584:
    // 0x3aa584: 0x2484ee50  addiu       $a0, $a0, -0x11B0
    ctx->pc = 0x3aa584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962768));
label_3aa588:
    // 0x3aa588: 0x24a5edc0  addiu       $a1, $a1, -0x1240
    ctx->pc = 0x3aa588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
label_3aa58c:
    // 0x3aa58c: 0x80ea7ec  j           func_3A9FB0
label_3aa590:
    if (ctx->pc == 0x3AA590u) {
        ctx->pc = 0x3AA590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA58Cu;
        // 0x3aa590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA594u;
        goto label_3aa594;
    }
    ctx->pc = 0x3AA58Cu;
    ctx->pc = 0x3AA590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA58Cu;
    // 0x3aa590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9FB0u;
    sub_003A9FB0_0x3a9fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA594u;
label_3aa594:
    // 0x3aa594: 0x0  nop
    ctx->pc = 0x3aa594u;
    // NOP
label_3aa598:
    // 0x3aa598: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_3aa59c:
    if (ctx->pc == 0x3AA59Cu) {
        ctx->pc = 0x3AA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA598u;
        // 0x3aa59c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA5A0u;
        goto label_3aa5a0;
    }
    ctx->pc = 0x3AA598u;
    {
        const bool branch_taken_0x3aa598 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA598u;
        // 0x3aa59c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa598) {
            ctx->pc = 0x3AA5B0u;
            goto label_3aa5b0;
        }
    }
    ctx->pc = 0x3AA5A0u;
label_3aa5a0:
    // 0x3aa5a0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3aa5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_3aa5a4:
    // 0x3aa5a4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3aa5a8:
    if (ctx->pc == 0x3AA5A8u) {
        ctx->pc = 0x3AA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5A4u;
        // 0x3aa5a8: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA5ACu;
        goto label_3aa5ac;
    }
    ctx->pc = 0x3AA5A4u;
    {
        const bool branch_taken_0x3aa5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5A4u;
        // 0x3aa5a8: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa5a4) {
            ctx->pc = 0x3AA610u;
            goto label_3aa610;
        }
    }
    ctx->pc = 0x3AA5ACu;
label_3aa5ac:
    // 0x3aa5ac: 0x0  nop
    ctx->pc = 0x3aa5acu;
    // NOP
label_3aa5b0:
    // 0x3aa5b0: 0x54a20011  bnel        $a1, $v0, . + 4 + (0x11 << 2)
label_3aa5b4:
    if (ctx->pc == 0x3AA5B4u) {
        ctx->pc = 0x3AA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5B0u;
        // 0x3aa5b4: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA5B8u;
        goto label_3aa5b8;
    }
    ctx->pc = 0x3AA5B0u;
    {
        const bool branch_taken_0x3aa5b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aa5b0) {
            ctx->pc = 0x3AA5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AA5B0u;
            // 0x3aa5b4: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AA5F8u;
            goto label_3aa5f8;
        }
    }
    ctx->pc = 0x3AA5B8u;
label_3aa5b8:
    // 0x3aa5b8: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x3aa5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3aa5bc:
    // 0x3aa5bc: 0x8d050014  lw          $a1, 0x14($t0)
    ctx->pc = 0x3aa5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_3aa5c0:
    // 0x3aa5c0: 0x46182a  slt         $v1, $v0, $a2
    ctx->pc = 0x3aa5c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_3aa5c4:
    // 0x3aa5c4: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x3aa5c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_3aa5c8:
    // 0x3aa5c8: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x3aa5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_3aa5cc:
    // 0x3aa5cc: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x3aa5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_3aa5d0:
    // 0x3aa5d0: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x3aa5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3aa5d4:
    // 0x3aa5d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3aa5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3aa5d8:
    // 0x3aa5d8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x3aa5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3aa5dc:
    // 0x3aa5dc: 0xad020010  sw          $v0, 0x10($t0)
    ctx->pc = 0x3aa5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 2));
label_3aa5e0:
    // 0x3aa5e0: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3aa5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_3aa5e4:
    // 0x3aa5e4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3aa5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3aa5e8:
    // 0x3aa5e8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3aa5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3aa5ec:
    // 0x3aa5ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_3aa5f0:
    if (ctx->pc == 0x3AA5F0u) {
        ctx->pc = 0x3AA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5ECu;
        // 0x3aa5f0: 0xad03000c  sw          $v1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA5F4u;
        goto label_3aa5f4;
    }
    ctx->pc = 0x3AA5ECu;
    {
        const bool branch_taken_0x3aa5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5ECu;
        // 0x3aa5f0: 0xad03000c  sw          $v1, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa5ec) {
            ctx->pc = 0x3AA610u;
            goto label_3aa610;
        }
    }
    ctx->pc = 0x3AA5F4u;
label_3aa5f4:
    // 0x3aa5f4: 0x0  nop
    ctx->pc = 0x3aa5f4u;
    // NOP
label_3aa5f8:
    // 0x3aa5f8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3aa5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_3aa5fc:
    // 0x3aa5fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3aa600:
    if (ctx->pc == 0x3AA600u) {
        ctx->pc = 0x3AA600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5FCu;
        // 0x3aa600: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA604u;
        goto label_3aa604;
    }
    ctx->pc = 0x3AA5FCu;
    {
        const bool branch_taken_0x3aa5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AA600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA5FCu;
        // 0x3aa600: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aa5fc) {
            ctx->pc = 0x3AA610u;
            goto label_3aa610;
        }
    }
    ctx->pc = 0x3AA604u;
label_3aa604:
    // 0x3aa604: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x3aa604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_3aa608:
    // 0x3aa608: 0x40f809  jalr        $v0
label_3aa60c:
    if (ctx->pc == 0x3AA60Cu) {
        ctx->pc = 0x3AA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA608u;
        // 0x3aa60c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA610u;
        goto label_3aa610;
    }
    ctx->pc = 0x3AA608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AA610u);
        ctx->pc = 0x3AA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA608u;
        // 0x3aa60c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA608u, 0x3AA610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AA610u;
label_3aa610:
    // 0x3aa610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aa614:
    // 0x3aa614: 0x3e00008  jr          $ra
label_3aa618:
    if (ctx->pc == 0x3AA618u) {
        ctx->pc = 0x3AA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA614u;
        // 0x3aa618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AA61Cu;
        goto label_3aa61c;
    }
    ctx->pc = 0x3AA614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AA614u;
        // 0x3aa618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AA614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AA61Cu;
label_3aa61c:
    // 0x3aa61c: 0x0  nop
    ctx->pc = 0x3aa61cu;
    // NOP
    ctx->pc = 0x3aa620u;
}
