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

// Function: sub_00133150
// Address: 0x133150 - 0x1331b0
void sub_00133150_0x133150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133150_0x133150");
#endif

    switch (ctx->pc) {
        case 0x133178u: goto label_133178;
        case 0x133188u: goto label_133188;
        default: break;
    }

    ctx->pc = 0x133150u;

    // 0x133150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133158: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x133158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13315c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13315cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133160: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133164: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x133164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x133168: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x133168u;
    {
        const bool branch_taken_0x133168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133168u;
        // 0x13316c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133168) {
            ctx->pc = 0x133194u;
            goto label_133194;
        }
    }
    ctx->pc = 0x133170u;
    // 0x133170: 0xc04561a  jal         func_115868
    ctx->pc = 0x133170u;
    SET_GPR_U32(ctx, 31, 0x133178u);
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x133170u, 0x133178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133178u;
label_133178:
    // 0x133178: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x133178u;
    {
        const bool branch_taken_0x133178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x13317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133178u;
        // 0x13317c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133178) {
            ctx->pc = 0x133198u;
            goto label_133198;
        }
    }
    ctx->pc = 0x133180u;
    // 0x133180: 0xc04cccc  jal         func_133330
    ctx->pc = 0x133180u;
    SET_GPR_U32(ctx, 31, 0x133188u);
    ctx->pc = 0x133184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133180u;
    // 0x133184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x133180u, 0x133188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133188u;
label_133188:
    // 0x133188: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x133188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x13318c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13318Cu;
    {
        const bool branch_taken_0x13318c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13318Cu;
        // 0x133190: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13318c) {
            ctx->pc = 0x133198u;
            goto label_133198;
        }
    }
    ctx->pc = 0x133194u;
label_133194:
    // 0x133194: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x133194u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133198:
    // 0x133198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13319c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13319cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1331a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1331a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1331a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1331A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1331A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1331A4u;
        // 0x1331a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1331A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1331ACu;
    // 0x1331ac: 0x0  nop
    ctx->pc = 0x1331acu;
    // NOP
    ctx->pc = 0x1331b0u;
}
