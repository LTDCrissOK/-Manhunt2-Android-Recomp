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

// Function: sub_003A38B0
// Address: 0x3a38b0 - 0x3a3930
void sub_003A38B0_0x3a38b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A38B0_0x3a38b0");
#endif

    switch (ctx->pc) {
        case 0x3a38d0u: goto label_3a38d0;
        case 0x3a3904u: goto label_3a3904;
        default: break;
    }

    ctx->pc = 0x3a38b0u;

    // 0x3a38b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a38b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a38b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a38b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a38b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a38b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a38bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a38bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a38c0: 0x18c0000a  blez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3A38C0u;
    {
        const bool branch_taken_0x3a38c0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x3A38C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A38C0u;
        // 0x3a38c4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a38c0) {
            ctx->pc = 0x3A38ECu;
            goto label_3a38ec;
        }
    }
    ctx->pc = 0x3A38C8u;
    // 0x3a38c8: 0x2407ffaa  addiu       $a3, $zero, -0x56
    ctx->pc = 0x3a38c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x3a38cc: 0x0  nop
    ctx->pc = 0x3a38ccu;
    // NOP
label_3a38d0:
    // 0x3a38d0: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x3a38d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3a38d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a38d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a38d8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x3a38d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3a38dc: 0x0  nop
    ctx->pc = 0x3a38dcu;
    // NOP
    // 0x3a38e0: 0x0  nop
    ctx->pc = 0x3a38e0u;
    // NOP
    // 0x3a38e4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A38E4u;
    {
        const bool branch_taken_0x3a38e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A38E4u;
        // 0x3a38e8: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a38e4) {
            ctx->pc = 0x3A38D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a38d0;
        }
    }
    ctx->pc = 0x3A38ECu;
label_3a38ec:
    // 0x3a38ec: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x3a38ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x3a38f0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a38f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a38f4: 0x26101e74  addiu       $s0, $s0, 0x1E74
    ctx->pc = 0x3a38f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7796));
    // 0x3a38f8: 0x24a5d630  addiu       $a1, $a1, -0x29D0
    ctx->pc = 0x3a38f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956592));
    // 0x3a38fc: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x3A38FCu;
    SET_GPR_U32(ctx, 31, 0x3A3904u);
    ctx->pc = 0x3A3900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A38FCu;
    // 0x3a3900: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x3A38FCu, 0x3A3904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3904u;
label_3a3904:
    // 0x3a3904: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3a3904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a3908: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a3908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a390c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a390cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a3910: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3a3910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3a3914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a3914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3918: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3918u;
        // 0x3a391c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3920u;
    // 0x3a3920: 0x0  nop
    ctx->pc = 0x3a3920u;
    // NOP
    // 0x3a3924: 0x0  nop
    ctx->pc = 0x3a3924u;
    // NOP
    // 0x3a3928: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x3a3928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x3a392c: 0x0  nop
    ctx->pc = 0x3a392cu;
    // NOP
    ctx->pc = 0x3a3930u;
}
