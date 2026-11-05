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

// Function: sub_002FC080
// Address: 0x2fc080 - 0x2fc100
void sub_002FC080_0x2fc080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC080_0x2fc080");
#endif

    switch (ctx->pc) {
        case 0x2fc0a8u: goto label_2fc0a8;
        case 0x2fc0c4u: goto label_2fc0c4;
        case 0x2fc0e0u: goto label_2fc0e0;
        case 0x2fc0e8u: goto label_2fc0e8;
        default: break;
    }

    ctx->pc = 0x2fc080u;

    // 0x2fc080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fc080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fc084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc088: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fc088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fc08c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fc090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fc094: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2fc094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fc098: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x2fc098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x2fc09c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2fc09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fc0a0: 0xc0bf002  jal         func_2FC008
    ctx->pc = 0x2FC0A0u;
    SET_GPR_U32(ctx, 31, 0x2FC0A8u);
    ctx->pc = 0x2FC0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC0A0u;
    // 0x2fc0a4: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC008u, 0x2FC0A0u, 0x2FC0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC0A8u;
label_2fc0a8:
    // 0x2fc0a8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC0A8u;
    {
        const bool branch_taken_0x2fc0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc0a8) {
            ctx->pc = 0x2FC0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC0A8u;
            // 0x2fc0ac: 0x8e020224  lw          $v0, 0x224($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC0B8u;
            goto label_2fc0b8;
        }
    }
    ctx->pc = 0x2FC0B0u;
    // 0x2fc0b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FC0B0u;
    {
        const bool branch_taken_0x2fc0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0B0u;
        // 0x2fc0b4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc0b0) {
            ctx->pc = 0x2FC0CCu;
            goto label_2fc0cc;
        }
    }
    ctx->pc = 0x2FC0B8u;
label_2fc0b8:
    // 0x2fc0b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2fc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fc0bc: 0xc0bf002  jal         func_2FC008
    ctx->pc = 0x2FC0BCu;
    SET_GPR_U32(ctx, 31, 0x2FC0C4u);
    ctx->pc = 0x2FC0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC0BCu;
    // 0x2fc0c0: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC008u, 0x2FC0BCu, 0x2FC0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC0C4u;
label_2fc0c4:
    // 0x2fc0c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2fc0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fc0c8: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x2fc0c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2fc0cc:
    // 0x2fc0cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fc0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fc0d0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FC0D0u;
    {
        const bool branch_taken_0x2fc0d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fc0d0) {
            ctx->pc = 0x2FC0E0u;
            goto label_2fc0e0;
        }
    }
    ctx->pc = 0x2FC0D8u;
    // 0x2fc0d8: 0xc0a2dba  jal         func_28B6E8
    ctx->pc = 0x2FC0D8u;
    SET_GPR_U32(ctx, 31, 0x2FC0E0u);
    ctx->pc = 0x2FC0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC0D8u;
    // 0x2fc0dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B6E8u, 0x2FC0D8u, 0x2FC0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC0E0u;
label_2fc0e0:
    // 0x2fc0e0: 0xc0a2df0  jal         func_28B7C0
    ctx->pc = 0x2FC0E0u;
    SET_GPR_U32(ctx, 31, 0x2FC0E8u);
    ctx->pc = 0x28B7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B7C0u, 0x2FC0E0u, 0x2FC0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC0E8u;
label_2fc0e8:
    // 0x2fc0e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc0ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fc0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc0f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fc0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fc0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC0F4u;
        // 0x2fc0f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC0FCu;
    // 0x2fc0fc: 0x0  nop
    ctx->pc = 0x2fc0fcu;
    // NOP
    ctx->pc = 0x2fc100u;
}
