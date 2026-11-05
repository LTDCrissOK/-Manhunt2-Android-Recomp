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

// Function: sub_001353C8
// Address: 0x1353c8 - 0x135470
void sub_001353C8_0x1353c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001353C8_0x1353c8");
#endif

    switch (ctx->pc) {
        case 0x1353fcu: goto label_1353fc;
        case 0x135410u: goto label_135410;
        case 0x135424u: goto label_135424;
        case 0x135438u: goto label_135438;
        case 0x13544cu: goto label_13544c;
        default: break;
    }

    ctx->pc = 0x1353c8u;

    // 0x1353c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1353c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1353cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1353ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1353d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1353d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1353d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1353d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1353d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1353dc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1353dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1353e0: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1353E0u;
    {
        const bool branch_taken_0x1353e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1353E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1353E0u;
        // 0x1353e4: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1353e0) {
            ctx->pc = 0x135458u;
            goto label_135458;
        }
    }
    ctx->pc = 0x1353E8u;
    // 0x1353e8: 0x24a502bc  addiu       $a1, $a1, 0x2BC
    ctx->pc = 0x1353e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 700));
    // 0x1353ec: 0x26100480  addiu       $s0, $s0, 0x480
    ctx->pc = 0x1353ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x1353f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1353f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1353f4: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1353F4u;
    SET_GPR_U32(ctx, 31, 0x1353FCu);
    ctx->pc = 0x1353F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1353F4u;
    // 0x1353f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1353F4u, 0x1353FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1353FCu;
label_1353fc:
    // 0x1353fc: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1353fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x135400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x135404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135408: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x135408u;
    SET_GPR_U32(ctx, 31, 0x135410u);
    ctx->pc = 0x13540Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135408u;
    // 0x13540c: 0x24a502c0  addiu       $a1, $a1, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x135408u, 0x135410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135410u;
label_135410:
    // 0x135410: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x135410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x135414: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135418: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x135418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13541c: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x13541Cu;
    SET_GPR_U32(ctx, 31, 0x135424u);
    ctx->pc = 0x135420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13541Cu;
    // 0x135420: 0x24a502c4  addiu       $a1, $a1, 0x2C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 708));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x13541Cu, 0x135424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135424u;
label_135424:
    // 0x135424: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x135424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x135428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13542c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13542cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135430: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x135430u;
    SET_GPR_U32(ctx, 31, 0x135438u);
    ctx->pc = 0x135434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135430u;
    // 0x135434: 0x24a502c8  addiu       $a1, $a1, 0x2C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x135430u, 0x135438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135438u;
label_135438:
    // 0x135438: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x135438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x13543c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13543cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135440: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x135440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135444: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x135444u;
    SET_GPR_U32(ctx, 31, 0x13544Cu);
    ctx->pc = 0x135448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135444u;
    // 0x135448: 0x24a502dc  addiu       $a1, $a1, 0x2DC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 732));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x135444u, 0x13544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13544Cu;
label_13544c:
    // 0x13544c: 0x96230010  lhu         $v1, 0x10($s1)
    ctx->pc = 0x13544cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x135450: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x135450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x135454: 0xa44302b8  sh          $v1, 0x2B8($v0)
    ctx->pc = 0x135454u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 696), (uint16_t)GPR_U32(ctx, 3));
label_135458:
    // 0x135458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13545c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13545cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x135460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135464: 0x3e00008  jr          $ra
    ctx->pc = 0x135464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135464u;
        // 0x135468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13546Cu;
    // 0x13546c: 0x0  nop
    ctx->pc = 0x13546cu;
    // NOP
    ctx->pc = 0x135470u;
}
