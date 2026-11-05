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

// Function: sub_003E2090
// Address: 0x3e2090 - 0x3e2118
void sub_003E2090_0x3e2090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2090_0x3e2090");
#endif

    switch (ctx->pc) {
        case 0x3e20c0u: goto label_3e20c0;
        case 0x3e20d8u: goto label_3e20d8;
        case 0x3e20e4u: goto label_3e20e4;
        case 0x3e20f0u: goto label_3e20f0;
        case 0x3e2104u: goto label_3e2104;
        default: break;
    }

    ctx->pc = 0x3e2090u;

    // 0x3e2090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e2090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e2094: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e2094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e2098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e2098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e209c: 0x24423220  addiu       $v0, $v0, 0x3220
    ctx->pc = 0x3e209cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12832));
    // 0x3e20a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e20a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e20a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e20a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e20a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e20a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e20ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e20acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e20b0: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e20b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e20b4: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3e20b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x3e20b8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E20B8u;
    SET_GPR_U32(ctx, 31, 0x3E20C0u);
    ctx->pc = 0x3E20BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E20B8u;
    // 0x3e20bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E20B8u, 0x3E20C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E20C0u;
label_3e20c0:
    // 0x3e20c0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e20c4: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e20c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e20c8: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e20c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e20cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e20ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e20d0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E20D0u;
    SET_GPR_U32(ctx, 31, 0x3E20D8u);
    ctx->pc = 0x3E20D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E20D0u;
    // 0x3e20d4: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E20D0u, 0x3E20D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E20D8u;
label_3e20d8:
    // 0x3e20d8: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e20d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e20dc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E20DCu;
    SET_GPR_U32(ctx, 31, 0x3E20E4u);
    ctx->pc = 0x3E20E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E20DCu;
    // 0x3e20e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E20DCu, 0x3E20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E20E4u;
label_3e20e4:
    // 0x3e20e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e20e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e20e8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E20E8u;
    SET_GPR_U32(ctx, 31, 0x3E20F0u);
    ctx->pc = 0x3E20ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E20E8u;
    // 0x3e20ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E20E8u, 0x3E20F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E20F0u;
label_3e20f0:
    // 0x3e20f0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e20f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e20f4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E20F4u;
    {
        const bool branch_taken_0x3e20f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E20F4u;
        // 0x3e20f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e20f4) {
            ctx->pc = 0x3E2108u;
            goto label_3e2108;
        }
    }
    ctx->pc = 0x3E20FCu;
    // 0x3e20fc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E20FCu;
    SET_GPR_U32(ctx, 31, 0x3E2104u);
    ctx->pc = 0x3E2100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E20FCu;
    // 0x3e2100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E20FCu, 0x3E2104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2104u;
label_3e2104:
    // 0x3e2104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e2104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e2108:
    // 0x3e2108: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e2108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e210c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e210cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2110: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2110u;
        // 0x3e2114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2118u;
}
