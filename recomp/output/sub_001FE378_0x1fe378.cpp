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

// Function: sub_001FE378
// Address: 0x1fe378 - 0x1fe570
void sub_001FE378_0x1fe378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE378_0x1fe378");
#endif

    switch (ctx->pc) {
        case 0x1fe378u: goto label_1fe378;
        case 0x1fe37cu: goto label_1fe37c;
        case 0x1fe380u: goto label_1fe380;
        case 0x1fe384u: goto label_1fe384;
        case 0x1fe388u: goto label_1fe388;
        case 0x1fe38cu: goto label_1fe38c;
        case 0x1fe390u: goto label_1fe390;
        case 0x1fe394u: goto label_1fe394;
        case 0x1fe398u: goto label_1fe398;
        case 0x1fe39cu: goto label_1fe39c;
        case 0x1fe3a0u: goto label_1fe3a0;
        case 0x1fe3a4u: goto label_1fe3a4;
        case 0x1fe3a8u: goto label_1fe3a8;
        case 0x1fe3acu: goto label_1fe3ac;
        case 0x1fe3b0u: goto label_1fe3b0;
        case 0x1fe3b4u: goto label_1fe3b4;
        case 0x1fe3b8u: goto label_1fe3b8;
        case 0x1fe3bcu: goto label_1fe3bc;
        case 0x1fe3c0u: goto label_1fe3c0;
        case 0x1fe3c4u: goto label_1fe3c4;
        case 0x1fe3c8u: goto label_1fe3c8;
        case 0x1fe3ccu: goto label_1fe3cc;
        case 0x1fe3d0u: goto label_1fe3d0;
        case 0x1fe3d4u: goto label_1fe3d4;
        case 0x1fe3d8u: goto label_1fe3d8;
        case 0x1fe3dcu: goto label_1fe3dc;
        case 0x1fe3e0u: goto label_1fe3e0;
        case 0x1fe3e4u: goto label_1fe3e4;
        case 0x1fe3e8u: goto label_1fe3e8;
        case 0x1fe3ecu: goto label_1fe3ec;
        case 0x1fe3f0u: goto label_1fe3f0;
        case 0x1fe3f4u: goto label_1fe3f4;
        case 0x1fe3f8u: goto label_1fe3f8;
        case 0x1fe3fcu: goto label_1fe3fc;
        case 0x1fe400u: goto label_1fe400;
        case 0x1fe404u: goto label_1fe404;
        case 0x1fe408u: goto label_1fe408;
        case 0x1fe40cu: goto label_1fe40c;
        case 0x1fe410u: goto label_1fe410;
        case 0x1fe414u: goto label_1fe414;
        case 0x1fe418u: goto label_1fe418;
        case 0x1fe41cu: goto label_1fe41c;
        case 0x1fe420u: goto label_1fe420;
        case 0x1fe424u: goto label_1fe424;
        case 0x1fe428u: goto label_1fe428;
        case 0x1fe42cu: goto label_1fe42c;
        case 0x1fe430u: goto label_1fe430;
        case 0x1fe434u: goto label_1fe434;
        case 0x1fe438u: goto label_1fe438;
        case 0x1fe43cu: goto label_1fe43c;
        case 0x1fe440u: goto label_1fe440;
        case 0x1fe444u: goto label_1fe444;
        case 0x1fe448u: goto label_1fe448;
        case 0x1fe44cu: goto label_1fe44c;
        case 0x1fe450u: goto label_1fe450;
        case 0x1fe454u: goto label_1fe454;
        case 0x1fe458u: goto label_1fe458;
        case 0x1fe45cu: goto label_1fe45c;
        case 0x1fe460u: goto label_1fe460;
        case 0x1fe464u: goto label_1fe464;
        case 0x1fe468u: goto label_1fe468;
        case 0x1fe46cu: goto label_1fe46c;
        case 0x1fe470u: goto label_1fe470;
        case 0x1fe474u: goto label_1fe474;
        case 0x1fe478u: goto label_1fe478;
        case 0x1fe47cu: goto label_1fe47c;
        case 0x1fe480u: goto label_1fe480;
        case 0x1fe484u: goto label_1fe484;
        case 0x1fe488u: goto label_1fe488;
        case 0x1fe48cu: goto label_1fe48c;
        case 0x1fe490u: goto label_1fe490;
        case 0x1fe494u: goto label_1fe494;
        case 0x1fe498u: goto label_1fe498;
        case 0x1fe49cu: goto label_1fe49c;
        case 0x1fe4a0u: goto label_1fe4a0;
        case 0x1fe4a4u: goto label_1fe4a4;
        case 0x1fe4a8u: goto label_1fe4a8;
        case 0x1fe4acu: goto label_1fe4ac;
        case 0x1fe4b0u: goto label_1fe4b0;
        case 0x1fe4b4u: goto label_1fe4b4;
        case 0x1fe4b8u: goto label_1fe4b8;
        case 0x1fe4bcu: goto label_1fe4bc;
        case 0x1fe4c0u: goto label_1fe4c0;
        case 0x1fe4c4u: goto label_1fe4c4;
        case 0x1fe4c8u: goto label_1fe4c8;
        case 0x1fe4ccu: goto label_1fe4cc;
        case 0x1fe4d0u: goto label_1fe4d0;
        case 0x1fe4d4u: goto label_1fe4d4;
        case 0x1fe4d8u: goto label_1fe4d8;
        case 0x1fe4dcu: goto label_1fe4dc;
        case 0x1fe4e0u: goto label_1fe4e0;
        case 0x1fe4e4u: goto label_1fe4e4;
        case 0x1fe4e8u: goto label_1fe4e8;
        case 0x1fe4ecu: goto label_1fe4ec;
        case 0x1fe4f0u: goto label_1fe4f0;
        case 0x1fe4f4u: goto label_1fe4f4;
        case 0x1fe4f8u: goto label_1fe4f8;
        case 0x1fe4fcu: goto label_1fe4fc;
        case 0x1fe500u: goto label_1fe500;
        case 0x1fe504u: goto label_1fe504;
        case 0x1fe508u: goto label_1fe508;
        case 0x1fe50cu: goto label_1fe50c;
        case 0x1fe510u: goto label_1fe510;
        case 0x1fe514u: goto label_1fe514;
        case 0x1fe518u: goto label_1fe518;
        case 0x1fe51cu: goto label_1fe51c;
        case 0x1fe520u: goto label_1fe520;
        case 0x1fe524u: goto label_1fe524;
        case 0x1fe528u: goto label_1fe528;
        case 0x1fe52cu: goto label_1fe52c;
        case 0x1fe530u: goto label_1fe530;
        case 0x1fe534u: goto label_1fe534;
        case 0x1fe538u: goto label_1fe538;
        case 0x1fe53cu: goto label_1fe53c;
        case 0x1fe540u: goto label_1fe540;
        case 0x1fe544u: goto label_1fe544;
        case 0x1fe548u: goto label_1fe548;
        case 0x1fe54cu: goto label_1fe54c;
        case 0x1fe550u: goto label_1fe550;
        case 0x1fe554u: goto label_1fe554;
        case 0x1fe558u: goto label_1fe558;
        case 0x1fe55cu: goto label_1fe55c;
        case 0x1fe560u: goto label_1fe560;
        case 0x1fe564u: goto label_1fe564;
        case 0x1fe568u: goto label_1fe568;
        case 0x1fe56cu: goto label_1fe56c;
        default: break;
    }

    ctx->pc = 0x1fe378u;

