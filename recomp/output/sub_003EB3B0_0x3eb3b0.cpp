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

// Function: sub_003EB3B0
// Address: 0x3eb3b0 - 0x3eb4e8
void sub_003EB3B0_0x3eb3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB3B0_0x3eb3b0");
#endif

    switch (ctx->pc) {
        case 0x3eb3b0u: goto label_3eb3b0;
        case 0x3eb3b4u: goto label_3eb3b4;
        case 0x3eb3b8u: goto label_3eb3b8;
        case 0x3eb3bcu: goto label_3eb3bc;
        case 0x3eb3c0u: goto label_3eb3c0;
        case 0x3eb3c4u: goto label_3eb3c4;
        case 0x3eb3c8u: goto label_3eb3c8;
        case 0x3eb3ccu: goto label_3eb3cc;
        case 0x3eb3d0u: goto label_3eb3d0;
        case 0x3eb3d4u: goto label_3eb3d4;
        case 0x3eb3d8u: goto label_3eb3d8;
        case 0x3eb3dcu: goto label_3eb3dc;
        case 0x3eb3e0u: goto label_3eb3e0;
        case 0x3eb3e4u: goto label_3eb3e4;
        case 0x3eb3e8u: goto label_3eb3e8;
        case 0x3eb3ecu: goto label_3eb3ec;
        case 0x3eb3f0u: goto label_3eb3f0;
        case 0x3eb3f4u: goto label_3eb3f4;
        case 0x3eb3f8u: goto label_3eb3f8;
        case 0x3eb3fcu: goto label_3eb3fc;
        case 0x3eb400u: goto label_3eb400;
        case 0x3eb404u: goto label_3eb404;
        case 0x3eb408u: goto label_3eb408;
        case 0x3eb40cu: goto label_3eb40c;
        case 0x3eb410u: goto label_3eb410;
        case 0x3eb414u: goto label_3eb414;
        case 0x3eb418u: goto label_3eb418;
        case 0x3eb41cu: goto label_3eb41c;
        case 0x3eb420u: goto label_3eb420;
        case 0x3eb424u: goto label_3eb424;
        case 0x3eb428u: goto label_3eb428;
        case 0x3eb42cu: goto label_3eb42c;
        case 0x3eb430u: goto label_3eb430;
        case 0x3eb434u: goto label_3eb434;
        case 0x3eb438u: goto label_3eb438;
        case 0x3eb43cu: goto label_3eb43c;
        case 0x3eb440u: goto label_3eb440;
        case 0x3eb444u: goto label_3eb444;
        case 0x3eb448u: goto label_3eb448;
        case 0x3eb44cu: goto label_3eb44c;
        case 0x3eb450u: goto label_3eb450;
        case 0x3eb454u: goto label_3eb454;
        case 0x3eb458u: goto label_3eb458;
        case 0x3eb45cu: goto label_3eb45c;
        case 0x3eb460u: goto label_3eb460;
        case 0x3eb464u: goto label_3eb464;
        case 0x3eb468u: goto label_3eb468;
        case 0x3eb46cu: goto label_3eb46c;
        case 0x3eb470u: goto label_3eb470;
        case 0x3eb474u: goto label_3eb474;
        case 0x3eb478u: goto label_3eb478;
        case 0x3eb47cu: goto label_3eb47c;
        case 0x3eb480u: goto label_3eb480;
        case 0x3eb484u: goto label_3eb484;
        case 0x3eb488u: goto label_3eb488;
        case 0x3eb48cu: goto label_3eb48c;
        case 0x3eb490u: goto label_3eb490;
        case 0x3eb494u: goto label_3eb494;
        case 0x3eb498u: goto label_3eb498;
        case 0x3eb49cu: goto label_3eb49c;
        case 0x3eb4a0u: goto label_3eb4a0;
        case 0x3eb4a4u: goto label_3eb4a4;
        case 0x3eb4a8u: goto label_3eb4a8;
        case 0x3eb4acu: goto label_3eb4ac;
        case 0x3eb4b0u: goto label_3eb4b0;
        case 0x3eb4b4u: goto label_3eb4b4;
        case 0x3eb4b8u: goto label_3eb4b8;
        case 0x3eb4bcu: goto label_3eb4bc;
        case 0x3eb4c0u: goto label_3eb4c0;
        case 0x3eb4c4u: goto label_3eb4c4;
        case 0x3eb4c8u: goto label_3eb4c8;
        case 0x3eb4ccu: goto label_3eb4cc;
        case 0x3eb4d0u: goto label_3eb4d0;
        case 0x3eb4d4u: goto label_3eb4d4;
        case 0x3eb4d8u: goto label_3eb4d8;
        case 0x3eb4dcu: goto label_3eb4dc;
        case 0x3eb4e0u: goto label_3eb4e0;
        case 0x3eb4e4u: goto label_3eb4e4;
        default: break;
    }

    ctx->pc = 0x3eb3b0u;

