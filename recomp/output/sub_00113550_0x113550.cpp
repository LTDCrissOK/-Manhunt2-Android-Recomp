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

// Function: sub_00113550
// Address: 0x113550 - 0x1138a0
void sub_00113550_0x113550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113550_0x113550");
#endif

    switch (ctx->pc) {
        case 0x1135ccu: goto label_1135cc;
        case 0x1135e0u: goto label_1135e0;
        case 0x1135f0u: goto label_1135f0;
        case 0x113650u: goto label_113650;
        case 0x113668u: goto label_113668;
        case 0x113788u: goto label_113788;
        case 0x113798u: goto label_113798;
        case 0x1137acu: goto label_1137ac;
        case 0x1137b8u: goto label_1137b8;
        case 0x1137c8u: goto label_1137c8;
        case 0x113858u: goto label_113858;
        case 0x113874u: goto label_113874;
        default: break;
    }

    ctx->pc = 0x113550u;

    // 0x113550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x113550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x113554: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x113554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x113558: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x113558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11355c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11355cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113560: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113564: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x113564u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113568: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x113568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11356c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11356cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x113570: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x113570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x113574: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x113574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x113578: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x113578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x11357c: 0x126000bd  beqz        $s3, . + 4 + (0xBD << 2)
    ctx->pc = 0x11357Cu;
    {
        const bool branch_taken_0x11357c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x113580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11357Cu;
        // 0x113580: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11357c) {
            ctx->pc = 0x113874u;
            goto label_113874;
        }
    }
    ctx->pc = 0x113584u;
    // 0x113584: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x113584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x113588: 0x104000ba  beqz        $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x113588u;
    {
        const bool branch_taken_0x113588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113588u;
        // 0x11358c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113588) {
            ctx->pc = 0x113874u;
            goto label_113874;
        }
    }
    ctx->pc = 0x113590u;
    // 0x113590: 0x8e4201ec  lw          $v0, 0x1EC($s2)
    ctx->pc = 0x113590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x113594: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x113594u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113598: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x113598u;
    {
        const bool branch_taken_0x113598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113598u;
        // 0x11359c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113598) {
            ctx->pc = 0x113644u;
            goto label_113644;
        }
    }
    ctx->pc = 0x1135A0u;
    // 0x1135a0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1135a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1135a4: 0x8c509b18  lw          $s0, -0x64E8($v0)
    ctx->pc = 0x1135a4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x489B18u));
    // 0x1135a8: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1135A8u;
    {
        const bool branch_taken_0x1135a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1135a8) {
            ctx->pc = 0x11362Cu;
            goto label_11362c;
        }
    }
    ctx->pc = 0x1135B0u;
    // 0x1135b0: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1135b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1135b4: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x1135b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x1135b8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1135b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1135bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1135BCu;
    {
        const bool branch_taken_0x1135bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1135C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135BCu;
        // 0x1135c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1135bc) {
            ctx->pc = 0x1135D0u;
            goto label_1135d0;
        }
    }
    ctx->pc = 0x1135C4u;
    // 0x1135c4: 0xc0b93fc  jal         func_2E4FF0
    ctx->pc = 0x1135C4u;
    SET_GPR_U32(ctx, 31, 0x1135CCu);
    ctx->pc = 0x1135C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135C4u;
    // 0x1135c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FF0u, 0x1135C4u, 0x1135CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135CCu;
label_1135cc:
    // 0x1135cc: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1135ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1135d0:
    // 0x1135d0: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1135D0u;
    {
        const bool branch_taken_0x1135d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1135d0) {
            ctx->pc = 0x1135D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1135D0u;
            // 0x1135d4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11362Cu;
            goto label_11362c;
        }
    }
    ctx->pc = 0x1135D8u;
    // 0x1135d8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1135D8u;
    SET_GPR_U32(ctx, 31, 0x1135E0u);
    ctx->pc = 0x1135DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135D8u;
    // 0x1135dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1135D8u, 0x1135E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135E0u;
