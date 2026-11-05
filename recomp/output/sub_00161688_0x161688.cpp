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

// Function: sub_00161688
// Address: 0x161688 - 0x1616e8
void sub_00161688_0x161688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161688_0x161688");
#endif

    switch (ctx->pc) {
        case 0x1616acu: goto label_1616ac;
        case 0x1616b8u: goto label_1616b8;
        case 0x1616c4u: goto label_1616c4;
        case 0x1616d4u: goto label_1616d4;
        default: break;
    }

    ctx->pc = 0x161688u;

    // 0x161688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16168c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16168cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161690: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x161690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x161694: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x161694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161698: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x161698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16169c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16169cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616a0: 0xae260218  sw          $a2, 0x218($s1)
    ctx->pc = 0x1616a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 6));
    // 0x1616a4: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x1616A4u;
    SET_GPR_U32(ctx, 31, 0x1616ACu);
    ctx->pc = 0x1616A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616A4u;
    // 0x1616a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x1616A4u, 0x1616ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616ACu;
label_1616ac:
    // 0x1616ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1616acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616b0: 0xc0460e4  jal         func_118390
    ctx->pc = 0x1616B0u;
    SET_GPR_U32(ctx, 31, 0x1616B8u);
    ctx->pc = 0x1616B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616B0u;
    // 0x1616b4: 0xae2202e0  sw          $v0, 0x2E0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x1616B0u, 0x1616B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616B8u;
label_1616b8:
    // 0x1616b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1616b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616bc: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x1616BCu;
    SET_GPR_U32(ctx, 31, 0x1616C4u);
    ctx->pc = 0x1616C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616BCu;
    // 0x1616c0: 0xae220370  sw          $v0, 0x370($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 880), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x1616BCu, 0x1616C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616C4u;
label_1616c4:
    // 0x1616c4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1616c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1616c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1616c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1616cc: 0xc042136  jal         func_1084D8
    ctx->pc = 0x1616CCu;
    SET_GPR_U32(ctx, 31, 0x1616D4u);
    ctx->pc = 0x1616D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1616CCu;
    // 0x1616d0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x1616CCu, 0x1616D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1616D4u;
label_1616d4:
    // 0x1616d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1616d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1616d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1616d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1616dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1616dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1616e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1616E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1616E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1616E0u;
        // 0x1616e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1616E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1616E8u;
}