label_3eb3b0:
    // 0x3eb3b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eb3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eb3b4:
    // 0x3eb3b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eb3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3eb3b8:
    // 0x3eb3b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eb3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3eb3bc:
    // 0x3eb3bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eb3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb3c0:
    // 0x3eb3c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eb3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3eb3c4:
    // 0x3eb3c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eb3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3eb3c8:
    // 0x3eb3c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb3cc:
    // 0x3eb3cc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3eb3d0:
    if (ctx->pc == 0x3EB3D0u) {
        ctx->pc = 0x3EB3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB3CCu;
        // 0x3eb3d0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB3D4u;
        goto label_3eb3d4;
    }
    ctx->pc = 0x3EB3CCu;
    {
        const bool branch_taken_0x3eb3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB3CCu;
        // 0x3eb3d0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb3cc) {
            ctx->pc = 0x3EB44Cu;
            goto label_3eb44c;
        }
    }
    ctx->pc = 0x3EB3D4u;
label_3eb3d4:
    // 0x3eb3d4: 0x0  nop
    ctx->pc = 0x3eb3d4u;
    // NOP
label_3eb3d8:
    // 0x3eb3d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb3dc:
    // 0x3eb3dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb3e0:
    // 0x3eb3e0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb3e4:
    if (ctx->pc == 0x3EB3E4u) {
        ctx->pc = 0x3EB3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB3E0u;
        // 0x3eb3e4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB3E8u;
        goto label_3eb3e8;
    }
    ctx->pc = 0x3EB3E0u;
    {
        const bool branch_taken_0x3eb3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb3e0) {
            ctx->pc = 0x3EB3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB3E0u;
            // 0x3eb3e4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB43Cu;
            goto label_3eb43c;
        }
    }
    ctx->pc = 0x3EB3E8u;
label_3eb3e8:
    // 0x3eb3e8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb3ec:
    // 0x3eb3ec: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb3f0:
    // 0x3eb3f0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb3f4:
    // 0x3eb3f4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb3f8:
    if (ctx->pc == 0x3EB3F8u) {
        ctx->pc = 0x3EB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB3F4u;
        // 0x3eb3f8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB3FCu;
        goto label_3eb3fc;
    }
    ctx->pc = 0x3EB3F4u;
    {
        const bool branch_taken_0x3eb3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb3f4) {
            ctx->pc = 0x3EB3F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB3F4u;
            // 0x3eb3f8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB428u;
            goto label_3eb428;
        }
    }
    ctx->pc = 0x3EB3FCu;
label_3eb3fc:
    // 0x3eb3fc: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb400:
    // 0x3eb400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb404:
    // 0x3eb404: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb408:
    // 0x3eb408: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb40c:
    // 0x3eb40c: 0x40f809  jalr        $v0
label_3eb410:
    if (ctx->pc == 0x3EB410u) {
        ctx->pc = 0x3EB410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB40Cu;
        // 0x3eb410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB414u;
        goto label_3eb414;
    }
    ctx->pc = 0x3EB40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB414u);
        ctx->pc = 0x3EB410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB40Cu;
        // 0x3eb410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB40Cu, 0x3EB414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB414u;