label_1135e0:
    // 0x1135e0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1135E0u;
    {
        const bool branch_taken_0x1135e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1135e0) {
            ctx->pc = 0x11362Cu;
            goto label_11362c;
        }
    }
    ctx->pc = 0x1135E8u;
    // 0x1135e8: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1135E8u;
    SET_GPR_U32(ctx, 31, 0x1135F0u);
    ctx->pc = 0x1135ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1135E8u;
    // 0x1135ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1135E8u, 0x1135F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1135F0u;
label_1135f0:
    // 0x1135f0: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x1135f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1135f4: 0x2c62007b  sltiu       $v0, $v1, 0x7B
    ctx->pc = 0x1135f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)123) ? 1 : 0);
    // 0x1135f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1135F8u;
    {
        const bool branch_taken_0x1135f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1135FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1135F8u;
        // 0x1135fc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1135f8) {
            ctx->pc = 0x113628u;
            goto label_113628;
        }
    }
    ctx->pc = 0x113600u;
    // 0x113600: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x113604: 0x2442a980  addiu       $v0, $v0, -0x5680
    ctx->pc = 0x113604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945152));
    // 0x113608: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x113608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11360c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113610: 0x800008  jr          $a0
    ctx->pc = 0x113610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x113618u: goto label_113618;
            case 0x113620u: goto label_113620;
            case 0x113628u: goto label_113628;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113610u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x113618u;
label_113618:
    // 0x113618: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x113618u;
    {
        const bool branch_taken_0x113618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113618u;
        // 0x11361c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113618) {
            ctx->pc = 0x11362Cu;
            goto label_11362c;
        }
    }
    ctx->pc = 0x113620u;
label_113620:
    // 0x113620: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113620u;
    {
        const bool branch_taken_0x113620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113620u;
        // 0x113624: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113620) {
            ctx->pc = 0x11362Cu;
            goto label_11362c;
        }
    }
    ctx->pc = 0x113628u;
label_113628:
    // 0x113628: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x113628u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11362c:
    // 0x11362c: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x11362Cu;
    {
        const bool branch_taken_0x11362c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x113630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11362Cu;
        // 0x113630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11362c) {
            ctx->pc = 0x113648u;
            goto label_113648;
        }
    }
    ctx->pc = 0x113634u;
    // 0x113634: 0x16c00004  bnez        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x113634u;
    {
        const bool branch_taken_0x113634 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x113634) {
            ctx->pc = 0x113648u;
            goto label_113648;
        }
    }
    ctx->pc = 0x11363Cu;
    // 0x11363c: 0x12e0008e  beqz        $s7, . + 4 + (0x8E << 2)
    ctx->pc = 0x11363Cu;
    {
        const bool branch_taken_0x11363c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x113640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11363Cu;
        // 0x113640: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11363c) {
            ctx->pc = 0x113878u;
            goto label_113878;
        }
    }
    ctx->pc = 0x113644u;
label_113644:
    // 0x113644: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x113644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_113648:
    // 0x113648: 0xc0446f0  jal         func_111BC0
    ctx->pc = 0x113648u;
    SET_GPR_U32(ctx, 31, 0x113650u);
    ctx->pc = 0x11364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113648u;
    // 0x11364c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111BC0u, 0x113648u, 0x113650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113650u;
label_113650:
    // 0x113650: 0x24110029  addiu       $s1, $zero, 0x29
    ctx->pc = 0x113650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x113654: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113658: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x113658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
    // 0x11365c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11365Cu;
    {
        const bool branch_taken_0x11365c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11365Cu;
        // 0x113660: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11365c) {
            ctx->pc = 0x113670u;
            goto label_113670;
        }
    }
    ctx->pc = 0x113664u;
    // 0x113664: 0x24110022  addiu       $s1, $zero, 0x22
    ctx->pc = 0x113664u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_113668:
    // 0x113668: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x113668u;
    {
        const bool branch_taken_0x113668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113668u;
        // 0x11366c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113668) {
            ctx->pc = 0x113738u;
            goto label_113738;
        }
    }
    ctx->pc = 0x113670u;
