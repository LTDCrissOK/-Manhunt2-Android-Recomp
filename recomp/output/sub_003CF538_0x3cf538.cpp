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

// Function: sub_003CF538
// Address: 0x3cf538 - 0x3cf778
void sub_003CF538_0x3cf538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CF538_0x3cf538");
#endif

    switch (ctx->pc) {
        case 0x3cf570u: goto label_3cf570;
        case 0x3cf57cu: goto label_3cf57c;
        case 0x3cf5a8u: goto label_3cf5a8;
        case 0x3cf5f4u: goto label_3cf5f4;
        case 0x3cf61cu: goto label_3cf61c;
        case 0x3cf65cu: goto label_3cf65c;
        case 0x3cf698u: goto label_3cf698;
        case 0x3cf6dcu: goto label_3cf6dc;
        case 0x3cf6ecu: goto label_3cf6ec;
        case 0x3cf6f4u: goto label_3cf6f4;
        case 0x3cf708u: goto label_3cf708;
        case 0x3cf718u: goto label_3cf718;
        case 0x3cf730u: goto label_3cf730;
        case 0x3cf740u: goto label_3cf740;
        case 0x3cf748u: goto label_3cf748;
        default: break;
    }

    ctx->pc = 0x3cf538u;

    // 0x3cf538: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3cf538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3cf53c: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x3cf53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x3cf540: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x3cf540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x3cf544: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3cf544u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf548: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3cf548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3cf54c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3cf54cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf550: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3cf550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x3cf554: 0x3c140066  lui         $s4, 0x66
    ctx->pc = 0x3cf554u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)102 << 16));
    // 0x3cf558: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3cf558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x3cf55c: 0x26913940  addiu       $s1, $s4, 0x3940
    ctx->pc = 0x3cf55cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 14656));
    // 0x3cf560: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3cf560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x3cf564: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x3cf564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x3cf568: 0xc0f367c  jal         func_3CD9F0
    ctx->pc = 0x3CF568u;
    SET_GPR_U32(ctx, 31, 0x3CF570u);
    ctx->pc = 0x3CF56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF568u;
    // 0x3cf56c: 0xffb20060  sd          $s2, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD9F0u, 0x3CF568u, 0x3CF570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF570u;
label_3cf570:
    // 0x3cf570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3cf570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf574: 0xc0f379c  jal         func_3CDE70
    ctx->pc = 0x3CF574u;
    SET_GPR_U32(ctx, 31, 0x3CF57Cu);
    ctx->pc = 0x3CF578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF574u;
    // 0x3cf578: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CDE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDE70u, 0x3CF574u, 0x3CF57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF57Cu;
label_3cf57c:
    // 0x3cf57c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3cf57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3cf580: 0x8c62d68c  lw          $v0, -0x2974($v1)
    ctx->pc = 0x3cf580u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42D68Cu));
    // 0x3cf584: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CF584u;
    {
        const bool branch_taken_0x3cf584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf584) {
            ctx->pc = 0x3CF5A0u;
            goto label_3cf5a0;
        }
    }
    ctx->pc = 0x3CF58Cu;
    // 0x3cf58c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CF58Cu;
    {
        const bool branch_taken_0x3cf58c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf58c) {
            ctx->pc = 0x3CF5A0u;
            goto label_3cf5a0;
        }
    }
    ctx->pc = 0x3CF594u;
    // 0x3cf594: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x3cf594u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3cf598: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CF598u;
    {
        const bool branch_taken_0x3cf598 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CF59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF598u;
        // 0x3cf59c: 0x3c020066  lui         $v0, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf598) {
            ctx->pc = 0x3CF5B0u;
            goto label_3cf5b0;
        }
    }
    ctx->pc = 0x3CF5A0u;
label_3cf5a0:
    // 0x3cf5a0: 0xc0f37a8  jal         func_3CDEA0
    ctx->pc = 0x3CF5A0u;
    SET_GPR_U32(ctx, 31, 0x3CF5A8u);
    ctx->pc = 0x3CDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEA0u, 0x3CF5A0u, 0x3CF5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF5A8u;