label_3eb414:
    // 0x3eb414: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eb414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb418:
    // 0x3eb418: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb41c:
    // 0x3eb41c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb420:
    if (ctx->pc == 0x3EB420u) {
        ctx->pc = 0x3EB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB41Cu;
        // 0x3eb420: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB424u;
        goto label_3eb424;
    }
    ctx->pc = 0x3EB41Cu;
    {
        const bool branch_taken_0x3eb41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB41Cu;
        // 0x3eb420: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb41c) {
            ctx->pc = 0x3EB400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb400;
        }
    }
    ctx->pc = 0x3EB424u;
label_3eb424:
    // 0x3eb424: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb428:
    // 0x3eb428: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb42c:
    // 0x3eb42c: 0xc0f528a  jal         func_3D4A28
label_3eb430:
    if (ctx->pc == 0x3EB430u) {
        ctx->pc = 0x3EB430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB42Cu;
        // 0x3eb430: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB434u;
        goto label_3eb434;
    }
    ctx->pc = 0x3EB42Cu;
    SET_GPR_U32(ctx, 31, 0x3EB434u);
    ctx->pc = 0x3EB430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB42Cu;
    // 0x3eb430: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB42Cu, 0x3EB434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB434u;
label_3eb434:
    // 0x3eb434: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb438:
    // 0x3eb438: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb438u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb43c:
    // 0x3eb43c: 0xc0f5222  jal         func_3D4888
label_3eb440:
    if (ctx->pc == 0x3EB440u) {
        ctx->pc = 0x3EB440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB43Cu;
        // 0x3eb440: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB444u;
        goto label_3eb444;
    }
    ctx->pc = 0x3EB43Cu;
    SET_GPR_U32(ctx, 31, 0x3EB444u);
    ctx->pc = 0x3EB440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB43Cu;
    // 0x3eb440: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB43Cu, 0x3EB444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB444u;
label_3eb444:
    // 0x3eb444: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb448:
    if (ctx->pc == 0x3EB448u) {
        ctx->pc = 0x3EB448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB444u;
        // 0x3eb448: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB44Cu;
        goto label_3eb44c;
    }
    ctx->pc = 0x3EB444u;
    {
        const bool branch_taken_0x3eb444 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB444u;
        // 0x3eb448: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb444) {
            ctx->pc = 0x3EB3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb3d8;
        }
    }
    ctx->pc = 0x3EB44Cu;
label_3eb44c:
    // 0x3eb44c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb450:
    // 0x3eb450: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3eb454:
    if (ctx->pc == 0x3EB454u) {
        ctx->pc = 0x3EB454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB450u;
        // 0x3eb454: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB458u;
        goto label_3eb458;
    }
    ctx->pc = 0x3EB450u;
    {
        const bool branch_taken_0x3eb450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB450u;
        // 0x3eb454: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb450) {
            ctx->pc = 0x3EB4CCu;
            goto label_3eb4cc;
        }
    }
    ctx->pc = 0x3EB458u;
label_3eb458:
    // 0x3eb458: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb45c:
    // 0x3eb45c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb460:
    // 0x3eb460: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb464:
    if (ctx->pc == 0x3EB464u) {
        ctx->pc = 0x3EB464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB460u;
        // 0x3eb464: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB468u;
        goto label_3eb468;
    }
    ctx->pc = 0x3EB460u;
    {
        const bool branch_taken_0x3eb460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb460) {
            ctx->pc = 0x3EB464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB460u;
            // 0x3eb464: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB4BCu;
            goto label_3eb4bc;
        }
    }
    ctx->pc = 0x3EB468u;
label_3eb468:
    // 0x3eb468: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb46c:
    // 0x3eb46c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb470:
    // 0x3eb470: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb474:
    // 0x3eb474: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb478:
    if (ctx->pc == 0x3EB478u) {
        ctx->pc = 0x3EB478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB474u;
        // 0x3eb478: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB47Cu;
        goto label_3eb47c;
    }
    ctx->pc = 0x3EB474u;
    {
        const bool branch_taken_0x3eb474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb474) {
            ctx->pc = 0x3EB478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB474u;
            // 0x3eb478: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB4A8u;
            goto label_3eb4a8;
        }
    }
    ctx->pc = 0x3EB47Cu;
