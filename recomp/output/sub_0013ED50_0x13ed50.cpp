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

// Function: sub_0013ED50
// Address: 0x13ed50 - 0x13ede8
void sub_0013ED50_0x13ed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013ED50_0x13ed50");
#endif

    switch (ctx->pc) {
        case 0x13ed6cu: goto label_13ed6c;
        case 0x13ed80u: goto label_13ed80;
        case 0x13ed8cu: goto label_13ed8c;
        case 0x13ed98u: goto label_13ed98;
        case 0x13eda8u: goto label_13eda8;
        case 0x13edc8u: goto label_13edc8;
        default: break;
    }

    ctx->pc = 0x13ed50u;

    // 0x13ed50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ed50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ed54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13ed58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ed58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13ed5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13ed5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13ed60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13ed60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13ed64: 0xc04f91e  jal         func_13E478
    ctx->pc = 0x13ED64u;
    SET_GPR_U32(ctx, 31, 0x13ED6Cu);
    ctx->pc = 0x13ED68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED64u;
    // 0x13ed68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E478u, 0x13ED64u, 0x13ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED6Cu;
label_13ed6c:
    // 0x13ed6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13ed6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed70: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13ed70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ed74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed78: 0xc045612  jal         func_115848
    ctx->pc = 0x13ED78u;
    SET_GPR_U32(ctx, 31, 0x13ED80u);
    ctx->pc = 0x13ED7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED78u;
    // 0x13ed7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x13ED78u, 0x13ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED80u;
label_13ed80:
    // 0x13ed80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed84: 0xc045668  jal         func_1159A0
    ctx->pc = 0x13ED84u;
    SET_GPR_U32(ctx, 31, 0x13ED8Cu);
    ctx->pc = 0x13ED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED84u;
    // 0x13ed88: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x13ED84u, 0x13ED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED8Cu;
label_13ed8c:
    // 0x13ed8c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13ed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13ed90: 0xc04b2a2  jal         func_12CA88
    ctx->pc = 0x13ED90u;
    SET_GPR_U32(ctx, 31, 0x13ED98u);
    ctx->pc = 0x13ED94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ED90u;
    // 0x13ed94: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA88u, 0x13ED90u, 0x13ED98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ED98u;
label_13ed98:
    // 0x13ed98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13ed98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ed9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ed9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eda0: 0xc0456a0  jal         func_115A80
    ctx->pc = 0x13EDA0u;
    SET_GPR_U32(ctx, 31, 0x13EDA8u);
    ctx->pc = 0x13EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EDA0u;
    // 0x13eda4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A80u, 0x13EDA0u, 0x13EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDA8u;
label_13eda8:
    // 0x13eda8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13edac: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x13edacu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13edb0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13edb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13edb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13edb8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13edbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13edbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13edc0: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x13EDC0u;
    SET_GPR_U32(ctx, 31, 0x13EDC8u);
    ctx->pc = 0x13EDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EDC0u;
    // 0x13edc4: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x13EDC0u, 0x13EDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EDC8u;
label_13edc8:
    // 0x13edc8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x13edc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13edcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13edccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13edd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13edd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13edd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13edd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13edd8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13edd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13eddc: 0x3e00008  jr          $ra
    ctx->pc = 0x13EDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EDDCu;
        // 0x13ede0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EDE4u;
    // 0x13ede4: 0x0  nop
    ctx->pc = 0x13ede4u;
    // NOP
    ctx->pc = 0x13ede8u;
}
