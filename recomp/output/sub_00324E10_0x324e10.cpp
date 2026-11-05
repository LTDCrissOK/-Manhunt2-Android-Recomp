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

// Function: sub_00324E10
// Address: 0x324e10 - 0x324e80
void sub_00324E10_0x324e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324E10_0x324e10");
#endif

    switch (ctx->pc) {
        case 0x324e4cu: goto label_324e4c;
        case 0x324e5cu: goto label_324e5c;
        case 0x324e6cu: goto label_324e6c;
        default: break;
    }

    ctx->pc = 0x324e10u;

    // 0x324e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x324e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x324e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324e18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x324e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x324e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x324e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x324e24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x324e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e28: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x324e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x324e2c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x324e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x324e30: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x324e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x324e34: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x324E34u;
    {
        const bool branch_taken_0x324e34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x324E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E34u;
        // 0x324e38: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e34) {
            ctx->pc = 0x324E6Cu;
            goto label_324e6c;
        }
    }
    ctx->pc = 0x324E3Cu;
    // 0x324e3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324E3Cu;
    {
        const bool branch_taken_0x324e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E3Cu;
        // 0x324e40: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e3c) {
            ctx->pc = 0x324E54u;
            goto label_324e54;
        }
    }
    ctx->pc = 0x324E44u;
    // 0x324e44: 0xc0da512  jal         func_369448
    ctx->pc = 0x324E44u;
    SET_GPR_U32(ctx, 31, 0x324E4Cu);
    ctx->pc = 0x324E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E44u;
    // 0x324e48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369448u, 0x324E44u, 0x324E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E4Cu;
label_324e4c:
    // 0x324e4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x324E4Cu;
    {
        const bool branch_taken_0x324e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E4Cu;
        // 0x324e50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e4c) {
            ctx->pc = 0x324E70u;
            goto label_324e70;
        }
    }
    ctx->pc = 0x324E54u;
label_324e54:
    // 0x324e54: 0xc0da452  jal         func_369148
    ctx->pc = 0x324E54u;
    SET_GPR_U32(ctx, 31, 0x324E5Cu);
    ctx->pc = 0x369148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369148u, 0x324E54u, 0x324E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E5Cu;
label_324e5c:
    // 0x324e5c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x324e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x324e60: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x324e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x324e64: 0xc0da4da  jal         func_369368
    ctx->pc = 0x324E64u;
    SET_GPR_U32(ctx, 31, 0x324E6Cu);
    ctx->pc = 0x324E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E64u;
    // 0x324e68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369368u, 0x324E64u, 0x324E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E6Cu;
label_324e6c:
    // 0x324e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_324e70:
    // 0x324e70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x324e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324e74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x324e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324e78: 0x3e00008  jr          $ra
    ctx->pc = 0x324E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E78u;
        // 0x324e7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324E80u;
}
