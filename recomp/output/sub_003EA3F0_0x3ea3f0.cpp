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

// Function: sub_003EA3F0
// Address: 0x3ea3f0 - 0x3ea528
void sub_003EA3F0_0x3ea3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA3F0_0x3ea3f0");
#endif

    switch (ctx->pc) {
        case 0x3ea3f0u: goto label_3ea3f0;
        case 0x3ea3f4u: goto label_3ea3f4;
        case 0x3ea3f8u: goto label_3ea3f8;
        case 0x3ea3fcu: goto label_3ea3fc;
        case 0x3ea400u: goto label_3ea400;
        case 0x3ea404u: goto label_3ea404;
        case 0x3ea408u: goto label_3ea408;
        case 0x3ea40cu: goto label_3ea40c;
        case 0x3ea410u: goto label_3ea410;
        case 0x3ea414u: goto label_3ea414;
        case 0x3ea418u: goto label_3ea418;
        case 0x3ea41cu: goto label_3ea41c;
        case 0x3ea420u: goto label_3ea420;
        case 0x3ea424u: goto label_3ea424;
        case 0x3ea428u: goto label_3ea428;
        case 0x3ea42cu: goto label_3ea42c;
        case 0x3ea430u: goto label_3ea430;
        case 0x3ea434u: goto label_3ea434;
        case 0x3ea438u: goto label_3ea438;
        case 0x3ea43cu: goto label_3ea43c;
        case 0x3ea440u: goto label_3ea440;
        case 0x3ea444u: goto label_3ea444;
        case 0x3ea448u: goto label_3ea448;
        case 0x3ea44cu: goto label_3ea44c;
        case 0x3ea450u: goto label_3ea450;
        case 0x3ea454u: goto label_3ea454;
        case 0x3ea458u: goto label_3ea458;
        case 0x3ea45cu: goto label_3ea45c;
        case 0x3ea460u: goto label_3ea460;
        case 0x3ea464u: goto label_3ea464;
        case 0x3ea468u: goto label_3ea468;
        case 0x3ea46cu: goto label_3ea46c;
        case 0x3ea470u: goto label_3ea470;
        case 0x3ea474u: goto label_3ea474;
        case 0x3ea478u: goto label_3ea478;
        case 0x3ea47cu: goto label_3ea47c;
        case 0x3ea480u: goto label_3ea480;
        case 0x3ea484u: goto label_3ea484;
        case 0x3ea488u: goto label_3ea488;
        case 0x3ea48cu: goto label_3ea48c;
        case 0x3ea490u: goto label_3ea490;
        case 0x3ea494u: goto label_3ea494;
        case 0x3ea498u: goto label_3ea498;
        case 0x3ea49cu: goto label_3ea49c;
        case 0x3ea4a0u: goto label_3ea4a0;
        case 0x3ea4a4u: goto label_3ea4a4;
        case 0x3ea4a8u: goto label_3ea4a8;
        case 0x3ea4acu: goto label_3ea4ac;
        case 0x3ea4b0u: goto label_3ea4b0;
        case 0x3ea4b4u: goto label_3ea4b4;
        case 0x3ea4b8u: goto label_3ea4b8;
        case 0x3ea4bcu: goto label_3ea4bc;
        case 0x3ea4c0u: goto label_3ea4c0;
        case 0x3ea4c4u: goto label_3ea4c4;
        case 0x3ea4c8u: goto label_3ea4c8;
        case 0x3ea4ccu: goto label_3ea4cc;
        case 0x3ea4d0u: goto label_3ea4d0;
        case 0x3ea4d4u: goto label_3ea4d4;
        case 0x3ea4d8u: goto label_3ea4d8;
        case 0x3ea4dcu: goto label_3ea4dc;
        case 0x3ea4e0u: goto label_3ea4e0;
        case 0x3ea4e4u: goto label_3ea4e4;
        case 0x3ea4e8u: goto label_3ea4e8;
        case 0x3ea4ecu: goto label_3ea4ec;
        case 0x3ea4f0u: goto label_3ea4f0;
        case 0x3ea4f4u: goto label_3ea4f4;
        case 0x3ea4f8u: goto label_3ea4f8;
        case 0x3ea4fcu: goto label_3ea4fc;
        case 0x3ea500u: goto label_3ea500;
        case 0x3ea504u: goto label_3ea504;
        case 0x3ea508u: goto label_3ea508;
        case 0x3ea50cu: goto label_3ea50c;
        case 0x3ea510u: goto label_3ea510;
        case 0x3ea514u: goto label_3ea514;
        case 0x3ea518u: goto label_3ea518;
        case 0x3ea51cu: goto label_3ea51c;
        case 0x3ea520u: goto label_3ea520;
        case 0x3ea524u: goto label_3ea524;
        default: break;
    }

    ctx->pc = 0x3ea3f0u;

