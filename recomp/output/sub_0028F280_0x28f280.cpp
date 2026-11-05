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

// Function: sub_0028F280
// Address: 0x28f280 - 0x28f2f0
void sub_0028F280_0x28f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F280_0x28f280");
#endif

    switch (ctx->pc) {
        case 0x28f2a4u: goto label_28f2a4;
        case 0x28f2acu: goto label_28f2ac;
        case 0x28f2bcu: goto label_28f2bc;
        default: break;
    }

    ctx->pc = 0x28f280u;

    // 0x28f280: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28f288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f28c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28f28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28f290: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28f290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28f294: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28f294u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f298: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x28f298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x28f29c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x28F29Cu;
    SET_GPR_U32(ctx, 31, 0x28F2A4u);
    ctx->pc = 0x28F2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F29Cu;
    // 0x28f2a0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x28F29Cu, 0x28F2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F2A4u;
label_28f2a4:
    // 0x28f2a4: 0xc0a3b6e  jal         func_28EDB8
    ctx->pc = 0x28F2A4u;
    SET_GPR_U32(ctx, 31, 0x28F2ACu);
    ctx->pc = 0x28F2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F2A4u;
    // 0x28f2a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EDB8u, 0x28F2A4u, 0x28F2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F2ACu;
label_28f2ac:
    // 0x28f2ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28f2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28f2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2b4: 0xc0a3b94  jal         func_28EE50
    ctx->pc = 0x28F2B4u;
    SET_GPR_U32(ctx, 31, 0x28F2BCu);
    ctx->pc = 0x28F2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F2B4u;
    // 0x28f2b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EE50u, 0x28F2B4u, 0x28F2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F2BCu;
label_28f2bc:
    // 0x28f2bc: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x28f2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x28f2c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28f2c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f2c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28f2c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x28f2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28f2cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28f2d0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x28f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x28f2d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28f2d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28f2d8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x28f2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x28f2dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28f2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28f2e0: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x28f2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x28f2e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x28F2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2E8u;
        // 0x28f2ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F2F0u;
}
