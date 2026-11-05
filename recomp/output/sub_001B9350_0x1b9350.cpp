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

// Function: sub_001B9350
// Address: 0x1b9350 - 0x1b93f8
void sub_001B9350_0x1b9350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9350_0x1b9350");
#endif

    switch (ctx->pc) {
        case 0x1b93c4u: goto label_1b93c4;
        case 0x1b93dcu: goto label_1b93dc;
        default: break;
    }

    ctx->pc = 0x1b9350u;

    // 0x1b9350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b9354: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b9354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9358: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b9358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b935c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b935cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b9360: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b9360u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9364: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1b9364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1b9368: 0x8e031000  lw          $v1, 0x1000($s0)
    ctx->pc = 0x1b9368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4096)));
    // 0x1b936c: 0xac660068  sw          $a2, 0x68($v1)
    ctx->pc = 0x1b936cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 6));
    // 0x1b9370: 0x8c8203f0  lw          $v0, 0x3F0($a0)
    ctx->pc = 0x1b9370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1008)));
    // 0x1b9374: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x1b9374u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b9378: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1b9378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b937c: 0xac4601a0  sw          $a2, 0x1A0($v0)
    ctx->pc = 0x1b937cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 416), GPR_U32(ctx, 6));
    // 0x1b9380: 0x8c8303f0  lw          $v1, 0x3F0($a0)
    ctx->pc = 0x1b9380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1008)));
    // 0x1b9384: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x1b9384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b9388: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1b9388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b938c: 0xac70019c  sw          $s0, 0x19C($v1)
    ctx->pc = 0x1b938cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 16));
    // 0x1b9390: 0x8c8203f0  lw          $v0, 0x3F0($a0)
    ctx->pc = 0x1b9390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1008)));
    // 0x1b9394: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x1b9394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b9398: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1b9398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b939c: 0xac400198  sw          $zero, 0x198($v0)
    ctx->pc = 0x1b939cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 408), GPR_U32(ctx, 0));
    // 0x1b93a0: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x1b93a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x1b93a4: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x1b93a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1b93a8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1b93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b93ac: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1b93acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1b93b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B93B0u;
    {
        const bool branch_taken_0x1b93b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93B0u;
        // 0x1b93b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93b0) {
            ctx->pc = 0x1B93BCu;
            goto label_1b93bc;
        }
    }
    ctx->pc = 0x1B93B8u;
    // 0x1b93b8: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x1b93b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1b93bc:
    // 0x1b93bc: 0xc06fad8  jal         func_1BEB60
    ctx->pc = 0x1B93BCu;
    SET_GPR_U32(ctx, 31, 0x1B93C4u);
    ctx->pc = 0x1B93C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B93BCu;
    // 0x1b93c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEB60u, 0x1B93BCu, 0x1B93C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93C4u;
label_1b93c4:
    // 0x1b93c4: 0x8e060fe8  lw          $a2, 0xFE8($s0)
    ctx->pc = 0x1b93c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x1b93c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b93c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b93cc: 0x8e041000  lw          $a0, 0x1000($s0)
    ctx->pc = 0x1b93ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4096)));
    // 0x1b93d0: 0x24c600f0  addiu       $a2, $a2, 0xF0
    ctx->pc = 0x1b93d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
    // 0x1b93d4: 0xc071260  jal         func_1C4980
    ctx->pc = 0x1B93D4u;
    SET_GPR_U32(ctx, 31, 0x1B93DCu);
    ctx->pc = 0x1B93D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B93D4u;
    // 0x1b93d8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4980u, 0x1B93D4u, 0x1B93DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93DCu;
label_1b93dc:
    // 0x1b93dc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b93dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b93e0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b93e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b93e4: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1b93e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x1b93e8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b93e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b93ec: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1b93ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1b93f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B93F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B93F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93F0u;
        // 0x1b93f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B93F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B93F8u;
}
