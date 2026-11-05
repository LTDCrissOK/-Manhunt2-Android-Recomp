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

// Function: sub_001B93F8
// Address: 0x1b93f8 - 0x1b9788
void sub_001B93F8_0x1b93f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B93F8_0x1b93f8");
#endif

    switch (ctx->pc) {
        case 0x1b943cu: goto label_1b943c;
        case 0x1b9444u: goto label_1b9444;
        case 0x1b9458u: goto label_1b9458;
        case 0x1b9488u: goto label_1b9488;
        case 0x1b9490u: goto label_1b9490;
        case 0x1b9498u: goto label_1b9498;
        case 0x1b94b8u: goto label_1b94b8;
        case 0x1b94d4u: goto label_1b94d4;
        case 0x1b9510u: goto label_1b9510;
        case 0x1b9590u: goto label_1b9590;
        case 0x1b9740u: goto label_1b9740;
        default: break;
    }

    ctx->pc = 0x1b93f8u;

    // 0x1b93f8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1b93f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1b93fc: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1b93fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1b9400: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x1b9400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x1b9404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9408: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x1b9408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x1b940c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1b940cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9410: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b9410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9414: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1b9414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1b9418: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1b9418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1b941c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1b941cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9420: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1b9420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1b9424: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1b9424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1b9428: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x1b9428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x1b942c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1b942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1b9430: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x1b9430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x1b9434: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B9434u;
    SET_GPR_U32(ctx, 31, 0x1B943Cu);
    ctx->pc = 0x1B9438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9434u;
    // 0x1b9438: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B9434u, 0x1B943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B943Cu;
label_1b943c:
    // 0x1b943c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B943Cu;
    SET_GPR_U32(ctx, 31, 0x1B9444u);
    ctx->pc = 0x1B9440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B943Cu;
    // 0x1b9440: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B943Cu, 0x1B9444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9444u;
label_1b9444:
    // 0x1b9444: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b9444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9448: 0xd5102b  sltu        $v0, $a2, $s5
    ctx->pc = 0x1b9448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1b944c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B944Cu;
    {
        const bool branch_taken_0x1b944c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B944Cu;
        // 0x1b9450: 0x26c50004  addiu       $a1, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b944c) {
            ctx->pc = 0x1B9474u;
            goto label_1b9474;
        }
    }
    ctx->pc = 0x1B9454u;
    // 0x1b9454: 0x0  nop
    ctx->pc = 0x1b9454u;
    // NOP
label_1b9458:
    // 0x1b9458: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1b9458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b945c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b945cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b9460: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1b9460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1b9464: 0xd5182b  sltu        $v1, $a2, $s5
    ctx->pc = 0x1b9464u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x1b9468: 0x8c821000  lw          $v0, 0x1000($a0)
    ctx->pc = 0x1b9468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4096)));
    // 0x1b946c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B946Cu;
    {
        const bool branch_taken_0x1b946c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B946Cu;
        // 0x1b9470: 0xac400068  sw          $zero, 0x68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b946c) {
            ctx->pc = 0x1B9458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9458;
        }
    }
    ctx->pc = 0x1B9474u;
label_1b9474:
    // 0x1b9474: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x1b9474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b9478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b947c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1b947cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9480: 0xc06e4d4  jal         func_1B9350
    ctx->pc = 0x1B9480u;
    SET_GPR_U32(ctx, 31, 0x1B9488u);
    ctx->pc = 0x1B9484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9480u;
    // 0x1b9484: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9350u, 0x1B9480u, 0x1B9488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9488u;
label_1b9488:
    // 0x1b9488: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B9488u;
    SET_GPR_U32(ctx, 31, 0x1B9490u);
    ctx->pc = 0x1B948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9488u;
    // 0x1b948c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B9488u, 0x1B9490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9490u;
label_1b9490:
    // 0x1b9490: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B9490u;
    SET_GPR_U32(ctx, 31, 0x1B9498u);
    ctx->pc = 0x1B9494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9490u;
    // 0x1b9494: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B9490u, 0x1B9498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9498u;