label_1fe378:
    // 0x1fe378: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x1fe378u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_1fe37c:
    // 0x1fe37c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe37cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fe380:
    // 0x1fe380: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1fe380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1fe384:
    // 0x1fe384: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fe384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1fe388:
    // 0x1fe388: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1fe388u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1fe38c:
    // 0x1fe38c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fe38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1fe390:
    // 0x1fe390: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1fe390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1fe394:
    // 0x1fe394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fe398:
    // 0x1fe398: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1fe39c:
    // 0x1fe39c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe39cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fe3a0:
    // 0x1fe3a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fe3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1fe3a4:
    // 0x1fe3a4: 0x2cc60002  sltiu       $a2, $a2, 0x2
    ctx->pc = 0x1fe3a4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1fe3a8:
    // 0x1fe3a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fe3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fe3ac:
    // 0x1fe3ac: 0x10c00038  beqz        $a2, . + 4 + (0x38 << 2)
label_1fe3b0:
    if (ctx->pc == 0x1FE3B0u) {
        ctx->pc = 0x1FE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3ACu;
        // 0x1fe3b0: 0xa31023  subu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3B4u;
        goto label_1fe3b4;
    }
    ctx->pc = 0x1FE3ACu;
    {
        const bool branch_taken_0x1fe3ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3ACu;
        // 0x1fe3b0: 0xa31023  subu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3ac) {
            ctx->pc = 0x1FE490u;
            goto label_1fe490;
        }
    }
    ctx->pc = 0x1FE3B4u;