label_113670:
    // 0x113670: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x113670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
    // 0x113674: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113674u;
    {
        const bool branch_taken_0x113674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113674u;
        // 0x113678: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113674) {
            ctx->pc = 0x113684u;
            goto label_113684;
        }
    }
    ctx->pc = 0x11367Cu;
    // 0x11367c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x11367Cu;
    {
        const bool branch_taken_0x11367c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11367Cu;
        // 0x113680: 0x2411001d  addiu       $s1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11367c) {
            ctx->pc = 0x113668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113668;
        }
    }
    ctx->pc = 0x113684u;
label_113684:
    // 0x113684: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x113684u;
    {
        const bool branch_taken_0x113684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113684u;
        // 0x113688: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113684) {
            ctx->pc = 0x1136D8u;
            goto label_1136d8;
        }
    }
    ctx->pc = 0x11368Cu;
    // 0x11368c: 0x8e4201ec  lw          $v0, 0x1EC($s2)
    ctx->pc = 0x11368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x113690: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x113690u;
    {
        const bool branch_taken_0x113690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113690) {
            ctx->pc = 0x113694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113690u;
            // 0x113694: 0x8e4200d0  lw          $v0, 0xD0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1136C0u;
            goto label_1136c0;
        }
    }
    ctx->pc = 0x113698u;
    // 0x113698: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x113698u;
    {
        const bool branch_taken_0x113698 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x113698) {
            ctx->pc = 0x1136A8u;
            goto label_1136a8;
        }
    }
    ctx->pc = 0x1136A0u;
    // 0x1136a0: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x1136A0u;
    {
        const bool branch_taken_0x1136a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136A0u;
        // 0x1136a4: 0x24110016  addiu       $s1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136a0) {
            ctx->pc = 0x113668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113668;
        }
    }
    ctx->pc = 0x1136A8u;
label_1136a8:
    // 0x1136a8: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1136A8u;
    {
        const bool branch_taken_0x1136a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136A8u;
        // 0x1136ac: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136a8) {
            ctx->pc = 0x1136B8u;
            goto label_1136b8;
        }
    }
    ctx->pc = 0x1136B0u;
    // 0x1136b0: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x1136B0u;
    {
        const bool branch_taken_0x1136b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136B0u;
        // 0x1136b4: 0x24110017  addiu       $s1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136b0) {
            ctx->pc = 0x113668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113668;
        }
    }
    ctx->pc = 0x1136B8u;
label_1136b8:
    // 0x1136b8: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x1136B8u;
    {
        const bool branch_taken_0x1136b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136B8u;
        // 0x1136bc: 0x57880b  movn        $s1, $v0, $s7 (Delay Slot)
        if (GPR_U64(ctx, 23) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136b8) {
            ctx->pc = 0x113668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113668;
        }
    }
    ctx->pc = 0x1136C0u;
label_1136c0:
    // 0x1136c0: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1136C0u;
    {
        const bool branch_taken_0x1136c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136C0u;
        // 0x1136c4: 0x2411001b  addiu       $s1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136c0) {
            ctx->pc = 0x113668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113668;
        }
    }
    ctx->pc = 0x1136C8u;
    // 0x1136c8: 0x8e4300d8  lw          $v1, 0xD8($s2)
    ctx->pc = 0x1136c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x1136cc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1136ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1136d0: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x1136D0u;
    {
        const bool branch_taken_0x1136d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136D0u;
        // 0x1136d4: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136d0) {
            ctx->pc = 0x113668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113668;
        }
    }
    ctx->pc = 0x1136D8u;