label_3cf5a8:
    // 0x3cf5a8: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x3CF5A8u;
    {
        const bool branch_taken_0x3cf5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF5A8u;
        // 0x3cf5ac: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf5a8) {
            ctx->pc = 0x3CF74Cu;
            goto label_3cf74c;
        }
    }
    ctx->pc = 0x3CF5B0u;
label_3cf5b0:
    // 0x3cf5b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3cf5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3cf5b4: 0x24424e40  addiu       $v0, $v0, 0x4E40
    ctx->pc = 0x3cf5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20032));
    // 0x3cf5b8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3cf5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3cf5bc: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3cf5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3cf5c0: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x3cf5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x3cf5c4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3cf5c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3cf5c8: 0xfe330010  sd          $s3, 0x10($s1)
    ctx->pc = 0x3cf5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 19));
    // 0x3cf5cc: 0xae350018  sw          $s5, 0x18($s1)
    ctx->pc = 0x3cf5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 21));
    // 0x3cf5d0: 0x24631ed0  addiu       $v1, $v1, 0x1ED0
    ctx->pc = 0x3cf5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7888));
    // 0x3cf5d4: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x3cf5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x3cf5d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3cf5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cf5dc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3cf5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3cf5e0: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x3cf5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x3cf5e4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3cf5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x3cf5e8: 0x32508000  andi        $s0, $s2, 0x8000
    ctx->pc = 0x3cf5e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32768);
    // 0x3cf5ec: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x3CF5ECu;
    SET_GPR_U32(ctx, 31, 0x3CF5F4u);
    ctx->pc = 0x3CF5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF5ECu;
    // 0x3cf5f0: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3CF5ECu, 0x3CF5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF5F4u;
label_3cf5f4:
    // 0x3cf5f4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3cf5f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf5f8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3cf5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3cf5fc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3cf5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3cf600: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3cf600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x3cf604: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3cf604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3cf608: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3CF608u;
    {
        const bool branch_taken_0x3cf608 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF608u;
        // 0x3cf60c: 0xae933940  sw          $s3, 0x3940($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 14656), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf608) {
            ctx->pc = 0x3CF6A0u;
            goto label_3cf6a0;
        }
    }
    ctx->pc = 0x3CF610u;
    // 0x3cf610: 0x3c150043  lui         $s5, 0x43
    ctx->pc = 0x3cf610u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)67 << 16));
    // 0x3cf614: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3CF614u;
    SET_GPR_U32(ctx, 31, 0x3CF61Cu);
    ctx->pc = 0x3CF618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF614u;
    // 0x3cf618: 0x8ea4d69c  lw          $a0, -0x2964($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3CF614u, 0x3CF61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF61Cu;
label_3cf61c:
    // 0x3cf61c: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x3cf61cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x3cf620: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cf620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf624: 0x8ce3d608  lw          $v1, -0x29F8($a3)
    ctx->pc = 0x3cf624u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x42D608u));
    // 0x3cf628: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3cf628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3cf62c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3CF62Cu;
    {
        const bool branch_taken_0x3cf62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CF630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF62Cu;
        // 0x3cf630: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf62c) {
            ctx->pc = 0x3CF650u;
            goto label_3cf650;
        }
    }
    ctx->pc = 0x3CF634u;
    // 0x3cf634: 0x8e833940  lw          $v1, 0x3940($s4)
    ctx->pc = 0x3cf634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 14656)));
    // 0x3cf638: 0x3c160066  lui         $s6, 0x66
    ctx->pc = 0x3cf638u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)102 << 16));
    // 0x3cf63c: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x3cf63cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x3cf640: 0x31023  negu        $v0, $v1
    ctx->pc = 0x3cf640u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x3cf644: 0xace3d608  sw          $v1, -0x29F8($a3)
    ctx->pc = 0x3cf644u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294956552), GPR_U32(ctx, 3));
    // 0x3cf648: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3CF648u;
    {
        const bool branch_taken_0x3cf648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF648u;
        // 0x3cf64c: 0xae823940  sw          $v0, 0x3940($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 14656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf648) {
            ctx->pc = 0x3CF690u;
            goto label_3cf690;
        }
    }
    ctx->pc = 0x3CF650u;