label_1b9498:
    // 0x1b9498: 0x8e020408  lw          $v0, 0x408($s0)
    ctx->pc = 0x1b9498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
    // 0x1b949c: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
    ctx->pc = 0x1B949Cu;
    {
        const bool branch_taken_0x1b949c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B949Cu;
        // 0x1b94a0: 0x24170050  addiu       $s7, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b949c) {
            ctx->pc = 0x1B9754u;
            goto label_1b9754;
        }
    }
    ctx->pc = 0x1B94A4u;
    // 0x1b94a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b94a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b94a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b94a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b94ac: 0x261e0160  addiu       $fp, $s0, 0x160
    ctx->pc = 0x1b94acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x1b94b0: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x1b94b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x1b94b4: 0x0  nop
    ctx->pc = 0x1b94b4u;
    // NOP
label_1b94b8:
    // 0x1b94b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b94b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b94bc: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B94BCu;
    {
        const bool branch_taken_0x1b94bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1B94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94BCu;
        // 0x1b94c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94bc) {
            ctx->pc = 0x1B94D0u;
            goto label_1b94d0;
        }
    }
    ctx->pc = 0x1B94C4u;
    // 0x1b94c4: 0x8fc20030  lw          $v0, 0x30($fp)
    ctx->pc = 0x1b94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x1b94c8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1B94C8u;
    {
        const bool branch_taken_0x1b94c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B94CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B94C8u;
        // 0x1b94cc: 0x571818  mult        $v1, $v0, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b94c8) {
            ctx->pc = 0x1B953Cu;
            goto label_1b953c;
        }
    }
    ctx->pc = 0x1B94D0u;
label_1b94d0:
    // 0x1b94d0: 0x2372818  mult        $a1, $s1, $s7
    ctx->pc = 0x1b94d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1b94d4:
    // 0x1b94d4: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x1b94d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1b94d8: 0x8c620194  lw          $v0, 0x194($v1)
    ctx->pc = 0x1b94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x1b94dc: 0x5453000d  bnel        $v0, $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x1B94DCu;
    {
        const bool branch_taken_0x1b94dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1b94dc) {
            ctx->pc = 0x1B94E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B94DCu;
            // 0x1b94e0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9514u;
            goto label_1b9514;
        }
    }
    ctx->pc = 0x1B94E4u;
    // 0x1b94e4: 0x8c6201a0  lw          $v0, 0x1A0($v1)
    ctx->pc = 0x1b94e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x1b94e8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B94E8u;
    {
        const bool branch_taken_0x1b94e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b94e8) {
            ctx->pc = 0x1B94ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B94E8u;
            // 0x1b94ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9514u;
            goto label_1b9514;
        }
    }
    ctx->pc = 0x1B94F0u;
    // 0x1b94f0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1b94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1b94f4: 0x24a50160  addiu       $a1, $a1, 0x160
    ctx->pc = 0x1b94f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
    // 0x1b94f8: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1b94f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1b94fc: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1b94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1b9500: 0xac450040  sw          $a1, 0x40($v0)
    ctx->pc = 0x1b9500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 5));
    // 0x1b9504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9508: 0xc06e258  jal         func_1B8960
    ctx->pc = 0x1B9508u;
    SET_GPR_U32(ctx, 31, 0x1B9510u);
    ctx->pc = 0x1B950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9508u;
    // 0x1b950c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8960u, 0x1B9508u, 0x1B9510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9510u;
