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

// Function: sub_003A5420
// Address: 0x3a5420 - 0x3a5500
void sub_003A5420_0x3a5420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5420_0x3a5420");
#endif

    switch (ctx->pc) {
        case 0x3a5448u: goto label_3a5448;
        case 0x3a546cu: goto label_3a546c;
        case 0x3a5480u: goto label_3a5480;
        case 0x3a54a4u: goto label_3a54a4;
        case 0x3a54e4u: goto label_3a54e4;
        default: break;
    }

    ctx->pc = 0x3a5420u;

    // 0x3a5420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a5420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a5424: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a5424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3a5428: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a5428u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a542c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a542cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a5430: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a5430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a5434: 0x2484da20  addiu       $a0, $a0, -0x25E0
    ctx->pc = 0x3a5434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957600));
    // 0x3a5438: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3a5438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a543c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a543cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a5440: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3A5440u;
    SET_GPR_U32(ctx, 31, 0x3A5448u);
    ctx->pc = 0x3A5444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5440u;
    // 0x3a5444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3A5440u, 0x3A5448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5448u;
label_3a5448:
    // 0x3a5448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a5448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a544c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A544Cu;
    {
        const bool branch_taken_0x3a544c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A5450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A544Cu;
        // 0x3a5450: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a544c) {
            ctx->pc = 0x3A5478u;
            goto label_3a5478;
        }
    }
    ctx->pc = 0x3A5454u;
    // 0x3a5454: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a5454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a5458: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a5458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a545c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3a545cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3a5460: 0x2484da28  addiu       $a0, $a0, -0x25D8
    ctx->pc = 0x3a5460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957608));
    // 0x3a5464: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A5464u;
    SET_GPR_U32(ctx, 31, 0x3A546Cu);
    ctx->pc = 0x3A5468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5464u;
    // 0x3a5468: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A5464u, 0x3A546Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A546Cu;
label_3a546c:
    // 0x3a546c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3A546Cu;
    {
        const bool branch_taken_0x3a546c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A546Cu;
        // 0x3a5470: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a546c) {
            ctx->pc = 0x3A54E8u;
            goto label_3a54e8;
        }
    }
    ctx->pc = 0x3A5474u;
    // 0x3a5474: 0x0  nop
    ctx->pc = 0x3a5474u;
    // NOP
label_3a5478:
    // 0x3a5478: 0xc0e94c8  jal         func_3A5320
    ctx->pc = 0x3A5478u;
    SET_GPR_U32(ctx, 31, 0x3A5480u);
    ctx->pc = 0x3A5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5320u, 0x3A5478u, 0x3A5480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5480u;
label_3a5480:
    // 0x3a5480: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a5480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a5484: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a5484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a5488: 0x24633780  addiu       $v1, $v1, 0x3780
    ctx->pc = 0x3a5488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14208));
    // 0x3a548c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a548cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5490: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a5490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5494: 0x1447000a  bne         $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3A5494u;
    {
        const bool branch_taken_0x3a5494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x3A5498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5494u;
        // 0x3a5498: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5494) {
            ctx->pc = 0x3A54C0u;
            goto label_3a54c0;
        }
    }
    ctx->pc = 0x3A549Cu;
    // 0x3a549c: 0xc0e94d8  jal         func_3A5360
    ctx->pc = 0x3A549Cu;
    SET_GPR_U32(ctx, 31, 0x3A54A4u);
    ctx->pc = 0x3A5360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5360u, 0x3A549Cu, 0x3A54A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A54A4u;
label_3a54a4:
    // 0x3a54a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a54a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a54a8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3a54a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3a54ac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3a54acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a54b0: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x3a54b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x3a54b4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3a54b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x3a54b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A54B8u;
    {
        const bool branch_taken_0x3a54b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A54BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A54B8u;
        // 0x3a54bc: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a54b8) {
            ctx->pc = 0x3A54E8u;
            goto label_3a54e8;
        }
    }
    ctx->pc = 0x3A54C0u;
label_3a54c0:
    // 0x3a54c0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3a54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3a54c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3a54c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x3a54c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a54cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A54CCu;
    {
        const bool branch_taken_0x3a54cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A54CCu;
        // 0x3a54d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a54cc) {
            ctx->pc = 0x3A54E4u;
            goto label_3a54e4;
        }
    }
    ctx->pc = 0x3A54D4u;
    // 0x3a54d4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x3a54d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3a54d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a54d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a54dc: 0xc0e948c  jal         func_3A5230
    ctx->pc = 0x3A54DCu;
    SET_GPR_U32(ctx, 31, 0x3A54E4u);
    ctx->pc = 0x3A54E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A54DCu;
    // 0x3a54e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5230u, 0x3A54DCu, 0x3A54E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A54E4u;
label_3a54e4:
    // 0x3a54e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a54e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a54e8:
    // 0x3a54e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a54e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a54ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a54ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a54f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a54f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a54f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A54F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A54F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A54F4u;
        // 0x3a54f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A54F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A54FCu;
    // 0x3a54fc: 0x0  nop
    ctx->pc = 0x3a54fcu;
    // NOP
    ctx->pc = 0x3a5500u;
}
