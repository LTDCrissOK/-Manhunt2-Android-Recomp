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

// Function: sub_0013F548
// Address: 0x13f548 - 0x13f8f0
void sub_0013F548_0x13f548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F548_0x13f548");
#endif

    switch (ctx->pc) {
        case 0x13f57cu: goto label_13f57c;
        case 0x13f5d0u: goto label_13f5d0;
        case 0x13f5f4u: goto label_13f5f4;
        case 0x13f610u: goto label_13f610;
        case 0x13f620u: goto label_13f620;
        case 0x13f630u: goto label_13f630;
        case 0x13f640u: goto label_13f640;
        case 0x13f65cu: goto label_13f65c;
        case 0x13f68cu: goto label_13f68c;
        case 0x13f698u: goto label_13f698;
        case 0x13f6b8u: goto label_13f6b8;
        case 0x13f6d0u: goto label_13f6d0;
        case 0x13f6dcu: goto label_13f6dc;
        case 0x13f700u: goto label_13f700;
        case 0x13f710u: goto label_13f710;
        case 0x13f734u: goto label_13f734;
        case 0x13f74cu: goto label_13f74c;
        case 0x13f75cu: goto label_13f75c;
        case 0x13f78cu: goto label_13f78c;
        case 0x13f79cu: goto label_13f79c;
        case 0x13f7b4u: goto label_13f7b4;
        case 0x13f7e8u: goto label_13f7e8;
        case 0x13f808u: goto label_13f808;
        case 0x13f820u: goto label_13f820;
        case 0x13f830u: goto label_13f830;
        case 0x13f84cu: goto label_13f84c;
        case 0x13f85cu: goto label_13f85c;
        case 0x13f878u: goto label_13f878;
        case 0x13f890u: goto label_13f890;
        case 0x13f8a0u: goto label_13f8a0;
        case 0x13f8b0u: goto label_13f8b0;
        case 0x13f8c0u: goto label_13f8c0;
        default: break;
    }

    ctx->pc = 0x13f548u;

    // 0x13f548: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13f548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13f54c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13f54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13f550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f558: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13f558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13f55c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13f55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13f560: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13f560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13f564: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13f564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13f568: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x13f568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x13f56c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x13f56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x13f570: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13f570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13f574: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x13F574u;
    SET_GPR_U32(ctx, 31, 0x13F57Cu);
    ctx->pc = 0x13F578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F574u;
    // 0x13f578: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x13F574u, 0x13F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F57Cu;
label_13f57c:
    // 0x13f57c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13f57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13f580: 0x144300d0  bne         $v0, $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x13F580u;
    {
        const bool branch_taken_0x13f580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F580u;
        // 0x13f584: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f580) {
            ctx->pc = 0x13F8C4u;
            goto label_13f8c4;
        }
    }
    ctx->pc = 0x13F588u;
    // 0x13f588: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x13f588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x13f58c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x13f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x13f590: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x13f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x13f594: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x13f594u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f598: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13f598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13f59c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x13f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x13f5a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13f5a4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x13f5a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5a8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x13f5a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f5ac: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x13f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x13f5b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f5b4: 0x8c70020c  lw          $s0, 0x20C($v1)
    ctx->pc = 0x13f5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x13f5b8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x13F5B8u;
    {
        const bool branch_taken_0x13f5b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5B8u;
        // 0x13f5bc: 0x24150009  addiu       $s5, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5b8) {
            ctx->pc = 0x13F5E8u;
            goto label_13f5e8;
        }
    }
    ctx->pc = 0x13F5C0u;
    // 0x13f5c0: 0x8e250620  lw          $a1, 0x620($s1)
    ctx->pc = 0x13f5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
    // 0x13f5c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5c8: 0xc044234  jal         func_1108D0
    ctx->pc = 0x13F5C8u;
    SET_GPR_U32(ctx, 31, 0x13F5D0u);
    ctx->pc = 0x13F5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F5C8u;
    // 0x13f5cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x13F5C8u, 0x13F5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5D0u;
