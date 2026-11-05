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

// Function: sub_003EF4A0
// Address: 0x3ef4a0 - 0x3ef530
void sub_003EF4A0_0x3ef4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF4A0_0x3ef4a0");
#endif

    switch (ctx->pc) {
        case 0x3ef4ccu: goto label_3ef4cc;
        case 0x3ef4ecu: goto label_3ef4ec;
        default: break;
    }

    ctx->pc = 0x3ef4a0u;

    // 0x3ef4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ef4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ef4a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ef4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ef4a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ef4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ef4ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ef4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ef4b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ef4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ef4b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ef4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3ef4b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ef4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ef4bc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF4BCu;
    {
        const bool branch_taken_0x3ef4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4BCu;
        // 0x3ef4c0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef4bc) {
            ctx->pc = 0x3EF4E0u;
            goto label_3ef4e0;
        }
    }
    ctx->pc = 0x3EF4C4u;
    // 0x3ef4c4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EF4C4u;
    SET_GPR_U32(ctx, 31, 0x3EF4CCu);
    ctx->pc = 0x3EF4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF4C4u;
    // 0x3ef4c8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EF4C4u, 0x3EF4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF4CCu;
label_3ef4cc:
    // 0x3ef4cc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x3ef4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x3ef4d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ef4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ef4d4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3ef4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3ef4d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3EF4D8u;
    {
        const bool branch_taken_0x3ef4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF4D8u;
        // 0x3ef4dc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef4d8) {
            ctx->pc = 0x3EF4FCu;
            goto label_3ef4fc;
        }
    }
    ctx->pc = 0x3EF4E0u;
label_3ef4e0:
    // 0x3ef4e0: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x3ef4e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef4e4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EF4E4u;
    SET_GPR_U32(ctx, 31, 0x3EF4ECu);
    ctx->pc = 0x3EF4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF4E4u;
    // 0x3ef4e8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EF4E4u, 0x3EF4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF4ECu;
label_3ef4ec:
    // 0x3ef4ec: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3ef4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3ef4f0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3ef4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3ef4f4: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x3ef4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x3ef4f8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3ef4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3ef4fc:
    // 0x3ef4fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ef4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ef500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ef504: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3ef504u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3ef508: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ef508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ef50c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ef50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3ef510: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ef510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ef514: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ef514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3ef518: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ef518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ef51c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3ef51cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x3ef520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ef520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ef524: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF524u;
        // 0x3ef528: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF52Cu;
    // 0x3ef52c: 0x0  nop
    ctx->pc = 0x3ef52cu;
    // NOP
    ctx->pc = 0x3ef530u;
}
