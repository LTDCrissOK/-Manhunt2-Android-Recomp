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

// Function: sub_001742F0
// Address: 0x1742f0 - 0x174378
void sub_001742F0_0x1742f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001742F0_0x1742f0");
#endif

    switch (ctx->pc) {
        case 0x174308u: goto label_174308;
        case 0x174330u: goto label_174330;
        default: break;
    }

    ctx->pc = 0x1742f0u;

    // 0x1742f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1742f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1742f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1742f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1742f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1742f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1742fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1742fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174300: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x174300u;
    SET_GPR_U32(ctx, 31, 0x174308u);
    ctx->pc = 0x174304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174300u;
    // 0x174304: 0x8c84005c  lw          $a0, 0x5C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x174300u, 0x174308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174308u;
label_174308:
    // 0x174308: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x174308u;
    {
        const bool branch_taken_0x174308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174308u;
        // 0x17430c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174308) {
            ctx->pc = 0x174358u;
            goto label_174358;
        }
    }
    ctx->pc = 0x174310u;
    // 0x174310: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x174310u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x174314: 0x24719a08  addiu       $s1, $v1, -0x65F8
    ctx->pc = 0x174314u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x174318: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x174318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x17431c: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x17431cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x174320: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x174320u;
    {
        const bool branch_taken_0x174320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x174324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174320u;
        // 0x174324: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174320) {
            ctx->pc = 0x17435Cu;
            goto label_17435c;
        }
    }
    ctx->pc = 0x174328u;
    // 0x174328: 0xc043996  jal         func_10E658
    ctx->pc = 0x174328u;
    SET_GPR_U32(ctx, 31, 0x174330u);
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x174328u, 0x174330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174330u;
label_174330:
    // 0x174330: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x174330u;
    {
        const bool branch_taken_0x174330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174330u;
        // 0x174334: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174330) {
            ctx->pc = 0x174358u;
            goto label_174358;
        }
    }
    ctx->pc = 0x174338u;
    // 0x174338: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x174338u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x17433c: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x17433cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x174340: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x174340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
    // 0x174344: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x174344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174348: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x174348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x17434c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x17434cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x174350: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174350u;
    {
        const bool branch_taken_0x174350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174350u;
        // 0x174354: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174350) {
            ctx->pc = 0x17435Cu;
            goto label_17435c;
        }
    }
    ctx->pc = 0x174358u;
label_174358:
    // 0x174358: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17435c:
    // 0x17435c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17435cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174360: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x174360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x174364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x174364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174368: 0x3e00008  jr          $ra
    ctx->pc = 0x174368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174368u;
        // 0x17436c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174370u;
    // 0x174370: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x174370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174374: 0x0  nop
    ctx->pc = 0x174374u;
    // NOP
    ctx->pc = 0x174378u;
}