label_1fe3b4:
    // 0x1fe3b4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1fe3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1fe3b8:
    // 0x1fe3b8: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_1fe3bc:
    if (ctx->pc == 0x1FE3BCu) {
        ctx->pc = 0x1FE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3B8u;
        // 0x1fe3bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3C0u;
        goto label_1fe3c0;
    }
    ctx->pc = 0x1FE3B8u;
    {
        const bool branch_taken_0x1fe3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3B8u;
        // 0x1fe3bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3b8) {
            ctx->pc = 0x1FE558u;
            goto label_1fe558;
        }
    }
    ctx->pc = 0x1FE3C0u;
label_1fe3c0:
    // 0x1fe3c0: 0x92420048  lbu         $v0, 0x48($s2)
    ctx->pc = 0x1fe3c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 72)));
label_1fe3c4:
    // 0x1fe3c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1fe3c8:
    if (ctx->pc == 0x1FE3C8u) {
        ctx->pc = 0x1FE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3C4u;
        // 0x1fe3c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3CCu;
        goto label_1fe3cc;
    }
    ctx->pc = 0x1FE3C4u;
    {
        const bool branch_taken_0x1fe3c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3C4u;
        // 0x1fe3c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3c4) {
            ctx->pc = 0x1FE3D8u;
            goto label_1fe3d8;
        }
    }
    ctx->pc = 0x1FE3CCu;
label_1fe3cc:
    // 0x1fe3cc: 0x92420049  lbu         $v0, 0x49($s2)
    ctx->pc = 0x1fe3ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 73)));
label_1fe3d0:
    // 0x1fe3d0: 0x50400061  beql        $v0, $zero, . + 4 + (0x61 << 2)
label_1fe3d4:
    if (ctx->pc == 0x1FE3D4u) {
        ctx->pc = 0x1FE3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3D0u;
        // 0x1fe3d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3D8u;
        goto label_1fe3d8;
    }
    ctx->pc = 0x1FE3D0u;
    {
        const bool branch_taken_0x1fe3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe3d0) {
            ctx->pc = 0x1FE3D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE3D0u;
            // 0x1fe3d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE558u;
            goto label_1fe558;
        }
    }
    ctx->pc = 0x1FE3D8u;
label_1fe3d8:
    // 0x1fe3d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1fe3dc:
    if (ctx->pc == 0x1FE3DCu) {
        ctx->pc = 0x1FE3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3D8u;
        // 0x1fe3dc: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3E0u;
        goto label_1fe3e0;
    }
    ctx->pc = 0x1FE3D8u;
    {
        const bool branch_taken_0x1fe3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3D8u;
        // 0x1fe3dc: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3d8) {
            ctx->pc = 0x1FE3F8u;
            goto label_1fe3f8;
        }
    }
    ctx->pc = 0x1FE3E0u;
