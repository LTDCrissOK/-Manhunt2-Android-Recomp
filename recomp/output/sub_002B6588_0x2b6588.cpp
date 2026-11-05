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

// Function: sub_002B6588
// Address: 0x2b6588 - 0x2b6898
void sub_002B6588_0x2b6588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6588_0x2b6588");
#endif

    switch (ctx->pc) {
        case 0x2b65e4u: goto label_2b65e4;
        case 0x2b6614u: goto label_2b6614;
        case 0x2b6628u: goto label_2b6628;
        case 0x2b663cu: goto label_2b663c;
        case 0x2b664cu: goto label_2b664c;
        case 0x2b665cu: goto label_2b665c;
        case 0x2b666cu: goto label_2b666c;
        case 0x2b667cu: goto label_2b667c;
        case 0x2b668cu: goto label_2b668c;
        case 0x2b669cu: goto label_2b669c;
        case 0x2b66acu: goto label_2b66ac;
        case 0x2b66bcu: goto label_2b66bc;
        case 0x2b66ccu: goto label_2b66cc;
        case 0x2b66ecu: goto label_2b66ec;
        case 0x2b66fcu: goto label_2b66fc;
        case 0x2b670cu: goto label_2b670c;
        case 0x2b671cu: goto label_2b671c;
        case 0x2b672cu: goto label_2b672c;
        case 0x2b673cu: goto label_2b673c;
        case 0x2b674cu: goto label_2b674c;
        case 0x2b675cu: goto label_2b675c;
        case 0x2b6770u: goto label_2b6770;
        case 0x2b6780u: goto label_2b6780;
        case 0x2b6790u: goto label_2b6790;
        case 0x2b67b0u: goto label_2b67b0;
        case 0x2b67c8u: goto label_2b67c8;
        case 0x2b67d0u: goto label_2b67d0;
        case 0x2b680cu: goto label_2b680c;
        case 0x2b6834u: goto label_2b6834;
        case 0x2b684cu: goto label_2b684c;
        case 0x2b6864u: goto label_2b6864;
        case 0x2b687cu: goto label_2b687c;
        default: break;
    }

    ctx->pc = 0x2b6588u;

    // 0x2b6588: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2b6588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2b658c: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x2b658cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x2b6590: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2b6590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2b6594: 0x8c4305a0  lw          $v1, 0x5A0($v0)
    ctx->pc = 0x2b6594u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5205A0u));
    // 0x2b6598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b659c: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x2b659cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x2b65a0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B65A0u;
    {
        const bool branch_taken_0x2b65a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B65A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65A0u;
        // 0x2b65a4: 0xffbf0110  sd          $ra, 0x110($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b65a0) {
            ctx->pc = 0x2B65C4u;
            goto label_2b65c4;
        }
    }
    ctx->pc = 0x2B65A8u;
    // 0x2b65a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b65ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b65acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b65b0: 0xae025914  sw          $v0, 0x5914($s0)
    ctx->pc = 0x2b65b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22804), GPR_U32(ctx, 2));
    // 0x2b65b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b65b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b65b8: 0xae0358fc  sw          $v1, 0x58FC($s0)
    ctx->pc = 0x2b65b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22780), GPR_U32(ctx, 3));
    // 0x2b65bc: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2B65BCu;
    {
        const bool branch_taken_0x2b65bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B65C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65BCu;
        // 0x2b65c0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b65bc) {
            ctx->pc = 0x2B6880u;
            goto label_2b6880;
        }
    }
    ctx->pc = 0x2B65C4u;
label_2b65c4:
    // 0x2b65c4: 0x8e03591c  lw          $v1, 0x591C($s0)
    ctx->pc = 0x2b65c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22812)));
    // 0x2b65c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b65c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b65cc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B65CCu;
    {
        const bool branch_taken_0x2b65cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b65cc) {
            ctx->pc = 0x2B65D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B65CCu;
            // 0x2b65d0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B65E8u;
            goto label_2b65e8;
        }
    }
    ctx->pc = 0x2B65D4u;
    // 0x2b65d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b65d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b65d8: 0xae0558f8  sw          $a1, 0x58F8($s0)
    ctx->pc = 0x2b65d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22776), GPR_U32(ctx, 5));
    // 0x2b65dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b65dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b65e0: 0xae00591c  sw          $zero, 0x591C($s0)
    ctx->pc = 0x2b65e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22812), GPR_U32(ctx, 0));
