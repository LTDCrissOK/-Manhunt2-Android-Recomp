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

// Function: sub_0019F368
// Address: 0x19f368 - 0x19f490
void sub_0019F368_0x19f368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F368_0x19f368");
#endif

    switch (ctx->pc) {
        case 0x19f368u: goto label_19f368;
        case 0x19f36cu: goto label_19f36c;
        case 0x19f370u: goto label_19f370;
        case 0x19f374u: goto label_19f374;
        case 0x19f378u: goto label_19f378;
        case 0x19f37cu: goto label_19f37c;
        case 0x19f380u: goto label_19f380;
        case 0x19f384u: goto label_19f384;
        case 0x19f388u: goto label_19f388;
        case 0x19f38cu: goto label_19f38c;
        case 0x19f390u: goto label_19f390;
        case 0x19f394u: goto label_19f394;
        case 0x19f398u: goto label_19f398;
        case 0x19f39cu: goto label_19f39c;
        case 0x19f3a0u: goto label_19f3a0;
        case 0x19f3a4u: goto label_19f3a4;
        case 0x19f3a8u: goto label_19f3a8;
        case 0x19f3acu: goto label_19f3ac;
        case 0x19f3b0u: goto label_19f3b0;
        case 0x19f3b4u: goto label_19f3b4;
        case 0x19f3b8u: goto label_19f3b8;
        case 0x19f3bcu: goto label_19f3bc;
        case 0x19f3c0u: goto label_19f3c0;
        case 0x19f3c4u: goto label_19f3c4;
        case 0x19f3c8u: goto label_19f3c8;
        case 0x19f3ccu: goto label_19f3cc;
        case 0x19f3d0u: goto label_19f3d0;
        case 0x19f3d4u: goto label_19f3d4;
        case 0x19f3d8u: goto label_19f3d8;
        case 0x19f3dcu: goto label_19f3dc;
        case 0x19f3e0u: goto label_19f3e0;
        case 0x19f3e4u: goto label_19f3e4;
        case 0x19f3e8u: goto label_19f3e8;
        case 0x19f3ecu: goto label_19f3ec;
        case 0x19f3f0u: goto label_19f3f0;
        case 0x19f3f4u: goto label_19f3f4;
        case 0x19f3f8u: goto label_19f3f8;
        case 0x19f3fcu: goto label_19f3fc;
        case 0x19f400u: goto label_19f400;
        case 0x19f404u: goto label_19f404;
        case 0x19f408u: goto label_19f408;
        case 0x19f40cu: goto label_19f40c;
        case 0x19f410u: goto label_19f410;
        case 0x19f414u: goto label_19f414;
        case 0x19f418u: goto label_19f418;
        case 0x19f41cu: goto label_19f41c;
        case 0x19f420u: goto label_19f420;
        case 0x19f424u: goto label_19f424;
        case 0x19f428u: goto label_19f428;
        case 0x19f42cu: goto label_19f42c;
        case 0x19f430u: goto label_19f430;
        case 0x19f434u: goto label_19f434;
        case 0x19f438u: goto label_19f438;
        case 0x19f43cu: goto label_19f43c;
        case 0x19f440u: goto label_19f440;
        case 0x19f444u: goto label_19f444;
        case 0x19f448u: goto label_19f448;
        case 0x19f44cu: goto label_19f44c;
        case 0x19f450u: goto label_19f450;
        case 0x19f454u: goto label_19f454;
        case 0x19f458u: goto label_19f458;
        case 0x19f45cu: goto label_19f45c;
        case 0x19f460u: goto label_19f460;
        case 0x19f464u: goto label_19f464;
        case 0x19f468u: goto label_19f468;
        case 0x19f46cu: goto label_19f46c;
        case 0x19f470u: goto label_19f470;
        case 0x19f474u: goto label_19f474;
        case 0x19f478u: goto label_19f478;
        case 0x19f47cu: goto label_19f47c;
        case 0x19f480u: goto label_19f480;
        case 0x19f484u: goto label_19f484;
        case 0x19f488u: goto label_19f488;
        case 0x19f48cu: goto label_19f48c;
        default: break;
    }

    ctx->pc = 0x19f368u;

label_19f368:
    // 0x19f368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19f36c:
    // 0x19f36c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x19f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_19f370:
    // 0x19f370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f374:
    // 0x19f374: 0x24421318  addiu       $v0, $v0, 0x1318
    ctx->pc = 0x19f374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4888));
label_19f378:
    // 0x19f378: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19f378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19f37c:
    // 0x19f37c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f380:
    // 0x19f380: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19f380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19f384:
    // 0x19f384: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x19f384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_19f388:
    // 0x19f388: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x19f388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_19f38c:
    // 0x19f38c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19f390:
    if (ctx->pc == 0x19F390u) {
        ctx->pc = 0x19F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F38Cu;
        // 0x19f390: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F394u;
        goto label_19f394;
    }
    ctx->pc = 0x19F38Cu;
    {
        const bool branch_taken_0x19f38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F38Cu;
        // 0x19f390: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f38c) {
            ctx->pc = 0x19F3A4u;
            goto label_19f3a4;
        }
    }
    ctx->pc = 0x19F394u;