label_1fe3e0:
    // 0x1fe3e0: 0xc082b70  jal         func_20ADC0
label_1fe3e4:
    if (ctx->pc == 0x1FE3E4u) {
        ctx->pc = 0x1FE3E8u;
        goto label_1fe3e8;
    }
    ctx->pc = 0x1FE3E0u;
    SET_GPR_U32(ctx, 31, 0x1FE3E8u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x1FE3E0u, 0x1FE3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE3E8u;
label_1fe3e8:
    // 0x1fe3e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fe3e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fe3ec:
    // 0x1fe3ec: 0x28420033  slti        $v0, $v0, 0x33
    ctx->pc = 0x1fe3ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)51) ? 1 : 0);
label_1fe3f0:
    // 0x1fe3f0: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_1fe3f4:
    if (ctx->pc == 0x1FE3F4u) {
        ctx->pc = 0x1FE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3F0u;
        // 0x1fe3f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE3F8u;
        goto label_1fe3f8;
    }
    ctx->pc = 0x1FE3F0u;
    {
        const bool branch_taken_0x1fe3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE3F0u;
        // 0x1fe3f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe3f0) {
            ctx->pc = 0x1FE554u;
            goto label_1fe554;
        }
    }
    ctx->pc = 0x1FE3F8u;
label_1fe3f8:
    // 0x1fe3f8: 0x2538821  addu        $s1, $s2, $s3
    ctx->pc = 0x1fe3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1fe3fc:
    // 0x1fe3fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fe3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe400:
    // 0x1fe400: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fe400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe404:
    // 0x1fe404: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fe404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1fe408:
    // 0x1fe408: 0x40f809  jalr        $v0
label_1fe40c:
    if (ctx->pc == 0x1FE40Cu) {
        ctx->pc = 0x1FE410u;
        goto label_1fe410;
    }
    ctx->pc = 0x1FE408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE410u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE408u, 0x1FE410u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE410u;
label_1fe410:
    // 0x1fe410: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
label_1fe414:
    if (ctx->pc == 0x1FE414u) {
        ctx->pc = 0x1FE418u;
        goto label_1fe418;
    }
    ctx->pc = 0x1FE410u;
    {
        const bool branch_taken_0x1fe410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe410) {
            ctx->pc = 0x1FE3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe3e0;
        }
    }
    ctx->pc = 0x1FE418u;
label_1fe418:
    // 0x1fe418: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fe418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe41c:
    // 0x1fe41c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fe41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe420:
    // 0x1fe420: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1fe420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1fe424:
    // 0x1fe424: 0x40f809  jalr        $v0
label_1fe428:
    if (ctx->pc == 0x1FE428u) {
        ctx->pc = 0x1FE42Cu;
        goto label_1fe42c;
    }
    ctx->pc = 0x1FE424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE42Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE424u, 0x1FE42Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE42Cu;
label_1fe42c:
    // 0x1fe42c: 0xc64c0064  lwc1        $f12, 0x64($s2)
    ctx->pc = 0x1fe42cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fe430:
    // 0x1fe430: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fe430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fe434:
    // 0x1fe434: 0x3c013c01  lui         $at, 0x3C01
    ctx->pc = 0x1fe434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15361 << 16));
label_1fe438:
    // 0x1fe438: 0x34210204  ori         $at, $at, 0x204
    ctx->pc = 0x1fe438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)516);
label_1fe43c:
    // 0x1fe43c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fe43cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fe440:
    // 0x1fe440: 0xc64000b4  lwc1        $f0, 0xB4($s2)
    ctx->pc = 0x1fe440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fe444:
    // 0x1fe444: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fe444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fe448:
    // 0x1fe448: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1fe448u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1fe44c:
    // 0x1fe44c: 0xc0e3f5e  jal         func_38FD78
