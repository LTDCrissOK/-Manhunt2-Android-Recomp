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

// Function: sub_0027C840
// Address: 0x27c840 - 0x27c8c8
void sub_0027C840_0x27c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C840_0x27c840");
#endif

    switch (ctx->pc) {
        case 0x27c870u: goto label_27c870;
        case 0x27c884u: goto label_27c884;
        case 0x27c8a0u: goto label_27c8a0;
        default: break;
    }

    ctx->pc = 0x27c840u;

    // 0x27c840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27c844: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27c844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27c848: 0x3c11004c  lui         $s1, 0x4C
    ctx->pc = 0x27c848u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)76 << 16));
    // 0x27c84c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27c84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27c850: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27c850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27c854: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x27c854u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x27c858: 0x8e22f128  lw          $v0, -0xED8($s1)
    ctx->pc = 0x27c858u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BF128u));
    // 0x27c85c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27c85cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c860: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27C860u;
    {
        const bool branch_taken_0x27c860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C860u;
        // 0x27c864: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c860) {
            ctx->pc = 0x27C884u;
            goto label_27c884;
        }
    }
    ctx->pc = 0x27C868u;
    // 0x27c868: 0xc0c7aa0  jal         func_31EA80
    ctx->pc = 0x27C868u;
    SET_GPR_U32(ctx, 31, 0x27C870u);
    ctx->pc = 0x27C86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C868u;
    // 0x27c86c: 0x2604f0c0  addiu       $a0, $s0, -0xF40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA80u, 0x27C868u, 0x27C870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C870u;
label_27c870:
    // 0x27c870: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c874: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27c874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27c878: 0xae22f128  sw          $v0, -0xED8($s1)
    ctx->pc = 0x27c878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963496), GPR_U32(ctx, 2));
    // 0x27c87c: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x27C87Cu;
    SET_GPR_U32(ctx, 31, 0x27C884u);
    ctx->pc = 0x27C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C87Cu;
    // 0x27c880: 0x2484c818  addiu       $a0, $a0, -0x37E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x27C87Cu, 0x27C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C884u;
label_27c884:
    // 0x27c884: 0x2610f0c0  addiu       $s0, $s0, -0xF40
    ctx->pc = 0x27c884u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963392));
    // 0x27c888: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x27c888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x27c88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c890: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x27c890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x27c894: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x27c894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27c898: 0xc0c7ac8  jal         func_31EB20
    ctx->pc = 0x27C898u;
    SET_GPR_U32(ctx, 31, 0x27C8A0u);
    ctx->pc = 0x27C89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C898u;
    // 0x27c89c: 0x24080005  addiu       $t0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EB20u, 0x27C898u, 0x27C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C8A0u;
label_27c8a0:
    // 0x27c8a0: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x27c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x27c8a4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x27c8a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c8a8: 0xac70f65c  sw          $s0, -0x9A4($v1)
    ctx->pc = 0x27c8a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x4BF65Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BF65Cu, _value); } while (0);
    // 0x27c8ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c8b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27c8b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27c8b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27c8b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c8b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x27c8b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27c8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x27C8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C8BCu;
        // 0x27c8c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C8C4u;
    // 0x27c8c4: 0x0  nop
    ctx->pc = 0x27c8c4u;
    // NOP
    ctx->pc = 0x27c8c8u;
}
