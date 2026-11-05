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

// Function: sub_003084D8
// Address: 0x3084d8 - 0x308590
void sub_003084D8_0x3084d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003084D8_0x3084d8");
#endif

    switch (ctx->pc) {
        case 0x3084d8u: goto label_3084d8;
        case 0x3084dcu: goto label_3084dc;
        case 0x3084e0u: goto label_3084e0;
        case 0x3084e4u: goto label_3084e4;
        case 0x3084e8u: goto label_3084e8;
        case 0x3084ecu: goto label_3084ec;
        case 0x3084f0u: goto label_3084f0;
        case 0x3084f4u: goto label_3084f4;
        case 0x3084f8u: goto label_3084f8;
        case 0x3084fcu: goto label_3084fc;
        case 0x308500u: goto label_308500;
        case 0x308504u: goto label_308504;
        case 0x308508u: goto label_308508;
        case 0x30850cu: goto label_30850c;
        case 0x308510u: goto label_308510;
        case 0x308514u: goto label_308514;
        case 0x308518u: goto label_308518;
        case 0x30851cu: goto label_30851c;
        case 0x308520u: goto label_308520;
        case 0x308524u: goto label_308524;
        case 0x308528u: goto label_308528;
        case 0x30852cu: goto label_30852c;
        case 0x308530u: goto label_308530;
        case 0x308534u: goto label_308534;
        case 0x308538u: goto label_308538;
        case 0x30853cu: goto label_30853c;
        case 0x308540u: goto label_308540;
        case 0x308544u: goto label_308544;
        case 0x308548u: goto label_308548;
        case 0x30854cu: goto label_30854c;
        case 0x308550u: goto label_308550;
        case 0x308554u: goto label_308554;
        case 0x308558u: goto label_308558;
        case 0x30855cu: goto label_30855c;
        case 0x308560u: goto label_308560;
        case 0x308564u: goto label_308564;
        case 0x308568u: goto label_308568;
        case 0x30856cu: goto label_30856c;
        case 0x308570u: goto label_308570;
        case 0x308574u: goto label_308574;
        case 0x308578u: goto label_308578;
        case 0x30857cu: goto label_30857c;
        case 0x308580u: goto label_308580;
        case 0x308584u: goto label_308584;
        case 0x308588u: goto label_308588;
        case 0x30858cu: goto label_30858c;
        default: break;
    }

    ctx->pc = 0x3084d8u;

label_3084d8:
    // 0x3084d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3084d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3084dc:
    // 0x3084dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3084dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3084e0:
    // 0x3084e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3084e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3084e4:
    // 0x3084e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3084e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3084e8:
    // 0x3084e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3084e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3084ec:
    // 0x3084ec: 0xc098564  jal         func_261590
label_3084f0:
    if (ctx->pc == 0x3084F0u) {
        ctx->pc = 0x3084F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084ECu;
        // 0x3084f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3084F4u;
        goto label_3084f4;
    }
    ctx->pc = 0x3084ECu;
    SET_GPR_U32(ctx, 31, 0x3084F4u);
    ctx->pc = 0x3084F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3084ECu;
    // 0x3084f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261590u, 0x3084ECu, 0x3084F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3084F4u;
label_3084f4:
    // 0x3084f4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3084f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_3084f8:
    // 0x3084f8: 0x24634318  addiu       $v1, $v1, 0x4318
    ctx->pc = 0x3084f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17176));
label_3084fc:
    // 0x3084fc: 0xae230218  sw          $v1, 0x218($s1)
    ctx->pc = 0x3084fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 3));
label_308500:
    // 0x308500: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x308500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_308504:
    // 0x308504: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x308504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_308508:
    // 0x308508: 0x2c83008e  sltiu       $v1, $a0, 0x8E
    ctx->pc = 0x308508u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)142) ? 1 : 0);
