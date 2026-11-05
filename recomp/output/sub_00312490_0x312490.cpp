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

// Function: sub_00312490
// Address: 0x312490 - 0x312518
void sub_00312490_0x312490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312490_0x312490");
#endif

    switch (ctx->pc) {
        case 0x3124bcu: goto label_3124bc;
        case 0x3124c4u: goto label_3124c4;
        case 0x3124d4u: goto label_3124d4;
        case 0x3124e4u: goto label_3124e4;
        case 0x3124f8u: goto label_3124f8;
        default: break;
    }

    ctx->pc = 0x312490u;

    // 0x312490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x312490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x312494: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x312494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x312498: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x312498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31249c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31249cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3124a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3124a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3124a4: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x3124a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x3124a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3124a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3124ac: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x3124acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x3124b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3124b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3124b4: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x3124B4u;
    SET_GPR_U32(ctx, 31, 0x3124BCu);
    ctx->pc = 0x3124B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3124B4u;
    // 0x3124b8: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x3124B4u, 0x3124BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124BCu;
label_3124bc:
    // 0x3124bc: 0xc0c4808  jal         func_312020
    ctx->pc = 0x3124BCu;
    SET_GPR_U32(ctx, 31, 0x3124C4u);
    ctx->pc = 0x3124C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3124BCu;
    // 0x3124c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x3124BCu, 0x3124C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124C4u;
label_3124c4:
    // 0x3124c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3124c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3124c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3124c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3124cc: 0xc0c4828  jal         func_3120A0
    ctx->pc = 0x3124CCu;
    SET_GPR_U32(ctx, 31, 0x3124D4u);
    ctx->pc = 0x3124D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3124CCu;
    // 0x3124d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3120A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3120A0u, 0x3124CCu, 0x3124D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124D4u;
label_3124d4:
    // 0x3124d4: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x3124d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x3124d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3124d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3124dc: 0xc0c4890  jal         func_312240
    ctx->pc = 0x3124DCu;
    SET_GPR_U32(ctx, 31, 0x3124E4u);
    ctx->pc = 0x3124E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3124DCu;
    // 0x3124e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312240u, 0x3124DCu, 0x3124E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124E4u;
label_3124e4:
    // 0x3124e4: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x3124e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x3124e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3124e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3124ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3124ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3124f0: 0xc0c4898  jal         func_312260
    ctx->pc = 0x3124F0u;
    SET_GPR_U32(ctx, 31, 0x3124F8u);
    ctx->pc = 0x3124F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3124F0u;
    // 0x3124f4: 0x24a52490  addiu       $a1, $a1, 0x2490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312260u, 0x3124F0u, 0x3124F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124F8u;
label_3124f8:
    // 0x3124f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3124f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3124fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3124fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312500: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x312500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x312504: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x312504u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312508: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x312508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31250c: 0x3e00008  jr          $ra
    ctx->pc = 0x31250Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31250Cu;
        // 0x312510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31250Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312514u;
    // 0x312514: 0x0  nop
    ctx->pc = 0x312514u;
    // NOP
    ctx->pc = 0x312518u;
}
