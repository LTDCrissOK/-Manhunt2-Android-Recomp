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

// Function: sub_002770C0
// Address: 0x2770c0 - 0x277200
void sub_002770C0_0x2770c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002770C0_0x2770c0");
#endif

    switch (ctx->pc) {
        case 0x2770c0u: goto label_2770c0;
        case 0x2770c4u: goto label_2770c4;
        case 0x2770c8u: goto label_2770c8;
        case 0x2770ccu: goto label_2770cc;
        case 0x2770d0u: goto label_2770d0;
        case 0x2770d4u: goto label_2770d4;
        case 0x2770d8u: goto label_2770d8;
        case 0x2770dcu: goto label_2770dc;
        case 0x2770e0u: goto label_2770e0;
        case 0x2770e4u: goto label_2770e4;
        case 0x2770e8u: goto label_2770e8;
        case 0x2770ecu: goto label_2770ec;
        case 0x2770f0u: goto label_2770f0;
        case 0x2770f4u: goto label_2770f4;
        case 0x2770f8u: goto label_2770f8;
        case 0x2770fcu: goto label_2770fc;
        case 0x277100u: goto label_277100;
        case 0x277104u: goto label_277104;
        case 0x277108u: goto label_277108;
        case 0x27710cu: goto label_27710c;
        case 0x277110u: goto label_277110;
        case 0x277114u: goto label_277114;
        case 0x277118u: goto label_277118;
        case 0x27711cu: goto label_27711c;
        case 0x277120u: goto label_277120;
        case 0x277124u: goto label_277124;
        case 0x277128u: goto label_277128;
        case 0x27712cu: goto label_27712c;
        case 0x277130u: goto label_277130;
        case 0x277134u: goto label_277134;
        case 0x277138u: goto label_277138;
        case 0x27713cu: goto label_27713c;
        case 0x277140u: goto label_277140;
        case 0x277144u: goto label_277144;
        case 0x277148u: goto label_277148;
        case 0x27714cu: goto label_27714c;
        case 0x277150u: goto label_277150;
        case 0x277154u: goto label_277154;
        case 0x277158u: goto label_277158;
        case 0x27715cu: goto label_27715c;
        case 0x277160u: goto label_277160;
        case 0x277164u: goto label_277164;
        case 0x277168u: goto label_277168;
        case 0x27716cu: goto label_27716c;
        case 0x277170u: goto label_277170;
        case 0x277174u: goto label_277174;
        case 0x277178u: goto label_277178;
        case 0x27717cu: goto label_27717c;
        case 0x277180u: goto label_277180;
        case 0x277184u: goto label_277184;
        case 0x277188u: goto label_277188;
        case 0x27718cu: goto label_27718c;
        case 0x277190u: goto label_277190;
        case 0x277194u: goto label_277194;
        case 0x277198u: goto label_277198;
        case 0x27719cu: goto label_27719c;
        case 0x2771a0u: goto label_2771a0;
        case 0x2771a4u: goto label_2771a4;
        case 0x2771a8u: goto label_2771a8;
        case 0x2771acu: goto label_2771ac;
        case 0x2771b0u: goto label_2771b0;
        case 0x2771b4u: goto label_2771b4;
        case 0x2771b8u: goto label_2771b8;
        case 0x2771bcu: goto label_2771bc;
        case 0x2771c0u: goto label_2771c0;
        case 0x2771c4u: goto label_2771c4;
        case 0x2771c8u: goto label_2771c8;
        case 0x2771ccu: goto label_2771cc;
        case 0x2771d0u: goto label_2771d0;
        case 0x2771d4u: goto label_2771d4;
        case 0x2771d8u: goto label_2771d8;
        case 0x2771dcu: goto label_2771dc;
        case 0x2771e0u: goto label_2771e0;
        case 0x2771e4u: goto label_2771e4;
        case 0x2771e8u: goto label_2771e8;
        case 0x2771ecu: goto label_2771ec;
        case 0x2771f0u: goto label_2771f0;
        case 0x2771f4u: goto label_2771f4;
        case 0x2771f8u: goto label_2771f8;
        case 0x2771fcu: goto label_2771fc;
        default: break;
    }

    ctx->pc = 0x2770c0u;