label_13f5d0:
    // 0x13f5d0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13f5d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5d4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x13f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13f5d8: 0x56a20002  bnel        $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F5D8u;
    {
        const bool branch_taken_0x13f5d8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f5d8) {
            ctx->pc = 0x13F5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F5D8u;
            // 0x13f5dc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F5E4u;
            goto label_13f5e4;
        }
    }
    ctx->pc = 0x13F5E0u;
    // 0x13f5e0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x13f5e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f5e4:
    // 0x13f5e4: 0xae120224  sw          $s2, 0x224($s0)
    ctx->pc = 0x13f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 18));
label_13f5e8:
    // 0x13f5e8: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x13f5e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x13f5ec: 0xc04fe58  jal         func_13F960
    ctx->pc = 0x13F5ECu;
    SET_GPR_U32(ctx, 31, 0x13F5F4u);
    ctx->pc = 0x13F5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F5ECu;
    // 0x13f5f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F960u, 0x13F5ECu, 0x13F5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5F4u;
label_13f5f4:
    // 0x13f5f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13f5f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5f8: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x13f5f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x13f5fc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x13F5FCu;
    {
        const bool branch_taken_0x13f5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5FCu;
        // 0x13f600: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5fc) {
            ctx->pc = 0x13F660u;
            goto label_13f660;
        }
    }
    ctx->pc = 0x13F604u;
    // 0x13f604: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x13f604u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x13f608: 0xc04fea8  jal         func_13FAA0
    ctx->pc = 0x13F608u;
    SET_GPR_U32(ctx, 31, 0x13F610u);
    ctx->pc = 0x13F60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F608u;
    // 0x13f60c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAA0u, 0x13F608u, 0x13F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F610u;
label_13f610:
    // 0x13f610: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F610u;
    {
        const bool branch_taken_0x13f610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F610u;
        // 0x13f614: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f610) {
            ctx->pc = 0x13F628u;
            goto label_13f628;
        }
    }
    ctx->pc = 0x13F618u;
    // 0x13f618: 0xc04fe76  jal         func_13F9D8
    ctx->pc = 0x13F618u;
    SET_GPR_U32(ctx, 31, 0x13F620u);
    ctx->pc = 0x13F61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F618u;
    // 0x13f61c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F9D8u, 0x13F618u, 0x13F620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F620u;
label_13f620:
    // 0x13f620: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13F620u;
    {
        const bool branch_taken_0x13f620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F620u;
        // 0x13f624: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f620) {
            ctx->pc = 0x13F660u;
            goto label_13f660;
        }
    }
    ctx->pc = 0x13F628u;
label_13f628:
    // 0x13f628: 0xc04feb0  jal         func_13FAC0
    ctx->pc = 0x13F628u;
    SET_GPR_U32(ctx, 31, 0x13F630u);
    ctx->pc = 0x13F62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F628u;
    // 0x13f62c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FAC0u, 0x13F628u, 0x13F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F630u;
label_13f630:
    // 0x13f630: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13F630u;
    {
        const bool branch_taken_0x13f630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F630u;
        // 0x13f634: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f630) {
            ctx->pc = 0x13F660u;
            goto label_13f660;
        }
    }
    ctx->pc = 0x13F638u;
    // 0x13f638: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x13F638u;
    SET_GPR_U32(ctx, 31, 0x13F640u);
    ctx->pc = 0x13F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F638u;
    // 0x13f63c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1369D0u, 0x13F638u, 0x13F640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F640u;
label_13f640:
    // 0x13f640: 0x52c00007  beql        $s6, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13F640u;
    {
        const bool branch_taken_0x13f640 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f640) {
            ctx->pc = 0x13F644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F640u;
            // 0x13f644: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F660u;
            goto label_13f660;
        }
    }
    ctx->pc = 0x13F648u;
    // 0x13f648: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F648u;
    {
        const bool branch_taken_0x13f648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F648u;
        // 0x13f64c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f648) {
            ctx->pc = 0x13F660u;
            goto label_13f660;
        }
    }
    ctx->pc = 0x13F650u;
    // 0x13f650: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x13f650u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x13f654: 0xc0501f6  jal         func_1407D8
    ctx->pc = 0x13F654u;
    SET_GPR_U32(ctx, 31, 0x13F65Cu);
    ctx->pc = 0x13F658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F654u;
    // 0x13f658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1407D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1407D8u, 0x13F654u, 0x13F65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F65Cu;
