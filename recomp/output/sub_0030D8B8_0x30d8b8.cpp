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

// Function: sub_0030D8B8
// Address: 0x30d8b8 - 0x30d928
void sub_0030D8B8_0x30d8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D8B8_0x30d8b8");
#endif

    switch (ctx->pc) {
        case 0x30d8e0u: goto label_30d8e0;
        case 0x30d8fcu: goto label_30d8fc;
        case 0x30d90cu: goto label_30d90c;
        default: break;
    }

    ctx->pc = 0x30d8b8u;

    // 0x30d8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30d8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30d8bc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x30d8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d8c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30d8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30d8c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30d8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30d8c8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x30d8c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d8cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30d8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30d8d0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30D8D0u;
    {
        const bool branch_taken_0x30d8d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8D0u;
        // 0x30d8d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8d0) {
            ctx->pc = 0x30D8F4u;
            goto label_30d8f4;
        }
    }
    ctx->pc = 0x30D8D8u;
    // 0x30d8d8: 0xc0c957c  jal         func_3255F0
    ctx->pc = 0x30D8D8u;
    SET_GPR_U32(ctx, 31, 0x30D8E0u);
    ctx->pc = 0x3255F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3255F0u, 0x30D8D8u, 0x30D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D8E0u;
label_30d8e0:
    // 0x30d8e0: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x30d8e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x30d8e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30d8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30d8e8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x30d8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x30d8ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30D8ECu;
    {
        const bool branch_taken_0x30d8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D8ECu;
        // 0x30d8f0: 0x32c03  sra         $a1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d8ec) {
            ctx->pc = 0x30D904u;
            goto label_30d904;
        }
    }
    ctx->pc = 0x30D8F4u;
label_30d8f4:
    // 0x30d8f4: 0xc0c957c  jal         func_3255F0
    ctx->pc = 0x30D8F4u;
    SET_GPR_U32(ctx, 31, 0x30D8FCu);
    ctx->pc = 0x3255F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3255F0u, 0x30D8F4u, 0x30D8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D8FCu;
label_30d8fc:
    // 0x30d8fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x30d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x30d900: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x30d900u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_30d904:
    // 0x30d904: 0xc0c9ad0  jal         func_326B40
    ctx->pc = 0x30D904u;
    SET_GPR_U32(ctx, 31, 0x30D90Cu);
    ctx->pc = 0x30D908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D904u;
    // 0x30d908: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B40u, 0x30D904u, 0x30D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D90Cu;
label_30d90c:
    // 0x30d90c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30d90cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d910: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30d910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30d914: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30d914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d918: 0x3e00008  jr          $ra
    ctx->pc = 0x30D918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D918u;
        // 0x30d91c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D920u;
    // 0x30d920: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x30d920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30d924: 0x0  nop
    ctx->pc = 0x30d924u;
    // NOP
    ctx->pc = 0x30d928u;
}
