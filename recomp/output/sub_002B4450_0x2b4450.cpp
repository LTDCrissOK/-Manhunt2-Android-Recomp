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

// Function: sub_002B4450
// Address: 0x2b4450 - 0x2b4590
void sub_002B4450_0x2b4450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4450_0x2b4450");
#endif

    switch (ctx->pc) {
        case 0x2b4450u: goto label_2b4450;
        case 0x2b4454u: goto label_2b4454;
        case 0x2b4458u: goto label_2b4458;
        case 0x2b445cu: goto label_2b445c;
        case 0x2b4460u: goto label_2b4460;
        case 0x2b4464u: goto label_2b4464;
        case 0x2b4468u: goto label_2b4468;
        case 0x2b446cu: goto label_2b446c;
        case 0x2b4470u: goto label_2b4470;
        case 0x2b4474u: goto label_2b4474;
        case 0x2b4478u: goto label_2b4478;
        case 0x2b447cu: goto label_2b447c;
        case 0x2b4480u: goto label_2b4480;
        case 0x2b4484u: goto label_2b4484;
        case 0x2b4488u: goto label_2b4488;
        case 0x2b448cu: goto label_2b448c;
        case 0x2b4490u: goto label_2b4490;
        case 0x2b4494u: goto label_2b4494;
        case 0x2b4498u: goto label_2b4498;
        case 0x2b449cu: goto label_2b449c;
        case 0x2b44a0u: goto label_2b44a0;
        case 0x2b44a4u: goto label_2b44a4;
        case 0x2b44a8u: goto label_2b44a8;
        case 0x2b44acu: goto label_2b44ac;
        case 0x2b44b0u: goto label_2b44b0;
        case 0x2b44b4u: goto label_2b44b4;
        case 0x2b44b8u: goto label_2b44b8;
        case 0x2b44bcu: goto label_2b44bc;
        case 0x2b44c0u: goto label_2b44c0;
        case 0x2b44c4u: goto label_2b44c4;
        case 0x2b44c8u: goto label_2b44c8;
        case 0x2b44ccu: goto label_2b44cc;
        case 0x2b44d0u: goto label_2b44d0;
        case 0x2b44d4u: goto label_2b44d4;
        case 0x2b44d8u: goto label_2b44d8;
        case 0x2b44dcu: goto label_2b44dc;
        case 0x2b44e0u: goto label_2b44e0;
        case 0x2b44e4u: goto label_2b44e4;
        case 0x2b44e8u: goto label_2b44e8;
        case 0x2b44ecu: goto label_2b44ec;
        case 0x2b44f0u: goto label_2b44f0;
        case 0x2b44f4u: goto label_2b44f4;
        case 0x2b44f8u: goto label_2b44f8;
        case 0x2b44fcu: goto label_2b44fc;
        case 0x2b4500u: goto label_2b4500;
        case 0x2b4504u: goto label_2b4504;
        case 0x2b4508u: goto label_2b4508;
        case 0x2b450cu: goto label_2b450c;
        case 0x2b4510u: goto label_2b4510;
        case 0x2b4514u: goto label_2b4514;
        case 0x2b4518u: goto label_2b4518;
        case 0x2b451cu: goto label_2b451c;
        case 0x2b4520u: goto label_2b4520;
        case 0x2b4524u: goto label_2b4524;
        case 0x2b4528u: goto label_2b4528;
        case 0x2b452cu: goto label_2b452c;
        case 0x2b4530u: goto label_2b4530;
        case 0x2b4534u: goto label_2b4534;
        case 0x2b4538u: goto label_2b4538;
        case 0x2b453cu: goto label_2b453c;
        case 0x2b4540u: goto label_2b4540;
        case 0x2b4544u: goto label_2b4544;
        case 0x2b4548u: goto label_2b4548;
        case 0x2b454cu: goto label_2b454c;
        case 0x2b4550u: goto label_2b4550;
        case 0x2b4554u: goto label_2b4554;
        case 0x2b4558u: goto label_2b4558;
        case 0x2b455cu: goto label_2b455c;
        case 0x2b4560u: goto label_2b4560;
        case 0x2b4564u: goto label_2b4564;
        case 0x2b4568u: goto label_2b4568;
        case 0x2b456cu: goto label_2b456c;
        case 0x2b4570u: goto label_2b4570;
        case 0x2b4574u: goto label_2b4574;
        case 0x2b4578u: goto label_2b4578;
        case 0x2b457cu: goto label_2b457c;
        case 0x2b4580u: goto label_2b4580;
        case 0x2b4584u: goto label_2b4584;
        case 0x2b4588u: goto label_2b4588;
        case 0x2b458cu: goto label_2b458c;
        default: break;
    }

    ctx->pc = 0x2b4450u;

