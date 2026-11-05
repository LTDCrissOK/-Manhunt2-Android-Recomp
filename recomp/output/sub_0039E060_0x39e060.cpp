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

// Function: sub_0039E060
// Address: 0x39e060 - 0x39e130
void sub_0039E060_0x39e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E060_0x39e060");
#endif

    switch (ctx->pc) {
        case 0x39e0a8u: goto label_39e0a8;
        case 0x39e0c0u: goto label_39e0c0;
        case 0x39e0d8u: goto label_39e0d8;
        case 0x39e0f0u: goto label_39e0f0;
        case 0x39e108u: goto label_39e108;
        case 0x39e110u: goto label_39e110;
        default: break;
    }

    ctx->pc = 0x39e060u;

    // 0x39e060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39e060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39e064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39e068: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39e068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e06c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39E06Cu;
    {
        const bool branch_taken_0x39e06c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E06Cu;
        // 0x39e070: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e06c) {
            ctx->pc = 0x39E090u;
            goto label_39e090;
        }
    }
    ctx->pc = 0x39E074u;
    // 0x39e074: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39e074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39e078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e07c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39e07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e080: 0x2484bc38  addiu       $a0, $a0, -0x43C8
    ctx->pc = 0x39e080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949944));
    // 0x39e084: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x39E084u;
    ctx->pc = 0x39E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E084u;
    // 0x39e088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39E08Cu;
    // 0x39e08c: 0x0  nop
    ctx->pc = 0x39e08cu;
    // NOP
label_39e090:
    // 0x39e090: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x39e090u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x39e094: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39e094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39e098: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E098u;
    {
        const bool branch_taken_0x39e098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E098u;
        // 0x39e09c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e098) {
            ctx->pc = 0x39E0B0u;
            goto label_39e0b0;
        }
    }
    ctx->pc = 0x39E0A0u;
    // 0x39e0a0: 0xc0e76e2  jal         func_39DB88
    ctx->pc = 0x39E0A0u;
    SET_GPR_U32(ctx, 31, 0x39E0A8u);
    ctx->pc = 0x39DB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DB88u, 0x39E0A0u, 0x39E0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E0A8u;
label_39e0a8:
    // 0x39e0a8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x39E0A8u;
    {
        const bool branch_taken_0x39e0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e0a8) {
            ctx->pc = 0x39E108u;
            goto label_39e108;
        }
    }
    ctx->pc = 0x39E0B0u;
label_39e0b0:
    // 0x39e0b0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E0B0u;
    {
        const bool branch_taken_0x39e0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0B0u;
        // 0x39e0b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e0b0) {
            ctx->pc = 0x39E0C8u;
            goto label_39e0c8;
        }
    }
    ctx->pc = 0x39E0B8u;
    // 0x39e0b8: 0xc0e757c  jal         func_39D5F0
    ctx->pc = 0x39E0B8u;
    SET_GPR_U32(ctx, 31, 0x39E0C0u);
    ctx->pc = 0x39D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39D5F0u, 0x39E0B8u, 0x39E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E0C0u;
label_39e0c0:
    // 0x39e0c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x39E0C0u;
    {
        const bool branch_taken_0x39e0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e0c0) {
            ctx->pc = 0x39E108u;
            goto label_39e108;
        }
    }
    ctx->pc = 0x39E0C8u;
label_39e0c8:
    // 0x39e0c8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E0C8u;
    {
        const bool branch_taken_0x39e0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0C8u;
        // 0x39e0cc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e0c8) {
            ctx->pc = 0x39E0E0u;
            goto label_39e0e0;
        }
    }
    ctx->pc = 0x39E0D0u;
    // 0x39e0d0: 0xc0e7682  jal         func_39DA08
    ctx->pc = 0x39E0D0u;
    SET_GPR_U32(ctx, 31, 0x39E0D8u);
    ctx->pc = 0x39DA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DA08u, 0x39E0D0u, 0x39E0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E0D8u;
label_39e0d8:
    // 0x39e0d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x39E0D8u;
    {
        const bool branch_taken_0x39e0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e0d8) {
            ctx->pc = 0x39E108u;
            goto label_39e108;
        }
    }
    ctx->pc = 0x39E0E0u;
label_39e0e0:
    // 0x39e0e0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E0E0u;
    {
        const bool branch_taken_0x39e0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E0E0u;
        // 0x39e0e4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e0e0) {
            ctx->pc = 0x39E0F8u;
            goto label_39e0f8;
        }
    }
    ctx->pc = 0x39E0E8u;
    // 0x39e0e8: 0xc0e773e  jal         func_39DCF8
    ctx->pc = 0x39E0E8u;
    SET_GPR_U32(ctx, 31, 0x39E0F0u);
    ctx->pc = 0x39DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DCF8u, 0x39E0E8u, 0x39E0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E0F0u;
label_39e0f0:
    // 0x39e0f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39E0F0u;
    {
        const bool branch_taken_0x39e0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e0f0) {
            ctx->pc = 0x39E108u;
            goto label_39e108;
        }
    }
    ctx->pc = 0x39E0F8u;
label_39e0f8:
    // 0x39e0f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39E0F8u;
    {
        const bool branch_taken_0x39e0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39e0f8) {
            ctx->pc = 0x39E108u;
            goto label_39e108;
        }
    }
    ctx->pc = 0x39E100u;
    // 0x39e100: 0xc0e77c0  jal         func_39DF00
    ctx->pc = 0x39E100u;
    SET_GPR_U32(ctx, 31, 0x39E108u);
    ctx->pc = 0x39DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DF00u, 0x39E100u, 0x39E108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E108u;
label_39e108:
    // 0x39e108: 0xc0e77e6  jal         func_39DF98
    ctx->pc = 0x39E108u;
    SET_GPR_U32(ctx, 31, 0x39E110u);
    ctx->pc = 0x39E10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E108u;
    // 0x39e10c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39DF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DF98u, 0x39E108u, 0x39E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E110u;
label_39e110:
    // 0x39e110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e114: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39e114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e11c: 0x80e77c6  j           func_39DF18
    ctx->pc = 0x39E11Cu;
    ctx->pc = 0x39E120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E11Cu;
    // 0x39e120: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39DF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39DF18u, 0x39E11Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39E124u;
    // 0x39e124: 0x0  nop
    ctx->pc = 0x39e124u;
    // NOP
    // 0x39e128: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39e128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39e12c: 0x0  nop
    ctx->pc = 0x39e12cu;
    // NOP
    ctx->pc = 0x39e130u;
}