label_13f65c:
    // 0x13f65c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13f65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_13f660:
    // 0x13f660: 0x1662003f  bne         $s3, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x13F660u;
    {
        const bool branch_taken_0x13f660 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F660u;
        // 0x13f664: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f660) {
            ctx->pc = 0x13F760u;
            goto label_13f760;
        }
    }
    ctx->pc = 0x13F668u;
    // 0x13f668: 0x26e29a08  addiu       $v0, $s7, -0x65F8
    ctx->pc = 0x13f668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941192));
    // 0x13f66c: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x13f66cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x13f670: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f674: 0x8c520108  lw          $s2, 0x108($v0)
    ctx->pc = 0x13f674u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x13f678: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
    ctx->pc = 0x13F678u;
    {
        const bool branch_taken_0x13f678 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F678u;
        // 0x13f67c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f678) {
            ctx->pc = 0x13F760u;
            goto label_13f760;
        }
    }
    ctx->pc = 0x13F680u;
    // 0x13f680: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x13f680u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x13f684: 0xc04fe70  jal         func_13F9C0
    ctx->pc = 0x13F684u;
    SET_GPR_U32(ctx, 31, 0x13F68Cu);
    ctx->pc = 0x13F688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F684u;
    // 0x13f688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F9C0u, 0x13F684u, 0x13F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F68Cu;
label_13f68c:
    // 0x13f68c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13f68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f690: 0xc09522a  jal         func_2548A8
    ctx->pc = 0x13F690u;
    SET_GPR_U32(ctx, 31, 0x13F698u);
    ctx->pc = 0x13F694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F690u;
    // 0x13f694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A8u, 0x13F690u, 0x13F698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F698u;
label_13f698:
    // 0x13f698: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F698u;
    {
        const bool branch_taken_0x13f698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f698) {
            ctx->pc = 0x13F6C0u;
            goto label_13f6c0;
        }
    }
    ctx->pc = 0x13F6A0u;
    // 0x13f6a0: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x13F6A0u;
    {
        const bool branch_taken_0x13f6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6A0u;
        // 0x13f6a4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6a0) {
            ctx->pc = 0x13F760u;
            goto label_13f760;
        }
    }
    ctx->pc = 0x13F6A8u;
    // 0x13f6a8: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x13f6a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x13f6ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f6b0: 0xc04fe6a  jal         func_13F9A8
    ctx->pc = 0x13F6B0u;
    SET_GPR_U32(ctx, 31, 0x13F6B8u);
    ctx->pc = 0x13F6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6B0u;
    // 0x13f6b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F9A8u, 0x13F6B0u, 0x13F6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6B8u;
label_13f6b8:
    // 0x13f6b8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x13F6B8u;
    {
        const bool branch_taken_0x13f6b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6B8u;
        // 0x13f6bc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6b8) {
            ctx->pc = 0x13F760u;
            goto label_13f760;
        }
    }
    ctx->pc = 0x13F6C0u;
label_13f6c0:
    // 0x13f6c0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13F6C0u;
    {
        const bool branch_taken_0x13f6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6C0u;
        // 0x13f6c4: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6c0) {
            ctx->pc = 0x13F738u;
            goto label_13f738;
        }
    }
    ctx->pc = 0x13F6C8u;
    // 0x13f6c8: 0xc04da74  jal         func_1369D0
    ctx->pc = 0x13F6C8u;
    SET_GPR_U32(ctx, 31, 0x13F6D0u);
    ctx->pc = 0x13F6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6C8u;
    // 0x13f6cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1369D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1369D0u, 0x13F6C8u, 0x13F6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6D0u;
label_13f6d0:
    // 0x13f6d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13f6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f6d4: 0xc09522e  jal         func_2548B8
    ctx->pc = 0x13F6D4u;
    SET_GPR_U32(ctx, 31, 0x13F6DCu);
    ctx->pc = 0x13F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6D4u;
    // 0x13f6d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548B8u, 0x13F6D4u, 0x13F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6DCu;
