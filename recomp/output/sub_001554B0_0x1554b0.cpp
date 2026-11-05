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

// Function: sub_001554B0
// Address: 0x1554b0 - 0x155618
void sub_001554B0_0x1554b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001554B0_0x1554b0");
#endif

    switch (ctx->pc) {
        case 0x1554d8u: goto label_1554d8;
        case 0x1554e4u: goto label_1554e4;
        case 0x1554f4u: goto label_1554f4;
        case 0x155500u: goto label_155500;
        case 0x155524u: goto label_155524;
        case 0x155540u: goto label_155540;
        case 0x155554u: goto label_155554;
        case 0x155574u: goto label_155574;
        case 0x15558cu: goto label_15558c;
        case 0x1555a4u: goto label_1555a4;
        case 0x1555b0u: goto label_1555b0;
        case 0x1555bcu: goto label_1555bc;
        case 0x1555d4u: goto label_1555d4;
        case 0x1555ecu: goto label_1555ec;
        case 0x1555f8u: goto label_1555f8;
        default: break;
    }

    ctx->pc = 0x1554b0u;

    // 0x1554b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1554b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1554b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1554b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1554b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1554b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1554bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1554bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1554c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1554c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1554c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1554c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1554c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1554c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1554cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1554ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1554d0: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1554D0u;
    SET_GPR_U32(ctx, 31, 0x1554D8u);
    ctx->pc = 0x1554D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1554D0u;
    // 0x1554d4: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1554D0u, 0x1554D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1554D8u;
label_1554d8:
    // 0x1554d8: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1554d8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1554dc: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1554DCu;
    SET_GPR_U32(ctx, 31, 0x1554E4u);
    ctx->pc = 0x1554E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1554DCu;
    // 0x1554e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1554DCu, 0x1554E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1554E4u;
label_1554e4:
    // 0x1554e4: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1554e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1554e8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1554e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1554ec: 0xc0551e4  jal         func_154790
    ctx->pc = 0x1554ECu;
    SET_GPR_U32(ctx, 31, 0x1554F4u);
    ctx->pc = 0x1554F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1554ECu;
    // 0x1554f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154790u, 0x1554ECu, 0x1554F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1554F4u;
label_1554f4:
    // 0x1554f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1554f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1554f8: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1554F8u;
    SET_GPR_U32(ctx, 31, 0x155500u);
    ctx->pc = 0x1554FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1554F8u;
    // 0x1554fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1554F8u, 0x155500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155500u;
label_155500:
    // 0x155500: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x155500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155504: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x155504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155508: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x155508u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15550c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x15550cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155510: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155514: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x155514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x155518: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x155518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15551c: 0xc04daca  jal         func_136B28
    ctx->pc = 0x15551Cu;
    SET_GPR_U32(ctx, 31, 0x155524u);
    ctx->pc = 0x155520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15551Cu;
    // 0x155520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x15551Cu, 0x155524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155524u;
label_155524:
    // 0x155524: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x155524u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x155528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15552c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x15552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x155530: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x155530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x155534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x155534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x155538: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x155538u;
    SET_GPR_U32(ctx, 31, 0x155540u);
    ctx->pc = 0x15553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155538u;
    // 0x15553c: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x155538u, 0x155540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155540u;
label_155540:
    // 0x155540: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x155540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155544: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x155544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15554c: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x15554Cu;
    SET_GPR_U32(ctx, 31, 0x155554u);
    ctx->pc = 0x155550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15554Cu;
    // 0x155550: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x15554Cu, 0x155554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155554u;
label_155554:
    // 0x155554: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x155554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x155558: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x155558u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15555c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x15555cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x155560: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x155560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x155564: 0x2442020c  addiu       $v0, $v0, 0x20C
    ctx->pc = 0x155564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 524));
    // 0x155568: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x155568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15556c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x15556Cu;
    SET_GPR_U32(ctx, 31, 0x155574u);
    ctx->pc = 0x155570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15556Cu;
    // 0x155570: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x15556Cu, 0x155574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155574u;