label_1136d8:
    // 0x1136d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1136D8u;
    {
        const bool branch_taken_0x1136d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136D8u;
        // 0x1136dc: 0x32620010  andi        $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136d8) {
            ctx->pc = 0x1136E8u;
            goto label_1136e8;
        }
    }
    ctx->pc = 0x1136E0u;
    // 0x1136e0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1136E0u;
    {
        const bool branch_taken_0x1136e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136E0u;
        // 0x1136e4: 0x24110019  addiu       $s1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136e0) {
            ctx->pc = 0x113738u;
            goto label_113738;
        }
    }
    ctx->pc = 0x1136E8u;
label_1136e8:
    // 0x1136e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1136E8u;
    {
        const bool branch_taken_0x1136e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136E8u;
        // 0x1136ec: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136e8) {
            ctx->pc = 0x1136F8u;
            goto label_1136f8;
        }
    }
    ctx->pc = 0x1136F0u;
    // 0x1136f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1136F0u;
    {
        const bool branch_taken_0x1136f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136F0u;
        // 0x1136f4: 0x2411001a  addiu       $s1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136f0) {
            ctx->pc = 0x113734u;
            goto label_113734;
        }
    }
    ctx->pc = 0x1136F8u;
label_1136f8:
    // 0x1136f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1136F8u;
    {
        const bool branch_taken_0x1136f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1136FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136F8u;
        // 0x1136fc: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136f8) {
            ctx->pc = 0x113708u;
            goto label_113708;
        }
    }
    ctx->pc = 0x113700u;
    // 0x113700: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x113700u;
    {
        const bool branch_taken_0x113700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113700u;
        // 0x113704: 0x2411001e  addiu       $s1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113700) {
            ctx->pc = 0x113738u;
            goto label_113738;
        }
    }
    ctx->pc = 0x113708u;
label_113708:
    // 0x113708: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113708u;
    {
        const bool branch_taken_0x113708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11370Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113708u;
        // 0x11370c: 0x32620002  andi        $v0, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113708) {
            ctx->pc = 0x113718u;
            goto label_113718;
        }
    }
    ctx->pc = 0x113710u;
    // 0x113710: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x113710u;
    {
        const bool branch_taken_0x113710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113710u;
        // 0x113714: 0x24110016  addiu       $s1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113710) {
            ctx->pc = 0x113734u;
            goto label_113734;
        }
    }
    ctx->pc = 0x113718u;
label_113718:
    // 0x113718: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113718u;
    {
        const bool branch_taken_0x113718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113718u;
        // 0x11371c: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113718) {
            ctx->pc = 0x113728u;
            goto label_113728;
        }
    }
    ctx->pc = 0x113720u;
    // 0x113720: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x113720u;
    {
        const bool branch_taken_0x113720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113720u;
        // 0x113724: 0x24110017  addiu       $s1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113720) {
            ctx->pc = 0x113734u;
            goto label_113734;
        }
    }
    ctx->pc = 0x113728u;
label_113728:
    // 0x113728: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113728u;
    {
        const bool branch_taken_0x113728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113728) {
            ctx->pc = 0x113738u;
            goto label_113738;
        }
    }
    ctx->pc = 0x113730u;
    // 0x113730: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x113730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_113734:
    // 0x113734: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x113734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_113738:
    // 0x113738: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x113738u;
    {
        const bool branch_taken_0x113738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x113738) {
            ctx->pc = 0x11373Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113738u;
            // 0x11373c: 0x8e420110  lw          $v0, 0x110($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113758u;
            goto label_113758;
        }
    }
    ctx->pc = 0x113740u;
    // 0x113740: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113740u;
    {
        const bool branch_taken_0x113740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x113744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113740u;
        // 0x113744: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113740) {
            ctx->pc = 0x113754u;
            goto label_113754;
        }
    }
    ctx->pc = 0x113748u;
    // 0x113748: 0x24110011  addiu       $s1, $zero, 0x11
    ctx->pc = 0x113748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x11374c: 0x8c62a9d4  lw          $v0, -0x562C($v1)
    ctx->pc = 0x11374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945236)));
    // 0x113750: 0xae4201c0  sw          $v0, 0x1C0($s2)
    ctx->pc = 0x113750u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 2));
