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

// Function: sub_0024C580
// Address: 0x24c580 - 0x24c730
void sub_0024C580_0x24c580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C580_0x24c580");
#endif

    switch (ctx->pc) {
        case 0x24c5b8u: goto label_24c5b8;
        case 0x24c5e0u: goto label_24c5e0;
        case 0x24c608u: goto label_24c608;
        case 0x24c628u: goto label_24c628;
        case 0x24c630u: goto label_24c630;
        case 0x24c668u: goto label_24c668;
        case 0x24c688u: goto label_24c688;
        case 0x24c690u: goto label_24c690;
        case 0x24c6a4u: goto label_24c6a4;
        case 0x24c6b8u: goto label_24c6b8;
        case 0x24c6ccu: goto label_24c6cc;
        case 0x24c6e8u: goto label_24c6e8;
        case 0x24c710u: goto label_24c710;
        default: break;
    }

    ctx->pc = 0x24c580u;

    // 0x24c580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24c580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24c584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c588: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x24c58c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24c58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c590: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c594: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24c594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c598: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24c598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x24c59c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x24c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x24c5a0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x24c5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24c5a4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C5A4u;
    {
        const bool branch_taken_0x24c5a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5A4u;
        // 0x24c5a8: 0x32530001  andi        $s3, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5a4) {
            ctx->pc = 0x24C5BCu;
            goto label_24c5bc;
        }
    }
    ctx->pc = 0x24C5ACu;
    // 0x24c5ac: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x24c5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x24c5b0: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x24C5B0u;
    SET_GPR_U32(ctx, 31, 0x24C5B8u);
    ctx->pc = 0x24C5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C5B0u;
    // 0x24c5b4: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x24C5B0u, 0x24C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C5B8u;
label_24c5b8:
    // 0x24c5b8: 0x32530001  andi        $s3, $s2, 0x1
    ctx->pc = 0x24c5b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_24c5bc:
    // 0x24c5bc: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x24c5bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x24c5c0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x24c5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x24c5c4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x24C5C4u;
    {
        const bool branch_taken_0x24c5c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5C4u;
        // 0x24c5c8: 0x261201d0  addiu       $s2, $s0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5c4) {
            ctx->pc = 0x24C630u;
            goto label_24c630;
        }
    }
    ctx->pc = 0x24C5CCu;
    // 0x24c5cc: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x24c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x24c5d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C5D0u;
    {
        const bool branch_taken_0x24c5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c5d0) {
            ctx->pc = 0x24C5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C5D0u;
            // 0x24c5d4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C5E4u;
            goto label_24c5e4;
        }
    }
    ctx->pc = 0x24C5D8u;
    // 0x24c5d8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x24C5D8u;
    SET_GPR_U32(ctx, 31, 0x24C5E0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x24C5D8u, 0x24C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C5E0u;
label_24c5e0:
    // 0x24c5e0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x24c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24c5e4:
    // 0x24c5e4: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24C5E4u;
    {
        const bool branch_taken_0x24c5e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5E4u;
        // 0x24c5e8: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5e4) {
            ctx->pc = 0x24C628u;
            goto label_24c628;
        }
    }
    ctx->pc = 0x24C5ECu;
    // 0x24c5ec: 0x8c83fff0  lw          $v1, -0x10($a0)
    ctx->pc = 0x24c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x24c5f0: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x24c5f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x24c5f4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x24c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x24c5f8: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C5F8u;
    {
        const bool branch_taken_0x24c5f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5F8u;
        // 0x24c5fc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c5f8) {
            ctx->pc = 0x24C620u;
            goto label_24c620;
        }
    }
    ctx->pc = 0x24C600u;
    // 0x24c600: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x24c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x24c604: 0x0  nop
    ctx->pc = 0x24c604u;
    // NOP
label_24c608:
    // 0x24c608: 0x0  nop
    ctx->pc = 0x24c608u;
    // NOP
    // 0x24c60c: 0x0  nop
    ctx->pc = 0x24c60cu;
    // NOP
    // 0x24c610: 0x0  nop
    ctx->pc = 0x24c610u;
    // NOP
    // 0x24c614: 0x0  nop
    ctx->pc = 0x24c614u;
    // NOP
    // 0x24c618: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24C618u;
    {
        const bool branch_taken_0x24c618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C618u;
        // 0x24c61c: 0x2442ffb0  addiu       $v0, $v0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c618) {
            ctx->pc = 0x24C608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c608;
        }
    }
    ctx->pc = 0x24C620u;
label_24c620:
    // 0x24c620: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x24C620u;
    SET_GPR_U32(ctx, 31, 0x24C628u);
    ctx->pc = 0x24C624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C620u;
    // 0x24c624: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x24C620u, 0x24C628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C628u;
label_24c628:
    // 0x24c628: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x24C628u;
    SET_GPR_U32(ctx, 31, 0x24C630u);
    ctx->pc = 0x24C62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C628u;
    // 0x24c62c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x24C628u, 0x24C630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C630u;
label_24c630:
    // 0x24c630: 0x8e110014  lw          $s1, 0x14($s0)
    ctx->pc = 0x24c630u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x24c634: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x24C634u;
    {
        const bool branch_taken_0x24c634 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C634u;
        // 0x24c638: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c634) {
            ctx->pc = 0x24C690u;
            goto label_24c690;
        }
    }
    ctx->pc = 0x24C63Cu;
    // 0x24c63c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x24c63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24c640: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x24C640u;
    {
        const bool branch_taken_0x24c640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C640u;
        // 0x24c644: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c640) {
            ctx->pc = 0x24C688u;
            goto label_24c688;
        }
    }
    ctx->pc = 0x24C648u;
    // 0x24c648: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x24c648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x24c64c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x24c64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c650: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x24c650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x24c654: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x24c654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x24c658: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C658u;
    {
        const bool branch_taken_0x24c658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C658u;
        // 0x24c65c: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c658) {
            ctx->pc = 0x24C680u;
            goto label_24c680;
        }
    }
    ctx->pc = 0x24C660u;
    // 0x24c660: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x24c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
    // 0x24c664: 0x0  nop
    ctx->pc = 0x24c664u;
    // NOP
