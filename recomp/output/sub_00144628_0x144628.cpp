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

// Function: sub_00144628
// Address: 0x144628 - 0x1446c0
void sub_00144628_0x144628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144628_0x144628");
#endif

    switch (ctx->pc) {
        case 0x144644u: goto label_144644;
        case 0x144670u: goto label_144670;
        case 0x144680u: goto label_144680;
        case 0x1446a8u: goto label_1446a8;
        default: break;
    }

    ctx->pc = 0x144628u;

    // 0x144628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x144628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14462c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14462cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x144630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x144630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144634: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144638: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x144638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14463c: 0xc04e880  jal         func_13A200
    ctx->pc = 0x14463Cu;
    SET_GPR_U32(ctx, 31, 0x144644u);
    ctx->pc = 0x144640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14463Cu;
    // 0x144640: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A200u, 0x14463Cu, 0x144644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144644u;
label_144644:
    // 0x144644: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x144644u;
    {
        const bool branch_taken_0x144644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144644u;
        // 0x144648: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144644) {
            ctx->pc = 0x1446A8u;
            goto label_1446a8;
        }
    }
    ctx->pc = 0x14464Cu;
    // 0x14464c: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x14464cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x144650: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x144650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x144654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x144654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144658: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x144658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14465c: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x14465cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x144660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x144660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x144664: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x144664u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144668: 0xc04dc4c  jal         func_137130
    ctx->pc = 0x144668u;
    SET_GPR_U32(ctx, 31, 0x144670u);
    ctx->pc = 0x14466Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144668u;
    // 0x14466c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137130u, 0x144668u, 0x144670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144670u;
label_144670:
    // 0x144670: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x144670u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x144674: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x144674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144678: 0xc04e88a  jal         func_13A228
    ctx->pc = 0x144678u;
    SET_GPR_U32(ctx, 31, 0x144680u);
    ctx->pc = 0x14467Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144678u;
    // 0x14467c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A228u, 0x144678u, 0x144680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144680u;
label_144680:
    // 0x144680: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x144680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x144684: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x144684u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x144688: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x144688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x14468c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14468cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x144690: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x144690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x144694: 0x8e270ab0  lw          $a3, 0xAB0($s1)
    ctx->pc = 0x144694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2736)));
    // 0x144698: 0x8c460108  lw          $a2, 0x108($v0)
    ctx->pc = 0x144698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x14469c: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x14469cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x1446a0: 0xc04668a  jal         func_119A28
    ctx->pc = 0x1446A0u;
    SET_GPR_U32(ctx, 31, 0x1446A8u);
    ctx->pc = 0x1446A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446A0u;
    // 0x1446a4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119A28u, 0x1446A0u, 0x1446A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1446A8u;
label_1446a8:
    // 0x1446a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1446a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1446ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1446acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1446b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1446b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1446b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1446B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1446B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446B4u;
        // 0x1446b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1446B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1446BCu;
    // 0x1446bc: 0x0  nop
    ctx->pc = 0x1446bcu;
    // NOP
    ctx->pc = 0x1446c0u;
}