label_1fe450:
    if (ctx->pc == 0x1FE450u) {
        ctx->pc = 0x1FE450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE44Cu;
        // 0x1fe450: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE454u;
        goto label_1fe454;
    }
    ctx->pc = 0x1FE44Cu;
    SET_GPR_U32(ctx, 31, 0x1FE454u);
    ctx->pc = 0x1FE450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE44Cu;
    // 0x1fe450: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1FE44Cu, 0x1FE454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE454u;
label_1fe454:
    // 0x1fe454: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fe454u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1fe458:
    // 0x1fe458: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1fe458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1fe45c:
    // 0x1fe45c: 0xc081710  jal         func_205C40
label_1fe460:
    if (ctx->pc == 0x1FE460u) {
        ctx->pc = 0x1FE464u;
        goto label_1fe464;
    }
    ctx->pc = 0x1FE45Cu;
    SET_GPR_U32(ctx, 31, 0x1FE464u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FE45Cu, 0x1FE464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE464u;
label_1fe464:
    // 0x1fe464: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fe464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe468:
    // 0x1fe468: 0xc0817d4  jal         func_205F50
label_1fe46c:
    if (ctx->pc == 0x1FE46Cu) {
        ctx->pc = 0x1FE46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE468u;
        // 0x1fe46c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE470u;
        goto label_1fe470;
    }
    ctx->pc = 0x1FE468u;
    SET_GPR_U32(ctx, 31, 0x1FE470u);
    ctx->pc = 0x1FE46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE468u;
    // 0x1fe46c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x1FE468u, 0x1FE470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE470u;
label_1fe470:
    // 0x1fe470: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fe470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe474:
    // 0x1fe474: 0xc081560  jal         func_205580
label_1fe478:
    if (ctx->pc == 0x1FE478u) {
        ctx->pc = 0x1FE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE474u;
        // 0x1fe478: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE47Cu;
        goto label_1fe47c;
    }
    ctx->pc = 0x1FE474u;
    SET_GPR_U32(ctx, 31, 0x1FE47Cu);
    ctx->pc = 0x1FE478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE474u;
    // 0x1fe478: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x1FE474u, 0x1FE47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE47Cu;
label_1fe47c:
    // 0x1fe47c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1fe47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fe480:
    // 0x1fe480: 0xa2400048  sb          $zero, 0x48($s2)
    ctx->pc = 0x1fe480u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 72), (uint8_t)GPR_U32(ctx, 0));
label_1fe484:
    // 0x1fe484: 0xa2400049  sb          $zero, 0x49($s2)
    ctx->pc = 0x1fe484u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 73), (uint8_t)GPR_U32(ctx, 0));
label_1fe488:
    // 0x1fe488: 0x10000032  b           . + 4 + (0x32 << 2)
label_1fe48c:
    if (ctx->pc == 0x1FE48Cu) {
        ctx->pc = 0x1FE48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE488u;
        // 0x1fe48c: 0xac400078  sw          $zero, 0x78($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE490u;
        goto label_1fe490;
    }
    ctx->pc = 0x1FE488u;
    {
        const bool branch_taken_0x1fe488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE488u;
        // 0x1fe48c: 0xac400078  sw          $zero, 0x78($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe488) {
            ctx->pc = 0x1FE554u;
            goto label_1fe554;
        }
    }
    ctx->pc = 0x1FE490u;
label_1fe490:
    // 0x1fe490: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1fe490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fe494:
    // 0x1fe494: 0x2432021  addu        $a0, $s2, $v1
    ctx->pc = 0x1fe494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1fe498:
    // 0x1fe498: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fe498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fe49c:
    // 0x1fe49c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_1fe4a0:
    if (ctx->pc == 0x1FE4A0u) {
        ctx->pc = 0x1FE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE49Cu;
        // 0x1fe4a0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4A4u;
        goto label_1fe4a4;
    }
    ctx->pc = 0x1FE49Cu;
    {
        const bool branch_taken_0x1fe49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE49Cu;
        // 0x1fe4a0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe49c) {
            ctx->pc = 0x1FE554u;
            goto label_1fe554;
        }
    }
    ctx->pc = 0x1FE4A4u;