label_2b4450:
    // 0x2b4450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b4450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b4454:
    // 0x2b4454: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2b4454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2b4458:
    // 0x2b4458: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b4458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b445c:
    // 0x2b445c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b445cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b4460:
    // 0x2b4460: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2b4460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2b4464:
    // 0x2b4464: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b4464u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b4468:
    // 0x2b4468: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b4468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2b446c:
    // 0x2b446c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b446cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b4470:
    // 0x2b4470: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2b4474:
    if (ctx->pc == 0x2B4474u) {
        ctx->pc = 0x2B4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4470u;
        // 0x2b4474: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4478u;
        goto label_2b4478;
    }
    ctx->pc = 0x2B4470u;
    {
        const bool branch_taken_0x2b4470 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4470u;
        // 0x2b4474: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4470) {
            ctx->pc = 0x2B4484u;
            goto label_2b4484;
        }
    }
    ctx->pc = 0x2B4478u;
label_2b4478:
    // 0x2b4478: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2b4478u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2b447c:
    // 0x2b447c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2b4480:
    if (ctx->pc == 0x2B4480u) {
        ctx->pc = 0x2B4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B447Cu;
        // 0x2b4480: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4484u;
        goto label_2b4484;
    }
    ctx->pc = 0x2B447Cu;
    {
        const bool branch_taken_0x2b447c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B447Cu;
        // 0x2b4480: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b447c) {
            ctx->pc = 0x2B4490u;
            goto label_2b4490;
        }
    }
    ctx->pc = 0x2B4484u;
label_2b4484:
    // 0x2b4484: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2b4484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2b4488:
    // 0x2b4488: 0x10000038  b           . + 4 + (0x38 << 2)
label_2b448c:
    if (ctx->pc == 0x2B448Cu) {
        ctx->pc = 0x2B448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4488u;
        // 0x2b448c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4490u;
        goto label_2b4490;
    }
    ctx->pc = 0x2B4488u;
    {
        const bool branch_taken_0x2b4488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4488u;
        // 0x2b448c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4488) {
            ctx->pc = 0x2B456Cu;
            goto label_2b456c;
        }
    }
    ctx->pc = 0x2B4490u;
label_2b4490:
    // 0x2b4490: 0x8e02cba8  lw          $v0, -0x3458($s0)
    ctx->pc = 0x2b4490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_2b4494:
    // 0x2b4494: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2b4494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2b4498:
    // 0x2b4498: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b4498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b449c:
    // 0x2b449c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2b449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2b44a0:
    // 0x2b44a0: 0x40f809  jalr        $v0
label_2b44a4:
    if (ctx->pc == 0x2B44A4u) {
        ctx->pc = 0x2B44A8u;
        goto label_2b44a8;
    }
    ctx->pc = 0x2B44A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B44A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B44A0u, 0x2B44A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B44A8u;
label_2b44a8:
    // 0x2b44a8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b44a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b44ac:
    // 0x2b44ac: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2b44acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b44b0:
    // 0x2b44b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b44b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b44b4:
    // 0x2b44b4: 0xc0eef5a  jal         func_3BBD68
label_2b44b8:
    if (ctx->pc == 0x2B44B8u) {
        ctx->pc = 0x2B44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44B4u;
        // 0x2b44b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B44BCu;
        goto label_2b44bc;
    }
    ctx->pc = 0x2B44B4u;
    SET_GPR_U32(ctx, 31, 0x2B44BCu);
    ctx->pc = 0x2B44B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B44B4u;
    // 0x2b44b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBD68u, 0x2B44B4u, 0x2B44BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B44BCu;
label_2b44bc:
    // 0x2b44bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b44bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b44c0:
    // 0x2b44c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b44c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b44c4:
    // 0x2b44c4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2b44c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2b44c8:
    // 0x2b44c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b44c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b44cc:
    // 0x2b44cc: 0xc0ef0b2  jal         func_3BC2C8
label_2b44d0:
    if (ctx->pc == 0x2B44D0u) {
        ctx->pc = 0x2B44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44CCu;
        // 0x2b44d0: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B44D4u;
        goto label_2b44d4;
    }
    ctx->pc = 0x2B44CCu;
    SET_GPR_U32(ctx, 31, 0x2B44D4u);
    ctx->pc = 0x2B44D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B44CCu;
    // 0x2b44d0: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x2B44CCu, 0x2B44D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B44D4u;