label_113754:
    // 0x113754: 0x8e420110  lw          $v0, 0x110($s2)
    ctx->pc = 0x113754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
label_113758:
    // 0x113758: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113758u;
    {
        const bool branch_taken_0x113758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113758u;
        // 0x11375c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113758) {
            ctx->pc = 0x11376Cu;
            goto label_11376c;
        }
    }
    ctx->pc = 0x113760u;
    // 0x113760: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x113760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x113764: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113764u;
    {
        const bool branch_taken_0x113764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113764u;
        // 0x113768: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113764) {
            ctx->pc = 0x113774u;
            goto label_113774;
        }
    }
    ctx->pc = 0x11376Cu;
label_11376c:
    // 0x11376c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x11376cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113770: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x113770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_113774:
    // 0x113774: 0x53880b  movn        $s1, $v0, $s3
    ctx->pc = 0x113774u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x113778: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113778u;
    {
        const bool branch_taken_0x113778 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x113778) {
            ctx->pc = 0x113790u;
            goto label_113790;
        }
    }
    ctx->pc = 0x113780u;
    // 0x113780: 0xc043eba  jal         func_10FAE8
    ctx->pc = 0x113780u;
    SET_GPR_U32(ctx, 31, 0x113788u);
    ctx->pc = 0x113784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113780u;
    // 0x113784: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FAE8u, 0x113780u, 0x113788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113788u;
label_113788:
    // 0x113788: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113788u;
    {
        const bool branch_taken_0x113788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113788) {
            ctx->pc = 0x1137C8u;
            goto label_1137c8;
        }
    }
    ctx->pc = 0x113790u;
label_113790:
    // 0x113790: 0xc0449c8  jal         func_112720
    ctx->pc = 0x113790u;
    SET_GPR_U32(ctx, 31, 0x113798u);
    ctx->pc = 0x113794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113790u;
    // 0x113794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112720u, 0x113790u, 0x113798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113798u;
label_113798:
    // 0x113798: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11379c: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x11379cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1137a0: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1137a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1137a4: 0xc045612  jal         func_115848
    ctx->pc = 0x1137A4u;
    SET_GPR_U32(ctx, 31, 0x1137ACu);
    ctx->pc = 0x1137A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137A4u;
    // 0x1137a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x1137A4u, 0x1137ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137ACu;
label_1137ac:
    // 0x1137ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1137acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137b0: 0xc045668  jal         func_1159A0
    ctx->pc = 0x1137B0u;
    SET_GPR_U32(ctx, 31, 0x1137B8u);
    ctx->pc = 0x1137B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137B0u;
    // 0x1137b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x1137B0u, 0x1137B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137B8u;
label_1137b8:
    // 0x1137b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1137b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1137bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1137c0: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x1137C0u;
    SET_GPR_U32(ctx, 31, 0x1137C8u);
    ctx->pc = 0x1137C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1137C0u;
    // 0x1137c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x1137C0u, 0x1137C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1137C8u;
label_1137c8:
    // 0x1137c8: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x1137C8u;
    {
        const bool branch_taken_0x1137c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1137CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137C8u;
        // 0x1137cc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137c8) {
            ctx->pc = 0x113818u;
            goto label_113818;
        }
    }
    ctx->pc = 0x1137D0u;
    // 0x1137d0: 0x8e4201ec  lw          $v0, 0x1EC($s2)
    ctx->pc = 0x1137d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 492)));
    // 0x1137d4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1137D4u;
    {
        const bool branch_taken_0x1137d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1137D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137D4u;
        // 0x1137d8: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137d4) {
            ctx->pc = 0x113874u;
            goto label_113874;
        }
    }
    ctx->pc = 0x1137DCu;
    // 0x1137dc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1137dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1137e0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1137e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1137e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1137e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1137e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1137e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1137ec: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1137ECu;
    {
        const bool branch_taken_0x1137ec = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1137F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137ECu;
        // 0x1137f0: 0x8c460108  lw          $a2, 0x108($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137ec) {
            ctx->pc = 0x113800u;
            goto label_113800;
        }
    }
    ctx->pc = 0x1137F4u;
    // 0x1137f4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1137f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1137f8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1137F8u;
    {
        const bool branch_taken_0x1137f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1137FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137F8u;
        // 0x1137fc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1137f8) {
            ctx->pc = 0x11384Cu;
            goto label_11384c;
        }
    }
    ctx->pc = 0x113800u;
