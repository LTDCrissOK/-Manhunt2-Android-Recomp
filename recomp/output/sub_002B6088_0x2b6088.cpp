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

// Function: sub_002B6088
// Address: 0x2b6088 - 0x2b60e8
void sub_002B6088_0x2b6088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6088_0x2b6088");
#endif

    switch (ctx->pc) {
        case 0x2b60bcu: goto label_2b60bc;
        case 0x2b60c4u: goto label_2b60c4;
        case 0x2b60d4u: goto label_2b60d4;
        default: break;
    }

    ctx->pc = 0x2b6088u;

    // 0x2b6088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b608c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b608cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b6090: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b6090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b6094: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x2b6094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2b6098: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b6098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b609c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b609cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60a0: 0x8c649160  lw          $a0, -0x6EA0($v1)
    ctx->pc = 0x2b60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F9160u));
    // 0x2b60a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b60a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60a8: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x2b60a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2b60ac: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x2b60acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x2b60b0: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x2b60b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x2b60b4: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x2B60B4u;
    SET_GPR_U32(ctx, 31, 0x2B60BCu);
    ctx->pc = 0x2B60B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B60B4u;
    // 0x2b60b8: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x2B60B4u, 0x2B60BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B60BCu;
label_2b60bc:
    // 0x2b60bc: 0xc0aedb0  jal         func_2BB6C0
    ctx->pc = 0x2B60BCu;
    SET_GPR_U32(ctx, 31, 0x2B60C4u);
    ctx->pc = 0x2B60C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B60BCu;
    // 0x2b60c0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB6C0u, 0x2B60BCu, 0x2B60C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B60C4u;
label_2b60c4:
    // 0x2b60c4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2b60c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b60c8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x2b60c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2b60cc: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2B60CCu;
    SET_GPR_U32(ctx, 31, 0x2B60D4u);
    ctx->pc = 0x2B60D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B60CCu;
    // 0x2b60d0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2B60CCu, 0x2B60D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B60D4u;
label_2b60d4:
    // 0x2b60d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2b60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b60d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b60d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b60dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b60dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b60e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B60E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B60E0u;
        // 0x2b60e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B60E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B60E8u;
}