label_1b9510:
    // 0x1b9510: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b9510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b9514:
    // 0x1b9514: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x1b9514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b9518: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B9518u;
    {
        const bool branch_taken_0x1b9518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9518u;
        // 0x1b951c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9518) {
            ctx->pc = 0x1B9550u;
            goto label_1b9550;
        }
    }
    ctx->pc = 0x1B9520u;
    // 0x1b9520: 0x2241018  mult        $v0, $s1, $a0
    ctx->pc = 0x1b9520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b9524: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1b9524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b9528: 0x8c620194  lw          $v0, 0x194($v1)
    ctx->pc = 0x1b9528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x1b952c: 0x1453ffe9  bne         $v0, $s3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1B952Cu;
    {
        const bool branch_taken_0x1b952c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1B9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B952Cu;
        // 0x1b9530: 0x2372818  mult        $a1, $s1, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b952c) {
            ctx->pc = 0x1B94D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b94d4;
        }
    }
    ctx->pc = 0x1B9534u;
    // 0x1b9534: 0x8c620190  lw          $v0, 0x190($v1)
    ctx->pc = 0x1b9534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 400)));
    // 0x1b9538: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x1b9538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1b953c:
    // 0x1b953c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1b953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b9540: 0x8c43019c  lw          $v1, 0x19C($v0)
    ctx->pc = 0x1b9540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x1b9544: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1B9544u;
    {
        const bool branch_taken_0x1b9544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9544u;
        // 0x1b9548: 0x2372818  mult        $a1, $s1, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9544) {
            ctx->pc = 0x1B94D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b94d4;
        }
    }
    ctx->pc = 0x1B954Cu;
    // 0x1b954c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1b954cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b9550:
    // 0x1b9550: 0x56800081  bnel        $s4, $zero, . + 4 + (0x81 << 2)
    ctx->pc = 0x1B9550u;
    {
        const bool branch_taken_0x1b9550 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9550) {
            ctx->pc = 0x1B9554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9550u;
            // 0x1b9554: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9758u;
            goto label_1b9758;
        }
    }
    ctx->pc = 0x1B9558u;
    // 0x1b9558: 0x7fa00020  sq          $zero, 0x20($sp)
    ctx->pc = 0x1b9558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 0));
    // 0x1b955c: 0x7fa00030  sq          $zero, 0x30($sp)
    ctx->pc = 0x1b955cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 0));
    // 0x1b9560: 0x26710001  addiu       $s1, $s3, 0x1
    ctx->pc = 0x1b9560u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b9564: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1b9564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b9568: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x1b9568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b956c: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x1b956cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b9570: 0x12400044  beqz        $s2, . + 4 + (0x44 << 2)
    ctx->pc = 0x1B9570u;
    {
        const bool branch_taken_0x1b9570 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9570u;
        // 0x1b9574: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9570) {
            ctx->pc = 0x1B9684u;
            goto label_1b9684;
        }
    }
    ctx->pc = 0x1B9578u;
    // 0x1b9578: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1b9578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b957c: 0x240c0050  addiu       $t4, $zero, 0x50
    ctx->pc = 0x1b957cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1b9580: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x1b9580u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9584: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x1b9584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9588: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1b9588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b958c: 0x0  nop
    ctx->pc = 0x1b958cu;
    // NOP
label_1b9590:
    // 0x1b9590: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b9590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b9594: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1b9594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1b9598: 0x4c2018  mult        $a0, $v0, $t4
    ctx->pc = 0x1b9598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b959c: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1b959cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1b95a0: 0x8c44019c  lw          $a0, 0x19C($v0)
    ctx->pc = 0x1b95a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x1b95a4: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x1b95a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1b95a8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1b95a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b95ac: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b95acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b95b0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1b95b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b95b4: 0x8c830fe8  lw          $v1, 0xFE8($a0)
    ctx->pc = 0x1b95b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x1b95b8: 0xc4600240  lwc1        $f0, 0x240($v1)
    ctx->pc = 0x1b95b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b95bc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b95bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b95c0: 0x0  nop
    ctx->pc = 0x1b95c0u;
    // NOP
    // 0x1b95c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B95C4u;
    {
        const bool branch_taken_0x1b95c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95C4u;
        // 0x1b95c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95c4) {
            ctx->pc = 0x1B95D0u;
            goto label_1b95d0;
        }
    }
    ctx->pc = 0x1B95CCu;
    // 0x1b95cc: 0x24620220  addiu       $v0, $v1, 0x220
    ctx->pc = 0x1b95ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
