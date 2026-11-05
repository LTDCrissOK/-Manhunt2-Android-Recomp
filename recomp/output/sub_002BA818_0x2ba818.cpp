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

// Function: sub_002BA818
// Address: 0x2ba818 - 0x2ba8d0
void sub_002BA818_0x2ba818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA818_0x2ba818");
#endif

    switch (ctx->pc) {
        case 0x2ba868u: goto label_2ba868;
        case 0x2ba870u: goto label_2ba870;
        case 0x2ba880u: goto label_2ba880;
        default: break;
    }

    ctx->pc = 0x2ba818u;

    // 0x2ba818: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ba818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ba81c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ba81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ba820: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ba820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ba824: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ba824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ba828: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba82c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ba82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ba830: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ba830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba834: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ba834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ba838: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ba838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba83c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ba83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ba840: 0x138042  srl         $s0, $s3, 1
    ctx->pc = 0x2ba840u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
    // 0x2ba844: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2ba844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ba848: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2ba848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2ba84c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA84Cu;
    {
        const bool branch_taken_0x2ba84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA84Cu;
        // 0x2ba850: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba84c) {
            ctx->pc = 0x2BA874u;
            goto label_2ba874;
        }
    }
    ctx->pc = 0x2BA854u;
    // 0x2ba854: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ba854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ba858: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA858u;
    {
        const bool branch_taken_0x2ba858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba858) {
            ctx->pc = 0x2BA868u;
            goto label_2ba868;
        }
    }
    ctx->pc = 0x2BA860u;
    // 0x2ba860: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2BA860u;
    SET_GPR_U32(ctx, 31, 0x2BA868u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2BA860u, 0x2BA868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA868u;
label_2ba868:
    // 0x2ba868: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2BA868u;
    SET_GPR_U32(ctx, 31, 0x2BA870u);
    ctx->pc = 0x2BA86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA868u;
    // 0x2ba86c: 0x102040  sll         $a0, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2BA868u, 0x2BA870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA870u;
label_2ba870:
    // 0x2ba870: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2ba870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2ba874:
    // 0x2ba874: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2ba874u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x2ba878: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x2BA878u;
    {
        const bool branch_taken_0x2ba878 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA878u;
        // 0x2ba87c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba878) {
            ctx->pc = 0x2BA8ACu;
            goto label_2ba8ac;
        }
    }
    ctx->pc = 0x2BA880u;
label_2ba880:
    // 0x2ba880: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2ba880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ba884: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ba884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ba888: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x2ba888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2ba88c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2ba88cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ba890: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2ba890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2ba894: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ba894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ba898: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ba898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ba89c: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x2ba89cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2ba8a0: 0xd3102b  sltu        $v0, $a2, $s3
    ctx->pc = 0x2ba8a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2ba8a4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2BA8A4u;
    {
        const bool branch_taken_0x2ba8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8A4u;
        // 0x2ba8a8: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8a4) {
            ctx->pc = 0x2BA880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ba880;
        }
    }
    ctx->pc = 0x2BA8ACu;
label_2ba8ac:
    // 0x2ba8ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ba8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba8b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ba8b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba8b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ba8b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba8b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ba8b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba8bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ba8bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba8c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ba8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ba8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8C4u;
        // 0x2ba8c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA8CCu;
    // 0x2ba8cc: 0x0  nop
    ctx->pc = 0x2ba8ccu;
    // NOP
    ctx->pc = 0x2ba8d0u;
}