label_113800:
    // 0x113800: 0x16c00011  bnez        $s6, . + 4 + (0x11 << 2)
    ctx->pc = 0x113800u;
    {
        const bool branch_taken_0x113800 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x113804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113800u;
        // 0x113804: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113800) {
            ctx->pc = 0x113848u;
            goto label_113848;
        }
    }
    ctx->pc = 0x113808u;
    // 0x113808: 0x12e0001a  beqz        $s7, . + 4 + (0x1A << 2)
    ctx->pc = 0x113808u;
    {
        const bool branch_taken_0x113808 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x11380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113808u;
        // 0x11380c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113808) {
            ctx->pc = 0x113874u;
            goto label_113874;
        }
    }
    ctx->pc = 0x113810u;
    // 0x113810: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113810u;
    {
        const bool branch_taken_0x113810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113810u;
        // 0x113814: 0x248487a0  addiu       $a0, $a0, -0x7860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113810) {
            ctx->pc = 0x113850u;
            goto label_113850;
        }
    }
    ctx->pc = 0x113818u;
label_113818:
    // 0x113818: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x113818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
    // 0x11381c: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x11381cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945236)));
    // 0x113820: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x113820u;
    {
        const bool branch_taken_0x113820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x113824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113820u;
        // 0x113824: 0xae4301bc  sw          $v1, 0x1BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113820) {
            ctx->pc = 0x113874u;
            goto label_113874;
        }
    }
    ctx->pc = 0x113828u;
    // 0x113828: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x113828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x11382c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x11382cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x113830: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x113830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x113834: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x113838: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11383c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x11383Cu;
    {
        const bool branch_taken_0x11383c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x113840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11383Cu;
        // 0x113840: 0x8c460108  lw          $a2, 0x108($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11383c) {
            ctx->pc = 0x113860u;
            goto label_113860;
        }
    }
    ctx->pc = 0x113844u;
    // 0x113844: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x113844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_113848:
    // 0x113848: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x113848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_11384c:
    // 0x11384c: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x11384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_113850:
    // 0x113850: 0xc04668a  jal         func_119A28
    ctx->pc = 0x113850u;
    SET_GPR_U32(ctx, 31, 0x113858u);
    ctx->pc = 0x113854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113850u;
    // 0x113854: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x113850u, 0x113858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113858u;
label_113858:
    // 0x113858: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x113858u;
    {
        const bool branch_taken_0x113858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113858u;
        // 0x11385c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113858) {
            ctx->pc = 0x113878u;
            goto label_113878;
        }
    }
    ctx->pc = 0x113860u;
label_113860:
    // 0x113860: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x113860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x113864: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x113864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x113868: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x113868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x11386c: 0xc04668a  jal         func_119A28
    ctx->pc = 0x11386Cu;
    SET_GPR_U32(ctx, 31, 0x113874u);
    ctx->pc = 0x113870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11386Cu;
    // 0x113870: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x11386Cu, 0x113874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113874u;
label_113874:
    // 0x113874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113878:
    // 0x113878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11387c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11387cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113880: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x113880u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x113884: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x113884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113888: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x113888u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11388c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x11388cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113890: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x113890u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x113894: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x113894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113898: 0x3e00008  jr          $ra
    ctx->pc = 0x113898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113898u;
        // 0x11389c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1138A0u;
}
