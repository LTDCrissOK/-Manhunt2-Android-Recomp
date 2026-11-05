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

// Function: sub_0014B310
// Address: 0x14b310 - 0x14b398
void sub_0014B310_0x14b310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B310_0x14b310");
#endif

    switch (ctx->pc) {
        case 0x14b358u: goto label_14b358;
        default: break;
    }

    ctx->pc = 0x14b310u;

    // 0x14b310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b314: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14b314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14b318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14b318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14b31c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14b320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14b320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14b324: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x14b324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x14b328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14b328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14b32c: 0x24719a08  addiu       $s1, $v1, -0x65F8
    ctx->pc = 0x14b32cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x14b330: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14b330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b334: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14b334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14b338: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x14b338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14b33c: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x14b33cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14b340: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x14b340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x14b344: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x14b344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x14b348: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x14B348u;
    {
        const bool branch_taken_0x14b348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B348u;
        // 0x14b34c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b348) {
            ctx->pc = 0x14B384u;
            goto label_14b384;
        }
    }
    ctx->pc = 0x14B350u;
    // 0x14b350: 0xc043996  jal         func_10E658
    ctx->pc = 0x14B350u;
    SET_GPR_U32(ctx, 31, 0x14B358u);
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x14B350u, 0x14B358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B358u;
label_14b358:
    // 0x14b358: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14B358u;
    {
        const bool branch_taken_0x14b358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B358u;
        // 0x14b35c: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b358) {
            ctx->pc = 0x14B380u;
            goto label_14b380;
        }
    }
    ctx->pc = 0x14B360u;
    // 0x14b360: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x14b360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x14b364: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x14b364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x14b368: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x14b368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x14b36c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b370: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x14b370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x14b374: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x14b374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x14b378: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14B378u;
    {
        const bool branch_taken_0x14b378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B378u;
        // 0x14b37c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b378) {
            ctx->pc = 0x14B384u;
            goto label_14b384;
        }
    }
    ctx->pc = 0x14B380u;
label_14b380:
    // 0x14b380: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14b380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14b384:
    // 0x14b384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14b384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14b388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14b38c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14b38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b390: 0x3e00008  jr          $ra
    ctx->pc = 0x14B390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B390u;
        // 0x14b394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B398u;
}
