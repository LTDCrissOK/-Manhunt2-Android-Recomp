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

// Function: sub_001340B8
// Address: 0x1340b8 - 0x134108
void sub_001340B8_0x1340b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001340B8_0x1340b8");
#endif

    switch (ctx->pc) {
        case 0x1340b8u: goto label_1340b8;
        case 0x1340bcu: goto label_1340bc;
        case 0x1340c0u: goto label_1340c0;
        case 0x1340c4u: goto label_1340c4;
        case 0x1340c8u: goto label_1340c8;
        case 0x1340ccu: goto label_1340cc;
        case 0x1340d0u: goto label_1340d0;
        case 0x1340d4u: goto label_1340d4;
        case 0x1340d8u: goto label_1340d8;
        case 0x1340dcu: goto label_1340dc;
        case 0x1340e0u: goto label_1340e0;
        case 0x1340e4u: goto label_1340e4;
        case 0x1340e8u: goto label_1340e8;
        case 0x1340ecu: goto label_1340ec;
        case 0x1340f0u: goto label_1340f0;
        case 0x1340f4u: goto label_1340f4;
        case 0x1340f8u: goto label_1340f8;
        case 0x1340fcu: goto label_1340fc;
        case 0x134100u: goto label_134100;
        case 0x134104u: goto label_134104;
        default: break;
    }

    ctx->pc = 0x1340b8u;

label_1340b8:
    // 0x1340b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1340b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1340bc:
    // 0x1340bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1340bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1340c0:
    // 0x1340c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1340c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1340c4:
    // 0x1340c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1340c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1340c8:
    // 0x1340c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1340c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1340cc:
    // 0x1340cc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1340ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1340d0:
    // 0x1340d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1340d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1340d4:
    // 0x1340d4: 0x40f809  jalr        $v0
label_1340d8:
    if (ctx->pc == 0x1340D8u) {
        ctx->pc = 0x1340D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340D4u;
        // 0x1340d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1340DCu;
        goto label_1340dc;
    }
    ctx->pc = 0x1340D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1340DCu);
        ctx->pc = 0x1340D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340D4u;
        // 0x1340d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1340D4u, 0x1340DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1340DCu;
label_1340dc:
    // 0x1340dc: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1340dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_1340e0:
    // 0x1340e0: 0xc04d092  jal         func_134248
label_1340e4:
    if (ctx->pc == 0x1340E4u) {
        ctx->pc = 0x1340E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340E0u;
        // 0x1340e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1340E8u;
        goto label_1340e8;
    }
    ctx->pc = 0x1340E0u;
    SET_GPR_U32(ctx, 31, 0x1340E8u);
    ctx->pc = 0x1340E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1340E0u;
    // 0x1340e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134248u, 0x1340E0u, 0x1340E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1340E8u;
label_1340e8:
    // 0x1340e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1340e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1340ec:
    // 0x1340ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1340ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1340f0:
    // 0x1340f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1340f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1340f4:
    // 0x1340f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1340f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1340f8:
    // 0x1340f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1340f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1340fc:
    // 0x1340fc: 0x3e00008  jr          $ra
label_134100:
    if (ctx->pc == 0x134100u) {
        ctx->pc = 0x134100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340FCu;
        // 0x134100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134104u;
        goto label_134104;
    }
    ctx->pc = 0x1340FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340FCu;
        // 0x134100: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1340FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134104u;
label_134104:
    // 0x134104: 0x0  nop
    ctx->pc = 0x134104u;
    // NOP
    ctx->pc = 0x134108u;
}
