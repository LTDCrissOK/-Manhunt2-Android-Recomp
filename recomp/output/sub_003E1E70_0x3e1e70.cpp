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

// Function: sub_003E1E70
// Address: 0x3e1e70 - 0x3e1ee0
void sub_003E1E70_0x3e1e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1E70_0x3e1e70");
#endif

    switch (ctx->pc) {
        case 0x3e1ea0u: goto label_3e1ea0;
        case 0x3e1eacu: goto label_3e1eac;
        case 0x3e1eb8u: goto label_3e1eb8;
        case 0x3e1eccu: goto label_3e1ecc;
        default: break;
    }

    ctx->pc = 0x3e1e70u;

    // 0x3e1e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e1e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e1e74: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e1e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e1e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e1e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e1e7c: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e1e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e1e80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e1e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e1e84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e1e84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1e88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e1e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e1e8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e1e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1e90: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e1e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e1e94: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e1e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e1e98: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1E98u;
    SET_GPR_U32(ctx, 31, 0x3E1EA0u);
    ctx->pc = 0x3E1E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1E98u;
    // 0x3e1e9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1E98u, 0x3E1EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1EA0u;
label_3e1ea0:
    // 0x3e1ea0: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e1ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e1ea4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1EA4u;
    SET_GPR_U32(ctx, 31, 0x3E1EACu);
    ctx->pc = 0x3E1EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1EA4u;
    // 0x3e1ea8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1EA4u, 0x3E1EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1EACu;
label_3e1eac:
    // 0x3e1eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e1eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1eb0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1EB0u;
    SET_GPR_U32(ctx, 31, 0x3E1EB8u);
    ctx->pc = 0x3E1EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1EB0u;
    // 0x3e1eb4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1EB0u, 0x3E1EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1EB8u;
label_3e1eb8:
    // 0x3e1eb8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e1eb8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e1ebc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1EBCu;
    {
        const bool branch_taken_0x3e1ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1EBCu;
        // 0x3e1ec0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1ebc) {
            ctx->pc = 0x3E1ED0u;
            goto label_3e1ed0;
        }
    }
    ctx->pc = 0x3E1EC4u;
    // 0x3e1ec4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E1EC4u;
    SET_GPR_U32(ctx, 31, 0x3E1ECCu);
    ctx->pc = 0x3E1EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1EC4u;
    // 0x3e1ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E1EC4u, 0x3E1ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1ECCu;
label_3e1ecc:
    // 0x3e1ecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e1eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1ed0:
    // 0x3e1ed0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e1ed0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e1ed4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e1ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1ED8u;
        // 0x3e1edc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1EE0u;
}
