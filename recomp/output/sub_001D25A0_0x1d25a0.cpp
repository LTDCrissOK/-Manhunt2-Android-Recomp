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

// Function: sub_001D25A0
// Address: 0x1d25a0 - 0x1d2610
void sub_001D25A0_0x1d25a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D25A0_0x1d25a0");
#endif

    switch (ctx->pc) {
        case 0x1d25bcu: goto label_1d25bc;
        case 0x1d25d0u: goto label_1d25d0;
        default: break;
    }

    ctx->pc = 0x1d25a0u;

    // 0x1d25a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d25a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d25a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d25a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d25a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d25a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d25ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d25acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d25b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d25b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d25b4: 0xc0749fc  jal         func_1D27F0
    ctx->pc = 0x1D25B4u;
    SET_GPR_U32(ctx, 31, 0x1D25BCu);
    ctx->pc = 0x1D25B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D25B4u;
    // 0x1d25b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27F0u, 0x1D25B4u, 0x1D25BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D25BCu;
label_1d25bc:
    // 0x1d25bc: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x1d25bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1d25c0: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D25C0u;
    {
        const bool branch_taken_0x1d25c0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25C0u;
        // 0x1d25c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25c0) {
            ctx->pc = 0x1D25F4u;
            goto label_1d25f4;
        }
    }
    ctx->pc = 0x1D25C8u;
    // 0x1d25c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d25c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d25cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d25ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d25d0:
    // 0x1d25d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d25d4: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1d25d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1d25d8: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D25D8u;
    {
        const bool branch_taken_0x1d25d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1d25d8) {
            ctx->pc = 0x1D25DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D25D8u;
            // 0x1d25dc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D25E8u;
            goto label_1d25e8;
        }
    }
    ctx->pc = 0x1D25E0u;
    // 0x1d25e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D25E0u;
    {
        const bool branch_taken_0x1d25e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25E0u;
        // 0x1d25e4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25e0) {
            ctx->pc = 0x1D25F8u;
            goto label_1d25f8;
        }
    }
    ctx->pc = 0x1D25E8u;
label_1d25e8:
    // 0x1d25e8: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x1d25e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d25ec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D25ECu;
    {
        const bool branch_taken_0x1d25ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D25F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25ECu;
        // 0x1d25f0: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25ec) {
            ctx->pc = 0x1D25D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d25d0;
        }
    }
    ctx->pc = 0x1D25F4u;
label_1d25f4:
    // 0x1d25f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d25f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d25f8:
    // 0x1d25f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d25f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d25fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d25fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d2600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d2600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d2604: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2604u;
        // 0x1d2608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D260Cu;
    // 0x1d260c: 0x0  nop
    ctx->pc = 0x1d260cu;
    // NOP
    ctx->pc = 0x1d2610u;
}