label_13f6dc:
    // 0x13f6dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13F6DCu;
    {
        const bool branch_taken_0x13f6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f6dc) {
            ctx->pc = 0x13F708u;
            goto label_13f708;
        }
    }
    ctx->pc = 0x13F6E4u;
    // 0x13f6e4: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13F6E4u;
    {
        const bool branch_taken_0x13f6e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6E4u;
        // 0x13f6e8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6e4) {
            ctx->pc = 0x13F738u;
            goto label_13f738;
        }
    }
    ctx->pc = 0x13F6ECu;
    // 0x13f6ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f6f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13f6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f6f4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x13f6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13f6f8: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x13F6F8u;
    SET_GPR_U32(ctx, 31, 0x13F700u);
    ctx->pc = 0x13F6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6F8u;
    // 0x13f6fc: 0x24070012  addiu       $a3, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137130u, 0x13F6F8u, 0x13F700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F700u;
label_13f700:
    // 0x13f700: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13F700u;
    {
        const bool branch_taken_0x13f700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F700u;
        // 0x13f704: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f700) {
            ctx->pc = 0x13F738u;
            goto label_13f738;
        }
    }
    ctx->pc = 0x13F708u;
label_13f708:
    // 0x13f708: 0xc095238  jal         func_2548E0
    ctx->pc = 0x13F708u;
    SET_GPR_U32(ctx, 31, 0x13F710u);
    ctx->pc = 0x13F70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F708u;
    // 0x13f70c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548E0u, 0x13F708u, 0x13F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F710u;
label_13f710:
    // 0x13f710: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F710u;
    {
        const bool branch_taken_0x13f710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F710u;
        // 0x13f714: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f710) {
            ctx->pc = 0x13F738u;
            goto label_13f738;
        }
    }
    ctx->pc = 0x13F718u;
    // 0x13f718: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F718u;
    {
        const bool branch_taken_0x13f718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f718) {
            ctx->pc = 0x13F71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F718u;
            // 0x13f71c: 0x8e270620  lw          $a3, 0x620($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F73Cu;
            goto label_13f73c;
        }
    }
    ctx->pc = 0x13F720u;
    // 0x13f720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f724: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13f724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f728: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x13f728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x13f72c: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x13F72Cu;
    SET_GPR_U32(ctx, 31, 0x13F734u);
    ctx->pc = 0x13F730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F72Cu;
    // 0x13f730: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137130u, 0x13F72Cu, 0x13F734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F734u;
label_13f734:
    // 0x13f734: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13f734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13f738:
    // 0x13f738: 0x8e270620  lw          $a3, 0x620($s1)
    ctx->pc = 0x13f738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1568)));
label_13f73c:
    // 0x13f73c: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x13f73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x13f740: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13f740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f744: 0xc04668a  jal         func_119A28
    ctx->pc = 0x13F744u;
    SET_GPR_U32(ctx, 31, 0x13F74Cu);
    ctx->pc = 0x13F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F744u;
    // 0x13f748: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x13F744u, 0x13F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F74Cu;
label_13f74c:
    // 0x13f74c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x13f74cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x13f750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f754: 0xc04fe6a  jal         func_13F9A8
    ctx->pc = 0x13F754u;
    SET_GPR_U32(ctx, 31, 0x13F75Cu);
    ctx->pc = 0x13F758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F754u;
    // 0x13f758: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F9A8u, 0x13F754u, 0x13F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F75Cu;
label_13f75c:
    // 0x13f75c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13f760:
    // 0x13f760: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13f764: 0x16620017  bne         $s3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13F764u;
    {
        const bool branch_taken_0x13f764 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F764u;
        // 0x13f768: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f764) {
            ctx->pc = 0x13F7C4u;
            goto label_13f7c4;
        }
    }
    ctx->pc = 0x13F76Cu;
    // 0x13f76c: 0x26e29a08  addiu       $v0, $s7, -0x65F8
    ctx->pc = 0x13f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941192));
    // 0x13f770: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x13f770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x13f774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f778: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x13f778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x13f77c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F77Cu;
    {
        const bool branch_taken_0x13f77c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F77Cu;
        // 0x13f780: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f77c) {
            ctx->pc = 0x13F7A4u;
            goto label_13f7a4;
        }
    }
    ctx->pc = 0x13F784u;
    // 0x13f784: 0xc0952de  jal         func_254B78
    ctx->pc = 0x13F784u;
    SET_GPR_U32(ctx, 31, 0x13F78Cu);
    ctx->pc = 0x13F788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F784u;
    // 0x13f788: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254B78u, 0x13F784u, 0x13F78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F78Cu;
