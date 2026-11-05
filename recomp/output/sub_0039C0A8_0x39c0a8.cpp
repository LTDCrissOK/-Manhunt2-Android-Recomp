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

// Function: sub_0039C0A8
// Address: 0x39c0a8 - 0x39c130
void sub_0039C0A8_0x39c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C0A8_0x39c0a8");
#endif

    switch (ctx->pc) {
        case 0x39c10cu: goto label_39c10c;
        case 0x39c120u: goto label_39c120;
        default: break;
    }

    ctx->pc = 0x39c0a8u;

    // 0x39c0a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39c0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39c0ac: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39C0ACu;
    {
        const bool branch_taken_0x39c0ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C0ACu;
        // 0x39c0b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c0ac) {
            ctx->pc = 0x39C0C8u;
            goto label_39c0c8;
        }
    }
    ctx->pc = 0x39C0B4u;
    // 0x39c0b4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39c0b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c0bc: 0x2484b528  addiu       $a0, $a0, -0x4AD8
    ctx->pc = 0x39c0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948136));
    // 0x39c0c0: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x39C0C0u;
    ctx->pc = 0x39C0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C0C0u;
    // 0x39c0c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39C0C8u;
label_39c0c8:
    // 0x39c0c8: 0x28a2fff1  slti        $v0, $a1, -0xF
    ctx->pc = 0x39c0c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967281) ? 1 : 0);
    // 0x39c0cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39C0CCu;
    {
        const bool branch_taken_0x39c0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C0CCu;
        // 0x39c0d0: 0x28a20010  slti        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c0cc) {
            ctx->pc = 0x39C0E0u;
            goto label_39c0e0;
        }
    }
    ctx->pc = 0x39C0D4u;
    // 0x39c0d4: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x39c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x39c0d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39C0D8u;
    {
        const bool branch_taken_0x39c0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C0D8u;
        // 0x39c0dc: 0xa4820046  sh          $v0, 0x46($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c0d8) {
            ctx->pc = 0x39C0F0u;
            goto label_39c0f0;
        }
    }
    ctx->pc = 0x39C0E0u;
label_39c0e0:
    // 0x39c0e0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x39C0E0u;
    {
        const bool branch_taken_0x39c0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c0e0) {
            ctx->pc = 0x39C0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C0E0u;
            // 0x39c0e4: 0xa4850046  sh          $a1, 0x46($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C0F0u;
            goto label_39c0f0;
        }
    }
    ctx->pc = 0x39C0E8u;
    // 0x39c0e8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x39c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x39c0ec: 0xa4820046  sh          $v0, 0x46($a0)
    ctx->pc = 0x39c0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 2));
label_39c0f0:
    // 0x39c0f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x39c0f4: 0x8c430c18  lw          $v1, 0xC18($v0)
    ctx->pc = 0x39c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400C18u));
    // 0x39c0f8: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x39C0F8u;
    {
        const bool branch_taken_0x39c0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39c0f8) {
            ctx->pc = 0x39C0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39C0F8u;
            // 0x39c0fc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C118u;
            goto label_39c118;
        }
    }
    ctx->pc = 0x39C100u;
    // 0x39c100: 0x84850046  lh          $a1, 0x46($a0)
    ctx->pc = 0x39c100u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x39c104: 0xc0e5f5c  jal         func_397D70
    ctx->pc = 0x39C104u;
    SET_GPR_U32(ctx, 31, 0x39C10Cu);
    ctx->pc = 0x39C108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C104u;
    // 0x39c108: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397D70u, 0x39C104u, 0x39C10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C10Cu;
label_39c10c:
    // 0x39c10c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39C10Cu;
    {
        const bool branch_taken_0x39c10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C10Cu;
        // 0x39c110: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c10c) {
            ctx->pc = 0x39C124u;
            goto label_39c124;
        }
    }
    ctx->pc = 0x39C114u;
    // 0x39c114: 0x0  nop
    ctx->pc = 0x39c114u;
    // NOP
label_39c118:
    // 0x39c118: 0xc0e5f5c  jal         func_397D70
    ctx->pc = 0x39C118u;
    SET_GPR_U32(ctx, 31, 0x39C120u);
    ctx->pc = 0x39C11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C118u;
    // 0x39c11c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397D70u, 0x39C118u, 0x39C120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C120u;
label_39c120:
    // 0x39c120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c124:
    // 0x39c124: 0x3e00008  jr          $ra
    ctx->pc = 0x39C124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C124u;
        // 0x39c128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C12Cu;
    // 0x39c12c: 0x0  nop
    ctx->pc = 0x39c12cu;
    // NOP
    ctx->pc = 0x39c130u;
}