label_19f394:
    // 0x19f394: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19f394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19f398:
    // 0x19f398: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x19f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19f39c:
    // 0x19f39c: 0x40f809  jalr        $v0
label_19f3a0:
    if (ctx->pc == 0x19F3A0u) {
        ctx->pc = 0x19F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F39Cu;
        // 0x19f3a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3A4u;
        goto label_19f3a4;
    }
    ctx->pc = 0x19F39Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F3A4u);
        ctx->pc = 0x19F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F39Cu;
        // 0x19f3a0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F39Cu, 0x19F3A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F3A4u;
label_19f3a4:
    // 0x19f3a4: 0x8e0400c8  lw          $a0, 0xC8($s0)
    ctx->pc = 0x19f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_19f3a8:
    // 0x19f3a8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_19f3ac:
    if (ctx->pc == 0x19F3ACu) {
        ctx->pc = 0x19F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3A8u;
        // 0x19f3ac: 0x8e0400cc  lw          $a0, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3B0u;
        goto label_19f3b0;
    }
    ctx->pc = 0x19F3A8u;
    {
        const bool branch_taken_0x19f3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f3a8) {
            ctx->pc = 0x19F3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F3A8u;
            // 0x19f3ac: 0x8e0400cc  lw          $a0, 0xCC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F3C4u;
            goto label_19f3c4;
        }
    }
    ctx->pc = 0x19F3B0u;
label_19f3b0:
    // 0x19f3b0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19f3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19f3b4:
    // 0x19f3b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x19f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19f3b8:
    // 0x19f3b8: 0x40f809  jalr        $v0
label_19f3bc:
    if (ctx->pc == 0x19F3BCu) {
        ctx->pc = 0x19F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3B8u;
        // 0x19f3bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3C0u;
        goto label_19f3c0;
    }
    ctx->pc = 0x19F3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F3C0u);
        ctx->pc = 0x19F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3B8u;
        // 0x19f3bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F3B8u, 0x19F3C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F3C0u;
label_19f3c0:
    // 0x19f3c0: 0x8e0400cc  lw          $a0, 0xCC($s0)
    ctx->pc = 0x19f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_19f3c4:
    // 0x19f3c4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_19f3c8:
    if (ctx->pc == 0x19F3C8u) {
        ctx->pc = 0x19F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3C4u;
        // 0x19f3c8: 0x8e0400d0  lw          $a0, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3CCu;
        goto label_19f3cc;
    }
    ctx->pc = 0x19F3C4u;
    {
        const bool branch_taken_0x19f3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f3c4) {
            ctx->pc = 0x19F3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F3C4u;
            // 0x19f3c8: 0x8e0400d0  lw          $a0, 0xD0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F3E0u;
            goto label_19f3e0;
        }
    }
    ctx->pc = 0x19F3CCu;
label_19f3cc:
    // 0x19f3cc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19f3d0:
    // 0x19f3d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x19f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19f3d4:
    // 0x19f3d4: 0x40f809  jalr        $v0
label_19f3d8:
    if (ctx->pc == 0x19F3D8u) {
        ctx->pc = 0x19F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3D4u;
        // 0x19f3d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3DCu;
        goto label_19f3dc;
    }
    ctx->pc = 0x19F3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F3DCu);
        ctx->pc = 0x19F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3D4u;
        // 0x19f3d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F3D4u, 0x19F3DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F3DCu;
label_19f3dc:
    // 0x19f3dc: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x19f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_19f3e0:
    // 0x19f3e0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_19f3e4:
    if (ctx->pc == 0x19F3E4u) {
        ctx->pc = 0x19F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3E0u;
        // 0x19f3e4: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3E8u;
        goto label_19f3e8;
    }
    ctx->pc = 0x19F3E0u;
    {
        const bool branch_taken_0x19f3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f3e0) {
            ctx->pc = 0x19F3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F3E0u;
            // 0x19f3e4: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F3FCu;
            goto label_19f3fc;
        }
    }
    ctx->pc = 0x19F3E8u;
label_19f3e8:
    // 0x19f3e8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19f3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19f3ec:
    // 0x19f3ec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x19f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19f3f0:
    // 0x19f3f0: 0x40f809  jalr        $v0
label_19f3f4:
    if (ctx->pc == 0x19F3F4u) {
        ctx->pc = 0x19F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3F0u;
        // 0x19f3f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F3F8u;
        goto label_19f3f8;
    }
    ctx->pc = 0x19F3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F3F8u);
        ctx->pc = 0x19F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3F0u;
        // 0x19f3f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F3F0u, 0x19F3F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F3F8u;
label_19f3f8:
    // 0x19f3f8: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x19f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_19f3fc:
    // 0x19f3fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_19f400:
    if (ctx->pc == 0x19F400u) {
        ctx->pc = 0x19F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F3FCu;
        // 0x19f400: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F404u;
        goto label_19f404;
    }
    ctx->pc = 0x19F3FCu;
    {
        const bool branch_taken_0x19f3fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f3fc) {
            ctx->pc = 0x19F400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F3FCu;
            // 0x19f400: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F418u;
            goto label_19f418;
        }
    }
    ctx->pc = 0x19F404u;