label_13f78c:
    // 0x13f78c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F78Cu;
    {
        const bool branch_taken_0x13f78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F78Cu;
        // 0x13f790: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f78c) {
            ctx->pc = 0x13F7A4u;
            goto label_13f7a4;
        }
    }
    ctx->pc = 0x13F794u;
    // 0x13f794: 0xc04ff38  jal         func_13FCE0
    ctx->pc = 0x13F794u;
    SET_GPR_U32(ctx, 31, 0x13F79Cu);
    ctx->pc = 0x13F798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F794u;
    // 0x13f798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FCE0u, 0x13F794u, 0x13F79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F79Cu;
label_13f79c:
    // 0x13f79c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x13F79Cu;
    {
        const bool branch_taken_0x13f79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F79Cu;
        // 0x13f7a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f79c) {
            ctx->pc = 0x13F8C4u;
            goto label_13f8c4;
        }
    }
    ctx->pc = 0x13F7A4u;
label_13f7a4:
    // 0x13f7a4: 0x12a2002b  beq         $s5, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x13F7A4u;
    {
        const bool branch_taken_0x13f7a4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x13f7a4) {
            ctx->pc = 0x13F854u;
            goto label_13f854;
        }
    }
    ctx->pc = 0x13F7ACu;
    // 0x13f7ac: 0xc05014e  jal         func_140538
    ctx->pc = 0x13F7ACu;
    SET_GPR_U32(ctx, 31, 0x13F7B4u);
    ctx->pc = 0x13F7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F7ACu;
    // 0x13f7b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140538u, 0x13F7ACu, 0x13F7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7B4u;
label_13f7b4:
    // 0x13f7b4: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x13F7B4u;
    {
        const bool branch_taken_0x13f7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7B4u;
        // 0x13f7b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f7b4) {
            ctx->pc = 0x13F8C4u;
            goto label_13f8c4;
        }
    }
    ctx->pc = 0x13F7BCu;
    // 0x13f7bc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x13F7BCu;
    {
        const bool branch_taken_0x13f7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f7bc) {
            ctx->pc = 0x13F854u;
            goto label_13f854;
        }
    }
    ctx->pc = 0x13F7C4u;
label_13f7c4:
    // 0x13f7c4: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13F7C4u;
    {
        const bool branch_taken_0x13f7c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7C4u;
        // 0x13f7c8: 0x26e29a08  addiu       $v0, $s7, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294941192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f7c4) {
            ctx->pc = 0x13F7F8u;
            goto label_13f7f8;
        }
    }
    ctx->pc = 0x13F7CCu;
    // 0x13f7cc: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x13f7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x13f7d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f7d4: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x13f7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x13f7d8: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x13F7D8u;
    {
        const bool branch_taken_0x13f7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7D8u;
        // 0x13f7dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f7d8) {
            ctx->pc = 0x13F8C4u;
            goto label_13f8c4;
        }
    }
    ctx->pc = 0x13F7E0u;
    // 0x13f7e0: 0xc0952de  jal         func_254B78
    ctx->pc = 0x13F7E0u;
    SET_GPR_U32(ctx, 31, 0x13F7E8u);
    ctx->pc = 0x13F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F7E0u;
    // 0x13f7e4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254B78u, 0x13F7E0u, 0x13F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7E8u;
label_13f7e8:
    // 0x13f7e8: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x13F7E8u;
    {
        const bool branch_taken_0x13f7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F7E8u;
        // 0x13f7ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f7e8) {
            ctx->pc = 0x13F8C4u;
            goto label_13f8c4;
        }
    }
    ctx->pc = 0x13F7F0u;
    // 0x13f7f0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x13F7F0u;
    {
        const bool branch_taken_0x13f7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f7f0) {
            ctx->pc = 0x13F888u;
            goto label_13f888;
        }
    }
    ctx->pc = 0x13F7F8u;