label_2770c0:
    // 0x2770c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2770c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2770c4:
    // 0x2770c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2770c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2770c8:
    // 0x2770c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2770c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2770cc:
    // 0x2770cc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2770ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2770d0:
    // 0x2770d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2770d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2770d4:
    // 0x2770d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2770d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2770d8:
    // 0x2770d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2770d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2770dc:
    // 0x2770dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2770dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2770e0:
    // 0x2770e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2770e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2770e4:
    // 0x2770e4: 0xc09dd3c  jal         func_2774F0
label_2770e8:
    if (ctx->pc == 0x2770E8u) {
        ctx->pc = 0x2770E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770E4u;
        // 0x2770e8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2770ECu;
        goto label_2770ec;
    }
    ctx->pc = 0x2770E4u;
    SET_GPR_U32(ctx, 31, 0x2770ECu);
    ctx->pc = 0x2770E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2770E4u;
    // 0x2770e8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774F0u, 0x2770E4u, 0x2770ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770ECu;
label_2770ec:
    // 0x2770ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2770ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2770f0:
    // 0x2770f0: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_2770f4:
    if (ctx->pc == 0x2770F4u) {
        ctx->pc = 0x2770F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770F0u;
        // 0x2770f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2770F8u;
        goto label_2770f8;
    }
    ctx->pc = 0x2770F0u;
    {
        const bool branch_taken_0x2770f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2770f0) {
            ctx->pc = 0x2770F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2770F0u;
            // 0x2770f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277100u;
            goto label_277100;
        }
    }
    ctx->pc = 0x2770F8u;
label_2770f8:
    // 0x2770f8: 0x10000037  b           . + 4 + (0x37 << 2)
label_2770fc:
    if (ctx->pc == 0x2770FCu) {
        ctx->pc = 0x2770FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770F8u;
        // 0x2770fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277100u;
        goto label_277100;
    }
    ctx->pc = 0x2770F8u;
    {
        const bool branch_taken_0x2770f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2770FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770F8u;
        // 0x2770fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770f8) {
            ctx->pc = 0x2771D8u;
            goto label_2771d8;
        }
    }
    ctx->pc = 0x277100u;
label_277100:
    // 0x277100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277104:
    // 0x277104: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x277104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_277108:
    // 0x277108: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x277108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27710c:
    // 0x27710c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x27710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_277110:
    // 0x277110: 0x40f809  jalr        $v0
label_277114:
    if (ctx->pc == 0x277114u) {
        ctx->pc = 0x277114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277110u;
        // 0x277114: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277118u;
        goto label_277118;
    }
    ctx->pc = 0x277110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277118u);
        ctx->pc = 0x277114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277110u;
        // 0x277114: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277110u, 0x277118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277118u;
label_277118:
    // 0x277118: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x277118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27711c:
    // 0x27711c: 0x2e420020  sltiu       $v0, $s2, 0x20
    ctx->pc = 0x27711cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_277120:
    // 0x277120: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_277124:
    if (ctx->pc == 0x277124u) {
        ctx->pc = 0x277124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277120u;
        // 0x277124: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277128u;
        goto label_277128;
    }
    ctx->pc = 0x277120u;
    {
        const bool branch_taken_0x277120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277120) {
            ctx->pc = 0x277124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277120u;
            // 0x277124: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27717Cu;
            goto label_27717c;
        }
    }
    ctx->pc = 0x277128u;
label_277128:
    // 0x277128: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x277128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_27712c:
    // 0x27712c: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_277130:
    if (ctx->pc == 0x277130u) {
        ctx->pc = 0x277130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27712Cu;
        // 0x277130: 0x2451ffe0  addiu       $s1, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277134u;
        goto label_277134;
    }
    ctx->pc = 0x27712Cu;
    {
        const bool branch_taken_0x27712c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x277130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27712Cu;
        // 0x277130: 0x2451ffe0  addiu       $s1, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27712c) {
            ctx->pc = 0x277150u;
            goto label_277150;
        }
    }
    ctx->pc = 0x277134u;