label_1fe4a4:
    // 0x1fe4a4: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1fe4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1fe4a8:
    // 0x1fe4a8: 0x8c430078  lw          $v1, 0x78($v0)
    ctx->pc = 0x1fe4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
label_1fe4ac:
    // 0x1fe4ac: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_1fe4b0:
    if (ctx->pc == 0x1FE4B0u) {
        ctx->pc = 0x1FE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4ACu;
        // 0x1fe4b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4B4u;
        goto label_1fe4b4;
    }
    ctx->pc = 0x1FE4ACu;
    {
        const bool branch_taken_0x1fe4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4ACu;
        // 0x1fe4b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4ac) {
            ctx->pc = 0x1FE554u;
            goto label_1fe554;
        }
    }
    ctx->pc = 0x1FE4B4u;
label_1fe4b4:
    // 0x1fe4b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1fe4b8:
    if (ctx->pc == 0x1FE4B8u) {
        ctx->pc = 0x1FE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4B4u;
        // 0x1fe4b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4BCu;
        goto label_1fe4bc;
    }
    ctx->pc = 0x1FE4B4u;
    {
        const bool branch_taken_0x1fe4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4B4u;
        // 0x1fe4b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4b4) {
            ctx->pc = 0x1FE4CCu;
            goto label_1fe4cc;
        }
    }
    ctx->pc = 0x1FE4BCu;
label_1fe4bc:
    // 0x1fe4bc: 0x0  nop
    ctx->pc = 0x1fe4bcu;
    // NOP
label_1fe4c0:
    // 0x1fe4c0: 0xc082b70  jal         func_20ADC0
label_1fe4c4:
    if (ctx->pc == 0x1FE4C4u) {
        ctx->pc = 0x1FE4C8u;
        goto label_1fe4c8;
    }
    ctx->pc = 0x1FE4C0u;
    SET_GPR_U32(ctx, 31, 0x1FE4C8u);
    ctx->pc = 0x20ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20ADC0u, 0x1FE4C0u, 0x1FE4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE4C8u;
label_1fe4c8:
    // 0x1fe4c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fe4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fe4cc:
    // 0x1fe4cc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fe4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe4d0:
    // 0x1fe4d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fe4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1fe4d4:
    // 0x1fe4d4: 0x40f809  jalr        $v0
label_1fe4d8:
    if (ctx->pc == 0x1FE4D8u) {
        ctx->pc = 0x1FE4DCu;
        goto label_1fe4dc;
    }
    ctx->pc = 0x1FE4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE4DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE4D4u, 0x1FE4DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE4DCu;
label_1fe4dc:
    // 0x1fe4dc: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
label_1fe4e0:
    if (ctx->pc == 0x1FE4E0u) {
        ctx->pc = 0x1FE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4DCu;
        // 0x1fe4e0: 0x2538821  addu        $s1, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE4E4u;
        goto label_1fe4e4;
    }
    ctx->pc = 0x1FE4DCu;
    {
        const bool branch_taken_0x1fe4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4DCu;
        // 0x1fe4e0: 0x2538821  addu        $s1, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4dc) {
            ctx->pc = 0x1FE4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe4c0;
        }
    }
    ctx->pc = 0x1FE4E4u;
label_1fe4e4:
    // 0x1fe4e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fe4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe4e8:
    // 0x1fe4e8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fe4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe4ec:
    // 0x1fe4ec: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1fe4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1fe4f0:
    // 0x1fe4f0: 0x40f809  jalr        $v0
label_1fe4f4:
    if (ctx->pc == 0x1FE4F4u) {
        ctx->pc = 0x1FE4F8u;
        goto label_1fe4f8;
    }
    ctx->pc = 0x1FE4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE4F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE4F0u, 0x1FE4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE4F8u;
