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

// Function: sub_002956F0
// Address: 0x2956f0 - 0x2957a8
void sub_002956F0_0x2956f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002956F0_0x2956f0");
#endif

    switch (ctx->pc) {
        case 0x295704u: goto label_295704;
        case 0x295730u: goto label_295730;
        case 0x29574cu: goto label_29574c;
        case 0x295768u: goto label_295768;
        case 0x295784u: goto label_295784;
        case 0x295794u: goto label_295794;
        default: break;
    }

    ctx->pc = 0x2956f0u;

    // 0x2956f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2956f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2956f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2956f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2956f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2956f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2956fc: 0xc0a523e  jal         func_2948F8
    ctx->pc = 0x2956FCu;
    SET_GPR_U32(ctx, 31, 0x295704u);
    ctx->pc = 0x295700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2956FCu;
    // 0x295700: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2948F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2948F8u, 0x2956FCu, 0x295704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295704u;
label_295704:
    // 0x295704: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x295704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x295708: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x295708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x29570c: 0x24632fa0  addiu       $v1, $v1, 0x2FA0
    ctx->pc = 0x29570cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12192));
    // 0x295710: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x295710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x295714: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x295714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x295718: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29571c: 0x2406007d  addiu       $a2, $zero, 0x7D
    ctx->pc = 0x29571cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x295720: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x295720u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x295724: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x295724u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295728: 0xc0a55b6  jal         func_2956D8
    ctx->pc = 0x295728u;
    SET_GPR_U32(ctx, 31, 0x295730u);
    ctx->pc = 0x29572Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295728u;
    // 0x29572c: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956D8u, 0x295728u, 0x295730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295730u;
label_295730:
    // 0x295730: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x295730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x295734: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x295734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x295738: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x295738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x29573c: 0x24070088  addiu       $a3, $zero, 0x88
    ctx->pc = 0x29573cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x295740: 0x240800a7  addiu       $t0, $zero, 0xA7
    ctx->pc = 0x295740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x295744: 0xc0a55b6  jal         func_2956D8
    ctx->pc = 0x295744u;
    SET_GPR_U32(ctx, 31, 0x29574Cu);
    ctx->pc = 0x295748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295744u;
    // 0x295748: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956D8u, 0x295744u, 0x29574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29574Cu;
label_29574c:
    // 0x29574c: 0x2604009c  addiu       $a0, $s0, 0x9C
    ctx->pc = 0x29574cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x295750: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x295750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x295754: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x295754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x295758: 0x2407007a  addiu       $a3, $zero, 0x7A
    ctx->pc = 0x295758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x29575c: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x29575cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x295760: 0xc0a55b6  jal         func_2956D8
    ctx->pc = 0x295760u;
    SET_GPR_U32(ctx, 31, 0x295768u);
    ctx->pc = 0x295764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295760u;
    // 0x295764: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956D8u, 0x295760u, 0x295768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295768u;
label_295768:
    // 0x295768: 0x260400b4  addiu       $a0, $s0, 0xB4
    ctx->pc = 0x295768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x29576c: 0x240700c8  addiu       $a3, $zero, 0xC8
    ctx->pc = 0x29576cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x295770: 0x24080073  addiu       $t0, $zero, 0x73
    ctx->pc = 0x295770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x295774: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x295774u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x295778: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x295778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29577c: 0xc0a55b6  jal         func_2956D8
    ctx->pc = 0x29577Cu;
    SET_GPR_U32(ctx, 31, 0x295784u);
    ctx->pc = 0x295780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29577Cu;
    // 0x295780: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956D8u, 0x29577Cu, 0x295784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295784u;
label_295784:
    // 0x295784: 0x260400cc  addiu       $a0, $s0, 0xCC
    ctx->pc = 0x295784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
    // 0x295788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x295788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29578c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x29578Cu;
    SET_GPR_U32(ctx, 31, 0x295794u);
    ctx->pc = 0x295790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29578Cu;
    // 0x295790: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x29578Cu, 0x295794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295794u;
label_295794:
    // 0x295794: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x295794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295798: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x295798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29579c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29579cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2957a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2957A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2957A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2957A0u;
        // 0x2957a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2957A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2957A8u;
}
