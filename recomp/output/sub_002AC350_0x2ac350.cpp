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

// Function: sub_002AC350
// Address: 0x2ac350 - 0x2ac3c0
void sub_002AC350_0x2ac350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC350_0x2ac350");
#endif

    switch (ctx->pc) {
        case 0x2ac374u: goto label_2ac374;
        case 0x2ac38cu: goto label_2ac38c;
        case 0x2ac3a4u: goto label_2ac3a4;
        default: break;
    }

    ctx->pc = 0x2ac350u;

    // 0x2ac350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ac350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ac354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ac354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ac358: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ac358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ac35c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ac35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac360: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2ac360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ac364: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2AC364u;
    {
        const bool branch_taken_0x2ac364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac364) {
            ctx->pc = 0x2AC368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC364u;
            // 0x2ac368: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC3B0u;
            goto label_2ac3b0;
        }
    }
    ctx->pc = 0x2AC36Cu;
    // 0x2ac36c: 0xc0ab42c  jal         func_2AD0B0
    ctx->pc = 0x2AC36Cu;
    SET_GPR_U32(ctx, 31, 0x2AC374u);
    ctx->pc = 0x2AD0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD0B0u, 0x2AC36Cu, 0x2AC374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC374u;
label_2ac374:
    // 0x2ac374: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ac374u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ac378: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2ac378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ac37c: 0x24e7a9d8  addiu       $a3, $a3, -0x5628
    ctx->pc = 0x2ac37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945240));
    // 0x2ac380: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2ac380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ac384: 0xc0f8dda  jal         func_3E3768
    ctx->pc = 0x2AC384u;
    SET_GPR_U32(ctx, 31, 0x2AC38Cu);
    ctx->pc = 0x2AC388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC384u;
    // 0x2ac388: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3768u, 0x2AC384u, 0x2AC38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC38Cu;
label_2ac38c:
    // 0x2ac38c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ac38cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ac390: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2ac390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2ac394: 0x24e7a9e8  addiu       $a3, $a3, -0x5618
    ctx->pc = 0x2ac394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294945256));
    // 0x2ac398: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ac398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ac39c: 0xc0f8e64  jal         func_3E3990
    ctx->pc = 0x2AC39Cu;
    SET_GPR_U32(ctx, 31, 0x2AC3A4u);
    ctx->pc = 0x2AC3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC39Cu;
    // 0x2ac3a0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3990u, 0x2AC39Cu, 0x2AC3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC3A4u;
label_2ac3a4:
    // 0x2ac3a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ac3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ac3a8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x2ac3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x2ac3ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ac3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ac3b0:
    // 0x2ac3b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ac3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ac3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3B4u;
        // 0x2ac3b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC3BCu;
    // 0x2ac3bc: 0x0  nop
    ctx->pc = 0x2ac3bcu;
    // NOP
    ctx->pc = 0x2ac3c0u;
}