label_13f7f8:
    // 0x13f7f8: 0x1660000f  bnez        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x13F7F8u;
    {
        const bool branch_taken_0x13f7f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f7f8) {
            ctx->pc = 0x13F838u;
            goto label_13f838;
        }
    }
    ctx->pc = 0x13F800u;
    // 0x13f800: 0xc050176  jal         func_1405D8
    ctx->pc = 0x13F800u;
    SET_GPR_U32(ctx, 31, 0x13F808u);
    ctx->pc = 0x13F804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F800u;
    // 0x13f804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1405D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1405D8u, 0x13F800u, 0x13F808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F808u;
label_13f808:
    // 0x13f808: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F808u;
    {
        const bool branch_taken_0x13f808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F808u;
        // 0x13f80c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f808) {
            ctx->pc = 0x13F818u;
            goto label_13f818;
        }
    }
    ctx->pc = 0x13F810u;
    // 0x13f810: 0x16a2001d  bne         $s5, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13F810u;
    {
        const bool branch_taken_0x13f810 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x13f810) {
            ctx->pc = 0x13F888u;
            goto label_13f888;
        }
    }
    ctx->pc = 0x13F818u;
label_13f818:
    // 0x13f818: 0xc05019e  jal         func_140678
    ctx->pc = 0x13F818u;
    SET_GPR_U32(ctx, 31, 0x13F820u);
    ctx->pc = 0x13F81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F818u;
    // 0x13f81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140678u, 0x13F818u, 0x13F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F820u;
label_13f820:
    // 0x13f820: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x13F820u;
    {
        const bool branch_taken_0x13f820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F820u;
        // 0x13f824: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f820) {
            ctx->pc = 0x13F8C4u;
            goto label_13f8c4;
        }
    }
    ctx->pc = 0x13F828u;
    // 0x13f828: 0xc04ff90  jal         func_13FE40
    ctx->pc = 0x13F828u;
    SET_GPR_U32(ctx, 31, 0x13F830u);
    ctx->pc = 0x13F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F828u;
    // 0x13f82c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FE40u, 0x13F828u, 0x13F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F830u;
label_13f830:
    // 0x13f830: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x13F830u;
    {
        const bool branch_taken_0x13f830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F830u;
        // 0x13f834: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f830) {
            ctx->pc = 0x13F8C4u;
            goto label_13f8c4;
        }
    }
    ctx->pc = 0x13F838u;
label_13f838:
    // 0x13f838: 0x1663000a  bne         $s3, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13F838u;
    {
        const bool branch_taken_0x13f838 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x13F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F838u;
        // 0x13f83c: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f838) {
            ctx->pc = 0x13F864u;
            goto label_13f864;
        }
    }
    ctx->pc = 0x13F840u;
    // 0x13f840: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x13f840u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x13f844: 0xc0501ca  jal         func_140728
    ctx->pc = 0x13F844u;
    SET_GPR_U32(ctx, 31, 0x13F84Cu);
    ctx->pc = 0x13F848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F844u;
    // 0x13f848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140728u, 0x13F844u, 0x13F84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F84Cu;
label_13f84c:
    // 0x13f84c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F84Cu;
    {
        const bool branch_taken_0x13f84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F84Cu;
        // 0x13f850: 0x2662ffff  addiu       $v0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f84c) {
            ctx->pc = 0x13F864u;
            goto label_13f864;
        }
    }
    ctx->pc = 0x13F854u;
label_13f854:
    // 0x13f854: 0xc050038  jal         func_1400E0
    ctx->pc = 0x13F854u;
    SET_GPR_U32(ctx, 31, 0x13F85Cu);
    ctx->pc = 0x13F858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F854u;
    // 0x13f858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1400E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1400E0u, 0x13F854u, 0x13F85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F85Cu;