label_277134:
    // 0x277134: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x277134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_277138:
    // 0x277138: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x277138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27713c:
    // 0x27713c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x27713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_277140:
    // 0x277140: 0x40f809  jalr        $v0
label_277144:
    if (ctx->pc == 0x277144u) {
        ctx->pc = 0x277144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277140u;
        // 0x277144: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277148u;
        goto label_277148;
    }
    ctx->pc = 0x277140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277148u);
        ctx->pc = 0x277144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277140u;
        // 0x277144: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277140u, 0x277148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277148u;
label_277148:
    // 0x277148: 0x10000004  b           . + 4 + (0x4 << 2)
label_27714c:
    if (ctx->pc == 0x27714Cu) {
        ctx->pc = 0x27714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277148u;
        // 0x27714c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277150u;
        goto label_277150;
    }
    ctx->pc = 0x277148u;
    {
        const bool branch_taken_0x277148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277148u;
        // 0x27714c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277148) {
            ctx->pc = 0x27715Cu;
            goto label_27715c;
        }
    }
    ctx->pc = 0x277150u;
label_277150:
    // 0x277150: 0xc0f52a8  jal         func_3D4AA0
label_277154:
    if (ctx->pc == 0x277154u) {
        ctx->pc = 0x277154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277150u;
        // 0x277154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277158u;
        goto label_277158;
    }
    ctx->pc = 0x277150u;
    SET_GPR_U32(ctx, 31, 0x277158u);
    ctx->pc = 0x277154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277150u;
    // 0x277154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x277150u, 0x277158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277158u;
label_277158:
    // 0x277158: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x277158u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27715c:
    // 0x27715c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x27715cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_277160:
    // 0x277160: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x277160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_277164:
    // 0x277164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x277164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277168:
    // 0x277168: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x277168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_27716c:
    // 0x27716c: 0x40f809  jalr        $v0
label_277170:
    if (ctx->pc == 0x277170u) {
        ctx->pc = 0x277170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27716Cu;
        // 0x277170: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277174u;
        goto label_277174;
    }
    ctx->pc = 0x27716Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277174u);
        ctx->pc = 0x277170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27716Cu;
        // 0x277170: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27716Cu, 0x277174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277174u;
label_277174:
    // 0x277174: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x277174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_277178:
    // 0x277178: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x277178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27717c:
    // 0x27717c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x27717cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_277180:
    // 0x277180: 0x60f809  jalr        $v1
label_277184:
    if (ctx->pc == 0x277184u) {
        ctx->pc = 0x277184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277180u;
        // 0x277184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277188u;
        goto label_277188;
    }
    ctx->pc = 0x277180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x277188u);
        ctx->pc = 0x277184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277180u;
        // 0x277184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277180u, 0x277188u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277188u;
label_277188:
    // 0x277188: 0x2e420020  sltiu       $v0, $s2, 0x20
    ctx->pc = 0x277188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_27718c:
    // 0x27718c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_277190:
    if (ctx->pc == 0x277190u) {
        ctx->pc = 0x277194u;
        goto label_277194;
    }
    ctx->pc = 0x27718Cu;
    {
        const bool branch_taken_0x27718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27718c) {
            ctx->pc = 0x2771A4u;
            goto label_2771a4;
        }
    }
    ctx->pc = 0x277194u;
label_277194:
    // 0x277194: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x277194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_277198:
    // 0x277198: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x277198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27719c:
    // 0x27719c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2771a0:
    if (ctx->pc == 0x2771A0u) {
        ctx->pc = 0x2771A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27719Cu;
        // 0x2771a0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2771A4u;
        goto label_2771a4;
    }
    ctx->pc = 0x27719Cu;
    {
        const bool branch_taken_0x27719c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2771A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27719Cu;
        // 0x2771a0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27719c) {
            ctx->pc = 0x2771D8u;
            goto label_2771d8;
        }
    }
    ctx->pc = 0x2771A4u;
