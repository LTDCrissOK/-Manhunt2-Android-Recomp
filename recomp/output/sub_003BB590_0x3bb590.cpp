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

// Function: sub_003BB590
// Address: 0x3bb590 - 0x3bb5f8
void sub_003BB590_0x3bb590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BB590_0x3bb590");
#endif

    switch (ctx->pc) {
        case 0x3bb5a0u: goto label_3bb5a0;
        case 0x3bb5a8u: goto label_3bb5a8;
        case 0x3bb5c0u: goto label_3bb5c0;
        default: break;
    }

    ctx->pc = 0x3bb590u;

    // 0x3bb590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3bb590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3bb594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3bb594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3bb598: 0xc0f2694  jal         func_3C9A50
    ctx->pc = 0x3BB598u;
    SET_GPR_U32(ctx, 31, 0x3BB5A0u);
    ctx->pc = 0x3BB59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB598u;
    // 0x3bb59c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A50u, 0x3BB598u, 0x3BB5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB5A0u;
label_3bb5a0:
    // 0x3bb5a0: 0xc0eed54  jal         func_3BB550
    ctx->pc = 0x3BB5A0u;
    SET_GPR_U32(ctx, 31, 0x3BB5A8u);
    ctx->pc = 0x3BB550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB550u, 0x3BB5A0u, 0x3BB5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB5A8u;
label_3bb5a8:
    // 0x3bb5a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BB5A8u;
    {
        const bool branch_taken_0x3bb5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB5A8u;
        // 0x3bb5ac: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb5a8) {
            ctx->pc = 0x3BB5B8u;
            goto label_3bb5b8;
        }
    }
    ctx->pc = 0x3BB5B0u;
    // 0x3bb5b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3BB5B0u;
    {
        const bool branch_taken_0x3bb5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB5B0u;
        // 0x3bb5b4: 0x9042c904  lbu         $v0, -0x36FC($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294953220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb5b0) {
            ctx->pc = 0x3BB5E4u;
            goto label_3bb5e4;
        }
    }
    ctx->pc = 0x3BB5B8u;
label_3bb5b8:
    // 0x3bb5b8: 0xc0f2694  jal         func_3C9A50
    ctx->pc = 0x3BB5B8u;
    SET_GPR_U32(ctx, 31, 0x3BB5C0u);
    ctx->pc = 0x3BB5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BB5B8u;
    // 0x3bb5bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9A50u, 0x3BB5B8u, 0x3BB5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BB5C0u;
label_3bb5c0:
    // 0x3bb5c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3bb5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bb5c4: 0x31342  srl         $v0, $v1, 13
    ctx->pc = 0x3bb5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 13));
    // 0x3bb5c8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3bb5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3bb5cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BB5CCu;
    {
        const bool branch_taken_0x3bb5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bb5cc) {
            ctx->pc = 0x3BB5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BB5CCu;
            // 0x3bb5d0: 0x31402  srl         $v0, $v1, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BB5E0u;
            goto label_3bb5e0;
        }
    }
    ctx->pc = 0x3BB5D4u;
    // 0x3bb5d4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x3bb5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x3bb5d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BB5D8u;
    {
        const bool branch_taken_0x3bb5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BB5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB5D8u;
        // 0x3bb5dc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bb5d8) {
            ctx->pc = 0x3BB5E4u;
            goto label_3bb5e4;
        }
    }
    ctx->pc = 0x3BB5E0u;
label_3bb5e0:
    // 0x3bb5e0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x3bb5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_3bb5e4:
    // 0x3bb5e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3bb5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bb5e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3BB5E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BB5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BB5E8u;
        // 0x3bb5ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BB5E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BB5F0u;
    // 0x3bb5f0: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x3bb5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3bb5f4: 0x0  nop
    ctx->pc = 0x3bb5f4u;
    // NOP
    ctx->pc = 0x3bb5f8u;
}