label_13f85c:
    // 0x13f85c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x13F85Cu;
    {
        const bool branch_taken_0x13f85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F85Cu;
        // 0x13f860: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f85c) {
            ctx->pc = 0x13F8C4u;
            goto label_13f8c4;
        }
    }
    ctx->pc = 0x13F864u;
label_13f864:
    // 0x13f864: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x13f864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13f868: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13F868u;
    {
        const bool branch_taken_0x13f868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F868u;
        // 0x13f86c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f868) {
            ctx->pc = 0x13F8C4u;
            goto label_13f8c4;
        }
    }
    ctx->pc = 0x13F870u;
    // 0x13f870: 0xc050176  jal         func_1405D8
    ctx->pc = 0x13F870u;
    SET_GPR_U32(ctx, 31, 0x13F878u);
    ctx->pc = 0x13F874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F870u;
    // 0x13f874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1405D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1405D8u, 0x13F870u, 0x13F878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F878u;
label_13f878:
    // 0x13f878: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13F878u;
    {
        const bool branch_taken_0x13f878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F878u;
        // 0x13f87c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f878) {
            ctx->pc = 0x13F898u;
            goto label_13f898;
        }
    }
    ctx->pc = 0x13F880u;
    // 0x13f880: 0x12a20005  beq         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F880u;
    {
        const bool branch_taken_0x13f880 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x13f880) {
            ctx->pc = 0x13F898u;
            goto label_13f898;
        }
    }
    ctx->pc = 0x13F888u;
label_13f888:
    // 0x13f888: 0xc04feda  jal         func_13FB68
    ctx->pc = 0x13F888u;
    SET_GPR_U32(ctx, 31, 0x13F890u);
    ctx->pc = 0x13F88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F888u;
    // 0x13f88c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB68u, 0x13F888u, 0x13F890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F890u;
label_13f890:
    // 0x13f890: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x13F890u;
    {
        const bool branch_taken_0x13f890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F890u;
        // 0x13f894: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f890) {
            ctx->pc = 0x13F8C4u;
            goto label_13f8c4;
        }
    }
    ctx->pc = 0x13F898u;
label_13f898:
    // 0x13f898: 0xc05019e  jal         func_140678
    ctx->pc = 0x13F898u;
    SET_GPR_U32(ctx, 31, 0x13F8A0u);
    ctx->pc = 0x13F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F898u;
    // 0x13f89c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140678u, 0x13F898u, 0x13F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8A0u;
label_13f8a0:
    // 0x13f8a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13F8A0u;
    {
        const bool branch_taken_0x13f8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8A0u;
        // 0x13f8a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f8a0) {
            ctx->pc = 0x13F8C4u;
            goto label_13f8c4;
        }
    }
    ctx->pc = 0x13F8A8u;
    // 0x13f8a8: 0xc0500c8  jal         func_140320
    ctx->pc = 0x13F8A8u;
    SET_GPR_U32(ctx, 31, 0x13F8B0u);
    ctx->pc = 0x13F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F8A8u;
    // 0x13f8ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140320u, 0x13F8A8u, 0x13F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8B0u;
label_13f8b0:
    // 0x13f8b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F8B0u;
    {
        const bool branch_taken_0x13f8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8B0u;
        // 0x13f8b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f8b0) {
            ctx->pc = 0x13F8C4u;
            goto label_13f8c4;
        }
    }
    ctx->pc = 0x13F8B8u;
    // 0x13f8b8: 0xc04ff90  jal         func_13FE40
    ctx->pc = 0x13F8B8u;
    SET_GPR_U32(ctx, 31, 0x13F8C0u);
    ctx->pc = 0x13F8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F8B8u;
    // 0x13f8bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FE40u, 0x13F8B8u, 0x13F8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8C0u;
label_13f8c0:
    // 0x13f8c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f8c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f8c4:
    // 0x13f8c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f8c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f8c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13f8c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f8cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13f8ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13f8d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13f8d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f8d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13f8d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13f8d8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13f8d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f8dc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x13f8dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13f8e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13f8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13f8e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13F8E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F8E4u;
        // 0x13f8e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F8E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F8ECu;
    // 0x13f8ec: 0x0  nop
    ctx->pc = 0x13f8ecu;
    // NOP
    ctx->pc = 0x13f8f0u;
}