label_30850c:
    // 0x30850c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_308510:
    if (ctx->pc == 0x308510u) {
        ctx->pc = 0x308510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30850Cu;
        // 0x308510: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308514u;
        goto label_308514;
    }
    ctx->pc = 0x30850Cu;
    {
        const bool branch_taken_0x30850c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x308510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30850Cu;
        // 0x308510: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30850c) {
            ctx->pc = 0x308558u;
            goto label_308558;
        }
    }
    ctx->pc = 0x308514u;
label_308514:
    // 0x308514: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x308514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_308518:
    // 0x308518: 0x24421ec0  addiu       $v0, $v0, 0x1EC0
    ctx->pc = 0x308518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7872));
label_30851c:
    // 0x30851c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30851cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_308520:
    // 0x308520: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x308520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_308524:
    // 0x308524: 0x800008  jr          $a0
label_308528:
    if (ctx->pc == 0x308528u) {
        ctx->pc = 0x30852Cu;
        goto label_30852c;
    }
    ctx->pc = 0x308524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30852Cu: goto label_30852c;
            case 0x308558u: goto label_308558;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308524u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30852Cu;
label_30852c:
    // 0x30852c: 0xc0f5240  jal         func_3D4900
label_308530:
    if (ctx->pc == 0x308530u) {
        ctx->pc = 0x308530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30852Cu;
        // 0x308530: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308534u;
        goto label_308534;
    }
    ctx->pc = 0x30852Cu;
    SET_GPR_U32(ctx, 31, 0x308534u);
    ctx->pc = 0x308530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30852Cu;
    // 0x308530: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x30852Cu, 0x308534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308534u;
label_308534:
    // 0x308534: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x308534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308538:
    // 0x308538: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x308538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_30853c:
    // 0x30853c: 0xc0c2122  jal         func_308488
label_308540:
    if (ctx->pc == 0x308540u) {
        ctx->pc = 0x308540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30853Cu;
        // 0x308540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308544u;
        goto label_308544;
    }
    ctx->pc = 0x30853Cu;
    SET_GPR_U32(ctx, 31, 0x308544u);
    ctx->pc = 0x308540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30853Cu;
    // 0x308540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308488u, 0x30853Cu, 0x308544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308544u;
label_308544:
    // 0x308544: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x308544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_308548:
    // 0x308548: 0xae3002e4  sw          $s0, 0x2E4($s1)
    ctx->pc = 0x308548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 740), GPR_U32(ctx, 16));
label_30854c:
    // 0x30854c: 0x246342a8  addiu       $v1, $v1, 0x42A8
    ctx->pc = 0x30854cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17064));
label_308550:
    // 0x308550: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x308550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_308554:
    // 0x308554: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x308554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_308558:
    // 0x308558: 0x8e2202e4  lw          $v0, 0x2E4($s1)
    ctx->pc = 0x308558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_30855c:
    // 0x30855c: 0xac510060  sw          $s1, 0x60($v0)
    ctx->pc = 0x30855cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 17));
label_308560:
    // 0x308560: 0x8e2402e4  lw          $a0, 0x2E4($s1)
    ctx->pc = 0x308560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_308564:
    // 0x308564: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x308564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_308568:
    // 0x308568: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x308568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_30856c:
    // 0x30856c: 0x40f809  jalr        $v0
label_308570:
    if (ctx->pc == 0x308570u) {
        ctx->pc = 0x308574u;
        goto label_308574;
    }
    ctx->pc = 0x30856Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308574u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30856Cu, 0x308574u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308574u;
label_308574:
    // 0x308574: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x308574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_308578:
    // 0x308578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30857c:
    // 0x30857c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30857cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_308580:
    // 0x308580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_308584:
    // 0x308584: 0x3e00008  jr          $ra
label_308588:
    if (ctx->pc == 0x308588u) {
        ctx->pc = 0x308588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308584u;
        // 0x308588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30858Cu;
        goto label_30858c;
    }
    ctx->pc = 0x308584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308584u;
        // 0x308588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30858Cu;
label_30858c:
    // 0x30858c: 0x0  nop
    ctx->pc = 0x30858cu;
    // NOP
    ctx->pc = 0x308590u;
}