label_1b95d0:
    // 0x1b95d0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B95D0u;
    {
        const bool branch_taken_0x1b95d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b95d0) {
            ctx->pc = 0x1B95D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B95D0u;
            // 0x1b95d4: 0xc6000040  lwc1        $f0, 0x40($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B95F0u;
            goto label_1b95f0;
        }
    }
    ctx->pc = 0x1B95D8u;
    // 0x1b95d8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b95d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b95dc: 0x0  nop
    ctx->pc = 0x1b95dcu;
    // NOP
    // 0x1b95e0: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x1B95E0u;
    {
        const bool branch_taken_0x1b95e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B95E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95E0u;
        // 0x1b95e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95e0) {
            ctx->pc = 0x1B964Cu;
            goto label_1b964c;
        }
    }
    ctx->pc = 0x1B95E8u;
    // 0x1b95e8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B95E8u;
    {
        const bool branch_taken_0x1b95e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B95ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B95E8u;
        // 0x1b95ec: 0x24620220  addiu       $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95e8) {
            ctx->pc = 0x1B964Cu;
            goto label_1b964c;
        }
    }
    ctx->pc = 0x1B95F0u;
label_1b95f0:
    // 0x1b95f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b95f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b95f4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1b95f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1b95f8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1b95f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1b95fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b95fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9600: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b9600u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b9604: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b9604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9608: 0x0  nop
    ctx->pc = 0x1b9608u;
    // NOP
    // 0x1b960c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1B960Cu;
    {
        const bool branch_taken_0x1b960c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B9610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B960Cu;
        // 0x1b9610: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b960c) {
            ctx->pc = 0x1B9644u;
            goto label_1b9644;
        }
    }
    ctx->pc = 0x1B9614u;
    // 0x1b9614: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b9614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9618: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b9618u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b961c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b961cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9620: 0x0  nop
    ctx->pc = 0x1b9620u;
    // NOP
    // 0x1b9624: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9624u;
    {
        const bool branch_taken_0x1b9624 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9624) {
            ctx->pc = 0x1B9644u;
            goto label_1b9644;
        }
    }
    ctx->pc = 0x1B962Cu;
    // 0x1b962c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b962cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9630: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b9630u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b9634: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b9634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b9638: 0x0  nop
    ctx->pc = 0x1b9638u;
    // NOP
    // 0x1b963c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B963Cu;
    {
        const bool branch_taken_0x1b963c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b963c) {
            ctx->pc = 0x1B9640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B963Cu;
            // 0x1b9640: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9644u;
            goto label_1b9644;
        }
    }
    ctx->pc = 0x1B9644u;
label_1b9644:
    // 0x1b9644: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9644u;
    {
        const bool branch_taken_0x1b9644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9644) {
            ctx->pc = 0x1B9648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9644u;
            // 0x1b9648: 0x8c830104  lw          $v1, 0x104($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9664u;
            goto label_1b9664;
        }
    }
    ctx->pc = 0x1B964Cu;
label_1b964c:
    // 0x1b964c: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x1b964cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1b9650: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1b9650u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9654: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b9654u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b9658: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1b9658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b965c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B965Cu;
    {
        const bool branch_taken_0x1b965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B965Cu;
        // 0x1b9660: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b965c) {
            ctx->pc = 0x1B9678u;
            goto label_1b9678;
        }
    }
    ctx->pc = 0x1B9664u;
label_1b9664:
    // 0x1b9664: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b9664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9668: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1b9668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1b966c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b966cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9670: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1b9670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b9674: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b9674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b9678:
    // 0x1b9678: 0xd2102b  sltu        $v0, $a2, $s2
    ctx->pc = 0x1b9678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1b967c: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x1B967Cu;
    {
        const bool branch_taken_0x1b967c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B967Cu;
        // 0x1b9680: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b967c) {
            ctx->pc = 0x1B9590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b9590;
        }
    }
    ctx->pc = 0x1B9684u;
