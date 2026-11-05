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

// Function: sub_00317398
// Address: 0x317398 - 0x3174d0
void sub_00317398_0x317398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317398_0x317398");
#endif

    switch (ctx->pc) {
        case 0x317428u: goto label_317428;
        case 0x317450u: goto label_317450;
        case 0x317470u: goto label_317470;
        case 0x31749cu: goto label_31749c;
        default: break;
    }

    ctx->pc = 0x317398u;

    // 0x317398: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x317398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31739c: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x31739cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x3173a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3173a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3173a4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3173a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3173a8: 0x247222b0  addiu       $s2, $v1, 0x22B0
    ctx->pc = 0x3173a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 8880));
    // 0x3173ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3173acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3173b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3173b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3173b4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3173b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3173b8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3173b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3173bc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3173bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3173c0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x3173c0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5B22B4u));
    // 0x3173c4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3173c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B22BCu));
    // 0x3173c8: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3173C8u;
    {
        const bool branch_taken_0x3173c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3173CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173C8u;
        // 0x3173cc: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3173c8) {
            ctx->pc = 0x3173E8u;
            goto label_3173e8;
        }
    }
    ctx->pc = 0x3173D0u;
    // 0x3173d0: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3173D0u;
    {
        const bool branch_taken_0x3173d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3173d0) {
            ctx->pc = 0x3173D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3173D0u;
            // 0x3173d4: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3173D8u;
            goto label_3173d8;
        }
    }
    ctx->pc = 0x3173D8u;
label_3173d8:
    // 0x3173d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3173d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3173dc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3173dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3173e0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3173E0u;
    {
        const bool branch_taken_0x3173e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3173E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3173E0u;
        // 0x3173e4: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3173e0) {
            ctx->pc = 0x3174ACu;
            goto label_3174ac;
        }
    }
    ctx->pc = 0x3173E8u;
label_3173e8:
    // 0x3173e8: 0x8c6322b0  lw          $v1, 0x22B0($v1)
    ctx->pc = 0x3173e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8880)));
    // 0x3173ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3173ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3173f0: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3173f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3173f4: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x3173f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x3173f8: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x3173f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3173fc: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x3173fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x317400: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x317400u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x317404: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x317404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x317408: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x317408u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x31740c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x31740cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x317410: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x317410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x317414: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x317414u;
    {
        const bool branch_taken_0x317414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x317418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317414u;
        // 0x317418: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317414) {
            ctx->pc = 0x317430u;
            goto label_317430;
        }
    }
    ctx->pc = 0x31741Cu;
    // 0x31741c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31741cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317420: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x317420u;
    SET_GPR_U32(ctx, 31, 0x317428u);
    ctx->pc = 0x317424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317420u;
    // 0x317424: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x317420u, 0x317428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317428u;
label_317428:
    // 0x317428: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x317428u;
    {
        const bool branch_taken_0x317428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317428u;
        // 0x31742c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317428) {
            ctx->pc = 0x317438u;
            goto label_317438;
        }
    }
    ctx->pc = 0x317430u;
label_317430:
    // 0x317430: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x317430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317434: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x317434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317438:
    // 0x317438: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x317438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31743c: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31743Cu;
    {
        const bool branch_taken_0x31743c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x317440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31743Cu;
        // 0x317440: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31743c) {
            ctx->pc = 0x317458u;
            goto label_317458;
        }
    }
    ctx->pc = 0x317444u;
    // 0x317444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x317444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317448: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x317448u;
    SET_GPR_U32(ctx, 31, 0x317450u);
    ctx->pc = 0x31744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x317448u;
    // 0x31744c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x317448u, 0x317450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x317450u;
label_317450:
    // 0x317450: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x317450u;
    {
        const bool branch_taken_0x317450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317450u;
        // 0x317454: 0x501821  addu        $v1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317450) {
            ctx->pc = 0x31745Cu;
            goto label_31745c;
        }
    }
    ctx->pc = 0x317458u;
label_317458:
    // 0x317458: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x317458u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31745c:
    // 0x31745c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x31745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x317460: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x317460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317464: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x317464u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317468: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x317468u;
    {
        const bool branch_taken_0x317468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x317468) {
            ctx->pc = 0x31746Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317468u;
            // 0x31746c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31748Cu;
            goto label_31748c;
        }
    }
    ctx->pc = 0x317470u;
label_317470:
    // 0x317470: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x317470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x317474: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x317474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x317478: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x317478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x31747c: 0x0  nop
    ctx->pc = 0x31747cu;
    // NOP
    // 0x317480: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x317480u;
    {
        const bool branch_taken_0x317480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x317484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317480u;
        // 0x317484: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317480) {
            ctx->pc = 0x317470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317470;
        }
    }
    ctx->pc = 0x317488u;
    // 0x317488: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x317488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31748c:
    // 0x31748c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31748Cu;
    {
        const bool branch_taken_0x31748c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x317490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31748Cu;
        // 0x317490: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31748c) {
            ctx->pc = 0x3174A0u;
            goto label_3174a0;
        }
    }
    ctx->pc = 0x317494u;
    // 0x317494: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x317494u;
    SET_GPR_U32(ctx, 31, 0x31749Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x317494u, 0x31749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31749Cu;
label_31749c:
    // 0x31749c: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x31749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_3174a0:
    // 0x3174a0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x3174a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x3174a4: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3174a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x3174a8: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x3174a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_3174ac:
    // 0x3174ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3174acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3174b0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3174b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3174b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3174b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3174b8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3174b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3174bc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3174bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3174c0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3174c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3174c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3174C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3174C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3174C4u;
        // 0x3174c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3174C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3174CCu;
    // 0x3174cc: 0x0  nop
    ctx->pc = 0x3174ccu;
    // NOP
    ctx->pc = 0x3174d0u;
}