label_2b65e4:
    // 0x2b65e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b65e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b65e8:
    // 0x2b65e8: 0x2c620031  sltiu       $v0, $v1, 0x31
    ctx->pc = 0x2b65e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x2b65ec: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2B65ECu;
    {
        const bool branch_taken_0x2b65ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65ECu;
        // 0x2b65f0: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b65ec) {
            ctx->pc = 0x2B6854u;
            goto label_2b6854;
        }
    }
    ctx->pc = 0x2B65F4u;
    // 0x2b65f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b65f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b65f8: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x2b65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
    // 0x2b65fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b65fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b6600: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b6600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6604: 0x800008  jr          $a0
    ctx->pc = 0x2B6604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B660Cu: goto label_2b660c;
            case 0x2B6620u: goto label_2b6620;
            case 0x2B6634u: goto label_2b6634;
            case 0x2B6644u: goto label_2b6644;
            case 0x2B6654u: goto label_2b6654;
            case 0x2B6664u: goto label_2b6664;
            case 0x2B6674u: goto label_2b6674;
            case 0x2B6684u: goto label_2b6684;
            case 0x2B6694u: goto label_2b6694;
            case 0x2B66A4u: goto label_2b66a4;
            case 0x2B66B4u: goto label_2b66b4;
            case 0x2B66C4u: goto label_2b66c4;
            case 0x2B66E4u: goto label_2b66e4;
            case 0x2B66F4u: goto label_2b66f4;
            case 0x2B6704u: goto label_2b6704;
            case 0x2B6714u: goto label_2b6714;
            case 0x2B6724u: goto label_2b6724;
            case 0x2B6734u: goto label_2b6734;
            case 0x2B6744u: goto label_2b6744;
            case 0x2B6754u: goto label_2b6754;
            case 0x2B6764u: goto label_2b6764;
            case 0x2B6778u: goto label_2b6778;
            case 0x2B6788u: goto label_2b6788;
            case 0x2B6798u: goto label_2b6798;
            case 0x2B681Cu: goto label_2b681c;
            case 0x2B6844u: goto label_2b6844;
            case 0x2B6854u: goto label_2b6854;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6604u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B660Cu;
label_2b660c:
    // 0x2b660c: 0xc0ade92  jal         func_2B7A48
    ctx->pc = 0x2B660Cu;
    SET_GPR_U32(ctx, 31, 0x2B6614u);
    ctx->pc = 0x2B6610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B660Cu;
    // 0x2b6610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7A48u, 0x2B660Cu, 0x2B6614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6614u;
label_2b6614:
    // 0x2b6614: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b6614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b6618: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2B6618u;
    {
        const bool branch_taken_0x2b6618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6618u;
        // 0x2b661c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6618) {
            ctx->pc = 0x2B66D4u;
            goto label_2b66d4;
        }
    }
    ctx->pc = 0x2B6620u;
label_2b6620:
    // 0x2b6620: 0xc0adeb8  jal         func_2B7AE0
    ctx->pc = 0x2B6620u;
    SET_GPR_U32(ctx, 31, 0x2B6628u);
    ctx->pc = 0x2B6624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6620u;
    // 0x2b6624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7AE0u, 0x2B6620u, 0x2B6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6628u;
label_2b6628:
    // 0x2b6628: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b6628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b662c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2B662Cu;
    {
        const bool branch_taken_0x2b662c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B662Cu;
        // 0x2b6630: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b662c) {
            ctx->pc = 0x2B66D4u;
            goto label_2b66d4;
        }
    }
    ctx->pc = 0x2B6634u;
label_2b6634:
    // 0x2b6634: 0xc0ae022  jal         func_2B8088
    ctx->pc = 0x2B6634u;
    SET_GPR_U32(ctx, 31, 0x2B663Cu);
    ctx->pc = 0x2B6638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6634u;
    // 0x2b6638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8088u, 0x2B6634u, 0x2B663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B663Cu;
