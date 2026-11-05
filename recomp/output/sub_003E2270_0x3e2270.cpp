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

// Function: sub_003E2270
// Address: 0x3e2270 - 0x3e2310
void sub_003E2270_0x3e2270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2270_0x3e2270");
#endif

    switch (ctx->pc) {
        case 0x3e22a0u: goto label_3e22a0;
        case 0x3e22acu: goto label_3e22ac;
        case 0x3e22c4u: goto label_3e22c4;
        case 0x3e22d0u: goto label_3e22d0;
        case 0x3e22dcu: goto label_3e22dc;
        case 0x3e22f0u: goto label_3e22f0;
        default: break;
    }

    ctx->pc = 0x3e2270u;

    // 0x3e2270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e2270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e2274: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e2274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e2278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e2278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e227c: 0x244231e8  addiu       $v0, $v0, 0x31E8
    ctx->pc = 0x3e227cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12776));
    // 0x3e2280: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e2280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e2284: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e2284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2288: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e2288u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e228c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e228cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e2290: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e2290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e2294: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x3e2294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x3e2298: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2298u;
    SET_GPR_U32(ctx, 31, 0x3E22A0u);
    ctx->pc = 0x3E229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2298u;
    // 0x3e229c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2298u, 0x3E22A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E22A0u;
label_3e22a0:
    // 0x3e22a0: 0x2624007c  addiu       $a0, $s1, 0x7C
    ctx->pc = 0x3e22a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
    // 0x3e22a4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E22A4u;
    SET_GPR_U32(ctx, 31, 0x3E22ACu);
    ctx->pc = 0x3E22A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E22A4u;
    // 0x3e22a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E22A4u, 0x3E22ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E22ACu;
label_3e22ac:
    // 0x3e22ac: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e22acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e22b0: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e22b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e22b4: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e22b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e22b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e22bc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E22BCu;
    SET_GPR_U32(ctx, 31, 0x3E22C4u);
    ctx->pc = 0x3E22C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E22BCu;
    // 0x3e22c0: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E22BCu, 0x3E22C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E22C4u;
label_3e22c4:
    // 0x3e22c4: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e22c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e22c8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E22C8u;
    SET_GPR_U32(ctx, 31, 0x3E22D0u);
    ctx->pc = 0x3E22CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E22C8u;
    // 0x3e22cc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E22C8u, 0x3E22D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E22D0u;
label_3e22d0:
    // 0x3e22d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e22d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e22d4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E22D4u;
    SET_GPR_U32(ctx, 31, 0x3E22DCu);
    ctx->pc = 0x3E22D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E22D4u;
    // 0x3e22d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E22D4u, 0x3E22DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E22DCu;
label_3e22dc:
    // 0x3e22dc: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e22dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e22e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E22E0u;
    {
        const bool branch_taken_0x3e22e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E22E0u;
        // 0x3e22e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e22e0) {
            ctx->pc = 0x3E22F4u;
            goto label_3e22f4;
        }
    }
    ctx->pc = 0x3E22E8u;
    // 0x3e22e8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E22E8u;
    SET_GPR_U32(ctx, 31, 0x3E22F0u);
    ctx->pc = 0x3E22ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E22E8u;
    // 0x3e22ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E22E8u, 0x3E22F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E22F0u;
label_3e22f0:
    // 0x3e22f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e22f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e22f4:
    // 0x3e22f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e22f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e22f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e22f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e22fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E22FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E22FCu;
        // 0x3e2300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E22FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2304u;
    // 0x3e2304: 0x0  nop
    ctx->pc = 0x3e2304u;
    // NOP
    // 0x3e2308: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e2308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e230c: 0x0  nop
    ctx->pc = 0x3e230cu;
    // NOP
    ctx->pc = 0x3e2310u;
}
