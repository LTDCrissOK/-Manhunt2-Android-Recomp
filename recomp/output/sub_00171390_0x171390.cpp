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

// Function: sub_00171390
// Address: 0x171390 - 0x1714e8
void sub_00171390_0x171390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171390_0x171390");
#endif

    switch (ctx->pc) {
        case 0x1713bcu: goto label_1713bc;
        case 0x1713d0u: goto label_1713d0;
        case 0x1713e0u: goto label_1713e0;
        case 0x1713e8u: goto label_1713e8;
        case 0x171400u: goto label_171400;
        case 0x171410u: goto label_171410;
        case 0x17141cu: goto label_17141c;
        case 0x17142cu: goto label_17142c;
        case 0x171444u: goto label_171444;
        case 0x171454u: goto label_171454;
        case 0x171460u: goto label_171460;
        case 0x171470u: goto label_171470;
        case 0x171480u: goto label_171480;
        case 0x17148cu: goto label_17148c;
        case 0x1714a0u: goto label_1714a0;
        case 0x1714b8u: goto label_1714b8;
        case 0x1714c0u: goto label_1714c0;
        case 0x1714d0u: goto label_1714d0;
        default: break;
    }

    ctx->pc = 0x171390u;

    // 0x171390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171394: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171398: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x171398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17139c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17139cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1713a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1713a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1713a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1713a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1713ac: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x1713acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x1713b0: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x1713b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x1713b4: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x1713B4u;
    SET_GPR_U32(ctx, 31, 0x1713BCu);
    ctx->pc = 0x1713B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1713B4u;
    // 0x1713b8: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x1713B4u, 0x1713BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1713BCu;
label_1713bc:
    // 0x1713bc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1713bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1713c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1713c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713c4: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x1713c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x1713c8: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x1713C8u;
    SET_GPR_U32(ctx, 31, 0x1713D0u);
    ctx->pc = 0x1713CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1713C8u;
    // 0x1713cc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x1713C8u, 0x1713D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1713D0u;
label_1713d0:
    // 0x1713d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1713D0u;
    {
        const bool branch_taken_0x1713d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1713D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713D0u;
        // 0x1713d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713d0) {
            ctx->pc = 0x1713F0u;
            goto label_1713f0;
        }
    }
    ctx->pc = 0x1713D8u;
    // 0x1713d8: 0xc05c818  jal         func_172060
    ctx->pc = 0x1713D8u;
    SET_GPR_U32(ctx, 31, 0x1713E0u);
    ctx->pc = 0x1713DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1713D8u;
    // 0x1713dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172060u, 0x1713D8u, 0x1713E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1713E0u;
label_1713e0:
    // 0x1713e0: 0xc05c86a  jal         func_1721A8
    ctx->pc = 0x1713E0u;
    SET_GPR_U32(ctx, 31, 0x1713E8u);
    ctx->pc = 0x1713E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1713E0u;
    // 0x1713e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721A8u, 0x1713E0u, 0x1713E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1713E8u;
label_1713e8:
    // 0x1713e8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1713E8u;
    {
        const bool branch_taken_0x1713e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713E8u;
        // 0x1713ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713e8) {
            ctx->pc = 0x1714D4u;
            goto label_1714d4;
        }
    }
    ctx->pc = 0x1713F0u;
label_1713f0:
    // 0x1713f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1713f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1713f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1713f8: 0xc05ca20  jal         func_172880
    ctx->pc = 0x1713F8u;
    SET_GPR_U32(ctx, 31, 0x171400u);
    ctx->pc = 0x1713FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1713F8u;
    // 0x1713fc: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172880u, 0x1713F8u, 0x171400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171400u;
label_171400:
    // 0x171400: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x171400u;
    {
        const bool branch_taken_0x171400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171400u;
        // 0x171404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171400) {
            ctx->pc = 0x171434u;
            goto label_171434;
        }
    }
    ctx->pc = 0x171408u;
    // 0x171408: 0xc05c818  jal         func_172060
    ctx->pc = 0x171408u;
    SET_GPR_U32(ctx, 31, 0x171410u);
    ctx->pc = 0x17140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171408u;
    // 0x17140c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172060u, 0x171408u, 0x171410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171410u;
label_171410:
    // 0x171410: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x171410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171414: 0xc05d0de  jal         func_174378
    ctx->pc = 0x171414u;
    SET_GPR_U32(ctx, 31, 0x17141Cu);
    ctx->pc = 0x171418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171414u;
    // 0x171418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174378u, 0x171414u, 0x17141Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17141Cu;
label_17141c:
    // 0x17141c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17141cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171420: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171424: 0xc05c720  jal         func_171C80
    ctx->pc = 0x171424u;
    SET_GPR_U32(ctx, 31, 0x17142Cu);
    ctx->pc = 0x171428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171424u;
    // 0x171428: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171C80u, 0x171424u, 0x17142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17142Cu;