label_2771a4:
    // 0x2771a4: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
label_2771a8:
    if (ctx->pc == 0x2771A8u) {
        ctx->pc = 0x2771A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2771A4u;
        // 0x2771a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2771ACu;
        goto label_2771ac;
    }
    ctx->pc = 0x2771A4u;
    {
        const bool branch_taken_0x2771a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2771A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2771A4u;
        // 0x2771a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2771a4) {
            ctx->pc = 0x2771D8u;
            goto label_2771d8;
        }
    }
    ctx->pc = 0x2771ACu;
label_2771ac:
    // 0x2771ac: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_2771b0:
    if (ctx->pc == 0x2771B0u) {
        ctx->pc = 0x2771B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2771ACu;
        // 0x2771b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2771B4u;
        goto label_2771b4;
    }
    ctx->pc = 0x2771ACu;
    {
        const bool branch_taken_0x2771ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2771B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2771ACu;
        // 0x2771b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2771ac) {
            ctx->pc = 0x2771CCu;
            goto label_2771cc;
        }
    }
    ctx->pc = 0x2771B4u;
label_2771b4:
    // 0x2771b4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2771b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2771b8:
    // 0x2771b8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2771b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2771bc:
    // 0x2771bc: 0x40f809  jalr        $v0
label_2771c0:
    if (ctx->pc == 0x2771C0u) {
        ctx->pc = 0x2771C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2771BCu;
        // 0x2771c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2771C4u;
        goto label_2771c4;
    }
    ctx->pc = 0x2771BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2771C4u);
        ctx->pc = 0x2771C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2771BCu;
        // 0x2771c0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2771BCu, 0x2771C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2771C4u;
label_2771c4:
    // 0x2771c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2771c8:
    if (ctx->pc == 0x2771C8u) {
        ctx->pc = 0x2771C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2771C4u;
        // 0x2771c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2771CCu;
        goto label_2771cc;
    }
    ctx->pc = 0x2771C4u;
    {
        const bool branch_taken_0x2771c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2771C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2771C4u;
        // 0x2771c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2771c4) {
            ctx->pc = 0x2771D8u;
            goto label_2771d8;
        }
    }
    ctx->pc = 0x2771CCu;
label_2771cc:
    // 0x2771cc: 0xc0f528a  jal         func_3D4A28
label_2771d0:
    if (ctx->pc == 0x2771D0u) {
        ctx->pc = 0x2771D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2771CCu;
        // 0x2771d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2771D4u;
        goto label_2771d4;
    }
    ctx->pc = 0x2771CCu;
    SET_GPR_U32(ctx, 31, 0x2771D4u);
    ctx->pc = 0x2771D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2771CCu;
    // 0x2771d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2771CCu, 0x2771D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2771D4u;
label_2771d4:
    // 0x2771d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2771d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2771d8:
    // 0x2771d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2771d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2771dc:
    // 0x2771dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2771dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2771e0:
    // 0x2771e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2771e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2771e4:
    // 0x2771e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2771e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2771e8:
    // 0x2771e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2771e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2771ec:
    // 0x2771ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2771ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2771f0:
    // 0x2771f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2771f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2771f4:
    // 0x2771f4: 0x3e00008  jr          $ra
label_2771f8:
    if (ctx->pc == 0x2771F8u) {
        ctx->pc = 0x2771F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2771F4u;
        // 0x2771f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2771FCu;
        goto label_2771fc;
    }
    ctx->pc = 0x2771F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2771F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2771F4u;
        // 0x2771f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2771F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2771FCu;
label_2771fc:
    // 0x2771fc: 0x0  nop
    ctx->pc = 0x2771fcu;
    // NOP
    ctx->pc = 0x277200u;
}