label_3eb47c:
    // 0x3eb47c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb47cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb480:
    // 0x3eb480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb484:
    // 0x3eb484: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb488:
    // 0x3eb488: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb48c:
    // 0x3eb48c: 0x40f809  jalr        $v0
label_3eb490:
    if (ctx->pc == 0x3EB490u) {
        ctx->pc = 0x3EB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB48Cu;
        // 0x3eb490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB494u;
        goto label_3eb494;
    }
    ctx->pc = 0x3EB48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB494u);
        ctx->pc = 0x3EB490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB48Cu;
        // 0x3eb490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB48Cu, 0x3EB494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB494u;
label_3eb494:
    // 0x3eb494: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eb494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb498:
    // 0x3eb498: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb49c:
    // 0x3eb49c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb4a0:
    if (ctx->pc == 0x3EB4A0u) {
        ctx->pc = 0x3EB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB49Cu;
        // 0x3eb4a0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB4A4u;
        goto label_3eb4a4;
    }
    ctx->pc = 0x3EB49Cu;
    {
        const bool branch_taken_0x3eb49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB49Cu;
        // 0x3eb4a0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb49c) {
            ctx->pc = 0x3EB480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb480;
        }
    }
    ctx->pc = 0x3EB4A4u;
label_3eb4a4:
    // 0x3eb4a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb4a8:
    // 0x3eb4a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb4ac:
    // 0x3eb4ac: 0xc0f528a  jal         func_3D4A28
label_3eb4b0:
    if (ctx->pc == 0x3EB4B0u) {
        ctx->pc = 0x3EB4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB4ACu;
        // 0x3eb4b0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB4B4u;
        goto label_3eb4b4;
    }
    ctx->pc = 0x3EB4ACu;
    SET_GPR_U32(ctx, 31, 0x3EB4B4u);
    ctx->pc = 0x3EB4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB4ACu;
    // 0x3eb4b0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB4ACu, 0x3EB4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB4B4u;
label_3eb4b4:
    // 0x3eb4b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb4b8:
    // 0x3eb4b8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb4bc:
    // 0x3eb4bc: 0xc0f5222  jal         func_3D4888
label_3eb4c0:
    if (ctx->pc == 0x3EB4C0u) {
        ctx->pc = 0x3EB4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB4BCu;
        // 0x3eb4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB4C4u;
        goto label_3eb4c4;
    }
    ctx->pc = 0x3EB4BCu;
    SET_GPR_U32(ctx, 31, 0x3EB4C4u);
    ctx->pc = 0x3EB4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB4BCu;
    // 0x3eb4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB4BCu, 0x3EB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB4C4u;
label_3eb4c4:
    // 0x3eb4c4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb4c8:
    if (ctx->pc == 0x3EB4C8u) {
        ctx->pc = 0x3EB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB4C4u;
        // 0x3eb4c8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB4CCu;
        goto label_3eb4cc;
    }
    ctx->pc = 0x3EB4C4u;
    {
        const bool branch_taken_0x3eb4c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB4C4u;
        // 0x3eb4c8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb4c4) {
            ctx->pc = 0x3EB458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb458;
        }
    }
    ctx->pc = 0x3EB4CCu;
label_3eb4cc:
    // 0x3eb4cc: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3eb4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3eb4d0:
    // 0x3eb4d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eb4d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb4d4:
    // 0x3eb4d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eb4d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eb4d8:
    // 0x3eb4d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eb4d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb4dc:
    // 0x3eb4dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eb4dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eb4e0:
    // 0x3eb4e0: 0x3e00008  jr          $ra
label_3eb4e4:
    if (ctx->pc == 0x3EB4E4u) {
        ctx->pc = 0x3EB4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB4E0u;
        // 0x3eb4e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB4E8u;
        goto label_fallthrough_0x3eb4e0;
    }
    ctx->pc = 0x3EB4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB4E0u;
        // 0x3eb4e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB4E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eb4e0:
    ctx->pc = 0x3EB4E8u;
}