label_3cf650:
    // 0x3cf650: 0x3c160066  lui         $s6, 0x66
    ctx->pc = 0x3cf650u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)102 << 16));
    // 0x3cf654: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x3cf654u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x3cf658: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3cf658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3cf65c:
    // 0x3cf65c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3cf65cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3cf660: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3CF660u;
    {
        const bool branch_taken_0x3cf660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF660u;
        // 0x3cf664: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf660) {
            ctx->pc = 0x3CF690u;
            goto label_3cf690;
        }
    }
    ctx->pc = 0x3CF668u;
    // 0x3cf668: 0x24e3d608  addiu       $v1, $a3, -0x29F8
    ctx->pc = 0x3cf668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956552));
    // 0x3cf66c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3cf66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3cf670: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3cf670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3cf674: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3cf674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3cf678: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3CF678u;
    {
        const bool branch_taken_0x3cf678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3CF67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF678u;
        // 0x3cf67c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf678) {
            ctx->pc = 0x3CF65Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cf65c;
        }
    }
    ctx->pc = 0x3CF680u;
    // 0x3cf680: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3cf680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3cf684: 0x21823  negu        $v1, $v0
    ctx->pc = 0x3cf684u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3cf688: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3cf688u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3cf68c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3cf68cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3cf690:
    // 0x3cf690: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3CF690u;
    SET_GPR_U32(ctx, 31, 0x3CF698u);
    ctx->pc = 0x3CF694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF690u;
    // 0x3cf694: 0x8ea4d69c  lw          $a0, -0x2964($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956700)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3CF690u, 0x3CF698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF698u;
label_3cf698:
    // 0x3cf698: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3CF698u;
    {
        const bool branch_taken_0x3cf698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF698u;
        // 0x3cf69c: 0x26104580  addiu       $s0, $s0, 0x4580 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf698) {
            ctx->pc = 0x3CF6B0u;
            goto label_3cf6b0;
        }
    }
    ctx->pc = 0x3CF6A0u;
label_3cf6a0:
    // 0x3cf6a0: 0x3c160066  lui         $s6, 0x66
    ctx->pc = 0x3cf6a0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)102 << 16));
    // 0x3cf6a4: 0x3c100066  lui         $s0, 0x66
    ctx->pc = 0x3cf6a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)102 << 16));
    // 0x3cf6a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3cf6a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf6ac: 0x26104580  addiu       $s0, $s0, 0x4580
    ctx->pc = 0x3cf6acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17792));
label_3cf6b0:
    // 0x3cf6b0: 0x26c45040  addiu       $a0, $s6, 0x5040
    ctx->pc = 0x3cf6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20544));
    // 0x3cf6b4: 0x26873940  addiu       $a3, $s4, 0x3940
    ctx->pc = 0x3cf6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 14656));
    // 0x3cf6b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3cf6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3cf6bc: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x3cf6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x3cf6c0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x3cf6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x3cf6c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cf6c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf6c8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x3cf6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3cf6cc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x3cf6ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cf6d0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x3cf6d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3cf6d4: 0xc0f3640  jal         func_3CD900
    ctx->pc = 0x3CF6D4u;
    SET_GPR_U32(ctx, 31, 0x3CF6DCu);
    ctx->pc = 0x3CF6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF6D4u;
    // 0x3cf6d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD900u, 0x3CF6D4u, 0x3CF6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF6DCu;
label_3cf6dc:
    // 0x3cf6dc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CF6DCu;
    {
        const bool branch_taken_0x3cf6dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3CF6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF6DCu;
        // 0x3cf6e0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf6dc) {
            ctx->pc = 0x3CF6FCu;
            goto label_3cf6fc;
        }
    }
    ctx->pc = 0x3CF6E4u;
    // 0x3cf6e4: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CF6E4u;
    SET_GPR_U32(ctx, 31, 0x3CF6ECu);
    ctx->pc = 0x3CF6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF6E4u;
    // 0x3cf6e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CF6E4u, 0x3CF6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF6ECu;