label_3ea3f0:
    // 0x3ea3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ea3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ea3f4:
    // 0x3ea3f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ea3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ea3f8:
    // 0x3ea3f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ea3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ea3fc:
    // 0x3ea3fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ea3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea400:
    // 0x3ea400: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ea400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3ea404:
    // 0x3ea404: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ea404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3ea408:
    // 0x3ea408: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea40c:
    // 0x3ea40c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3ea410:
    if (ctx->pc == 0x3EA410u) {
        ctx->pc = 0x3EA410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA40Cu;
        // 0x3ea410: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA414u;
        goto label_3ea414;
    }
    ctx->pc = 0x3EA40Cu;
    {
        const bool branch_taken_0x3ea40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA40Cu;
        // 0x3ea410: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea40c) {
            ctx->pc = 0x3EA48Cu;
            goto label_3ea48c;
        }
    }
    ctx->pc = 0x3EA414u;
label_3ea414:
    // 0x3ea414: 0x0  nop
    ctx->pc = 0x3ea414u;
    // NOP
label_3ea418:
    // 0x3ea418: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea41c:
    // 0x3ea41c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea420:
    // 0x3ea420: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea424:
    if (ctx->pc == 0x3EA424u) {
        ctx->pc = 0x3EA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA420u;
        // 0x3ea424: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA428u;
        goto label_3ea428;
    }
    ctx->pc = 0x3EA420u;
    {
        const bool branch_taken_0x3ea420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea420) {
            ctx->pc = 0x3EA424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA420u;
            // 0x3ea424: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA47Cu;
            goto label_3ea47c;
        }
    }
    ctx->pc = 0x3EA428u;
label_3ea428:
    // 0x3ea428: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea42c:
    // 0x3ea42c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea42cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea430:
    // 0x3ea430: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea434:
    // 0x3ea434: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea438:
    if (ctx->pc == 0x3EA438u) {
        ctx->pc = 0x3EA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA434u;
        // 0x3ea438: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA43Cu;
        goto label_3ea43c;
    }
    ctx->pc = 0x3EA434u;
    {
        const bool branch_taken_0x3ea434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea434) {
            ctx->pc = 0x3EA438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA434u;
            // 0x3ea438: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA468u;
            goto label_3ea468;
        }
    }
    ctx->pc = 0x3EA43Cu;
label_3ea43c:
    // 0x3ea43c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea440:
    // 0x3ea440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea444:
    // 0x3ea444: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea448:
    // 0x3ea448: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea44c:
    // 0x3ea44c: 0x40f809  jalr        $v0
label_3ea450:
    if (ctx->pc == 0x3EA450u) {
        ctx->pc = 0x3EA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA44Cu;
        // 0x3ea450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA454u;
        goto label_3ea454;
    }
    ctx->pc = 0x3EA44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA454u);
        ctx->pc = 0x3EA450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA44Cu;
        // 0x3ea450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA44Cu, 0x3EA454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA454u;
