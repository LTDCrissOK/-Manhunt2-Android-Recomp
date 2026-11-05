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

// Function: sub_001330F0
// Address: 0x1330f0 - 0x133150
void sub_001330F0_0x1330f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001330F0_0x1330f0");
#endif

    switch (ctx->pc) {
        case 0x133118u: goto label_133118;
        case 0x13312cu: goto label_13312c;
        default: break;
    }

    ctx->pc = 0x1330f0u;

    // 0x1330f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1330f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1330f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1330f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1330f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1330f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1330fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1330fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133100: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133104: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x133104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x133108: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x133108u;
    {
        const bool branch_taken_0x133108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133108u;
        // 0x13310c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133108) {
            ctx->pc = 0x133138u;
            goto label_133138;
        }
    }
    ctx->pc = 0x133110u;
    // 0x133110: 0xc04561a  jal         func_115868
    ctx->pc = 0x133110u;
    SET_GPR_U32(ctx, 31, 0x133118u);
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x133110u, 0x133118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133118u;
label_133118:
    // 0x133118: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x133118u;
    {
        const bool branch_taken_0x133118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x13311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133118u;
        // 0x13311c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133118) {
            ctx->pc = 0x13313Cu;
            goto label_13313c;
        }
    }
    ctx->pc = 0x133120u;
    // 0x133120: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x133120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x133124: 0xc043be8  jal         func_10EFA0
    ctx->pc = 0x133124u;
    SET_GPR_U32(ctx, 31, 0x13312Cu);
    ctx->pc = 0x133128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133124u;
    // 0x133128: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFA0u, 0x133124u, 0x13312Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13312Cu;
label_13312c:
    // 0x13312c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x13312cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x133130: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x133130u;
    {
        const bool branch_taken_0x133130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133130u;
        // 0x133134: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133130) {
            ctx->pc = 0x13313Cu;
            goto label_13313c;
        }
    }
    ctx->pc = 0x133138u;
label_133138:
    // 0x133138: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x133138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13313c:
    // 0x13313c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13313cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133140: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133148: 0x3e00008  jr          $ra
    ctx->pc = 0x133148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133148u;
        // 0x13314c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133150u;
}