label_19f404:
    // 0x19f404: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19f404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19f408:
    // 0x19f408: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x19f408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19f40c:
    // 0x19f40c: 0x40f809  jalr        $v0
label_19f410:
    if (ctx->pc == 0x19F410u) {
        ctx->pc = 0x19F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F40Cu;
        // 0x19f410: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F414u;
        goto label_19f414;
    }
    ctx->pc = 0x19F40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F414u);
        ctx->pc = 0x19F410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F40Cu;
        // 0x19f410: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F40Cu, 0x19F414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F414u;
label_19f414:
    // 0x19f414: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x19f414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_19f418:
    // 0x19f418: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_19f41c:
    if (ctx->pc == 0x19F41Cu) {
        ctx->pc = 0x19F41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F418u;
        // 0x19f41c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F420u;
        goto label_19f420;
    }
    ctx->pc = 0x19F418u;
    {
        const bool branch_taken_0x19f418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f418) {
            ctx->pc = 0x19F41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F418u;
            // 0x19f41c: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F434u;
            goto label_19f434;
        }
    }
    ctx->pc = 0x19F420u;
label_19f420:
    // 0x19f420: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19f420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19f424:
    // 0x19f424: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x19f424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19f428:
    // 0x19f428: 0x40f809  jalr        $v0
label_19f42c:
    if (ctx->pc == 0x19F42Cu) {
        ctx->pc = 0x19F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F428u;
        // 0x19f42c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F430u;
        goto label_19f430;
    }
    ctx->pc = 0x19F428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F430u);
        ctx->pc = 0x19F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F428u;
        // 0x19f42c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F428u, 0x19F430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F430u;
label_19f430:
    // 0x19f430: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x19f430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_19f434:
    // 0x19f434: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_19f438:
    if (ctx->pc == 0x19F438u) {
        ctx->pc = 0x19F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F434u;
        // 0x19f438: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F43Cu;
        goto label_19f43c;
    }
    ctx->pc = 0x19F434u;
    {
        const bool branch_taken_0x19f434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F434u;
        // 0x19f438: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f434) {
            ctx->pc = 0x19F450u;
            goto label_19f450;
        }
    }
    ctx->pc = 0x19F43Cu;
label_19f43c:
    // 0x19f43c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19f440:
    // 0x19f440: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x19f440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19f444:
    // 0x19f444: 0x40f809  jalr        $v0
label_19f448:
    if (ctx->pc == 0x19F448u) {
        ctx->pc = 0x19F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F444u;
        // 0x19f448: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F44Cu;
        goto label_19f44c;
    }
    ctx->pc = 0x19F444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F44Cu);
        ctx->pc = 0x19F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F444u;
        // 0x19f448: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F444u, 0x19F44Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F44Cu;
label_19f44c:
    // 0x19f44c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x19f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_19f450:
    // 0x19f450: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x19f450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_19f454:
    // 0x19f454: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x19f454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_19f458:
    // 0x19f458: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x19f458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_19f45c:
    // 0x19f45c: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x19f45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
label_19f460:
    // 0x19f460: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x19f460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_19f464:
    // 0x19f464: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x19f464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_19f468:
    // 0x19f468: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_19f46c:
    if (ctx->pc == 0x19F46Cu) {
        ctx->pc = 0x19F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F468u;
        // 0x19f46c: 0xae0200b8  sw          $v0, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F470u;
        goto label_19f470;
    }
    ctx->pc = 0x19F468u;
    {
        const bool branch_taken_0x19f468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F468u;
        // 0x19f46c: 0xae0200b8  sw          $v0, 0xB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f468) {
            ctx->pc = 0x19F478u;
            goto label_19f478;
        }
    }
    ctx->pc = 0x19F470u;
label_19f470:
    // 0x19f470: 0xc0f5222  jal         func_3D4888
label_19f474:
    if (ctx->pc == 0x19F474u) {
        ctx->pc = 0x19F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F470u;
        // 0x19f474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F478u;
        goto label_19f478;
    }
    ctx->pc = 0x19F470u;
    SET_GPR_U32(ctx, 31, 0x19F478u);
    ctx->pc = 0x19F474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F470u;
    // 0x19f474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x19F470u, 0x19F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F478u;
label_19f478:
    // 0x19f478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f47c:
    // 0x19f47c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f47cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19f480:
    // 0x19f480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19f480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f484:
    // 0x19f484: 0x3e00008  jr          $ra
label_19f488:
    if (ctx->pc == 0x19F488u) {
        ctx->pc = 0x19F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F484u;
        // 0x19f488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F48Cu;
        goto label_19f48c;
    }
    ctx->pc = 0x19F484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F484u;
        // 0x19f488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F48Cu;
label_19f48c:
    // 0x19f48c: 0x0  nop
    ctx->pc = 0x19f48cu;
    // NOP
    ctx->pc = 0x19f490u;
}
