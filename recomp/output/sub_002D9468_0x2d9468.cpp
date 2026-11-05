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

// Function: sub_002D9468
// Address: 0x2d9468 - 0x2d96d0
void sub_002D9468_0x2d9468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9468_0x2d9468");
#endif

    switch (ctx->pc) {
        case 0x2d94e0u: goto label_2d94e0;
        case 0x2d94e8u: goto label_2d94e8;
        case 0x2d9508u: goto label_2d9508;
        case 0x2d9578u: goto label_2d9578;
        case 0x2d95a0u: goto label_2d95a0;
        case 0x2d95c0u: goto label_2d95c0;
        case 0x2d95ecu: goto label_2d95ec;
        case 0x2d9628u: goto label_2d9628;
        case 0x2d9648u: goto label_2d9648;
        case 0x2d965cu: goto label_2d965c;
        case 0x2d968cu: goto label_2d968c;
        default: break;
    }

    ctx->pc = 0x2d9468u;

    // 0x2d9468: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d9468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d946c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2d946cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9470: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2d9470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2d9474: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2d9474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2d9478: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2d9478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2d947c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2d947cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2d9480: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2d9480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2d9484: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x2d9484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x2d9488: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2d9488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2d948c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2d948cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2d9490: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2d9490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2d9494: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x2d9494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
    // 0x2d9498: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2d9498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2d949c: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x2d949cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x2d94a0: 0x8c570024  lw          $s7, 0x24($v0)
    ctx->pc = 0x2d94a0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2d94a4: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x2d94a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2d94a8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2d94a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2d94ac: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x2d94acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x2d94b0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d94b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d94b4: 0x12e00055  beqz        $s7, . + 4 + (0x55 << 2)
    ctx->pc = 0x2D94B4u;
    {
        const bool branch_taken_0x2d94b4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94B4u;
        // 0x2d94b8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94b4) {
            ctx->pc = 0x2D960Cu;
            goto label_2d960c;
        }
    }
    ctx->pc = 0x2D94BCu;
    // 0x2d94bc: 0x92fe0022  lbu         $fp, 0x22($s7)
    ctx->pc = 0x2d94bcu;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 34)));
    // 0x2d94c0: 0x13c00052  beqz        $fp, . + 4 + (0x52 << 2)
    ctx->pc = 0x2D94C0u;
    {
        const bool branch_taken_0x2d94c0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94C0u;
        // 0x2d94c4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94c0) {
            ctx->pc = 0x2D960Cu;
            goto label_2d960c;
        }
    }
    ctx->pc = 0x2D94C8u;
    // 0x2d94c8: 0x27a20024  addiu       $v0, $sp, 0x24
    ctx->pc = 0x2d94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x2d94cc: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x2d94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x2d94d0: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x2d94d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2d94d4: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x2d94d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x2d94d8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d94d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d94dc: 0x0  nop
    ctx->pc = 0x2d94dcu;
    // NOP
label_2d94e0:
    // 0x2d94e0: 0xc04147a  jal         func_1051E8
    ctx->pc = 0x2D94E0u;
    SET_GPR_U32(ctx, 31, 0x2D94E8u);
    ctx->pc = 0x2D94E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D94E0u;
    // 0x2d94e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1051E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E8u, 0x2D94E0u, 0x2D94E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D94E8u;
label_2d94e8:
    // 0x2d94e8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2d94e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2d94ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d94ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d94f0: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x2d94f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2d94f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d94f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d94f8: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2D94F8u;
    {
        const bool branch_taken_0x2d94f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94F8u;
        // 0x2d94fc: 0x26750001  addiu       $s5, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94f8) {
            ctx->pc = 0x2D95FCu;
            goto label_2d95fc;
        }
    }
    ctx->pc = 0x2D9500u;
    // 0x2d9500: 0xc04113e  jal         func_1044F8
    ctx->pc = 0x2D9500u;
    SET_GPR_U32(ctx, 31, 0x2D9508u);
    ctx->pc = 0x1044F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044F8u, 0x2D9500u, 0x2D9508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9508u;
