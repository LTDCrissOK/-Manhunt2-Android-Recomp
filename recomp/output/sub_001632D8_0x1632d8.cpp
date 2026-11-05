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

// Function: sub_001632D8
// Address: 0x1632d8 - 0x163398
void sub_001632D8_0x1632d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001632D8_0x1632d8");
#endif

    switch (ctx->pc) {
        case 0x163310u: goto label_163310;
        case 0x16332cu: goto label_16332c;
        case 0x163338u: goto label_163338;
        case 0x163354u: goto label_163354;
        case 0x163360u: goto label_163360;
        case 0x163380u: goto label_163380;
        default: break;
    }

    ctx->pc = 0x1632d8u;

    // 0x1632d8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1632d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1632dc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1632dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1632e0: 0x8c620798  lw          $v0, 0x798($v1)
    ctx->pc = 0x1632e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0798u));
    // 0x1632e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1632e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1632e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1632ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1632ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1632f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1632f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1632f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1632f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1632f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1632f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1632fc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1632fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163300: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x163300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x163304: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x163304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x163308: 0xc04f098  jal         func_13C260
    ctx->pc = 0x163308u;
    SET_GPR_U32(ctx, 31, 0x163310u);
    ctx->pc = 0x16330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163308u;
    // 0x16330c: 0xac620798  sw          $v0, 0x798($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1944), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C260u, 0x163308u, 0x163310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163310u;
label_163310:
    // 0x163310: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x163310u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163318: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x163318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16331c: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x16331cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x163320: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x163320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x163324: 0xc0585ba  jal         func_1616E8
    ctx->pc = 0x163324u;
    SET_GPR_U32(ctx, 31, 0x16332Cu);
    ctx->pc = 0x163328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163324u;
    // 0x163328: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1616E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1616E8u, 0x163324u, 0x16332Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16332Cu;
label_16332c:
    // 0x16332c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16332cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163330: 0xc04f098  jal         func_13C260
    ctx->pc = 0x163330u;
    SET_GPR_U32(ctx, 31, 0x163338u);
    ctx->pc = 0x163334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163330u;
    // 0x163334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C260u, 0x163330u, 0x163338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163338u;
label_163338:
    // 0x163338: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x163338u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16333c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16333cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163340: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x163340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163344: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x163344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x163348: 0xac720008  sw          $s2, 0x8($v1)
    ctx->pc = 0x163348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 18));
    // 0x16334c: 0xc0585ba  jal         func_1616E8
    ctx->pc = 0x16334Cu;
    SET_GPR_U32(ctx, 31, 0x163354u);
    ctx->pc = 0x163350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16334Cu;
    // 0x163350: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1616E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1616E8u, 0x16334Cu, 0x163354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163354u;
label_163354:
    // 0x163354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163358: 0xc04f098  jal         func_13C260
    ctx->pc = 0x163358u;
    SET_GPR_U32(ctx, 31, 0x163360u);
    ctx->pc = 0x16335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163358u;
    // 0x16335c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C260u, 0x163358u, 0x163360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163360u;
label_163360:
    // 0x163360: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x163360u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163368: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x163368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16336c: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x16336cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x163370: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x163370u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x163374: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x163374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163378: 0xc0585ba  jal         func_1616E8
    ctx->pc = 0x163378u;
    SET_GPR_U32(ctx, 31, 0x163380u);
    ctx->pc = 0x16337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163378u;
    // 0x16337c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1616E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1616E8u, 0x163378u, 0x163380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163380u;
label_163380:
    // 0x163380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x163380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163384: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x163384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x163388: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x163388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16338c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16338cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x163390: 0x3e00008  jr          $ra
    ctx->pc = 0x163390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163390u;
        // 0x163394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163398u;
}
