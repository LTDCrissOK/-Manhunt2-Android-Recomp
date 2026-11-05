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

// Function: sub_00281470
// Address: 0x281470 - 0x2814d0
void sub_00281470_0x281470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281470_0x281470");
#endif

    switch (ctx->pc) {
        case 0x281498u: goto label_281498;
        case 0x2814a4u: goto label_2814a4;
        case 0x2814bcu: goto label_2814bc;
        default: break;
    }

    ctx->pc = 0x281470u;

    // 0x281470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281474: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x281474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x281478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28147c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281480: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x281480u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x281484: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x281484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x281488: 0x26109b28  addiu       $s0, $s0, -0x64D8
    ctx->pc = 0x281488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941480));
    // 0x28148c: 0xac62a30c  sw          $v0, -0x5CF4($v1)
    ctx->pc = 0x28148cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FA30Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA30Cu, _value); } while (0);
    // 0x281490: 0xc07fafc  jal         func_1FEBF0
    ctx->pc = 0x281490u;
    SET_GPR_U32(ctx, 31, 0x281498u);
    ctx->pc = 0x281494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281490u;
    // 0x281494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEBF0u, 0x281490u, 0x281498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281498u;
label_281498:
    // 0x281498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28149c: 0xc07fb1e  jal         func_1FEC78
    ctx->pc = 0x28149Cu;
    SET_GPR_U32(ctx, 31, 0x2814A4u);
    ctx->pc = 0x2814A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28149Cu;
    // 0x2814a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC78u, 0x28149Cu, 0x2814A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2814A4u;
label_2814a4:
    // 0x2814a4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2814a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2814a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2814a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2814ac: 0x24a5a008  addiu       $a1, $a1, -0x5FF8
    ctx->pc = 0x2814acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942728));
    // 0x2814b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2814b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2814b4: 0xc0d9cc2  jal         func_367308
    ctx->pc = 0x2814B4u;
    SET_GPR_U32(ctx, 31, 0x2814BCu);
    ctx->pc = 0x2814B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2814B4u;
    // 0x2814b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x2814B4u, 0x2814BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2814BCu;
label_2814bc:
    // 0x2814bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2814bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2814c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2814c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2814c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2814C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2814C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2814C4u;
        // 0x2814c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2814C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2814CCu;
    // 0x2814cc: 0x0  nop
    ctx->pc = 0x2814ccu;
    // NOP
    ctx->pc = 0x2814d0u;
}
