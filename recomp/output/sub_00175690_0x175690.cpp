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

// Function: sub_00175690
// Address: 0x175690 - 0x1756e8
void sub_00175690_0x175690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175690_0x175690");
#endif

    switch (ctx->pc) {
        case 0x1756b8u: goto label_1756b8;
        case 0x1756d0u: goto label_1756d0;
        default: break;
    }

    ctx->pc = 0x175690u;

    // 0x175690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x175694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x175698: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x175698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17569c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17569cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1756a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1756a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1756a4: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1756a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1756a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1756A8u;
    {
        const bool branch_taken_0x1756a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1756ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756A8u;
        // 0x1756ac: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1756a8) {
            ctx->pc = 0x1756D0u;
            goto label_1756d0;
        }
    }
    ctx->pc = 0x1756B0u;
    // 0x1756b0: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x1756B0u;
    SET_GPR_U32(ctx, 31, 0x1756B8u);
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x1756B0u, 0x1756B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756B8u;
label_1756b8:
    // 0x1756b8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1756b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1756bc: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1756BCu;
    {
        const bool branch_taken_0x1756bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1756bc) {
            ctx->pc = 0x1756C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1756BCu;
            // 0x1756c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1756D4u;
            goto label_1756d4;
        }
    }
    ctx->pc = 0x1756C4u;
    // 0x1756c4: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1756c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1756c8: 0xc058206  jal         func_160818
    ctx->pc = 0x1756C8u;
    SET_GPR_U32(ctx, 31, 0x1756D0u);
    ctx->pc = 0x1756CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1756C8u;
    // 0x1756cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160818u, 0x1756C8u, 0x1756D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756D0u;
label_1756d0:
    // 0x1756d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1756d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1756d4:
    // 0x1756d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1756d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1756d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1756d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1756dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1756DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1756E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1756DCu;
        // 0x1756e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1756DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1756E4u;
    // 0x1756e4: 0x0  nop
    ctx->pc = 0x1756e4u;
    // NOP
    ctx->pc = 0x1756e8u;
}
