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

// Function: sub_001CE5E8
// Address: 0x1ce5e8 - 0x1ce6d8
void sub_001CE5E8_0x1ce5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE5E8_0x1ce5e8");
#endif

    switch (ctx->pc) {
        case 0x1ce654u: goto label_1ce654;
        case 0x1ce664u: goto label_1ce664;
        case 0x1ce6b8u: goto label_1ce6b8;
        default: break;
    }

    ctx->pc = 0x1ce5e8u;

    // 0x1ce5e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ce5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ce5ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce5f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ce5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ce5f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce5f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ce5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ce5fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ce5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ce600: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ce600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ce604: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1ce604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce608: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1ce608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ce60c: 0x8ca40ff8  lw          $a0, 0xFF8($a1)
    ctx->pc = 0x1ce60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4088)));
    // 0x1ce610: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ce610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce614: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1ce614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1ce618: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE618u;
    {
        const bool branch_taken_0x1ce618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE618u;
        // 0x1ce61c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce618) {
            ctx->pc = 0x1CE62Cu;
            goto label_1ce62c;
        }
    }
    ctx->pc = 0x1CE620u;
    // 0x1ce620: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1ce620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1ce624: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE624u;
    {
        const bool branch_taken_0x1ce624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce624) {
            ctx->pc = 0x1CE628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE624u;
            // 0x1ce628: 0x90820001  lbu         $v0, 0x1($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE634u;
            goto label_1ce634;
        }
    }
    ctx->pc = 0x1CE62Cu;
label_1ce62c:
    // 0x1ce62c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ce62cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce630: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1ce630u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1ce634:
    // 0x1ce634: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ce634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce638: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE638u;
    {
        const bool branch_taken_0x1ce638 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE638u;
        // 0x1ce63c: 0x30510001  andi        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce638) {
            ctx->pc = 0x1CE644u;
            goto label_1ce644;
        }
    }
    ctx->pc = 0x1CE640u;
    // 0x1ce640: 0x3a320001  xori        $s2, $s1, 0x1
    ctx->pc = 0x1ce640u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
label_1ce644:
    // 0x1ce644: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1ce644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1ce648: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1ce648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1ce64c: 0xc04785a  jal         func_11E168
    ctx->pc = 0x1CE64Cu;
    SET_GPR_U32(ctx, 31, 0x1CE654u);
    ctx->pc = 0x1CE650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE64Cu;
    // 0x1ce650: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x1CE64Cu, 0x1CE654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE654u;
label_1ce654:
    // 0x1ce654: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE654u;
    {
        const bool branch_taken_0x1ce654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce654) {
            ctx->pc = 0x1CE668u;
            goto label_1ce668;
        }
    }
    ctx->pc = 0x1CE65Cu;
    // 0x1ce65c: 0xc043ec4  jal         func_10FB10
    ctx->pc = 0x1CE65Cu;
    SET_GPR_U32(ctx, 31, 0x1CE664u);
    ctx->pc = 0x1CE660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE65Cu;
    // 0x1ce660: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB10u, 0x1CE65Cu, 0x1CE664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE664u;
label_1ce664:
    // 0x1ce664: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1ce664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_1ce668:
    // 0x1ce668: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE668u;
    {
        const bool branch_taken_0x1ce668 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce668) {
            ctx->pc = 0x1CE67Cu;
            goto label_1ce67c;
        }
    }
    ctx->pc = 0x1CE670u;
    // 0x1ce670: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1ce670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1ce674: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CE674u;
    {
        const bool branch_taken_0x1ce674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce674) {
            ctx->pc = 0x1CE678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE674u;
            // 0x1ce678: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE6BCu;
            goto label_1ce6bc;
        }
    }
    ctx->pc = 0x1CE67Cu;
label_1ce67c:
    // 0x1ce67c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE67Cu;
    {
        const bool branch_taken_0x1ce67c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce67c) {
            ctx->pc = 0x1CE690u;
            goto label_1ce690;
        }
    }
    ctx->pc = 0x1CE684u;
    // 0x1ce684: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1ce684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1ce688: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1CE688u;
    {
        const bool branch_taken_0x1ce688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce688) {
            ctx->pc = 0x1CE68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE688u;
            // 0x1ce68c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE6BCu;
            goto label_1ce6bc;
        }
    }
    ctx->pc = 0x1CE690u;
label_1ce690:
    // 0x1ce690: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE690u;
    {
        const bool branch_taken_0x1ce690 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce690) {
            ctx->pc = 0x1CE694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE690u;
            // 0x1ce694: 0xae130030  sw          $s3, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE6A8u;
            goto label_1ce6a8;
        }
    }
    ctx->pc = 0x1CE698u;
    // 0x1ce698: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1ce698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1ce69c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE69Cu;
    {
        const bool branch_taken_0x1ce69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce69c) {
            ctx->pc = 0x1CE6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE69Cu;
            // 0x1ce6a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE6BCu;
            goto label_1ce6bc;
        }
    }
    ctx->pc = 0x1CE6A4u;
    // 0x1ce6a4: 0xae130030  sw          $s3, 0x30($s0)
    ctx->pc = 0x1ce6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 19));
label_1ce6a8:
    // 0x1ce6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6ac: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x1ce6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
    // 0x1ce6b0: 0xc0739b6  jal         func_1CE6D8
    ctx->pc = 0x1CE6B0u;
    SET_GPR_U32(ctx, 31, 0x1CE6B8u);
    ctx->pc = 0x1CE6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6B0u;
    // 0x1ce6b4: 0xae120028  sw          $s2, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6D8u, 0x1CE6B0u, 0x1CE6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6B8u;
label_1ce6b8:
    // 0x1ce6b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce6b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce6bc:
    // 0x1ce6bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce6bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce6c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ce6c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce6c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ce6c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ce6c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ce6c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce6cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE6CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE6CCu;
        // 0x1ce6d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE6CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE6D4u;
    // 0x1ce6d4: 0x0  nop
    ctx->pc = 0x1ce6d4u;
    // NOP
    ctx->pc = 0x1ce6d8u;
}