label_1b9684:
    // 0x1b9684: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9684u;
    {
        const bool branch_taken_0x1b9684 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1B9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9684u;
        // 0x1b9688: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9684) {
            ctx->pc = 0x1B96A0u;
            goto label_1b96a0;
        }
    }
    ctx->pc = 0x1B968Cu;
    // 0x1b968c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b968cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9690: 0x0  nop
    ctx->pc = 0x1b9690u;
    // NOP
    // 0x1b9694: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9698: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9698u;
    {
        const bool branch_taken_0x1b9698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9698) {
            ctx->pc = 0x1B96B8u;
            goto label_1b96b8;
        }
    }
    ctx->pc = 0x1B96A0u;
label_1b96a0:
    // 0x1b96a0: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1b96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1b96a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b96a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b96a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b96a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b96ac: 0x0  nop
    ctx->pc = 0x1b96acu;
    // NOP
    // 0x1b96b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b96b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b96b4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b96b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b96b8:
    // 0x1b96b8: 0x0  nop
    ctx->pc = 0x1b96b8u;
    // NOP
    // 0x1b96bc: 0x0  nop
    ctx->pc = 0x1b96bcu;
    // NOP
    // 0x1b96c0: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1b96c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1b96c4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b96c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b96c8: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x1b96c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1b96cc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1b96ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1b96d0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b96d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b96d4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1b96d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b96d8: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B96D8u;
    {
        const bool branch_taken_0x1b96d8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x1B96DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B96D8u;
        // 0x1b96dc: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96d8) {
            ctx->pc = 0x1B96F4u;
            goto label_1b96f4;
        }
    }
    ctx->pc = 0x1B96E0u;
    // 0x1b96e0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x1b96e0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b96e4: 0x0  nop
    ctx->pc = 0x1b96e4u;
    // NOP
    // 0x1b96e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b96e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b96ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B96ECu;
    {
        const bool branch_taken_0x1b96ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b96ec) {
            ctx->pc = 0x1B970Cu;
            goto label_1b970c;
        }
    }
    ctx->pc = 0x1B96F4u;
label_1b96f4:
    // 0x1b96f4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x1b96f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x1b96f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b96f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b96fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b96fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9700: 0x0  nop
    ctx->pc = 0x1b9700u;
    // NOP
    // 0x1b9704: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b9704u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b9708: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b9708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b970c:
    // 0x1b970c: 0x0  nop
    ctx->pc = 0x1b970cu;
    // NOP
    // 0x1b9710: 0x0  nop
    ctx->pc = 0x1b9710u;
    // NOP
    // 0x1b9714: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x1b9714u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x1b9718: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1b9718u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1b971c: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x1b971cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1b9720: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1b9720u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1b9724: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b9724u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b9728: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1b9728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b972c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1b972cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b9730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9734: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b9734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9738: 0xc06e42a  jal         func_1B90A8
    ctx->pc = 0x1B9738u;
    SET_GPR_U32(ctx, 31, 0x1B9740u);
    ctx->pc = 0x1B973Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9738u;
    // 0x1b973c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B90A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B90A8u, 0x1B9738u, 0x1B9740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9740u;
label_1b9740:
    // 0x1b9740: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x1b9740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9744: 0x8e020408  lw          $v0, 0x408($s0)
    ctx->pc = 0x1b9744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
    // 0x1b9748: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x1b9748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x1b974c: 0x5040ff5a  beql        $v0, $zero, . + 4 + (-0xA6 << 2)
    ctx->pc = 0x1B974Cu;
    {
        const bool branch_taken_0x1b974c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b974c) {
            ctx->pc = 0x1B9750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B974Cu;
            // 0x1b9750: 0x8e020194  lw          $v0, 0x194($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B94B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b94b8;
        }
    }
    ctx->pc = 0x1B9754u;
label_1b9754:
    // 0x1b9754: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1b9754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1b9758:
    // 0x1b9758: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1b9758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b975c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1b975cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b9760: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1b9760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1b9764: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1b9764u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b9768: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1b9768u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1b976c: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1b976cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b9770: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x1b9770u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b9774: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1b9774u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b9778: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x1b9778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1b977c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1b977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b9780: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9780u;
        // 0x1b9784: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9788u;
}
