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

// Function: sub_003BB698
// Address: 0x3bb698 - 0x3bb700
void sub_003BB698_0x3bb698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB698_0x3bb698");
#endif

    switch (ctx->pc) {
        case 0x3bb6a8u: goto label_3bb6a8;
        case 0x3bb6c0u: goto label_3bb6c0;
        case 0x3bb6e8u: goto label_3bb6e8;
        default: break;
    }

    ctx->pc = 0x3bb698u;

    // 0x3bb698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bb69c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bb69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bb6a0: 0xc0eed54  jal         func_3BB550
    ctx->pc = 0x3BB6A0u;
    SET_GPR_U32(ctx, 31, 0x3BB6A8u);
    ctx->pc = 0x3BB550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB550u, 0x3BB6A0u, 0x3BB6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB6A8u;
label_3bb6a8:
    // 0x3bb6a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB6A8u;
    {
        const bool branch_taken_0x3bb6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6A8u;
        // 0x3bb6ac: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb6a8) {
            ctx->pc = 0x3BB6B8u;
            goto label_3bb6b8;
        }
    }
    ctx->pc = 0x3BB6B0u;
    // 0x3bb6b0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3BB6B0u;
    {
        const bool branch_taken_0x3bb6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6B0u;
        // 0x3bb6b4: 0x9042c906  lbu         $v0, -0x36FA($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294953222)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb6b0) {
            ctx->pc = 0x3BB6F4u;
            goto label_3bb6f4;
        }
    }
    ctx->pc = 0x3BB6B8u;
label_3bb6b8:
    // 0x3bb6b8: 0xc0f2694  jal         func_3C9A50
    ctx->pc = 0x3BB6B8u;
    SET_GPR_U32(ctx, 31, 0x3BB6C0u);
    ctx->pc = 0x3BB6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB6B8u;
    // 0x3bb6bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A50u, 0x3BB6B8u, 0x3BB6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB6C0u;
label_3bb6c0:
    // 0x3bb6c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3bb6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb6c4: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x3bb6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x3bb6c8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3bb6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3bb6cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB6CCu;
    {
        const bool branch_taken_0x3bb6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BB6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6CCu;
        // 0x3bb6d0: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb6cc) {
            ctx->pc = 0x3BB6DCu;
            goto label_3bb6dc;
        }
    }
    ctx->pc = 0x3BB6D4u;
    // 0x3bb6d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3BB6D4u;
    {
        const bool branch_taken_0x3bb6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6D4u;
        // 0x3bb6d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb6d4) {
            ctx->pc = 0x3BB6F4u;
            goto label_3bb6f4;
        }
    }
    ctx->pc = 0x3BB6DCu;
label_3bb6dc:
    // 0x3bb6dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3bb6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bb6e0: 0xc0f272c  jal         func_3C9CB0
    ctx->pc = 0x3BB6E0u;
    SET_GPR_U32(ctx, 31, 0x3BB6E8u);
    ctx->pc = 0x3BB6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB6E0u;
    // 0x3bb6e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9CB0u, 0x3BB6E0u, 0x3BB6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB6E8u;
label_3bb6e8:
    // 0x3bb6e8: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x3bb6e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3bb6ec: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x3bb6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x3bb6f0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x3bb6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3bb6f4:
    // 0x3bb6f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bb6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB6F8u;
        // 0x3bb6fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB700u;
}
