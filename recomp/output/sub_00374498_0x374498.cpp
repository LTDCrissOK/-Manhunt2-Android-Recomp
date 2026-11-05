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

// Function: sub_00374498
// Address: 0x374498 - 0x3745f8
void sub_00374498_0x374498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374498_0x374498");
#endif

    switch (ctx->pc) {
        case 0x3744e4u: goto label_3744e4;
        case 0x374528u: goto label_374528;
        default: break;
    }

    ctx->pc = 0x374498u;

    // 0x374498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x374498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37449c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37449cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3744a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3744a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3744a4: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x3744a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x3744a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3744a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3744ac: 0x2611f910  addiu       $s1, $s0, -0x6F0
    ctx->pc = 0x3744acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x3744b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3744b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3744b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3744b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3744b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3744b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3744bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3744bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3744c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3744c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3744c4: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x3744c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BF910u));
    // 0x3744c8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3744c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BF914u));
    // 0x3744cc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3744ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3744d0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3744d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3744d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3744D4u;
    {
        const bool branch_taken_0x3744d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3744D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3744D4u;
        // 0x3744d8: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3744d4) {
            ctx->pc = 0x3744E4u;
            goto label_3744e4;
        }
    }
    ctx->pc = 0x3744DCu;
    // 0x3744dc: 0xc0dc442  jal         func_371108
    ctx->pc = 0x3744DCu;
    SET_GPR_U32(ctx, 31, 0x3744E4u);
    ctx->pc = 0x3744E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3744DCu;
    // 0x3744e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x3744DCu, 0x3744E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744E4u;
label_3744e4:
    // 0x3744e4: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x3744e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x3744e8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3744e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3744ec: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x3744ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x3744f0: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x3744f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x3744f4: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x3744f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x3744f8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3744f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3744fc: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x3744fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x374500: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x374500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x374504: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x374504u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x374508: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x374508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x37450c: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x37450cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x374510: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x374510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x374514: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x374514u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x374518: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x374518u;
    {
        const bool branch_taken_0x374518 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x37451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374518u;
        // 0x37451c: 0x8e03f910  lw          $v1, -0x6F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374518) {
            ctx->pc = 0x37452Cu;
            goto label_37452c;
        }
    }
    ctx->pc = 0x374520u;
    // 0x374520: 0xc0dc442  jal         func_371108
    ctx->pc = 0x374520u;
    SET_GPR_U32(ctx, 31, 0x374528u);
    ctx->pc = 0x374524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374520u;
    // 0x374524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x374520u, 0x374528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374528u;
label_374528:
    // 0x374528: 0x8e03f910  lw          $v1, -0x6F0($s0)
    ctx->pc = 0x374528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
label_37452c:
    // 0x37452c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x37452cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x374530: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x374530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    // 0x374534: 0x13103c  dsll32      $v0, $s3, 0
    ctx->pc = 0x374534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 0));
    // 0x374538: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x374538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x37453c: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x37453cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x374540: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x374540u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x374544: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x374544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x374548: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x374548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x37454c: 0x3c051400  lui         $a1, 0x1400
    ctx->pc = 0x37454cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5120 << 16));
    // 0x374550: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x374550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x374554: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x374554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x374558: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x374558u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x37455c: 0x24660018  addiu       $a2, $v1, 0x18
    ctx->pc = 0x37455cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x374560: 0xae04f910  sw          $a0, -0x6F0($s0)
    ctx->pc = 0x374560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 4));
    // 0x374564: 0x24670028  addiu       $a3, $v1, 0x28
    ctx->pc = 0x374564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x374568: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x374568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x37456c: 0x24690048  addiu       $t1, $v1, 0x48
    ctx->pc = 0x37456cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x374570: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x374570u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x374574: 0x2852825  or          $a1, $s4, $a1
    ctx->pc = 0x374574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 5));
    // 0x374578: 0x2468004c  addiu       $t0, $v1, 0x4C
    ctx->pc = 0x374578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x37457c: 0x246a0050  addiu       $t2, $v1, 0x50
    ctx->pc = 0x37457cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x374580: 0x7c620008  sq          $v0, 0x8($v1)
    ctx->pc = 0x374580u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 8), GPR_VEC(ctx, 2));
    // 0x374584: 0x246b0054  addiu       $t3, $v1, 0x54
    ctx->pc = 0x374584u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x374588: 0xae06f910  sw          $a2, -0x6F0($s0)
    ctx->pc = 0x374588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 6));
    // 0x37458c: 0x246c0058  addiu       $t4, $v1, 0x58
    ctx->pc = 0x37458cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x374590: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x374590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x374594: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x374594u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x374598: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x374598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37459c: 0x7c620018  sq          $v0, 0x18($v1)
    ctx->pc = 0x37459cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 24), GPR_VEC(ctx, 2));
    // 0x3745a0: 0xae07f910  sw          $a3, -0x6F0($s0)
    ctx->pc = 0x3745a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 7));
    // 0x3745a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3745a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3745a8: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x3745a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x3745ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3745acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3745b0: 0x7c620028  sq          $v0, 0x28($v1)
    ctx->pc = 0x3745b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 40), GPR_VEC(ctx, 2));
    // 0x3745b4: 0xae04f910  sw          $a0, -0x6F0($s0)
    ctx->pc = 0x3745b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 4));
    // 0x3745b8: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x3745b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x3745bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3745bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3745c0: 0x7c620038  sq          $v0, 0x38($v1)
    ctx->pc = 0x3745c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 56), GPR_VEC(ctx, 2));
    // 0x3745c4: 0xae09f910  sw          $t1, -0x6F0($s0)
    ctx->pc = 0x3745c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 9));
    // 0x3745c8: 0xac650048  sw          $a1, 0x48($v1)
    ctx->pc = 0x3745c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
    // 0x3745cc: 0xae08f910  sw          $t0, -0x6F0($s0)
    ctx->pc = 0x3745ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 8));
    // 0x3745d0: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x3745d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x3745d4: 0xae0af910  sw          $t2, -0x6F0($s0)
    ctx->pc = 0x3745d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 10));
    // 0x3745d8: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x3745d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x3745dc: 0xae0bf910  sw          $t3, -0x6F0($s0)
    ctx->pc = 0x3745dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 11));
    // 0x3745e0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x3745e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
    // 0x3745e4: 0xae0cf910  sw          $t4, -0x6F0($s0)
    ctx->pc = 0x3745e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 12));
    // 0x3745e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3745e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3745ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3745ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3745F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745ECu;
        // 0x3745f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3745ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3745F4u;
    // 0x3745f4: 0x0  nop
    ctx->pc = 0x3745f4u;
    // NOP
    ctx->pc = 0x3745f8u;
}
