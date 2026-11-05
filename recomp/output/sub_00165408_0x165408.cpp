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

// Function: sub_00165408
// Address: 0x165408 - 0x165520
void sub_00165408_0x165408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165408_0x165408");
#endif

    switch (ctx->pc) {
        case 0x165438u: goto label_165438;
        case 0x165444u: goto label_165444;
        case 0x165460u: goto label_165460;
        case 0x165470u: goto label_165470;
        case 0x16547cu: goto label_16547c;
        case 0x165494u: goto label_165494;
        case 0x1654a4u: goto label_1654a4;
        case 0x1654bcu: goto label_1654bc;
        case 0x1654c4u: goto label_1654c4;
        case 0x1654ccu: goto label_1654cc;
        case 0x1654d8u: goto label_1654d8;
        case 0x1654f0u: goto label_1654f0;
        case 0x165500u: goto label_165500;
        case 0x165508u: goto label_165508;
        default: break;
    }

    ctx->pc = 0x165408u;

    // 0x165408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16540c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165410: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x165414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165418: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x165418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16541c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x16541cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165420: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x165420u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x165424: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x165424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x165428: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x165428u;
    {
        const bool branch_taken_0x165428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16542Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165428u;
        // 0x16542c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165428) {
            ctx->pc = 0x16544Cu;
            goto label_16544c;
        }
    }
    ctx->pc = 0x165430u;
    // 0x165430: 0xc059746  jal         func_165D18
    ctx->pc = 0x165430u;
    SET_GPR_U32(ctx, 31, 0x165438u);
    ctx->pc = 0x165D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165D18u, 0x165430u, 0x165438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165438u;
label_165438:
    // 0x165438: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x165438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
    // 0x16543c: 0xc059634  jal         func_1658D0
    ctx->pc = 0x16543Cu;
    SET_GPR_U32(ctx, 31, 0x165444u);
    ctx->pc = 0x165440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16543Cu;
    // 0x165440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1658D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1658D0u, 0x16543Cu, 0x165444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165444u;
label_165444:
    // 0x165444: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x165444u;
    {
        const bool branch_taken_0x165444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165444u;
        // 0x165448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165444) {
            ctx->pc = 0x16550Cu;
            goto label_16550c;
        }
    }
    ctx->pc = 0x16544Cu;
label_16544c:
    // 0x16544c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16544cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165450: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x165450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x165454: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x165454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165458: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x165458u;
    SET_GPR_U32(ctx, 31, 0x165460u);
    ctx->pc = 0x16545Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165458u;
    // 0x16545c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x165458u, 0x165460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165460u;
label_165460:
    // 0x165460: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x165460u;
    {
        const bool branch_taken_0x165460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165460) {
            ctx->pc = 0x165464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165460u;
            // 0x165464: 0x8e0203b8  lw          $v0, 0x3B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165484u;
            goto label_165484;
        }
    }
    ctx->pc = 0x165468u;
    // 0x165468: 0xc059746  jal         func_165D18
    ctx->pc = 0x165468u;
    SET_GPR_U32(ctx, 31, 0x165470u);
    ctx->pc = 0x16546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165468u;
    // 0x16546c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165D18u, 0x165468u, 0x165470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165470u;
label_165470:
    // 0x165470: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x165470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
    // 0x165474: 0xc059670  jal         func_1659C0
    ctx->pc = 0x165474u;
    SET_GPR_U32(ctx, 31, 0x16547Cu);
    ctx->pc = 0x165478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165474u;
    // 0x165478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659C0u, 0x165474u, 0x16547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16547Cu;
label_16547c:
    // 0x16547c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x16547Cu;
    {
        const bool branch_taken_0x16547c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16547Cu;
        // 0x165480: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16547c) {
            ctx->pc = 0x16550Cu;
            goto label_16550c;
        }
    }
    ctx->pc = 0x165484u;
label_165484:
    // 0x165484: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x165484u;
    {
        const bool branch_taken_0x165484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165484) {
            ctx->pc = 0x165488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165484u;
            // 0x165488: 0x8e0203b8  lw          $v0, 0x3B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1654ACu;
            goto label_1654ac;
        }
    }
    ctx->pc = 0x16548Cu;
    // 0x16548c: 0xc059b1a  jal         func_166C68
    ctx->pc = 0x16548Cu;
    SET_GPR_U32(ctx, 31, 0x165494u);
    ctx->pc = 0x165490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16548Cu;
    // 0x165490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C68u, 0x16548Cu, 0x165494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165494u;
