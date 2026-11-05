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

// Function: sub_00386648
// Address: 0x386648 - 0x386908
void sub_00386648_0x386648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386648_0x386648");
#endif

    switch (ctx->pc) {
        case 0x38664cu: goto label_38664c;
        case 0x3866e0u: goto label_3866e0;
        case 0x386870u: goto label_386870;
        case 0x38687cu: goto label_38687c;
        case 0x3868a8u: goto label_3868a8;
        case 0x3868b8u: goto label_3868b8;
        default: break;
    }

    ctx->pc = 0x386648u;

    // 0x386648: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x386648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_38664c:
    // 0x38664c: 0xffb70170  sd          $s7, 0x170($sp)
    ctx->pc = 0x38664cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x386650: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x386650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x386654: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x386654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x386658: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x386658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x38665c: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x38665cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x386660: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x386660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386664: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x386664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x386668: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x386668u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38666c: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x38666cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x386670: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x386670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x386674: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x386674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x386678: 0x8e540868  lw          $s4, 0x868($s2)
    ctx->pc = 0x386678u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x38667c: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x38667cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x386680: 0x26950010  addiu       $s5, $s4, 0x10
    ctx->pc = 0x386680u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x386684: 0x26960018  addiu       $s6, $s4, 0x18
    ctx->pc = 0x386684u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x386688: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x386688u;
    {
        const bool branch_taken_0x386688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386688u;
        // 0x38668c: 0x26970020  addiu       $s7, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386688) {
            ctx->pc = 0x386718u;
            goto label_386718;
        }
    }
    ctx->pc = 0x386690u;
    // 0x386690: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x386690u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x386694: 0x4630022  bgezl       $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x386694u;
    {
        const bool branch_taken_0x386694 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x386694) {
            ctx->pc = 0x386698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386694u;
            // 0x386698: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386720u;
            goto label_386720;
        }
    }
    ctx->pc = 0x38669Cu;
    // 0x38669c: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x38669cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x3866a0: 0x442001f  bltzl       $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3866A0u;
    {
        const bool branch_taken_0x3866a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3866a0) {
            ctx->pc = 0x3866A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3866A0u;
            // 0x3866a4: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386720u;
            goto label_386720;
        }
    }
    ctx->pc = 0x3866A8u;
    // 0x3866a8: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x3866a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x3866ac: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x3866acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x3866b0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3866b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3866b4: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x3866b4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x3866b8: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x3866b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x3866bc: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x3866bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3866c0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3866c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3866c4: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x3866c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x3866c8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3866c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3866cc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3866ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3866d0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3866d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3866d4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x3866d4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x3866d8: 0xc0f4b84  jal         func_3D2E10
    ctx->pc = 0x3866D8u;
    SET_GPR_U32(ctx, 31, 0x3866E0u);
    ctx->pc = 0x3866DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3866D8u;
    // 0x3866dc: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E10u, 0x3866D8u, 0x3866E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3866E0u;
label_3866e0:
    // 0x3866e0: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x3866e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x3866e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3866e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3866e8: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x3866e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x3866ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3866ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3866f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3866f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3866f4: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x3866f4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x3866f8: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x3866f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x3866fc: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x3866fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x386700: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x386700u;
    {
        const bool branch_taken_0x386700 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x386704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386700u;
        // 0x386704: 0x8e540868  lw          $s4, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386700) {
            ctx->pc = 0x386720u;
            goto label_386720;
        }
    }
    ctx->pc = 0x386708u;
    // 0x386708: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x386708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x38670c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38670cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x386710: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x386710u;
    {
        const bool branch_taken_0x386710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386710u;
        // 0x386714: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386710) {
            ctx->pc = 0x386720u;
            goto label_386720;
        }
    }
    ctx->pc = 0x386718u;
label_386718:
    // 0x386718: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x386718u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x38671c: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x38671cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
