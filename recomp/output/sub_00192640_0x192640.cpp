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

// Function: sub_00192640
// Address: 0x192640 - 0x192738
void sub_00192640_0x192640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192640_0x192640");
#endif

    switch (ctx->pc) {
        case 0x19265cu: goto label_19265c;
        case 0x192688u: goto label_192688;
        case 0x1926a4u: goto label_1926a4;
        case 0x1926ccu: goto label_1926cc;
        case 0x1926e8u: goto label_1926e8;
        default: break;
    }

    ctx->pc = 0x192640u;

    // 0x192640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x192644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x192644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192648: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x192648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19264c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19264cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192650: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x192654: 0xc061a12  jal         func_186848
    ctx->pc = 0x192654u;
    SET_GPR_U32(ctx, 31, 0x19265Cu);
    ctx->pc = 0x192658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192654u;
    // 0x192658: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x192654u, 0x19265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19265Cu;
label_19265c:
    // 0x19265c: 0x8c43035c  lw          $v1, 0x35C($v0)
    ctx->pc = 0x19265cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 860)));
    // 0x192660: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x192660u;
    {
        const bool branch_taken_0x192660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x192664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192660u;
        // 0x192664: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192660) {
            ctx->pc = 0x1926ACu;
            goto label_1926ac;
        }
    }
    ctx->pc = 0x192668u;
    // 0x192668: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x192668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19266c: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x19266cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x192670: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x192670u;
    {
        const bool branch_taken_0x192670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x192674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192670u;
        // 0x192674: 0x2c820002  sltiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x192670) {
            ctx->pc = 0x192690u;
            goto label_192690;
        }
    }
    ctx->pc = 0x192678u;
    // 0x192678: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x192678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x19267c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19267cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192680: 0xc094e44  jal         func_253910
    ctx->pc = 0x192680u;
    SET_GPR_U32(ctx, 31, 0x192688u);
    ctx->pc = 0x192684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192680u;
    // 0x192684: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253910u, 0x192680u, 0x192688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192688u;
label_192688:
    // 0x192688: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x192688u;
    {
        const bool branch_taken_0x192688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192688u;
        // 0x19268c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192688) {
            ctx->pc = 0x1926ECu;
            goto label_1926ec;
        }
    }
    ctx->pc = 0x192690u;
label_192690:
    // 0x192690: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x192690u;
    {
        const bool branch_taken_0x192690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x192694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192690u;
        // 0x192694: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192690) {
            ctx->pc = 0x1926ECu;
            goto label_1926ec;
        }
    }
    ctx->pc = 0x192698u;
    // 0x192698: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x192698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x19269c: 0xc094f06  jal         func_253C18
    ctx->pc = 0x19269Cu;
    SET_GPR_U32(ctx, 31, 0x1926A4u);
    ctx->pc = 0x1926A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19269Cu;
    // 0x1926a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C18u, 0x19269Cu, 0x1926A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1926A4u;
label_1926a4:
    // 0x1926a4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1926A4u;
    {
        const bool branch_taken_0x1926a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1926A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926A4u;
        // 0x1926a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926a4) {
            ctx->pc = 0x1926ECu;
            goto label_1926ec;
        }
    }
    ctx->pc = 0x1926ACu;
label_1926ac:
    // 0x1926ac: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x1926acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1926b0: 0x38820002  xori        $v0, $a0, 0x2
    ctx->pc = 0x1926b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x1926b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1926B4u;
    {
        const bool branch_taken_0x1926b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1926B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926B4u;
        // 0x1926b8: 0x2c820002  sltiu       $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926b4) {
            ctx->pc = 0x1926D4u;
            goto label_1926d4;
        }
    }
    ctx->pc = 0x1926BCu;
    // 0x1926bc: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x1926bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1926c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1926c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1926c4: 0xc094e8a  jal         func_253A28
    ctx->pc = 0x1926C4u;
    SET_GPR_U32(ctx, 31, 0x1926CCu);
    ctx->pc = 0x1926C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1926C4u;
    // 0x1926c8: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253A28u, 0x1926C4u, 0x1926CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1926CCu;
label_1926cc:
    // 0x1926cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1926CCu;
    {
        const bool branch_taken_0x1926cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1926D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926CCu;
        // 0x1926d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926cc) {
            ctx->pc = 0x1926ECu;
            goto label_1926ec;
        }
    }
    ctx->pc = 0x1926D4u;
label_1926d4:
    // 0x1926d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1926D4u;
    {
        const bool branch_taken_0x1926d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1926D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926D4u;
        // 0x1926d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1926d4) {
            ctx->pc = 0x1926ECu;
            goto label_1926ec;
        }
    }
    ctx->pc = 0x1926DCu;
    // 0x1926dc: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x1926dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1926e0: 0xc094f06  jal         func_253C18
    ctx->pc = 0x1926E0u;
    SET_GPR_U32(ctx, 31, 0x1926E8u);
    ctx->pc = 0x1926E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1926E0u;
    // 0x1926e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253C18u, 0x1926E0u, 0x1926E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1926E8u;
label_1926e8:
    // 0x1926e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1926e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1926ec:
    // 0x1926ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1926ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1926f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1926f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1926f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1926F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1926F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1926F4u;
        // 0x1926f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1926F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1926FCu;
    // 0x1926fc: 0x0  nop
    ctx->pc = 0x1926fcu;
    // NOP
    // 0x192700: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x192700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x192704: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x192704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x192708: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x192708u;
    {
        const bool branch_taken_0x192708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192708u;
        // 0x19270c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192708) {
            ctx->pc = 0x19272Cu;
            goto label_19272c;
        }
    }
    ctx->pc = 0x192710u;
    // 0x192710: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x192710u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x192714: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x192714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x192718: 0x8cc51004  lw          $a1, 0x1004($a2)
    ctx->pc = 0x192718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
    // 0x19271c: 0x8c831004  lw          $v1, 0x1004($a0)
    ctx->pc = 0x19271cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x192720: 0x10a30002  beq         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x192720u;
    {
        const bool branch_taken_0x192720 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x192724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192720u;
        // 0x192724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192720) {
            ctx->pc = 0x19272Cu;
            goto label_19272c;
        }
    }
    ctx->pc = 0x192728u;
    // 0x192728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19272c:
    // 0x19272c: 0x3e00008  jr          $ra
    ctx->pc = 0x19272Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19272Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192734u;
    // 0x192734: 0x0  nop
    ctx->pc = 0x192734u;
    // NOP
    ctx->pc = 0x192738u;
}