label_165494:
    // 0x165494: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x165494u;
    {
        const bool branch_taken_0x165494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165494) {
            ctx->pc = 0x165498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165494u;
            // 0x165498: 0x8e0203b8  lw          $v0, 0x3B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1654ACu;
            goto label_1654ac;
        }
    }
    ctx->pc = 0x16549Cu;
    // 0x16549c: 0xc059abe  jal         func_166AF8
    ctx->pc = 0x16549Cu;
    SET_GPR_U32(ctx, 31, 0x1654A4u);
    ctx->pc = 0x1654A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16549Cu;
    // 0x1654a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166AF8u, 0x16549Cu, 0x1654A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654A4u;
label_1654a4:
    // 0x1654a4: 0xae0203b8  sw          $v0, 0x3B8($s0)
    ctx->pc = 0x1654a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 2));
    // 0x1654a8: 0x8e0203b8  lw          $v0, 0x3B8($s0)
    ctx->pc = 0x1654a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 952)));
label_1654ac:
    // 0x1654ac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1654ACu;
    {
        const bool branch_taken_0x1654ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1654B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654ACu;
        // 0x1654b0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654ac) {
            ctx->pc = 0x1654E0u;
            goto label_1654e0;
        }
    }
    ctx->pc = 0x1654B4u;
    // 0x1654b4: 0xc059746  jal         func_165D18
    ctx->pc = 0x1654B4u;
    SET_GPR_U32(ctx, 31, 0x1654BCu);
    ctx->pc = 0x1654B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654B4u;
    // 0x1654b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165D18u, 0x1654B4u, 0x1654BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654BCu;
label_1654bc:
    // 0x1654bc: 0xc059cbe  jal         func_1672F8
    ctx->pc = 0x1654BCu;
    SET_GPR_U32(ctx, 31, 0x1654C4u);
    ctx->pc = 0x1654C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654BCu;
    // 0x1654c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1672F8u, 0x1654BCu, 0x1654C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654C4u;
label_1654c4:
    // 0x1654c4: 0xc059606  jal         func_165818
    ctx->pc = 0x1654C4u;
    SET_GPR_U32(ctx, 31, 0x1654CCu);
    ctx->pc = 0x1654C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654C4u;
    // 0x1654c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165818u, 0x1654C4u, 0x1654CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654CCu;
label_1654cc:
    // 0x1654cc: 0xae0003b8  sw          $zero, 0x3B8($s0)
    ctx->pc = 0x1654ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 952), GPR_U32(ctx, 0));
    // 0x1654d0: 0xc059ce4  jal         func_167390
    ctx->pc = 0x1654D0u;
    SET_GPR_U32(ctx, 31, 0x1654D8u);
    ctx->pc = 0x1654D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654D0u;
    // 0x1654d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x167390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167390u, 0x1654D0u, 0x1654D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654D8u;
label_1654d8:
    // 0x1654d8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1654D8u;
    {
        const bool branch_taken_0x1654d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1654DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1654D8u;
        // 0x1654dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1654d8) {
            ctx->pc = 0x16550Cu;
            goto label_16550c;
        }
    }
    ctx->pc = 0x1654E0u;
label_1654e0:
    // 0x1654e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1654e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1654e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1654e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1654e8: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x1654E8u;
    SET_GPR_U32(ctx, 31, 0x1654F0u);
    ctx->pc = 0x1654ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654E8u;
    // 0x1654ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x1654E8u, 0x1654F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654F0u;
label_1654f0:
    // 0x1654f0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1654F0u;
    {
        const bool branch_taken_0x1654f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1654f0) {
            ctx->pc = 0x1654F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1654F0u;
            // 0x1654f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16550Cu;
            goto label_16550c;
        }
    }
    ctx->pc = 0x1654F8u;
    // 0x1654f8: 0xc059746  jal         func_165D18
    ctx->pc = 0x1654F8u;
    SET_GPR_U32(ctx, 31, 0x165500u);
    ctx->pc = 0x1654FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654F8u;
    // 0x1654fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165D18u, 0x1654F8u, 0x165500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165500u;
label_165500:
    // 0x165500: 0xc059670  jal         func_1659C0
    ctx->pc = 0x165500u;
    SET_GPR_U32(ctx, 31, 0x165508u);
    ctx->pc = 0x165504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165500u;
    // 0x165504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659C0u, 0x165500u, 0x165508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165508u;
label_165508:
    // 0x165508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x165508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16550c:
    // 0x16550c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16550cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165510: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165514: 0x3e00008  jr          $ra
    ctx->pc = 0x165514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165514u;
        // 0x165518: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16551Cu;
    // 0x16551c: 0x0  nop
    ctx->pc = 0x16551cu;
    // NOP
    ctx->pc = 0x165520u;
}