label_3cf6ec:
    // 0x3cf6ec: 0xc0f37a8  jal         func_3CDEA0
    ctx->pc = 0x3CF6ECu;
    SET_GPR_U32(ctx, 31, 0x3CF6F4u);
    ctx->pc = 0x3CDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEA0u, 0x3CF6ECu, 0x3CF6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF6F4u;
label_3cf6f4:
    // 0x3cf6f4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3CF6F4u;
    {
        const bool branch_taken_0x3cf6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF6F4u;
        // 0x3cf6f8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf6f4) {
            ctx->pc = 0x3CF74Cu;
            goto label_3cf74c;
        }
    }
    ctx->pc = 0x3CF6FCu;
label_3cf6fc:
    // 0x3cf6fc: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x3cf6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x3cf700: 0xc0f37a8  jal         func_3CDEA0
    ctx->pc = 0x3CF700u;
    SET_GPR_U32(ctx, 31, 0x3CF708u);
    ctx->pc = 0x3CF704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF700u;
    // 0x3cf704: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CDEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CDEA0u, 0x3CF700u, 0x3CF708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF708u;
label_3cf708:
    // 0x3cf708: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CF708u;
    {
        const bool branch_taken_0x3cf708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cf708) {
            ctx->pc = 0x3CF720u;
            goto label_3cf720;
        }
    }
    ctx->pc = 0x3CF710u;
    // 0x3cf710: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CF710u;
    SET_GPR_U32(ctx, 31, 0x3CF718u);
    ctx->pc = 0x3CF714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF710u;
    // 0x3cf714: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CF710u, 0x3CF718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF718u;
label_3cf718:
    // 0x3cf718: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3CF718u;
    {
        const bool branch_taken_0x3cf718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF718u;
        // 0x3cf71c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf718) {
            ctx->pc = 0x3CF74Cu;
            goto label_3cf74c;
        }
    }
    ctx->pc = 0x3CF720u;
label_3cf720:
    // 0x3cf720: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CF720u;
    {
        const bool branch_taken_0x3cf720 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cf720) {
            ctx->pc = 0x3CF738u;
            goto label_3cf738;
        }
    }
    ctx->pc = 0x3CF728u;
    // 0x3cf728: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CF728u;
    SET_GPR_U32(ctx, 31, 0x3CF730u);
    ctx->pc = 0x3CF72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF728u;
    // 0x3cf72c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CF728u, 0x3CF730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF730u;
label_3cf730:
    // 0x3cf730: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3CF730u;
    {
        const bool branch_taken_0x3cf730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CF734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF730u;
        // 0x3cf734: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cf730) {
            ctx->pc = 0x3CF74Cu;
            goto label_3cf74c;
        }
    }
    ctx->pc = 0x3CF738u;
label_3cf738:
    // 0x3cf738: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3CF738u;
    SET_GPR_U32(ctx, 31, 0x3CF740u);
    ctx->pc = 0x3CF73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF738u;
    // 0x3cf73c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3CF738u, 0x3CF740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF740u;
label_3cf740:
    // 0x3cf740: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CF740u;
    SET_GPR_U32(ctx, 31, 0x3CF748u);
    ctx->pc = 0x3CF744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CF740u;
    // 0x3cf744: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CF740u, 0x3CF748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CF748u;
label_3cf748:
    // 0x3cf748: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x3cf748u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3cf74c:
    // 0x3cf74c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3cf74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3cf750: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3cf750u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3cf754: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x3cf754u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3cf758: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3cf758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3cf75c: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3cf75cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3cf760: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3cf760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3cf764: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3cf764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cf768: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3cf768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cf76c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CF76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CF76Cu;
        // 0x3cf770: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CF76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CF774u;
    // 0x3cf774: 0x0  nop
    ctx->pc = 0x3cf774u;
    // NOP
    ctx->pc = 0x3cf778u;
}
