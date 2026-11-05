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

// Function: sub_00124F00
// Address: 0x124f00 - 0x124f88
void sub_00124F00_0x124f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124F00_0x124f00");
#endif

    switch (ctx->pc) {
        case 0x124f30u: goto label_124f30;
        case 0x124f40u: goto label_124f40;
        case 0x124f60u: goto label_124f60;
        default: break;
    }

    ctx->pc = 0x124f00u;

    // 0x124f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124f08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124f0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x124f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124f14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x124f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x124f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x124f1c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x124f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f20: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x124f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x124f24: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x124f24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f28: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124F28u;
    SET_GPR_U32(ctx, 31, 0x124F30u);
    ctx->pc = 0x124F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F28u;
    // 0x124f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124F28u, 0x124F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F30u;
label_124f30:
    // 0x124f30: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x124F30u;
    {
        const bool branch_taken_0x124f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F30u;
        // 0x124f34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f30) {
            ctx->pc = 0x124F6Cu;
            goto label_124f6c;
        }
    }
    ctx->pc = 0x124F38u;
    // 0x124f38: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124F38u;
    SET_GPR_U32(ctx, 31, 0x124F40u);
    ctx->pc = 0x124F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F38u;
    // 0x124f3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124F38u, 0x124F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F40u;
label_124f40:
    // 0x124f40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x124F40u;
    {
        const bool branch_taken_0x124f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F40u;
        // 0x124f44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f40) {
            ctx->pc = 0x124F68u;
            goto label_124f68;
        }
    }
    ctx->pc = 0x124F48u;
    // 0x124f48: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x124f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x124f4c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x124f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x124f50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x124f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x124f54: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x124f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124f58: 0xc042d90  jal         func_10B640
    ctx->pc = 0x124F58u;
    SET_GPR_U32(ctx, 31, 0x124F60u);
    ctx->pc = 0x124F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124F58u;
    // 0x124f5c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B640u, 0x124F58u, 0x124F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F60u;
label_124f60:
    // 0x124f60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124F60u;
    {
        const bool branch_taken_0x124f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F60u;
        // 0x124f64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124f60) {
            ctx->pc = 0x124F70u;
            goto label_124f70;
        }
    }
    ctx->pc = 0x124F68u;
label_124f68:
    // 0x124f68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124f6c:
    // 0x124f6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124f70:
    // 0x124f70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124f74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124f74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124f78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124f78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124f7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x124f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124f80: 0x3e00008  jr          $ra
    ctx->pc = 0x124F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124F80u;
        // 0x124f84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124F88u;
}