label_155574:
    // 0x155574: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x155574u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155578: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x155578u;
    {
        const bool branch_taken_0x155578 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155578u;
        // 0x15557c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155578) {
            ctx->pc = 0x1555F0u;
            goto label_1555f0;
        }
    }
    ctx->pc = 0x155580u;
    // 0x155580: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x155580u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x155584: 0xc04da3e  jal         func_1368F8
    ctx->pc = 0x155584u;
    SET_GPR_U32(ctx, 31, 0x15558Cu);
    ctx->pc = 0x155588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155584u;
    // 0x155588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1368F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1368F8u, 0x155584u, 0x15558Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15558Cu;
label_15558c:
    // 0x15558c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15558cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x155590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155594: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x155594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155598: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x155598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15559c: 0xc04dcba  jal         func_1372E8
    ctx->pc = 0x15559Cu;
    SET_GPR_U32(ctx, 31, 0x1555A4u);
    ctx->pc = 0x1555A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15559Cu;
    // 0x1555a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1372E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1372E8u, 0x15559Cu, 0x1555A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555A4u;
label_1555a4:
    // 0x1555a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1555a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555a8: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x1555A8u;
    SET_GPR_U32(ctx, 31, 0x1555B0u);
    ctx->pc = 0x1555ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555A8u;
    // 0x1555ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x1555A8u, 0x1555B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555B0u;
label_1555b0:
    // 0x1555b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1555b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555b4: 0xc043ed0  jal         func_10FB40
    ctx->pc = 0x1555B4u;
    SET_GPR_U32(ctx, 31, 0x1555BCu);
    ctx->pc = 0x1555B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555B4u;
    // 0x1555b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB40u, 0x1555B4u, 0x1555BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555BCu;
label_1555bc:
    // 0x1555bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1555BCu;
    {
        const bool branch_taken_0x1555bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555BCu;
        // 0x1555c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555bc) {
            ctx->pc = 0x1555DCu;
            goto label_1555dc;
        }
    }
    ctx->pc = 0x1555C4u;
    // 0x1555c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1555c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555c8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1555c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1555cc: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x1555CCu;
    SET_GPR_U32(ctx, 31, 0x1555D4u);
    ctx->pc = 0x1555D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555CCu;
    // 0x1555d0: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x1555CCu, 0x1555D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555D4u;
label_1555d4:
    // 0x1555d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1555D4u;
    {
        const bool branch_taken_0x1555d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1555D4u;
        // 0x1555d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555d4) {
            ctx->pc = 0x1555F0u;
            goto label_1555f0;
        }
    }
    ctx->pc = 0x1555DCu;
label_1555dc:
    // 0x1555dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1555dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1555e0: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1555e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1555e4: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x1555E4u;
    SET_GPR_U32(ctx, 31, 0x1555ECu);
    ctx->pc = 0x1555E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555E4u;
    // 0x1555e8: 0x2407000c  addiu       $a3, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x1555E4u, 0x1555ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555ECu;
label_1555ec:
    // 0x1555ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1555ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1555f0:
    // 0x1555f0: 0xc0551f0  jal         func_1547C0
    ctx->pc = 0x1555F0u;
    SET_GPR_U32(ctx, 31, 0x1555F8u);
    ctx->pc = 0x1555F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1555F0u;
    // 0x1555f4: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1547C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547C0u, 0x1555F0u, 0x1555F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1555F8u;
label_1555f8:
    // 0x1555f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1555f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1555fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1555fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x155600: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x155600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155604: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x155604u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x155608: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x155608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15560c: 0x3e00008  jr          $ra
    ctx->pc = 0x15560Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15560Cu;
        // 0x155610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15560Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155614u;
    // 0x155614: 0x0  nop
    ctx->pc = 0x155614u;
    // NOP
    ctx->pc = 0x155618u;
}