label_24c668:
    // 0x24c668: 0x0  nop
    ctx->pc = 0x24c668u;
    // NOP
    // 0x24c66c: 0x0  nop
    ctx->pc = 0x24c66cu;
    // NOP
    // 0x24c670: 0x0  nop
    ctx->pc = 0x24c670u;
    // NOP
    // 0x24c674: 0x0  nop
    ctx->pc = 0x24c674u;
    // NOP
    // 0x24c678: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24C678u;
    {
        const bool branch_taken_0x24c678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C678u;
        // 0x24c67c: 0x2442ffa0  addiu       $v0, $v0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c678) {
            ctx->pc = 0x24C668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c668;
        }
    }
    ctx->pc = 0x24C680u;
label_24c680:
    // 0x24c680: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x24C680u;
    SET_GPR_U32(ctx, 31, 0x24C688u);
    ctx->pc = 0x24C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C680u;
    // 0x24c684: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x24C680u, 0x24C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C688u;
label_24c688:
    // 0x24c688: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x24C688u;
    SET_GPR_U32(ctx, 31, 0x24C690u);
    ctx->pc = 0x24C68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C688u;
    // 0x24c68c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x24C688u, 0x24C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C690u;
label_24c690:
    // 0x24c690: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x24c690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x24c694: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C694u;
    {
        const bool branch_taken_0x24c694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C694u;
        // 0x24c698: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c694) {
            ctx->pc = 0x24C6A4u;
            goto label_24c6a4;
        }
    }
    ctx->pc = 0x24C69Cu;
    // 0x24c69c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x24C69Cu;
    SET_GPR_U32(ctx, 31, 0x24C6A4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x24C69Cu, 0x24C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C6A4u;
label_24c6a4:
    // 0x24c6a4: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x24c6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x24c6a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C6A8u;
    {
        const bool branch_taken_0x24c6a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6A8u;
        // 0x24c6ac: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6a8) {
            ctx->pc = 0x24C6B8u;
            goto label_24c6b8;
        }
    }
    ctx->pc = 0x24C6B0u;
    // 0x24c6b0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x24C6B0u;
    SET_GPR_U32(ctx, 31, 0x24C6B8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x24C6B0u, 0x24C6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C6B8u;
label_24c6b8:
    // 0x24c6b8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x24c6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x24c6bc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C6BCu;
    {
        const bool branch_taken_0x24c6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6BCu;
        // 0x24c6c0: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6bc) {
            ctx->pc = 0x24C6CCu;
            goto label_24c6cc;
        }
    }
    ctx->pc = 0x24C6C4u;
    // 0x24c6c4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x24C6C4u;
    SET_GPR_U32(ctx, 31, 0x24C6CCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x24C6C4u, 0x24C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C6CCu;
label_24c6cc:
    // 0x24c6cc: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x24C6CCu;
    {
        const bool branch_taken_0x24c6cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6CCu;
        // 0x24c6d0: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6cc) {
            ctx->pc = 0x24C700u;
            goto label_24c700;
        }
    }
    ctx->pc = 0x24C6D4u;
    // 0x24c6d4: 0x26020810  addiu       $v0, $s0, 0x810
    ctx->pc = 0x24c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2064));
    // 0x24c6d8: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C6D8u;
    {
        const bool branch_taken_0x24c6d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x24c6d8) {
            ctx->pc = 0x24C700u;
            goto label_24c700;
        }
    }
    ctx->pc = 0x24C6E0u;
    // 0x24c6e0: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x24c6e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c6e4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x24c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_24c6e8:
    // 0x24c6e8: 0x0  nop
    ctx->pc = 0x24c6e8u;
    // NOP
    // 0x24c6ec: 0x0  nop
    ctx->pc = 0x24c6ecu;
    // NOP
    // 0x24c6f0: 0x0  nop
    ctx->pc = 0x24c6f0u;
    // NOP
    // 0x24c6f4: 0x0  nop
    ctx->pc = 0x24c6f4u;
    // NOP
    // 0x24c6f8: 0x5462fffb  bnel        $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24C6F8u;
    {
        const bool branch_taken_0x24c6f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24c6f8) {
            ctx->pc = 0x24C6FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C6F8u;
            // 0x24c6fc: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c6e8;
        }
    }
    ctx->pc = 0x24C700u;
label_24c700:
    // 0x24c700: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C700u;
    {
        const bool branch_taken_0x24c700 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c700) {
            ctx->pc = 0x24C704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C700u;
            // 0x24c704: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C714u;
            goto label_24c714;
        }
    }
    ctx->pc = 0x24C708u;
    // 0x24c708: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x24C708u;
    SET_GPR_U32(ctx, 31, 0x24C710u);
    ctx->pc = 0x24C70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C708u;
    // 0x24c70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x24C708u, 0x24C710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C710u;
label_24c710:
    // 0x24c710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c714:
    // 0x24c714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c718: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x24c718u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c71c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24c71cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24c720: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x24c720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c724: 0x3e00008  jr          $ra
    ctx->pc = 0x24C724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C724u;
        // 0x24c728: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C72Cu;
    // 0x24c72c: 0x0  nop
    ctx->pc = 0x24c72cu;
    // NOP
    ctx->pc = 0x24c730u;
}
