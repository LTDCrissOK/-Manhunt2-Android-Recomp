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

// Function: sub_001E7718
// Address: 0x1e7718 - 0x1e7798
void sub_001E7718_0x1e7718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7718_0x1e7718");
#endif

    switch (ctx->pc) {
        case 0x1e7740u: goto label_1e7740;
        case 0x1e775cu: goto label_1e775c;
        case 0x1e777cu: goto label_1e777c;
        default: break;
    }

    ctx->pc = 0x1e7718u;

    // 0x1e7718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e771c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1e771cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1e7720: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e7720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e7724: 0x8c6291ec  lw          $v0, -0x6E14($v1)
    ctx->pc = 0x1e7724u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91ECu));
    // 0x1e7728: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1e7728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e772c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e772cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e7730: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E7730u;
    {
        const bool branch_taken_0x1e7730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7730u;
        // 0x1e7734: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7730) {
            ctx->pc = 0x1E7780u;
            goto label_1e7780;
        }
    }
    ctx->pc = 0x1E7738u;
    // 0x1e7738: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e7738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e773c: 0x8e2391ec  lw          $v1, -0x6E14($s1)
    ctx->pc = 0x1e773cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939116)));
label_1e7740:
    // 0x1e7740: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1e7740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1e7744: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e7744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e7748: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e7748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e774c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E774Cu;
    {
        const bool branch_taken_0x1e774c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E774Cu;
        // 0x1e7750: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e774c) {
            ctx->pc = 0x1E775Cu;
            goto label_1e775c;
        }
    }
    ctx->pc = 0x1E7754u;
    // 0x1e7754: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1E7754u;
    SET_GPR_U32(ctx, 31, 0x1E775Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1E7754u, 0x1E775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E775Cu;
label_1e775c:
    // 0x1e775c: 0x2e020050  sltiu       $v0, $s0, 0x50
    ctx->pc = 0x1e775cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x1e7760: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1E7760u;
    {
        const bool branch_taken_0x1e7760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7760u;
        // 0x1e7764: 0x8e2391ec  lw          $v1, -0x6E14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7760) {
            ctx->pc = 0x1E7740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7740;
        }
    }
    ctx->pc = 0x1E7768u;
    // 0x1e7768: 0x8e2491ec  lw          $a0, -0x6E14($s1)
    ctx->pc = 0x1e7768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939116)));
    // 0x1e776c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E776Cu;
    {
        const bool branch_taken_0x1e776c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e776c) {
            ctx->pc = 0x1E7770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E776Cu;
            // 0x1e7770: 0xae2091ec  sw          $zero, -0x6E14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294939116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7780u;
            goto label_1e7780;
        }
    }
    ctx->pc = 0x1E7774u;
    // 0x1e7774: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1E7774u;
    SET_GPR_U32(ctx, 31, 0x1E777Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1E7774u, 0x1E777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E777Cu;
label_1e777c:
    // 0x1e777c: 0xae2091ec  sw          $zero, -0x6E14($s1)
    ctx->pc = 0x1e777cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939116), GPR_U32(ctx, 0));
label_1e7780:
    // 0x1e7780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7784: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e778c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E778Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E778Cu;
        // 0x1e7790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E778Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7794u;
    // 0x1e7794: 0x0  nop
    ctx->pc = 0x1e7794u;
    // NOP
    ctx->pc = 0x1e7798u;
}