label_3ea454:
    // 0x3ea454: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ea454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea458:
    // 0x3ea458: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea45c:
    // 0x3ea45c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea460:
    if (ctx->pc == 0x3EA460u) {
        ctx->pc = 0x3EA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA45Cu;
        // 0x3ea460: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA464u;
        goto label_3ea464;
    }
    ctx->pc = 0x3EA45Cu;
    {
        const bool branch_taken_0x3ea45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA45Cu;
        // 0x3ea460: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea45c) {
            ctx->pc = 0x3EA440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea440;
        }
    }
    ctx->pc = 0x3EA464u;
label_3ea464:
    // 0x3ea464: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea468:
    // 0x3ea468: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea46c:
    // 0x3ea46c: 0xc0f528a  jal         func_3D4A28
label_3ea470:
    if (ctx->pc == 0x3EA470u) {
        ctx->pc = 0x3EA470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA46Cu;
        // 0x3ea470: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA474u;
        goto label_3ea474;
    }
    ctx->pc = 0x3EA46Cu;
    SET_GPR_U32(ctx, 31, 0x3EA474u);
    ctx->pc = 0x3EA470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA46Cu;
    // 0x3ea470: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA46Cu, 0x3EA474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA474u;
label_3ea474:
    // 0x3ea474: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea478:
    // 0x3ea478: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea478u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea47c:
    // 0x3ea47c: 0xc0f5222  jal         func_3D4888
label_3ea480:
    if (ctx->pc == 0x3EA480u) {
        ctx->pc = 0x3EA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA47Cu;
        // 0x3ea480: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA484u;
        goto label_3ea484;
    }
    ctx->pc = 0x3EA47Cu;
    SET_GPR_U32(ctx, 31, 0x3EA484u);
    ctx->pc = 0x3EA480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA47Cu;
    // 0x3ea480: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA47Cu, 0x3EA484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA484u;
label_3ea484:
    // 0x3ea484: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea488:
    if (ctx->pc == 0x3EA488u) {
        ctx->pc = 0x3EA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA484u;
        // 0x3ea488: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA48Cu;
        goto label_3ea48c;
    }
    ctx->pc = 0x3EA484u;
    {
        const bool branch_taken_0x3ea484 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA484u;
        // 0x3ea488: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea484) {
            ctx->pc = 0x3EA418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea418;
        }
    }
    ctx->pc = 0x3EA48Cu;
label_3ea48c:
    // 0x3ea48c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea490:
    // 0x3ea490: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3ea494:
    if (ctx->pc == 0x3EA494u) {
        ctx->pc = 0x3EA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA490u;
        // 0x3ea494: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA498u;
        goto label_3ea498;
    }
    ctx->pc = 0x3EA490u;
    {
        const bool branch_taken_0x3ea490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA490u;
        // 0x3ea494: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea490) {
            ctx->pc = 0x3EA50Cu;
            goto label_3ea50c;
        }
    }
    ctx->pc = 0x3EA498u;
label_3ea498:
    // 0x3ea498: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea49c:
    // 0x3ea49c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea4a0:
    // 0x3ea4a0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea4a4:
    if (ctx->pc == 0x3EA4A4u) {
        ctx->pc = 0x3EA4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4A0u;
        // 0x3ea4a4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA4A8u;
        goto label_3ea4a8;
    }
    ctx->pc = 0x3EA4A0u;
    {
        const bool branch_taken_0x3ea4a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea4a0) {
            ctx->pc = 0x3EA4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA4A0u;
            // 0x3ea4a4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA4FCu;
            goto label_3ea4fc;
        }
    }
    ctx->pc = 0x3EA4A8u;
label_3ea4a8:
    // 0x3ea4a8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea4ac:
    // 0x3ea4ac: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea4acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea4b0:
    // 0x3ea4b0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea4b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea4b4:
    // 0x3ea4b4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea4b8:
    if (ctx->pc == 0x3EA4B8u) {
        ctx->pc = 0x3EA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4B4u;
        // 0x3ea4b8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA4BCu;
        goto label_3ea4bc;
    }
    ctx->pc = 0x3EA4B4u;
    {
        const bool branch_taken_0x3ea4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea4b4) {
            ctx->pc = 0x3EA4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA4B4u;
            // 0x3ea4b8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA4E8u;
            goto label_3ea4e8;
        }
    }
    ctx->pc = 0x3EA4BCu;
