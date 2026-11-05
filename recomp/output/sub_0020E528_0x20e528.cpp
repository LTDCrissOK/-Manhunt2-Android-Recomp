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

// Function: sub_0020E528
// Address: 0x20e528 - 0x20e5d8
void sub_0020E528_0x20e528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E528_0x20e528");
#endif

    switch (ctx->pc) {
        case 0x20e528u: goto label_20e528;
        case 0x20e52cu: goto label_20e52c;
        case 0x20e530u: goto label_20e530;
        case 0x20e534u: goto label_20e534;
        case 0x20e538u: goto label_20e538;
        case 0x20e53cu: goto label_20e53c;
        case 0x20e540u: goto label_20e540;
        case 0x20e544u: goto label_20e544;
        case 0x20e548u: goto label_20e548;
        case 0x20e54cu: goto label_20e54c;
        case 0x20e550u: goto label_20e550;
        case 0x20e554u: goto label_20e554;
        case 0x20e558u: goto label_20e558;
        case 0x20e55cu: goto label_20e55c;
        case 0x20e560u: goto label_20e560;
        case 0x20e564u: goto label_20e564;
        case 0x20e568u: goto label_20e568;
        case 0x20e56cu: goto label_20e56c;
        case 0x20e570u: goto label_20e570;
        case 0x20e574u: goto label_20e574;
        case 0x20e578u: goto label_20e578;
        case 0x20e57cu: goto label_20e57c;
        case 0x20e580u: goto label_20e580;
        case 0x20e584u: goto label_20e584;
        case 0x20e588u: goto label_20e588;
        case 0x20e58cu: goto label_20e58c;
        case 0x20e590u: goto label_20e590;
        case 0x20e594u: goto label_20e594;
        case 0x20e598u: goto label_20e598;
        case 0x20e59cu: goto label_20e59c;
        case 0x20e5a0u: goto label_20e5a0;
        case 0x20e5a4u: goto label_20e5a4;
        case 0x20e5a8u: goto label_20e5a8;
        case 0x20e5acu: goto label_20e5ac;
        case 0x20e5b0u: goto label_20e5b0;
        case 0x20e5b4u: goto label_20e5b4;
        case 0x20e5b8u: goto label_20e5b8;
        case 0x20e5bcu: goto label_20e5bc;
        case 0x20e5c0u: goto label_20e5c0;
        case 0x20e5c4u: goto label_20e5c4;
        case 0x20e5c8u: goto label_20e5c8;
        case 0x20e5ccu: goto label_20e5cc;
        case 0x20e5d0u: goto label_20e5d0;
        case 0x20e5d4u: goto label_20e5d4;
        default: break;
    }

    ctx->pc = 0x20e528u;

label_20e528:
    // 0x20e528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20e528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_20e52c:
    // 0x20e52c: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x20e52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_20e530:
    // 0x20e530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20e534:
    // 0x20e534: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_20e538:
    // 0x20e538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e53c:
    // 0x20e53c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x20e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_20e540:
    // 0x20e540: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20e540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20e544:
    // 0x20e544: 0x50430021  beql        $v0, $v1, . + 4 + (0x21 << 2)
label_20e548:
    if (ctx->pc == 0x20E548u) {
        ctx->pc = 0x20E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E544u;
        // 0x20e548: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E54Cu;
        goto label_20e54c;
    }
    ctx->pc = 0x20E544u;
    {
        const bool branch_taken_0x20e544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x20e544) {
            ctx->pc = 0x20E548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E544u;
            // 0x20e548: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E5CCu;
            goto label_20e5cc;
        }
    }
    ctx->pc = 0x20E54Cu;
label_20e54c:
    // 0x20e54c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x20e54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_20e550:
    // 0x20e550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20e550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e554:
    // 0x20e554: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_20e558:
    if (ctx->pc == 0x20E558u) {
        ctx->pc = 0x20E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E554u;
        // 0x20e558: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E55Cu;
        goto label_20e55c;
    }
    ctx->pc = 0x20E554u;
    {
        const bool branch_taken_0x20e554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E554u;
        // 0x20e558: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e554) {
            ctx->pc = 0x20E580u;
            goto label_20e580;
        }
    }
    ctx->pc = 0x20E55Cu;
label_20e55c:
    // 0x20e55c: 0xc0cda26  jal         func_336898
label_20e560:
    if (ctx->pc == 0x20E560u) {
        ctx->pc = 0x20E560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E55Cu;
        // 0x20e560: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E564u;
        goto label_20e564;
    }
    ctx->pc = 0x20E55Cu;
    SET_GPR_U32(ctx, 31, 0x20E564u);
    ctx->pc = 0x20E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E55Cu;
    // 0x20e560: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x20E55Cu, 0x20E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E564u;
