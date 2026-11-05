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

// Function: sub_00337088
// Address: 0x337088 - 0x3370e0
void sub_00337088_0x337088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337088_0x337088");
#endif

    switch (ctx->pc) {
        case 0x33709cu: goto label_33709c;
        case 0x3370ccu: goto label_3370cc;
        default: break;
    }

    ctx->pc = 0x337088u;

    // 0x337088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33708c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33708Cu;
    {
        const bool branch_taken_0x33708c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x337090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33708Cu;
        // 0x337090: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33708c) {
            ctx->pc = 0x3370A4u;
            goto label_3370a4;
        }
    }
    ctx->pc = 0x337094u;
    // 0x337094: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x337094u;
    SET_GPR_U32(ctx, 31, 0x33709Cu);
    ctx->pc = 0x337098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337094u;
    // 0x337098: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x337094u, 0x33709Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33709Cu;
label_33709c:
    // 0x33709c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33709Cu;
    {
        const bool branch_taken_0x33709c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3370A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33709Cu;
        // 0x3370a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33709c) {
            ctx->pc = 0x3370D0u;
            goto label_3370d0;
        }
    }
    ctx->pc = 0x3370A4u;
label_3370a4:
    // 0x3370a4: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x3370a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x3370a8: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x3370a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
    // 0x3370ac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3370acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3370b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3370b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3370b4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3370B4u;
    {
        const bool branch_taken_0x3370b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3370B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3370B4u;
        // 0x3370b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3370b4) {
            ctx->pc = 0x3370D0u;
            goto label_3370d0;
        }
    }
    ctx->pc = 0x3370BCu;
    // 0x3370bc: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3370BCu;
    {
        const bool branch_taken_0x3370bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3370C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3370BCu;
        // 0x3370c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3370bc) {
            ctx->pc = 0x3370D0u;
            goto label_3370d0;
        }
    }
    ctx->pc = 0x3370C4u;
    // 0x3370c4: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x3370C4u;
    SET_GPR_U32(ctx, 31, 0x3370CCu);
    ctx->pc = 0x3370C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3370C4u;
    // 0x3370c8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x3370C4u, 0x3370CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3370CCu;
label_3370cc:
    // 0x3370cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3370ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3370d0:
    // 0x3370d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3370d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3370d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3370D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3370D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3370D4u;
        // 0x3370d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3370D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3370DCu;
    // 0x3370dc: 0x0  nop
    ctx->pc = 0x3370dcu;
    // NOP
    ctx->pc = 0x3370e0u;
}
