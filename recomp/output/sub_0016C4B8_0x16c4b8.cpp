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

// Function: sub_0016C4B8
// Address: 0x16c4b8 - 0x16c510
void sub_0016C4B8_0x16c4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C4B8_0x16c4b8");
#endif

    switch (ctx->pc) {
        case 0x16c4d8u: goto label_16c4d8;
        case 0x16c4e4u: goto label_16c4e4;
        case 0x16c4f4u: goto label_16c4f4;
        case 0x16c4fcu: goto label_16c4fc;
        default: break;
    }

    ctx->pc = 0x16c4b8u;

    // 0x16c4b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c4bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c4c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c4c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16c4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c4c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16c4c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c4cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c4d0: 0xc04621e  jal         func_118878
    ctx->pc = 0x16C4D0u;
    SET_GPR_U32(ctx, 31, 0x16C4D8u);
    ctx->pc = 0x16C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4D0u;
    // 0x16c4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118878u, 0x16C4D0u, 0x16C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C4D8u;
label_16c4d8:
    // 0x16c4d8: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x16c4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x16c4dc: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x16C4DCu;
    SET_GPR_U32(ctx, 31, 0x16C4E4u);
    ctx->pc = 0x16C4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4DCu;
    // 0x16c4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x16C4DCu, 0x16C4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C4E4u;
label_16c4e4:
    // 0x16c4e4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16c4e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16c4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c4ec: 0xc042136  jal         func_1084D8
    ctx->pc = 0x16C4ECu;
    SET_GPR_U32(ctx, 31, 0x16C4F4u);
    ctx->pc = 0x16C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4ECu;
    // 0x16c4f0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x16C4ECu, 0x16C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C4F4u;
label_16c4f4:
    // 0x16c4f4: 0xc05b1c8  jal         func_16C720
    ctx->pc = 0x16C4F4u;
    SET_GPR_U32(ctx, 31, 0x16C4FCu);
    ctx->pc = 0x16C4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C4F4u;
    // 0x16c4f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C720u, 0x16C4F4u, 0x16C4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C4FCu;
label_16c4fc:
    // 0x16c4fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c4fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c500: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c508: 0x3e00008  jr          $ra
    ctx->pc = 0x16C508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C508u;
        // 0x16c50c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C510u;
}