label_3ea4bc:
    // 0x3ea4bc: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea4c0:
    // 0x3ea4c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea4c4:
    // 0x3ea4c4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea4c8:
    // 0x3ea4c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea4cc:
    // 0x3ea4cc: 0x40f809  jalr        $v0
label_3ea4d0:
    if (ctx->pc == 0x3EA4D0u) {
        ctx->pc = 0x3EA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4CCu;
        // 0x3ea4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA4D4u;
        goto label_3ea4d4;
    }
    ctx->pc = 0x3EA4CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA4D4u);
        ctx->pc = 0x3EA4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4CCu;
        // 0x3ea4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA4CCu, 0x3EA4D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA4D4u;
label_3ea4d4:
    // 0x3ea4d4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ea4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea4d8:
    // 0x3ea4d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea4dc:
    // 0x3ea4dc: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea4e0:
    if (ctx->pc == 0x3EA4E0u) {
        ctx->pc = 0x3EA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4DCu;
        // 0x3ea4e0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA4E4u;
        goto label_3ea4e4;
    }
    ctx->pc = 0x3EA4DCu;
    {
        const bool branch_taken_0x3ea4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4DCu;
        // 0x3ea4e0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea4dc) {
            ctx->pc = 0x3EA4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea4c0;
        }
    }
    ctx->pc = 0x3EA4E4u;
label_3ea4e4:
    // 0x3ea4e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea4e8:
    // 0x3ea4e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea4ec:
    // 0x3ea4ec: 0xc0f528a  jal         func_3D4A28
label_3ea4f0:
    if (ctx->pc == 0x3EA4F0u) {
        ctx->pc = 0x3EA4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4ECu;
        // 0x3ea4f0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA4F4u;
        goto label_3ea4f4;
    }
    ctx->pc = 0x3EA4ECu;
    SET_GPR_U32(ctx, 31, 0x3EA4F4u);
    ctx->pc = 0x3EA4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA4ECu;
    // 0x3ea4f0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA4ECu, 0x3EA4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA4F4u;
label_3ea4f4:
    // 0x3ea4f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea4f8:
    // 0x3ea4f8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea4fc:
    // 0x3ea4fc: 0xc0f5222  jal         func_3D4888
label_3ea500:
    if (ctx->pc == 0x3EA500u) {
        ctx->pc = 0x3EA500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA4FCu;
        // 0x3ea500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA504u;
        goto label_3ea504;
    }
    ctx->pc = 0x3EA4FCu;
    SET_GPR_U32(ctx, 31, 0x3EA504u);
    ctx->pc = 0x3EA500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA4FCu;
    // 0x3ea500: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA4FCu, 0x3EA504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA504u;
label_3ea504:
    // 0x3ea504: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea508:
    if (ctx->pc == 0x3EA508u) {
        ctx->pc = 0x3EA508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA504u;
        // 0x3ea508: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA50Cu;
        goto label_3ea50c;
    }
    ctx->pc = 0x3EA504u;
    {
        const bool branch_taken_0x3ea504 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA504u;
        // 0x3ea508: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea504) {
            ctx->pc = 0x3EA498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea498;
        }
    }
    ctx->pc = 0x3EA50Cu;
label_3ea50c:
    // 0x3ea50c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3ea50cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3ea510:
    // 0x3ea510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ea510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ea514:
    // 0x3ea514: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ea514u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ea518:
    // 0x3ea518: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ea518u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea51c:
    // 0x3ea51c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ea51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ea520:
    // 0x3ea520: 0x3e00008  jr          $ra
label_3ea524:
    if (ctx->pc == 0x3EA524u) {
        ctx->pc = 0x3EA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA520u;
        // 0x3ea524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA528u;
        goto label_fallthrough_0x3ea520;
    }
    ctx->pc = 0x3EA520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA520u;
        // 0x3ea524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ea520:
    ctx->pc = 0x3EA528u;
}
