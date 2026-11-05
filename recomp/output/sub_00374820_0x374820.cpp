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

// Function: sub_00374820
// Address: 0x374820 - 0x3748c0
void sub_00374820_0x374820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374820_0x374820");
#endif

    switch (ctx->pc) {
        case 0x374868u: goto label_374868;
        case 0x3748b0u: goto label_3748b0;
        default: break;
    }

    ctx->pc = 0x374820u;

    // 0x374820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374824: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x374824u;
    {
        const bool branch_taken_0x374824 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x374828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374824u;
        // 0x374828: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374824) {
            ctx->pc = 0x374870u;
            goto label_374870;
        }
    }
    ctx->pc = 0x37482Cu;
    // 0x37482c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37482cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x374830: 0x24456050  addiu       $a1, $v0, 0x6050
    ctx->pc = 0x374830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24656));
    // 0x374834: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x374834u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6C6084u));
    // 0x374838: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x374838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x37483c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x37483Cu;
    {
        const bool branch_taken_0x37483c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x374840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37483Cu;
        // 0x374840: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37483c) {
            ctx->pc = 0x3748B4u;
            goto label_3748b4;
        }
    }
    ctx->pc = 0x374844u;
    // 0x374844: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x374844u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x374848: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x374848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x37484c: 0x8ce2cd00  lw          $v0, -0x3300($a3)
    ctx->pc = 0x37484cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x374850: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x374850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374854: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x374854u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x374858: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x374858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x37485c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x37485cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x374860: 0xc0dd2ca  jal         func_374B28
    ctx->pc = 0x374860u;
    SET_GPR_U32(ctx, 31, 0x374868u);
    ctx->pc = 0x374864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374860u;
    // 0x374864: 0xace2cd00  sw          $v0, -0x3300($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374B28u, 0x374860u, 0x374868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374868u;
label_374868:
    // 0x374868: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x374868u;
    {
        const bool branch_taken_0x374868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374868u;
        // 0x37486c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374868) {
            ctx->pc = 0x3748B4u;
            goto label_3748b4;
        }
    }
    ctx->pc = 0x374870u;
label_374870:
    // 0x374870: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x374870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x374874: 0x24476050  addiu       $a3, $v0, 0x6050
    ctx->pc = 0x374874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24656));
    // 0x374878: 0x8ce60034  lw          $a2, 0x34($a3)
    ctx->pc = 0x374878u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6C6084u));
    // 0x37487c: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x37487cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x374880: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x374880u;
    {
        const bool branch_taken_0x374880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374880u;
        // 0x374884: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374880) {
            ctx->pc = 0x3748B0u;
            goto label_3748b0;
        }
    }
    ctx->pc = 0x374888u;
    // 0x374888: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x374888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x37488c: 0x8c45cd00  lw          $a1, -0x3300($v0)
    ctx->pc = 0x37488cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954240)));
    // 0x374890: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x374890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x374894: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x374894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x374898: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x374898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x37489c: 0xace30034  sw          $v1, 0x34($a3)
    ctx->pc = 0x37489cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
    // 0x3748a0: 0xac45cd00  sw          $a1, -0x3300($v0)
    ctx->pc = 0x3748a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954240), GPR_U32(ctx, 5));
    // 0x3748a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3748a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3748a8: 0xc0dd2ca  jal         func_374B28
    ctx->pc = 0x3748A8u;
    SET_GPR_U32(ctx, 31, 0x3748B0u);
    ctx->pc = 0x3748ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3748A8u;
    // 0x3748ac: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374B28u, 0x3748A8u, 0x3748B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3748B0u;
label_3748b0:
    // 0x3748b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3748b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3748b4:
    // 0x3748b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3748B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3748B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3748B4u;
        // 0x3748b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3748B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3748BCu;
    // 0x3748bc: 0x0  nop
    ctx->pc = 0x3748bcu;
    // NOP
    ctx->pc = 0x3748c0u;
}