label_2b663c:
    // 0x2b663c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2B663Cu;
    {
        const bool branch_taken_0x2b663c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B663Cu;
        // 0x2b6640: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b663c) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6644u;
label_2b6644:
    // 0x2b6644: 0xc0adee2  jal         func_2B7B88
    ctx->pc = 0x2B6644u;
    SET_GPR_U32(ctx, 31, 0x2B664Cu);
    ctx->pc = 0x2B6648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6644u;
    // 0x2b6648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7B88u, 0x2B6644u, 0x2B664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B664Cu;
label_2b664c:
    // 0x2b664c: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x2B664Cu;
    {
        const bool branch_taken_0x2b664c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B664Cu;
        // 0x2b6650: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b664c) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6654u;
label_2b6654:
    // 0x2b6654: 0xc0adf6e  jal         func_2B7DB8
    ctx->pc = 0x2B6654u;
    SET_GPR_U32(ctx, 31, 0x2B665Cu);
    ctx->pc = 0x2B6658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6654u;
    // 0x2b6658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DB8u, 0x2B6654u, 0x2B665Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B665Cu;
label_2b665c:
    // 0x2b665c: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2B665Cu;
    {
        const bool branch_taken_0x2b665c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B665Cu;
        // 0x2b6660: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b665c) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6664u;
label_2b6664:
    // 0x2b6664: 0xc0adf9a  jal         func_2B7E68
    ctx->pc = 0x2B6664u;
    SET_GPR_U32(ctx, 31, 0x2B666Cu);
    ctx->pc = 0x2B6668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6664u;
    // 0x2b6668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7E68u, 0x2B6664u, 0x2B666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B666Cu;
label_2b666c:
    // 0x2b666c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2B666Cu;
    {
        const bool branch_taken_0x2b666c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B666Cu;
        // 0x2b6670: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b666c) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6674u;
label_2b6674:
    // 0x2b6674: 0xc0adfbe  jal         func_2B7EF8
    ctx->pc = 0x2B6674u;
    SET_GPR_U32(ctx, 31, 0x2B667Cu);
    ctx->pc = 0x2B6678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6674u;
    // 0x2b6678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7EF8u, 0x2B6674u, 0x2B667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B667Cu;
label_2b667c:
    // 0x2b667c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x2B667Cu;
    {
        const bool branch_taken_0x2b667c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B667Cu;
        // 0x2b6680: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b667c) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6684u;
label_2b6684:
    // 0x2b6684: 0xc0ae05e  jal         func_2B8178
    ctx->pc = 0x2B6684u;
    SET_GPR_U32(ctx, 31, 0x2B668Cu);
    ctx->pc = 0x2B6688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6684u;
    // 0x2b6688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8178u, 0x2B6684u, 0x2B668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B668Cu;
label_2b668c:
    // 0x2b668c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2B668Cu;
    {
        const bool branch_taken_0x2b668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B668Cu;
        // 0x2b6690: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b668c) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6694u;
label_2b6694:
    // 0x2b6694: 0xc0ae190  jal         func_2B8640
    ctx->pc = 0x2B6694u;
    SET_GPR_U32(ctx, 31, 0x2B669Cu);
    ctx->pc = 0x2B6698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6694u;
    // 0x2b6698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8640u, 0x2B6694u, 0x2B669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B669Cu;
label_2b669c:
    // 0x2b669c: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x2B669Cu;
    {
        const bool branch_taken_0x2b669c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B66A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B669Cu;
        // 0x2b66a0: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b669c) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B66A4u;
label_2b66a4:
    // 0x2b66a4: 0xc0ae114  jal         func_2B8450
    ctx->pc = 0x2B66A4u;
    SET_GPR_U32(ctx, 31, 0x2B66ACu);
    ctx->pc = 0x2B66A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B66A4u;
    // 0x2b66a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8450u, 0x2B66A4u, 0x2B66ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B66ACu;
label_2b66ac:
    // 0x2b66ac: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2B66ACu;
    {
        const bool branch_taken_0x2b66ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B66B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66ACu;
        // 0x2b66b0: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66ac) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B66B4u;
label_2b66b4:
    // 0x2b66b4: 0xc0ae1e4  jal         func_2B8790
    ctx->pc = 0x2B66B4u;
    SET_GPR_U32(ctx, 31, 0x2B66BCu);
    ctx->pc = 0x2B66B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B66B4u;
    // 0x2b66b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8790u, 0x2B66B4u, 0x2B66BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B66BCu;
label_2b66bc:
    // 0x2b66bc: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x2B66BCu;
    {
        const bool branch_taken_0x2b66bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B66C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66BCu;
        // 0x2b66c0: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66bc) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B66C4u;
label_2b66c4:
    // 0x2b66c4: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2B66C4u;
    SET_GPR_U32(ctx, 31, 0x2B66CCu);
    ctx->pc = 0x2B66C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B66C4u;
    // 0x2b66c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6DF8u, 0x2B66C4u, 0x2B66CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B66CCu;
label_2b66cc:
    // 0x2b66cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b66ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b66d0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2b66d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_2b66d4:
    // 0x2b66d4: 0x1062ffc3  beq         $v1, $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2B66D4u;
    {
        const bool branch_taken_0x2b66d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66D4u;
        // 0x2b66d8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66d4) {
            ctx->pc = 0x2B65E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b65e4;
        }
    }
    ctx->pc = 0x2B66DCu;
    // 0x2b66dc: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2B66DCu;
    {
        const bool branch_taken_0x2b66dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B66E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66DCu;
        // 0x2b66e0: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66dc) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B66E4u;
label_2b66e4:
    // 0x2b66e4: 0xc0adafc  jal         func_2B6BF0
    ctx->pc = 0x2B66E4u;
    SET_GPR_U32(ctx, 31, 0x2B66ECu);
    ctx->pc = 0x2B66E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B66E4u;
    // 0x2b66e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6BF0u, 0x2B66E4u, 0x2B66ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B66ECu;
label_2b66ec:
    // 0x2b66ec: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2B66ECu;
    {
        const bool branch_taken_0x2b66ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B66F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66ECu;
        // 0x2b66f0: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66ec) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B66F4u;
label_2b66f4:
    // 0x2b66f4: 0xc0ae0c2  jal         func_2B8308
    ctx->pc = 0x2B66F4u;
    SET_GPR_U32(ctx, 31, 0x2B66FCu);
    ctx->pc = 0x2B66F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B66F4u;
    // 0x2b66f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8308u, 0x2B66F4u, 0x2B66FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B66FCu;
label_2b66fc:
    // 0x2b66fc: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2B66FCu;
    {
        const bool branch_taken_0x2b66fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B66FCu;
        // 0x2b6700: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b66fc) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6704u;
label_2b6704:
    // 0x2b6704: 0xc0ae09e  jal         func_2B8278
    ctx->pc = 0x2B6704u;
    SET_GPR_U32(ctx, 31, 0x2B670Cu);
    ctx->pc = 0x2B6708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6704u;
    // 0x2b6708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8278u, 0x2B6704u, 0x2B670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B670Cu;
label_2b670c:
    // 0x2b670c: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2B670Cu;
    {
        const bool branch_taken_0x2b670c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B670Cu;
        // 0x2b6710: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b670c) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6714u;
label_2b6714:
    // 0x2b6714: 0xc0ad92a  jal         func_2B64A8
    ctx->pc = 0x2B6714u;
    SET_GPR_U32(ctx, 31, 0x2B671Cu);
    ctx->pc = 0x2B6718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6714u;
    // 0x2b6718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B64A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B64A8u, 0x2B6714u, 0x2B671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B671Cu;
label_2b671c:
    // 0x2b671c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2B671Cu;
    {
        const bool branch_taken_0x2b671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B671Cu;
        // 0x2b6720: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b671c) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6724u;
label_2b6724:
    // 0x2b6724: 0xc0ad77e  jal         func_2B5DF8
    ctx->pc = 0x2B6724u;
    SET_GPR_U32(ctx, 31, 0x2B672Cu);
    ctx->pc = 0x2B6728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6724u;
    // 0x2b6728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5DF8u, 0x2B6724u, 0x2B672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B672Cu;
label_2b672c:
    // 0x2b672c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x2B672Cu;
    {
        const bool branch_taken_0x2b672c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B672Cu;
        // 0x2b6730: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b672c) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6734u;
label_2b6734:
    // 0x2b6734: 0xc0ad8bc  jal         func_2B62F0
    ctx->pc = 0x2B6734u;
    SET_GPR_U32(ctx, 31, 0x2B673Cu);
    ctx->pc = 0x2B6738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6734u;
    // 0x2b6738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62F0u, 0x2B6734u, 0x2B673Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B673Cu;
label_2b673c:
    // 0x2b673c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x2B673Cu;
    {
        const bool branch_taken_0x2b673c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B673Cu;
        // 0x2b6740: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b673c) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6744u;
label_2b6744:
    // 0x2b6744: 0xc0ad8e4  jal         func_2B6390
    ctx->pc = 0x2B6744u;
    SET_GPR_U32(ctx, 31, 0x2B674Cu);
    ctx->pc = 0x2B6748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6744u;
    // 0x2b6748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6390u, 0x2B6744u, 0x2B674Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B674Cu;
label_2b674c:
    // 0x2b674c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2B674Cu;
    {
        const bool branch_taken_0x2b674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B674Cu;
        // 0x2b6750: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b674c) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6754u;
label_2b6754:
    // 0x2b6754: 0xc0adad8  jal         func_2B6B60
    ctx->pc = 0x2B6754u;
    SET_GPR_U32(ctx, 31, 0x2B675Cu);
    ctx->pc = 0x2B6758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6754u;
    // 0x2b6758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6B60u, 0x2B6754u, 0x2B675Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B675Cu;
label_2b675c:
    // 0x2b675c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2B675Cu;
    {
        const bool branch_taken_0x2b675c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B675Cu;
        // 0x2b6760: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b675c) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6764u;
label_2b6764:
    // 0x2b6764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6768: 0xc0adb0a  jal         func_2B6C28
    ctx->pc = 0x2B6768u;
    SET_GPR_U32(ctx, 31, 0x2B6770u);
    ctx->pc = 0x2B676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6768u;
    // 0x2b676c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6C28u, 0x2B6768u, 0x2B6770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6770u;
label_2b6770:
    // 0x2b6770: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2B6770u;
    {
        const bool branch_taken_0x2b6770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6770u;
        // 0x2b6774: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6770) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6778u;
label_2b6778:
    // 0x2b6778: 0xc0adab2  jal         func_2B6AC8
    ctx->pc = 0x2B6778u;
    SET_GPR_U32(ctx, 31, 0x2B6780u);
    ctx->pc = 0x2B677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6778u;
    // 0x2b677c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6AC8u, 0x2B6778u, 0x2B6780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6780u;
label_2b6780:
    // 0x2b6780: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2B6780u;
    {
        const bool branch_taken_0x2b6780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6780u;
        // 0x2b6784: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6780) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6788u;
label_2b6788:
    // 0x2b6788: 0xc0ada68  jal         func_2B69A0
    ctx->pc = 0x2B6788u;
    SET_GPR_U32(ctx, 31, 0x2B6790u);
    ctx->pc = 0x2B678Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6788u;
    // 0x2b678c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B69A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B69A0u, 0x2B6788u, 0x2B6790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6790u;
label_2b6790:
    // 0x2b6790: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2B6790u;
    {
        const bool branch_taken_0x2b6790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6790u;
        // 0x2b6794: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6790) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6798u;
label_2b6798:
    // 0x2b6798: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b6798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b679c: 0x9043a931  lbu         $v1, -0x56CF($v0)
    ctx->pc = 0x2b679cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FA931u));
    // 0x2b67a0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B67A0u;
    {
        const bool branch_taken_0x2b67a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67A0u;
        // 0x2b67a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67a0) {
            ctx->pc = 0x2B67ECu;
            goto label_2b67ec;
        }
    }
    ctx->pc = 0x2B67A8u;
    // 0x2b67a8: 0xc0ad65a  jal         func_2B5968
    ctx->pc = 0x2B67A8u;
    SET_GPR_U32(ctx, 31, 0x2B67B0u);
    ctx->pc = 0x2B67ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B67A8u;
    // 0x2b67ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5968u, 0x2B67A8u, 0x2B67B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67B0u;
label_2b67b0:
    // 0x2b67b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b67b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b67b8: 0x56220032  bnel        $s1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2B67B8u;
    {
        const bool branch_taken_0x2b67b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b67b8) {
            ctx->pc = 0x2B67BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B67B8u;
            // 0x2b67bc: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B67C0u;
    // 0x2b67c0: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B67C0u;
    SET_GPR_U32(ctx, 31, 0x2B67C8u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B67C0u, 0x2B67C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67C8u;
label_2b67c8:
    // 0x2b67c8: 0xc0a7142  jal         func_29C508
    ctx->pc = 0x2B67C8u;
    SET_GPR_U32(ctx, 31, 0x2B67D0u);
    ctx->pc = 0x2B67CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B67C8u;
    // 0x2b67cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C508u, 0x2B67C8u, 0x2B67D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B67D0u;
label_2b67d0:
    // 0x2b67d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b67d4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b67d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b67d8: 0xae1158fc  sw          $s1, 0x58FC($s0)
    ctx->pc = 0x2b67d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22780), GPR_U32(ctx, 17));
    // 0x2b67dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b67dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b67e0: 0xae025914  sw          $v0, 0x5914($s0)
    ctx->pc = 0x2b67e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22804), GPR_U32(ctx, 2));
    // 0x2b67e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B67E4u;
    {
        const bool branch_taken_0x2b67e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B67E4u;
        // 0x2b67e8: 0xa060a930  sb          $zero, -0x56D0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294945072), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b67e4) {
            ctx->pc = 0x2B6804u;
            goto label_2b6804;
        }
    }
    ctx->pc = 0x2B67ECu;
label_2b67ec:
    // 0x2b67ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b67f0: 0xae0358fc  sw          $v1, 0x58FC($s0)
    ctx->pc = 0x2b67f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22780), GPR_U32(ctx, 3));
    // 0x2b67f4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2b67f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2b67f8: 0xae025914  sw          $v0, 0x5914($s0)
    ctx->pc = 0x2b67f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22804), GPR_U32(ctx, 2));
    // 0x2b67fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b67fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6800: 0xa0a0a930  sb          $zero, -0x56D0($a1)
    ctx->pc = 0x2b6800u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA930u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA930u, _value); } while (0);
label_2b6804:
    // 0x2b6804: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B6804u;
    SET_GPR_U32(ctx, 31, 0x2B680Cu);
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B6804u, 0x2B680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B680Cu;
label_2b680c:
    // 0x2b680c: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x2b680cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b6810: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2b6810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b6814: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2B6814u;
    {
        const bool branch_taken_0x2b6814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6814u;
        // 0x2b6818: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6814) {
            ctx->pc = 0x2B6880u;
            goto label_2b6880;
        }
    }
    ctx->pc = 0x2B681Cu;
label_2b681c:
    // 0x2b681c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b681cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6820: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b6820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6824: 0xae0358fc  sw          $v1, 0x58FC($s0)
    ctx->pc = 0x2b6824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22780), GPR_U32(ctx, 3));
    // 0x2b6828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b682c: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B682Cu;
    SET_GPR_U32(ctx, 31, 0x2B6834u);
    ctx->pc = 0x2B6830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B682Cu;
    // 0x2b6830: 0xae025914  sw          $v0, 0x5914($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22804), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B682Cu, 0x2B6834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6834u;
label_2b6834:
    // 0x2b6834: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2b6834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2b6838: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2b6838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2b683c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B683Cu;
    {
        const bool branch_taken_0x2b683c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B683Cu;
        // 0x2b6840: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b683c) {
            ctx->pc = 0x2B6880u;
            goto label_2b6880;
        }
    }
    ctx->pc = 0x2B6844u;
label_2b6844:
    // 0x2b6844: 0xc0ada26  jal         func_2B6898
    ctx->pc = 0x2B6844u;
    SET_GPR_U32(ctx, 31, 0x2B684Cu);
    ctx->pc = 0x2B6848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6844u;
    // 0x2b6848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6898u, 0x2B6844u, 0x2B684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B684Cu;
label_2b684c:
    // 0x2b684c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B684Cu;
    {
        const bool branch_taken_0x2b684c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B684Cu;
        // 0x2b6850: 0xdfb00100  ld          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b684c) {
            ctx->pc = 0x2B6884u;
            goto label_2b6884;
        }
    }
    ctx->pc = 0x2B6854u;
label_2b6854:
    // 0x2b6854: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2b6854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2b6858: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b6858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b685c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x2B685Cu;
    SET_GPR_U32(ctx, 31, 0x2B6864u);
    ctx->pc = 0x2B6860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B685Cu;
    // 0x2b6860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x2B685Cu, 0x2B6864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6864u;
label_2b6864:
    // 0x2b6864: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2b6864u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2b6868: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b6868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b686c: 0x24c6fb98  addiu       $a2, $a2, -0x468
    ctx->pc = 0x2b686cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966168));
    // 0x2b6870: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b6870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6874: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x2B6874u;
    SET_GPR_U32(ctx, 31, 0x2B687Cu);
    ctx->pc = 0x2B6878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6874u;
    // 0x2b6878: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x2B6874u, 0x2B687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B687Cu;
label_2b687c:
    // 0x2b687c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6880:
    // 0x2b6880: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2b6880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2b6884:
    // 0x2b6884: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2b6884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2b6888: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x2b6888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2b688c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B688Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B688Cu;
        // 0x2b6890: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B688Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6894u;
    // 0x2b6894: 0x0  nop
    ctx->pc = 0x2b6894u;
    // NOP
    ctx->pc = 0x2b6898u;
}
