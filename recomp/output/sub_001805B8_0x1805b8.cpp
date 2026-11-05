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

// Function: sub_001805B8
// Address: 0x1805b8 - 0x180610
void sub_001805B8_0x1805b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001805B8_0x1805b8");
#endif

    switch (ctx->pc) {
        case 0x1805d8u: goto label_1805d8;
        case 0x1805f0u: goto label_1805f0;
        default: break;
    }

    ctx->pc = 0x1805b8u;

    // 0x1805b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1805b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1805bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1805bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1805c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1805c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1805c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1805c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1805c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1805c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1805cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1805ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1805d0: 0xc060156  jal         func_180558
    ctx->pc = 0x1805D0u;
    SET_GPR_U32(ctx, 31, 0x1805D8u);
    ctx->pc = 0x1805D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1805D0u;
    // 0x1805d4: 0x92050410  lbu         $a1, 0x410($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1040)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180558u, 0x1805D0u, 0x1805D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1805D8u;
label_1805d8:
    // 0x1805d8: 0x92020410  lbu         $v0, 0x410($s0)
    ctx->pc = 0x1805d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x1805dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1805dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1805e0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1805e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1805e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1805e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1805e8: 0xc0601b0  jal         func_1806C0
    ctx->pc = 0x1805E8u;
    SET_GPR_U32(ctx, 31, 0x1805F0u);
    ctx->pc = 0x1805ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1805E8u;
    // 0x1805ec: 0xac510020  sw          $s1, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1806C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1806C0u, 0x1805E8u, 0x1805F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1805F0u;
label_1805f0:
    // 0x1805f0: 0x92020410  lbu         $v0, 0x410($s0)
    ctx->pc = 0x1805f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x1805f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1805f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1805f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1805f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1805fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1805fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180600: 0xa2020410  sb          $v0, 0x410($s0)
    ctx->pc = 0x180600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1040), (uint8_t)GPR_U32(ctx, 2));
    // 0x180604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180608: 0x3e00008  jr          $ra
    ctx->pc = 0x180608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180608u;
        // 0x18060c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180610u;
}