label_20e564:
    // 0x20e564: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_20e568:
    if (ctx->pc == 0x20E568u) {
        ctx->pc = 0x20E568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E564u;
        // 0x20e568: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E56Cu;
        goto label_20e56c;
    }
    ctx->pc = 0x20E564u;
    {
        const bool branch_taken_0x20e564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20e564) {
            ctx->pc = 0x20E568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E564u;
            // 0x20e568: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E590u;
            goto label_20e590;
        }
    }
    ctx->pc = 0x20E56Cu;
label_20e56c:
    // 0x20e56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e570:
    // 0x20e570: 0xc0cda26  jal         func_336898
label_20e574:
    if (ctx->pc == 0x20E574u) {
        ctx->pc = 0x20E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E570u;
        // 0x20e574: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E578u;
        goto label_20e578;
    }
    ctx->pc = 0x20E570u;
    SET_GPR_U32(ctx, 31, 0x20E578u);
    ctx->pc = 0x20E574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E570u;
    // 0x20e574: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x20E570u, 0x20E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E578u;
label_20e578:
    // 0x20e578: 0x10000005  b           . + 4 + (0x5 << 2)
label_20e57c:
    if (ctx->pc == 0x20E57Cu) {
        ctx->pc = 0x20E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E578u;
        // 0x20e57c: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E580u;
        goto label_20e580;
    }
    ctx->pc = 0x20E578u;
    {
        const bool branch_taken_0x20e578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E578u;
        // 0x20e57c: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e578) {
            ctx->pc = 0x20E590u;
            goto label_20e590;
        }
    }
    ctx->pc = 0x20E580u;
label_20e580:
    // 0x20e580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20e584:
    // 0x20e584: 0xc0cda26  jal         func_336898
label_20e588:
    if (ctx->pc == 0x20E588u) {
        ctx->pc = 0x20E588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E584u;
        // 0x20e588: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E58Cu;
        goto label_20e58c;
    }
    ctx->pc = 0x20E584u;
    SET_GPR_U32(ctx, 31, 0x20E58Cu);
    ctx->pc = 0x20E588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E584u;
    // 0x20e588: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x20E584u, 0x20E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E58Cu;
label_20e58c:
    // 0x20e58c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x20e58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_20e590:
    // 0x20e590: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x20e590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_20e594:
    // 0x20e594: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x20e594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_20e598:
    // 0x20e598: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_20e59c:
    if (ctx->pc == 0x20E59Cu) {
        ctx->pc = 0x20E59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E598u;
        // 0x20e59c: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E5A0u;
        goto label_20e5a0;
    }
    ctx->pc = 0x20E598u;
    {
        const bool branch_taken_0x20e598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e598) {
            ctx->pc = 0x20E59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20E598u;
            // 0x20e59c: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20E5ACu;
            goto label_20e5ac;
        }
    }
    ctx->pc = 0x20E5A0u;
label_20e5a0:
    // 0x20e5a0: 0xc0837b4  jal         func_20DED0
label_20e5a4:
    if (ctx->pc == 0x20E5A4u) {
        ctx->pc = 0x20E5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5A0u;
        // 0x20e5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E5A8u;
        goto label_20e5a8;
    }
    ctx->pc = 0x20E5A0u;
    SET_GPR_U32(ctx, 31, 0x20E5A8u);
    ctx->pc = 0x20E5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E5A0u;
    // 0x20e5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x20E5A0u, 0x20E5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E5A8u;
label_20e5a8:
    // 0x20e5a8: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x20e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_20e5ac:
    // 0x20e5ac: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x20e5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_20e5b0:
    // 0x20e5b0: 0x60f809  jalr        $v1
label_20e5b4:
    if (ctx->pc == 0x20E5B4u) {
        ctx->pc = 0x20E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5B0u;
        // 0x20e5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E5B8u;
        goto label_20e5b8;
    }
    ctx->pc = 0x20E5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20E5B8u);
        ctx->pc = 0x20E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5B0u;
        // 0x20e5b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E5B0u, 0x20E5B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20E5B8u;
label_20e5b8:
    // 0x20e5b8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x20e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_20e5bc:
    // 0x20e5bc: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x20e5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
label_20e5c0:
    // 0x20e5c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20e5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_20e5c4:
    // 0x20e5c4: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x20e5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
label_20e5c8:
    // 0x20e5c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20e5cc:
    // 0x20e5cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20e5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20e5d0:
    // 0x20e5d0: 0x3e00008  jr          $ra
label_20e5d4:
    if (ctx->pc == 0x20E5D4u) {
        ctx->pc = 0x20E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5D0u;
        // 0x20e5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20E5D8u;
        goto label_fallthrough_0x20e5d0;
    }
    ctx->pc = 0x20E5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E5D0u;
        // 0x20e5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20e5d0:
    ctx->pc = 0x20E5D8u;
}
