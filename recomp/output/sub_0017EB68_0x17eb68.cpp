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

// Function: sub_0017EB68
// Address: 0x17eb68 - 0x17ebf8
void sub_0017EB68_0x17eb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EB68_0x17eb68");
#endif

    switch (ctx->pc) {
        case 0x17eba0u: goto label_17eba0;
        default: break;
    }

    ctx->pc = 0x17eb68u;

    // 0x17eb68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17eb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17eb6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17eb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17eb70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17eb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17eb74: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x17eb74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x17eb78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17eb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17eb7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17eb7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb80: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17eb84: 0x26109a08  addiu       $s0, $s0, -0x65F8
    ctx->pc = 0x17eb84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941192));
    // 0x17eb88: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x17eb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x17eb8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17eb90: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17eb94: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x17eb94u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x17eb98: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x17EB98u;
    SET_GPR_U32(ctx, 31, 0x17EBA0u);
    ctx->pc = 0x17EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EB98u;
    // 0x17eb9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x17EB98u, 0x17EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EBA0u;
label_17eba0:
    // 0x17eba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17eba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eba4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x17eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17eba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ebac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17ebacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x17ebb0: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x17ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x17ebb4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EBB4u;
    {
        const bool branch_taken_0x17ebb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ebb4) {
            ctx->pc = 0x17EBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EBB4u;
            // 0x17ebb8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EBC4u;
            goto label_17ebc4;
        }
    }
    ctx->pc = 0x17EBBCu;
    // 0x17ebbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17EBBCu;
    {
        const bool branch_taken_0x17ebbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBBCu;
        // 0x17ebc0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebbc) {
            ctx->pc = 0x17EBCCu;
            goto label_17ebcc;
        }
    }
    ctx->pc = 0x17EBC4u;
label_17ebc4:
    // 0x17ebc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ebc8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x17ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17ebcc:
    // 0x17ebcc: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x17ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x17ebd0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x17ebd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ebd4: 0xfa410020  sqc2        $vf1, 0x20($s2)
    ctx->pc = 0x17ebd4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17ebd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ebd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ebdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ebdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ebe0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ebe0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ebe4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17ebe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ebe8: 0x3e00008  jr          $ra
    ctx->pc = 0x17EBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EBE8u;
        // 0x17ebec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EBF0u;
    // 0x17ebf0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x17ebf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ebf4: 0x0  nop
    ctx->pc = 0x17ebf4u;
    // NOP
    ctx->pc = 0x17ebf8u;
}