label_2d9508:
    // 0x2d9508: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x2d9508u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d950c: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x2d950cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9510: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2d9510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2d9514: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9514u;
    {
        const bool branch_taken_0x2d9514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D9518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9514u;
        // 0x2d9518: 0x27b60020  addiu       $s6, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9514) {
            ctx->pc = 0x2D9538u;
            goto label_2d9538;
        }
    }
    ctx->pc = 0x2D951Cu;
    // 0x2d951c: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D951Cu;
    {
        const bool branch_taken_0x2d951c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D951Cu;
        // 0x2d9520: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d951c) {
            ctx->pc = 0x2D9528u;
            goto label_2d9528;
        }
    }
    ctx->pc = 0x2D9524u;
    // 0x2d9524: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d9524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d9528:
    // 0x2d9528: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d9528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d952c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d952cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d9530: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2D9530u;
    {
        const bool branch_taken_0x2d9530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9530u;
        // 0x2d9534: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9530) {
            ctx->pc = 0x2D95FCu;
            goto label_2d95fc;
        }
    }
    ctx->pc = 0x2D9538u;
label_2d9538:
    // 0x2d9538: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d9538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d953c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9540: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2d9540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2d9544: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x2d9544u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2d9548: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d9548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d954c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2d954cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2d9550: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x2d9550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x2d9554: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2d9554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x2d9558: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x2d9558u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x2d955c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d9560: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d9560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d9564: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D9564u;
    {
        const bool branch_taken_0x2d9564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9564u;
        // 0x2d9568: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9564) {
            ctx->pc = 0x2D9580u;
            goto label_2d9580;
        }
    }
    ctx->pc = 0x2D956Cu;
    // 0x2d956c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d956cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9570: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2D9570u;
    SET_GPR_U32(ctx, 31, 0x2D9578u);
    ctx->pc = 0x2D9574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9570u;
    // 0x2d9574: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2D9570u, 0x2D9578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9578u;
label_2d9578:
    // 0x2d9578: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9578u;
    {
        const bool branch_taken_0x2d9578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9578u;
        // 0x2d957c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9578) {
            ctx->pc = 0x2D9588u;
            goto label_2d9588;
        }
    }
    ctx->pc = 0x2D9580u;
label_2d9580:
    // 0x2d9580: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d9580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9584: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d9584u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9588:
    // 0x2d9588: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d9588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d958c: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D958Cu;
    {
        const bool branch_taken_0x2d958c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D958Cu;
        // 0x2d9590: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d958c) {
            ctx->pc = 0x2D95A8u;
            goto label_2d95a8;
        }
    }
    ctx->pc = 0x2D9594u;
    // 0x2d9594: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d9594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9598: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x2D9598u;
    SET_GPR_U32(ctx, 31, 0x2D95A0u);
    ctx->pc = 0x2D959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9598u;
    // 0x2d959c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x2D9598u, 0x2D95A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95A0u;
label_2d95a0:
    // 0x2d95a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D95A0u;
    {
        const bool branch_taken_0x2d95a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D95A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95A0u;
        // 0x2d95a4: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95a0) {
            ctx->pc = 0x2D95ACu;
            goto label_2d95ac;
        }
    }
    ctx->pc = 0x2D95A8u;
label_2d95a8:
    // 0x2d95a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d95a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d95ac:
    // 0x2d95ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d95acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d95b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d95b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d95b4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D95B4u;
    {
        const bool branch_taken_0x2d95b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D95B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95B4u;
        // 0x2d95b8: 0x26750001  addiu       $s5, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95b4) {
            ctx->pc = 0x2D95D8u;
            goto label_2d95d8;
        }
    }
    ctx->pc = 0x2D95BCu;
    // 0x2d95bc: 0x0  nop
    ctx->pc = 0x2d95bcu;
    // NOP
label_2d95c0:
    // 0x2d95c0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2d95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2d95c4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2d95c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2d95c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d95c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d95cc: 0x0  nop
    ctx->pc = 0x2d95ccu;
    // NOP
    // 0x2d95d0: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D95D0u;
    {
        const bool branch_taken_0x2d95d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95D0u;
        // 0x2d95d4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95d0) {
            ctx->pc = 0x2D95C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d95c0;
        }
    }
    ctx->pc = 0x2D95D8u;
