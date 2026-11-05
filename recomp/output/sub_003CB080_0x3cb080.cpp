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

// Function: sub_003CB080
// Address: 0x3cb080 - 0x3cb110
void sub_003CB080_0x3cb080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CB080_0x3cb080");
#endif

    ctx->pc = 0x3cb080u;

    // 0x3cb080: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3cb080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cb084: 0x51078  dsll        $v0, $a1, 1
    ctx->pc = 0x3cb084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 1);
    // 0x3cb088: 0x2357e  dsrl32      $a2, $v0, 21
    ctx->pc = 0x3cb088u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 21));
    // 0x3cb08c: 0x64c6fbcd  daddiu      $a2, $a2, -0x433
    ctx->pc = 0x3cb08cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294966221);
    // 0x3cb090: 0x28c2ffcb  slti        $v0, $a2, -0x35
    ctx->pc = 0x3cb090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967243) ? 1 : 0);
    // 0x3cb094: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CB094u;
    {
        const bool branch_taken_0x3cb094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB094u;
        // 0x3cb098: 0x28c2000d  slti        $v0, $a2, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb094) {
            ctx->pc = 0x3CB0A4u;
            goto label_3cb0a4;
        }
    }
    ctx->pc = 0x3CB09Cu;
    // 0x3cb09c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CB09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB09Cu;
        // 0x3cb0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB09Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CB0A4u;
label_3cb0a4:
    // 0x3cb0a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CB0A4u;
    {
        const bool branch_taken_0x3cb0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB0A4u;
        // 0x3cb0a8: 0x51338  dsll        $v0, $a1, 12 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb0a4) {
            ctx->pc = 0x3CB0B4u;
            goto label_3cb0b4;
        }
    }
    ctx->pc = 0x3CB0ACu;
    // 0x3cb0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3CB0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB0ACu;
        // 0x3cb0b0: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CB0B4u;
label_3cb0b4:
    // 0x3cb0b4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3cb0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3cb0b8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x3cb0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x3cb0bc: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x3cb0bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x3cb0c0: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x3CB0C0u;
    {
        const bool branch_taken_0x3cb0c0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x3CB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB0C0u;
        // 0x3cb0c4: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb0c0) {
            ctx->pc = 0x3CB0F8u;
            goto label_3cb0f8;
        }
    }
    ctx->pc = 0x3CB0C8u;
    // 0x3cb0c8: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x3cb0c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x3cb0cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3cb0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3cb0d0: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x3cb0d0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x3cb0d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3cb0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3cb0d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3cb0d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3cb0dc: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x3cb0dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x3cb0e0: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x3cb0e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x3cb0e4: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3CB0E4u;
    {
        const bool branch_taken_0x3cb0e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3cb0e4) {
            ctx->pc = 0x3CB0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CB0E4u;
            // 0x3cb0e8: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CB104u;
            goto label_3cb104;
        }
    }
    ctx->pc = 0x3CB0ECu;
    // 0x3cb0ec: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x3cb0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x3cb0f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3CB0F0u;
    {
        const bool branch_taken_0x3cb0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB0F0u;
        // 0x3cb0f4: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb0f0) {
            ctx->pc = 0x3CB104u;
            goto label_3cb104;
        }
    }
    ctx->pc = 0x3CB0F8u;
label_3cb0f8:
    // 0x3cb0f8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x3cb0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3cb0fc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3cb0fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3cb100: 0x452814  dsllv       $a1, $a1, $v0
    ctx->pc = 0x3cb100u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (GPR_U32(ctx, 2) & 0x3F));
label_3cb104:
    // 0x3cb104: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x3cb104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3cb108: 0x3e00008  jr          $ra
    ctx->pc = 0x3CB108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB108u;
        // 0x3cb10c: 0x2103f  dsra32      $v0, $v0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CB108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CB110u;
}
