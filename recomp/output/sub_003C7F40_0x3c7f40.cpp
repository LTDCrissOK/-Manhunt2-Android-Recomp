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

// Function: sub_003C7F40
// Address: 0x3c7f40 - 0x3c8008
void sub_003C7F40_0x3c7f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7F40_0x3c7f40");
#endif

    ctx->pc = 0x3c7f40u;

    // 0x3c7f40: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3c7f40u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3c7f44: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x3c7f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x3c7f48: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3c7f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3c7f4c: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x3c7f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x3c7f50: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3c7f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c7f54: 0x1880000a  blez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C7F54u;
    {
        const bool branch_taken_0x3c7f54 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3C7F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F54u;
        // 0x3c7f58: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7f54) {
            ctx->pc = 0x3C7F80u;
            goto label_3c7f80;
        }
    }
    ctx->pc = 0x3C7F5Cu;
    // 0x3c7f5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c7f60: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c7f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3c7f64: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3c7f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c7f68: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x3c7f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3c7f6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c7f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c7f70: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c7f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c7f74: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3c7f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3c7f78: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3C7F78u;
    {
        const bool branch_taken_0x3c7f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F78u;
        // 0x3c7f7c: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7f78) {
            ctx->pc = 0x3C8000u;
            goto label_3c8000;
        }
    }
    ctx->pc = 0x3C7F80u;
label_3c7f80:
    // 0x3c7f80: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x3c7f80u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x3c7f84: 0x28830014  slti        $v1, $a0, 0x14
    ctx->pc = 0x3c7f84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3c7f88: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3C7F88u;
    {
        const bool branch_taken_0x3c7f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7F88u;
        // 0x3c7f8c: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7f88) {
            ctx->pc = 0x3C7FB8u;
            goto label_3c7fb8;
        }
    }
    ctx->pc = 0x3C7F90u;
    // 0x3c7f90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c7f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c7f94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3c7f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3c7f98: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x3c7f98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x3c7f9c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x3c7f9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3c7fa0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c7fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c7fa4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c7fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c7fa8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c7fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c7fac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3c7facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3c7fb0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3C7FB0u;
    {
        const bool branch_taken_0x3c7fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7FB0u;
        // 0x3c7fb4: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7fb0) {
            ctx->pc = 0x3C8000u;
            goto label_3c8000;
        }
    }
    ctx->pc = 0x3C7FB8u;
label_3c7fb8:
    // 0x3c7fb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c7fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c7fbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3c7fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3c7fc0: 0x2484ffec  addiu       $a0, $a0, -0x14
    ctx->pc = 0x3c7fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x3c7fc4: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x3c7fc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x3c7fc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C7FC8u;
    {
        const bool branch_taken_0x3c7fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7FC8u;
        // 0x3c7fcc: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7fc8) {
            ctx->pc = 0x3C7FE4u;
            goto label_3c7fe4;
        }
    }
    ctx->pc = 0x3C7FD0u;
    // 0x3c7fd0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x3c7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x3c7fd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c7fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c7fd8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x3c7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c7fdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C7FDCu;
    {
        const bool branch_taken_0x3c7fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7FDCu;
        // 0x3c7fe0: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7fdc) {
            ctx->pc = 0x3C7FE8u;
            goto label_3c7fe8;
        }
    }
    ctx->pc = 0x3C7FE4u;
label_3c7fe4:
    // 0x3c7fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c7fe8:
    // 0x3c7fe8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c7fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c7fec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c7fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c7ff0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c7ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3c7ff4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3c7ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3c7ff8: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x3c7ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3c7ffc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3c7ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3c8000:
    // 0x3c8000: 0x3e00008  jr          $ra
    ctx->pc = 0x3C8000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C8004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8000u;
        // 0x3c8004: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C8008u;
}