label_2d95d8:
    // 0x2d95d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d95d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d95dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D95DCu;
    {
        const bool branch_taken_0x2d95dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D95E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95DCu;
        // 0x2d95e0: 0x2911021  addu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95dc) {
            ctx->pc = 0x2D95F0u;
            goto label_2d95f0;
        }
    }
    ctx->pc = 0x2D95E4u;
    // 0x2d95e4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D95E4u;
    SET_GPR_U32(ctx, 31, 0x2D95ECu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D95E4u, 0x2D95ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95ECu;
label_2d95ec:
    // 0x2d95ec: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x2d95ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_2d95f0:
    // 0x2d95f0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2d95f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x2d95f4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2d95f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2d95f8: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2d95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_2d95fc:
    // 0x2d95fc: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x2d95fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9600: 0x27e102a  slt         $v0, $s3, $fp
    ctx->pc = 0x2d9600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2d9604: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x2D9604u;
    {
        const bool branch_taken_0x2d9604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9604u;
        // 0x2d9608: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9604) {
            ctx->pc = 0x2D94E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d94e0;
        }
    }
    ctx->pc = 0x2D960Cu;
label_2d960c:
    // 0x2d960c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2d960cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2d9610: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2d9610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2d9614: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d9614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9618: 0x244683f8  addiu       $a2, $v0, -0x7C08
    ctx->pc = 0x2d9618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935544));
    // 0x2d961c: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x2d961cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x2d9620: 0xc0b6450  jal         func_2D9140
    ctx->pc = 0x2D9620u;
    SET_GPR_U32(ctx, 31, 0x2D9628u);
    ctx->pc = 0x2D9624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9620u;
    // 0x2d9624: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9140u, 0x2D9620u, 0x2D9628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9628u;
label_2d9628:
    // 0x2d9628: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d9628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d962c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d962cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9630: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d9630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d9634: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d9634u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9638: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d9638u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d963c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D963Cu;
    {
        const bool branch_taken_0x2d963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D963Cu;
        // 0x2d9640: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d963c) {
            ctx->pc = 0x2D967Cu;
            goto label_2d967c;
        }
    }
    ctx->pc = 0x2D9644u;
    // 0x2d9644: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d9644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9648:
    // 0x2d9648: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2d9648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d964c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d964cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2d9650: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9654: 0xc041150  jal         func_104540
    ctx->pc = 0x2D9654u;
    SET_GPR_U32(ctx, 31, 0x2D965Cu);
    ctx->pc = 0x2D9658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9654u;
    // 0x2d9658: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104540u, 0x2D9654u, 0x2D965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D965Cu;
label_2d965c:
    // 0x2d965c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d9660: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d9660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9664: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2d9664u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9668: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d9668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d966c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2d966cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d9670: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D9670u;
    {
        const bool branch_taken_0x2d9670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9670u;
        // 0x2d9674: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9670) {
            ctx->pc = 0x2D9648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9648;
        }
    }
    ctx->pc = 0x2D9678u;
    // 0x2d9678: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d9678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d967c:
    // 0x2d967c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D967Cu;
    {
        const bool branch_taken_0x2d967c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D967Cu;
        // 0x2d9680: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d967c) {
            ctx->pc = 0x2D9690u;
            goto label_2d9690;
        }
    }
    ctx->pc = 0x2D9684u;
    // 0x2d9684: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D9684u;
    SET_GPR_U32(ctx, 31, 0x2D968Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D9684u, 0x2D968Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D968Cu;
label_2d968c:
    // 0x2d968c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d968cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d9690:
    // 0x2d9690: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2d9690u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9694: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2d9694u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d9698: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2d9698u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d969c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2d969cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d96a0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2d96a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d96a4: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x2d96a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d96a8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2d96a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d96ac: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x2d96acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2d96b0: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2d96b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d96b4: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2d96b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2d96b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D96B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D96BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96B8u;
        // 0x2d96bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D96B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D96C0u;
    // 0x2d96c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d96c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d96c4: 0x0  nop
    ctx->pc = 0x2d96c4u;
    // NOP
    // 0x2d96c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d96c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d96cc: 0x0  nop
    ctx->pc = 0x2d96ccu;
    // NOP
    ctx->pc = 0x2d96d0u;
}