label_1fe4f8:
    // 0x1fe4f8: 0xc64c0064  lwc1        $f12, 0x64($s2)
    ctx->pc = 0x1fe4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1fe4fc:
    // 0x1fe4fc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1fe4fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1fe500:
    // 0x1fe500: 0x3c013c01  lui         $at, 0x3C01
    ctx->pc = 0x1fe500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15361 << 16));
label_1fe504:
    // 0x1fe504: 0x34210204  ori         $at, $at, 0x204
    ctx->pc = 0x1fe504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)516);
label_1fe508:
    // 0x1fe508: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fe508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1fe50c:
    // 0x1fe50c: 0xc64000b4  lwc1        $f0, 0xB4($s2)
    ctx->pc = 0x1fe50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fe510:
    // 0x1fe510: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fe510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1fe514:
    // 0x1fe514: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1fe514u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1fe518:
    // 0x1fe518: 0xc0e3f5e  jal         func_38FD78
label_1fe51c:
    if (ctx->pc == 0x1FE51Cu) {
        ctx->pc = 0x1FE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE518u;
        // 0x1fe51c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE520u;
        goto label_1fe520;
    }
    ctx->pc = 0x1FE518u;
    SET_GPR_U32(ctx, 31, 0x1FE520u);
    ctx->pc = 0x1FE51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE518u;
    // 0x1fe51c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1FE518u, 0x1FE520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE520u;
label_1fe520:
    // 0x1fe520: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fe520u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1fe524:
    // 0x1fe524: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1fe524u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1fe528:
    // 0x1fe528: 0xc081710  jal         func_205C40
label_1fe52c:
    if (ctx->pc == 0x1FE52Cu) {
        ctx->pc = 0x1FE530u;
        goto label_1fe530;
    }
    ctx->pc = 0x1FE528u;
    SET_GPR_U32(ctx, 31, 0x1FE530u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1FE528u, 0x1FE530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE530u;
label_1fe530:
    // 0x1fe530: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fe530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1fe534:
    // 0x1fe534: 0xc0817d4  jal         func_205F50
label_1fe538:
    if (ctx->pc == 0x1FE538u) {
        ctx->pc = 0x1FE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE534u;
        // 0x1fe538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE53Cu;
        goto label_1fe53c;
    }
    ctx->pc = 0x1FE534u;
    SET_GPR_U32(ctx, 31, 0x1FE53Cu);
    ctx->pc = 0x1FE538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE534u;
    // 0x1fe538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x1FE534u, 0x1FE53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE53Cu;
label_1fe53c:
    // 0x1fe53c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1fe53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1fe540:
    // 0x1fe540: 0xc081560  jal         func_205580
label_1fe544:
    if (ctx->pc == 0x1FE544u) {
        ctx->pc = 0x1FE544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE540u;
        // 0x1fe544: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE548u;
        goto label_1fe548;
    }
    ctx->pc = 0x1FE540u;
    SET_GPR_U32(ctx, 31, 0x1FE548u);
    ctx->pc = 0x1FE544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE540u;
    // 0x1fe544: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x1FE540u, 0x1FE548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE548u;
label_1fe548:
    // 0x1fe548: 0xa240003c  sb          $zero, 0x3C($s2)
    ctx->pc = 0x1fe548u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 60), (uint8_t)GPR_U32(ctx, 0));
label_1fe54c:
    // 0x1fe54c: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x1fe54cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
label_1fe550:
    // 0x1fe550: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x1fe550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_1fe554:
    // 0x1fe554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fe558:
    // 0x1fe558: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fe55c:
    // 0x1fe55c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe55cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fe560:
    // 0x1fe560: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe560u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1fe564:
    // 0x1fe564: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fe564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fe568:
    // 0x1fe568: 0x3e00008  jr          $ra
label_1fe56c:
    if (ctx->pc == 0x1FE56Cu) {
        ctx->pc = 0x1FE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE568u;
        // 0x1fe56c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE570u;
        goto label_fallthrough_0x1fe568;
    }
    ctx->pc = 0x1FE568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE568u;
        // 0x1fe56c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fe568:
    ctx->pc = 0x1FE570u;
}
