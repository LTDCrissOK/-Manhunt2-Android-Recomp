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

// Function: sub_003CE100
// Address: 0x3ce100 - 0x3ce190
void sub_003CE100_0x3ce100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CE100_0x3ce100");
#endif

    switch (ctx->pc) {
        case 0x3ce13cu: goto label_3ce13c;
        case 0x3ce154u: goto label_3ce154;
        case 0x3ce168u: goto label_3ce168;
        default: break;
    }

    ctx->pc = 0x3ce100u;

    // 0x3ce100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ce100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3ce104: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3ce104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3ce108: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3ce108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3ce10c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3ce10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3ce110: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3ce110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3ce114: 0x2453d5ec  addiu       $s3, $v0, -0x2A14
    ctx->pc = 0x3ce114u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956524));
    // 0x3ce118: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3ce118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3ce11c: 0x24715068  addiu       $s1, $v1, 0x5068
    ctx->pc = 0x3ce11cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 20584));
    // 0x3ce120: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ce120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3ce124: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ce124u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ce128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ce12c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ce12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce130: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ce130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce134: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3CE134u;
    SET_GPR_U32(ctx, 31, 0x3CE13Cu);
    ctx->pc = 0x3CE138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE134u;
    // 0x3ce138: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3CE134u, 0x3CE13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE13Cu;
label_3ce13c:
    // 0x3ce13c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3CE13Cu;
    {
        const bool branch_taken_0x3ce13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE13Cu;
        // 0x3ce140: 0x3c100043  lui         $s0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce13c) {
            ctx->pc = 0x3CE16Cu;
            goto label_3ce16c;
        }
    }
    ctx->pc = 0x3CE144u;
    // 0x3ce144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ce144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce148: 0x8e05d6a0  lw          $a1, -0x2960($s0)
    ctx->pc = 0x3ce148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956704)));
    // 0x3ce14c: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3CE14Cu;
    SET_GPR_U32(ctx, 31, 0x3CE154u);
    ctx->pc = 0x3CE150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE14Cu;
    // 0x3ce150: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3CE14Cu, 0x3CE154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE154u;
label_3ce154:
    // 0x3ce154: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CE154u;
    {
        const bool branch_taken_0x3ce154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE154u;
        // 0x3ce158: 0x8e05d6a0  lw          $a1, -0x2960($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce154) {
            ctx->pc = 0x3CE16Cu;
            goto label_3ce16c;
        }
    }
    ctx->pc = 0x3CE15Cu;
    // 0x3ce15c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ce15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce160: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3CE160u;
    SET_GPR_U32(ctx, 31, 0x3CE168u);
    ctx->pc = 0x3CE164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE160u;
    // 0x3ce164: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3CE160u, 0x3CE168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE168u;
label_3ce168:
    // 0x3ce168: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x3ce168u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ce16c:
    // 0x3ce16c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3ce16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce170: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ce170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ce174: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3ce174u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ce178: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ce178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ce17c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3ce17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ce180: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ce180u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ce184: 0x3e00008  jr          $ra
    ctx->pc = 0x3CE184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CE188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE184u;
        // 0x3ce188: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CE184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CE18Cu;
    // 0x3ce18c: 0x0  nop
    ctx->pc = 0x3ce18cu;
    // NOP
    ctx->pc = 0x3ce190u;
}