label_17142c:
    // 0x17142c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x17142Cu;
    {
        const bool branch_taken_0x17142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17142Cu;
        // 0x171430: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17142c) {
            ctx->pc = 0x1714D4u;
            goto label_1714d4;
        }
    }
    ctx->pc = 0x171434u;
label_171434:
    // 0x171434: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x171434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x171438: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x171438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17143c: 0xc05ca20  jal         func_172880
    ctx->pc = 0x17143Cu;
    SET_GPR_U32(ctx, 31, 0x171444u);
    ctx->pc = 0x171440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17143Cu;
    // 0x171440: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172880u, 0x17143Cu, 0x171444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171444u;
label_171444:
    // 0x171444: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x171444u;
    {
        const bool branch_taken_0x171444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171444) {
            ctx->pc = 0x171468u;
            goto label_171468;
        }
    }
    ctx->pc = 0x17144Cu;
    // 0x17144c: 0xc05c818  jal         func_172060
    ctx->pc = 0x17144Cu;
    SET_GPR_U32(ctx, 31, 0x171454u);
    ctx->pc = 0x171450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17144Cu;
    // 0x171450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172060u, 0x17144Cu, 0x171454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171454u;
label_171454:
    // 0x171454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171458: 0xc05c766  jal         func_171D98
    ctx->pc = 0x171458u;
    SET_GPR_U32(ctx, 31, 0x171460u);
    ctx->pc = 0x17145Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171458u;
    // 0x17145c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171D98u, 0x171458u, 0x171460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171460u;
label_171460:
    // 0x171460: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x171460u;
    {
        const bool branch_taken_0x171460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171460u;
        // 0x171464: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171460) {
            ctx->pc = 0x1714D4u;
            goto label_1714d4;
        }
    }
    ctx->pc = 0x171468u;
label_171468:
    // 0x171468: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x171468u;
    SET_GPR_U32(ctx, 31, 0x171470u);
    ctx->pc = 0x17146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171468u;
    // 0x17146c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x171468u, 0x171470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171470u;
label_171470:
    // 0x171470: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x171470u;
    {
        const bool branch_taken_0x171470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171470u;
        // 0x171474: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171470) {
            ctx->pc = 0x1714D4u;
            goto label_1714d4;
        }
    }
    ctx->pc = 0x171478u;
    // 0x171478: 0xc05c818  jal         func_172060
    ctx->pc = 0x171478u;
    SET_GPR_U32(ctx, 31, 0x171480u);
    ctx->pc = 0x17147Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171478u;
    // 0x17147c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172060u, 0x171478u, 0x171480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171480u;
label_171480:
    // 0x171480: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171484: 0xc04f90e  jal         func_13E438
    ctx->pc = 0x171484u;
    SET_GPR_U32(ctx, 31, 0x17148Cu);
    ctx->pc = 0x171488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171484u;
    // 0x171488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E438u, 0x171484u, 0x17148Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17148Cu;
label_17148c:
    // 0x17148c: 0x8e230274  lw          $v1, 0x274($s1)
    ctx->pc = 0x17148cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x171490: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x171490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171494: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x171494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x171498: 0xc05e43e  jal         func_1790F8
    ctx->pc = 0x171498u;
    SET_GPR_U32(ctx, 31, 0x1714A0u);
    ctx->pc = 0x17149Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171498u;
    // 0x17149c: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1790F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1790F8u, 0x171498u, 0x1714A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714A0u;
label_1714a0:
    // 0x1714a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1714a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1714a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1714a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1714acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714b0: 0xc05c734  jal         func_171CD0
    ctx->pc = 0x1714B0u;
    SET_GPR_U32(ctx, 31, 0x1714B8u);
    ctx->pc = 0x1714B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1714B0u;
    // 0x1714b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171CD0u, 0x1714B0u, 0x1714B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714B8u;
label_1714b8:
    // 0x1714b8: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x1714B8u;
    SET_GPR_U32(ctx, 31, 0x1714C0u);
    ctx->pc = 0x1714BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1714B8u;
    // 0x1714bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x1714B8u, 0x1714C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714C0u;
label_1714c0:
    // 0x1714c0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1714c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1714c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1714c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714c8: 0xc042128  jal         func_1084A0
    ctx->pc = 0x1714C8u;
    SET_GPR_U32(ctx, 31, 0x1714D0u);
    ctx->pc = 0x1714CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1714C8u;
    // 0x1714cc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x1714C8u, 0x1714D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714D0u;
label_1714d0:
    // 0x1714d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1714d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1714d4:
    // 0x1714d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1714d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1714d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1714d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1714dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1714dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1714e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1714E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1714E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714E0u;
        // 0x1714e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1714E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1714E8u;
}