label_386720:
    // 0x386720: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x386720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x386724: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x386724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x386728: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x386728u;
    {
        const bool branch_taken_0x386728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x386728) {
            ctx->pc = 0x38672Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386728u;
            // 0x38672c: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386750u;
            goto label_386750;
        }
    }
    ctx->pc = 0x386730u;
    // 0x386730: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x386730u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x386734: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x386734u;
    {
        const bool branch_taken_0x386734 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x386734) {
            ctx->pc = 0x386738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x386734u;
            // 0x386738: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386750u;
            goto label_386750;
        }
    }
    ctx->pc = 0x38673Cu;
    // 0x38673c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x38673cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x386740: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x386740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x386744: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x386744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x386748: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x386748u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x38674c: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x38674cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_386750:
    // 0x386750: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x386750u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x386754: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x386754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x386758: 0x2508e030  addiu       $t0, $t0, -0x1FD0
    ctx->pc = 0x386758u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959152));
    // 0x38675c: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x38675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x386760: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x386760u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x386764: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x386764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x386768: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x386768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x38676c: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x38676cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x386770: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x386770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x386774: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x386774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x386778: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x386778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x38677c: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x38677cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x386780: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x386780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x386784: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x386784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x386788: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x386788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x38678c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x38678cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x386790: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x386790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x386794: 0xfec50000  sd          $a1, 0x0($s6)
    ctx->pc = 0x386794u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 5));
    // 0x386798: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x386798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x38679c: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x38679cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x3867a0: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x3867a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x3867a4: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x3867a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3867a8: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x3867a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x3867ac: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x3867acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x3867b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3867b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3867b4: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x3867b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x3867b8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3867b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3867bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3867bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3867c0: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x3867c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x3867c4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3867c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3867c8: 0x9c440000  lwu         $a0, 0x0($v0)
    ctx->pc = 0x3867c8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3867cc: 0xae4300e0  sw          $v1, 0xE0($s2)
    ctx->pc = 0x3867ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
    // 0x3867d0: 0xfe4400a0  sd          $a0, 0xA0($s2)
    ctx->pc = 0x3867d0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 4));
    // 0x3867d4: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x3867d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x3867d8: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x3867d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
    // 0x3867dc: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x3867dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x3867e0: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x3867e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x3867e4: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3867e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3867e8: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x3867e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x3867ec: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x3867ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x3867f0: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x3867f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
    // 0x3867f4: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x3867f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x3867f8: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x3867f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x3867fc: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x3867fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x386800: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x386800u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
    // 0x386804: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x386804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x386808: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x386808u;
    {
        const bool branch_taken_0x386808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386808u;
        // 0x38680c: 0xae4200dc  sw          $v0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386808) {
            ctx->pc = 0x386834u;
            goto label_386834;
        }
    }
    ctx->pc = 0x386810u;
    // 0x386810: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x386810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x386814: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x386814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x386818: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x386818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x38681c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x38681Cu;
    {
        const bool branch_taken_0x38681c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38681Cu;
        // 0x386820: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38681c) {
            ctx->pc = 0x38684Cu;
            goto label_38684c;
        }
    }
    ctx->pc = 0x386824u;
    // 0x386824: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x386824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x386828: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x386828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x38682c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38682Cu;
    {
        const bool branch_taken_0x38682c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38682Cu;
        // 0x386830: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38682c) {
            ctx->pc = 0x38684Cu;
            goto label_38684c;
        }
    }
    ctx->pc = 0x386834u;