label_2b44d4:
    // 0x2b44d4: 0x8e03cba8  lw          $v1, -0x3458($s0)
    ctx->pc = 0x2b44d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_2b44d8:
    // 0x2b44d8: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2b44d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b44dc:
    // 0x2b44dc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b44dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b44e0:
    // 0x2b44e0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2b44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2b44e4:
    // 0x2b44e4: 0x40f809  jalr        $v0
label_2b44e8:
    if (ctx->pc == 0x2B44E8u) {
        ctx->pc = 0x2B44ECu;
        goto label_2b44ec;
    }
    ctx->pc = 0x2B44E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B44ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B44E4u, 0x2B44ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B44ECu;
label_2b44ec:
    // 0x2b44ec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2b44ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2b44f0:
    // 0x2b44f0: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
label_2b44f4:
    if (ctx->pc == 0x2B44F4u) {
        ctx->pc = 0x2B44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44F0u;
        // 0x2b44f4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B44F8u;
        goto label_2b44f8;
    }
    ctx->pc = 0x2B44F0u;
    {
        const bool branch_taken_0x2b44f0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2B44F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44F0u;
        // 0x2b44f4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b44f0) {
            ctx->pc = 0x2B4500u;
            goto label_2b4500;
        }
    }
    ctx->pc = 0x2B44F8u;
label_2b44f8:
    // 0x2b44f8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2b44fc:
    if (ctx->pc == 0x2B44FCu) {
        ctx->pc = 0x2B44FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44F8u;
        // 0x2b44fc: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4500u;
        goto label_2b4500;
    }
    ctx->pc = 0x2B44F8u;
    {
        const bool branch_taken_0x2b44f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B44FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B44F8u;
        // 0x2b44fc: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b44f8) {
            ctx->pc = 0x2B4570u;
            goto label_2b4570;
        }
    }
    ctx->pc = 0x2B4500u;
label_2b4500:
    // 0x2b4500: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2b4500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2b4504:
    // 0x2b4504: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_2b4508:
    if (ctx->pc == 0x2B4508u) {
        ctx->pc = 0x2B4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4504u;
        // 0x2b4508: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B450Cu;
        goto label_2b450c;
    }
    ctx->pc = 0x2B4504u;
    {
        const bool branch_taken_0x2b4504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B4508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4504u;
        // 0x2b4508: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4504) {
            ctx->pc = 0x2B4518u;
            goto label_2b4518;
        }
    }
    ctx->pc = 0x2B450Cu;
label_2b450c:
    // 0x2b450c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b450cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b4510:
    // 0x2b4510: 0x10000016  b           . + 4 + (0x16 << 2)
label_2b4514:
    if (ctx->pc == 0x2B4514u) {
        ctx->pc = 0x2B4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4510u;
        // 0x2b4514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4518u;
        goto label_2b4518;
    }
    ctx->pc = 0x2B4510u;
    {
        const bool branch_taken_0x2b4510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4510u;
        // 0x2b4514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4510) {
            ctx->pc = 0x2B456Cu;
            goto label_2b456c;
        }
    }
    ctx->pc = 0x2B4518u;
label_2b4518:
    // 0x2b4518: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2b451c:
    if (ctx->pc == 0x2B451Cu) {
        ctx->pc = 0x2B451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4518u;
        // 0x2b451c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4520u;
        goto label_2b4520;
    }
    ctx->pc = 0x2B4518u;
    {
        const bool branch_taken_0x2b4518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B451Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4518u;
        // 0x2b451c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4518) {
            ctx->pc = 0x2B452Cu;
            goto label_2b452c;
        }
    }
    ctx->pc = 0x2B4520u;
label_2b4520:
    // 0x2b4520: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x2b4520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2b4524:
    // 0x2b4524: 0x10000011  b           . + 4 + (0x11 << 2)
label_2b4528:
    if (ctx->pc == 0x2B4528u) {
        ctx->pc = 0x2B4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4524u;
        // 0x2b4528: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B452Cu;
        goto label_2b452c;
    }
    ctx->pc = 0x2B4524u;
    {
        const bool branch_taken_0x2b4524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4524u;
        // 0x2b4528: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4524) {
            ctx->pc = 0x2B456Cu;
            goto label_2b456c;
        }
    }
    ctx->pc = 0x2B452Cu;
label_2b452c:
    // 0x2b452c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2b4530:
    if (ctx->pc == 0x2B4530u) {
        ctx->pc = 0x2B4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B452Cu;
        // 0x2b4530: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4534u;
        goto label_2b4534;
    }
    ctx->pc = 0x2B452Cu;
    {
        const bool branch_taken_0x2b452c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B452Cu;
        // 0x2b4530: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b452c) {
            ctx->pc = 0x2B4540u;
            goto label_2b4540;
        }
    }
    ctx->pc = 0x2B4534u;
label_2b4534:
    // 0x2b4534: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2b4534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2b4538:
    // 0x2b4538: 0x1000000c  b           . + 4 + (0xC << 2)
label_2b453c:
    if (ctx->pc == 0x2B453Cu) {
        ctx->pc = 0x2B453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4538u;
        // 0x2b453c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4540u;
        goto label_2b4540;
    }
    ctx->pc = 0x2B4538u;
    {
        const bool branch_taken_0x2b4538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4538u;
        // 0x2b453c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4538) {
            ctx->pc = 0x2B456Cu;
            goto label_2b456c;
        }
    }
    ctx->pc = 0x2B4540u;
label_2b4540:
    // 0x2b4540: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2b4544:
    if (ctx->pc == 0x2B4544u) {
        ctx->pc = 0x2B4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4540u;
        // 0x2b4544: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4548u;
        goto label_2b4548;
    }
    ctx->pc = 0x2B4540u;
    {
        const bool branch_taken_0x2b4540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4540u;
        // 0x2b4544: 0x2402fff9  addiu       $v0, $zero, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4540) {
            ctx->pc = 0x2B4554u;
            goto label_2b4554;
        }
    }
    ctx->pc = 0x2B4548u;
label_2b4548:
    // 0x2b4548: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2b4548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2b454c:
    // 0x2b454c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2b4550:
    if (ctx->pc == 0x2B4550u) {
        ctx->pc = 0x2B4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B454Cu;
        // 0x2b4550: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4554u;
        goto label_2b4554;
    }
    ctx->pc = 0x2B454Cu;
    {
        const bool branch_taken_0x2b454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B454Cu;
        // 0x2b4550: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b454c) {
            ctx->pc = 0x2B456Cu;
            goto label_2b456c;
        }
    }
    ctx->pc = 0x2B4554u;
label_2b4554:
    // 0x2b4554: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_2b4558:
    if (ctx->pc == 0x2B4558u) {
        ctx->pc = 0x2B4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4554u;
        // 0x2b4558: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B455Cu;
        goto label_2b455c;
    }
    ctx->pc = 0x2B4554u;
    {
        const bool branch_taken_0x2b4554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4554u;
        // 0x2b4558: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4554) {
            ctx->pc = 0x2B4564u;
            goto label_2b4564;
        }
    }
    ctx->pc = 0x2B455Cu;
label_2b455c:
    // 0x2b455c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b4560:
    if (ctx->pc == 0x2B4560u) {
        ctx->pc = 0x2B4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B455Cu;
        // 0x2b4560: 0xae440014  sw          $a0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4564u;
        goto label_2b4564;
    }
    ctx->pc = 0x2B455Cu;
    {
        const bool branch_taken_0x2b455c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B455Cu;
        // 0x2b4560: 0xae440014  sw          $a0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b455c) {
            ctx->pc = 0x2B4570u;
            goto label_2b4570;
        }
    }
    ctx->pc = 0x2B4564u;
label_2b4564:
    // 0x2b4564: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b4564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b4568:
    // 0x2b4568: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b4568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b456c:
    // 0x2b456c: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x2b456cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_2b4570:
    // 0x2b4570: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b4570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b4574:
    // 0x2b4574: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2b4574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2b4578:
    // 0x2b4578: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b4578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b457c:
    // 0x2b457c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2b457cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2b4580:
    // 0x2b4580: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b4580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b4584:
    // 0x2b4584: 0x3e00008  jr          $ra
label_2b4588:
    if (ctx->pc == 0x2B4588u) {
        ctx->pc = 0x2B4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4584u;
        // 0x2b4588: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B458Cu;
        goto label_2b458c;
    }
    ctx->pc = 0x2B4584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4584u;
        // 0x2b4588: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B458Cu;
label_2b458c:
    // 0x2b458c: 0x0  nop
    ctx->pc = 0x2b458cu;
    // NOP
    ctx->pc = 0x2b4590u;
}