label_386834:
    // 0x386834: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x386834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x386838: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x386838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x38683c: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x38683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x386840: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x386840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x386844: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x386844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x386848: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x386848u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_38684c:
    // 0x38684c: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x38684Cu;
    {
        const bool branch_taken_0x38684c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x38684c) {
            ctx->pc = 0x386850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38684Cu;
            // 0x386850: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386888u;
            goto label_386888;
        }
    }
    ctx->pc = 0x386854u;
    // 0x386854: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x386854u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x386858: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x386858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x38685c: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x38685cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x386860: 0x24c69378  addiu       $a2, $a2, -0x6C88
    ctx->pc = 0x386860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939512));
    // 0x386864: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x386864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386868: 0xc0f303e  jal         func_3CC0F8
    ctx->pc = 0x386868u;
    SET_GPR_U32(ctx, 31, 0x386870u);
    ctx->pc = 0x38686Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386868u;
    // 0x38686c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC0F8u, 0x386868u, 0x386870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386870u;
label_386870:
    // 0x386870: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x386870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386874: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x386874u;
    SET_GPR_U32(ctx, 31, 0x38687Cu);
    ctx->pc = 0x386878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386874u;
    // 0x386878: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x386874u, 0x38687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38687Cu;
label_38687c:
    // 0x38687c: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x38687Cu;
    {
        const bool branch_taken_0x38687c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x386880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38687Cu;
        // 0x386880: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38687c) {
            ctx->pc = 0x3868E0u;
            goto label_3868e0;
        }
    }
    ctx->pc = 0x386884u;
    // 0x386884: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x386884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_386888:
    // 0x386888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x386888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38688c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x38688Cu;
    {
        const bool branch_taken_0x38688c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x386890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38688Cu;
        // 0x386890: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38688c) {
            ctx->pc = 0x3868E0u;
            goto label_3868e0;
        }
    }
    ctx->pc = 0x386894u;
    // 0x386894: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x386894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x386898: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386898u;
    {
        const bool branch_taken_0x386898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386898u;
        // 0x38689c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386898) {
            ctx->pc = 0x3868B0u;
            goto label_3868b0;
        }
    }
    ctx->pc = 0x3868A0u;
    // 0x3868a0: 0xc0e1c0e  jal         func_387038
    ctx->pc = 0x3868A0u;
    SET_GPR_U32(ctx, 31, 0x3868A8u);
    ctx->pc = 0x3868A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3868A0u;
    // 0x3868a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387038u, 0x3868A0u, 0x3868A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3868A8u;
label_3868a8:
    // 0x3868a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3868A8u;
    {
        const bool branch_taken_0x3868a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3868ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868A8u;
        // 0x3868ac: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3868a8) {
            ctx->pc = 0x3868BCu;
            goto label_3868bc;
        }
    }
    ctx->pc = 0x3868B0u;
label_3868b0:
    // 0x3868b0: 0xc0e18ee  jal         func_3863B8
    ctx->pc = 0x3868B0u;
    SET_GPR_U32(ctx, 31, 0x3868B8u);
    ctx->pc = 0x3868B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3868B0u;
    // 0x3868b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3863B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3863B8u, 0x3868B0u, 0x3868B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3868B8u;
label_3868b8:
    // 0x3868b8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3868b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3868bc:
    // 0x3868bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3868bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3868c0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3868C0u;
    {
        const bool branch_taken_0x3868c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3868C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3868C0u;
        // 0x3868c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3868c0) {
            ctx->pc = 0x3868D8u;
            goto label_3868d8;
        }
    }
    ctx->pc = 0x3868C8u;
    // 0x3868c8: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x3868c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x3868cc: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x3868ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x3868d0: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x3868d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x3868d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3868d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3868d8:
    // 0x3868d8: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x3868d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x3868dc: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x3868dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_3868e0:
    // 0x3868e0: 0xdfb70170  ld          $s7, 0x170($sp)
    ctx->pc = 0x3868e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x3868e4: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x3868e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3868e8: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x3868e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3868ec: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x3868ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3868f0: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x3868f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3868f4: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x3868f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3868f8: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x3868f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3868fc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x3868fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x386900: 0x3e00008  jr          $ra
    ctx->pc = 0x386900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386900u;
        // 0x386904: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386908u;
}
