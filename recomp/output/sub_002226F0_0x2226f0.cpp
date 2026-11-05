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

// Function: sub_002226F0
// Address: 0x2226f0 - 0x222dd8
void sub_002226F0_0x2226f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002226F0_0x2226f0");
#endif

    switch (ctx->pc) {
        case 0x222724u: goto label_222724;
        case 0x222738u: goto label_222738;
        case 0x222744u: goto label_222744;
        case 0x222754u: goto label_222754;
        case 0x222774u: goto label_222774;
        case 0x222798u: goto label_222798;
        case 0x2227bcu: goto label_2227bc;
        case 0x2227e0u: goto label_2227e0;
        case 0x222804u: goto label_222804;
        case 0x222828u: goto label_222828;
        case 0x22284cu: goto label_22284c;
        case 0x222870u: goto label_222870;
        case 0x222894u: goto label_222894;
        case 0x2228b8u: goto label_2228b8;
        case 0x2228dcu: goto label_2228dc;
        case 0x222900u: goto label_222900;
        case 0x222918u: goto label_222918;
        case 0x22293cu: goto label_22293c;
        case 0x222960u: goto label_222960;
        case 0x222984u: goto label_222984;
        case 0x2229a8u: goto label_2229a8;
        case 0x2229ccu: goto label_2229cc;
        case 0x2229f0u: goto label_2229f0;
        case 0x222a1cu: goto label_222a1c;
        case 0x222a2cu: goto label_222a2c;
        case 0x222a34u: goto label_222a34;
        case 0x222a60u: goto label_222a60;
        case 0x222a6cu: goto label_222a6c;
        case 0x222a80u: goto label_222a80;
        case 0x222a94u: goto label_222a94;
        case 0x222aacu: goto label_222aac;
        case 0x222ac0u: goto label_222ac0;
        case 0x222ad8u: goto label_222ad8;
        case 0x222afcu: goto label_222afc;
        case 0x222b10u: goto label_222b10;
        case 0x222b28u: goto label_222b28;
        case 0x222b3cu: goto label_222b3c;
        case 0x222b54u: goto label_222b54;
        case 0x222b68u: goto label_222b68;
        case 0x222b80u: goto label_222b80;
        case 0x222ba0u: goto label_222ba0;
        case 0x222bc0u: goto label_222bc0;
        case 0x222bd4u: goto label_222bd4;
        case 0x222becu: goto label_222bec;
        case 0x222c00u: goto label_222c00;
        case 0x222c18u: goto label_222c18;
        case 0x222c2cu: goto label_222c2c;
        case 0x222c44u: goto label_222c44;
        case 0x222c58u: goto label_222c58;
        case 0x222c70u: goto label_222c70;
        case 0x222c94u: goto label_222c94;
        case 0x222cb8u: goto label_222cb8;
        case 0x222cdcu: goto label_222cdc;
        case 0x222d00u: goto label_222d00;
        case 0x222d24u: goto label_222d24;
        case 0x222d48u: goto label_222d48;
        case 0x222d6cu: goto label_222d6c;
        case 0x222d90u: goto label_222d90;
        case 0x222da8u: goto label_222da8;
        case 0x222db8u: goto label_222db8;
        default: break;
    }

    ctx->pc = 0x2226f0u;

    // 0x2226f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2226f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2226f4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x2226f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x2226f8: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2226f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2226fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2226fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222700: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x222700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x222704: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x222704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x222708: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x222708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22270c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22270cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222710: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x222710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x222714: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x222714u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x222718: 0x24a530b0  addiu       $a1, $a1, 0x30B0
    ctx->pc = 0x222718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12464));
    // 0x22271c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22271Cu;
    SET_GPR_U32(ctx, 31, 0x222724u);
    ctx->pc = 0x222720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22271Cu;
    // 0x222720: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22271Cu, 0x222724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222724u;
label_222724:
    // 0x222724: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222728: 0x504000d2  beql        $v0, $zero, . + 4 + (0xD2 << 2)
    ctx->pc = 0x222728u;
    {
        const bool branch_taken_0x222728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x222728) {
            ctx->pc = 0x22272Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222728u;
            // 0x22272c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x222A74u;
            goto label_222a74;
        }
    }
    ctx->pc = 0x222730u;
    // 0x222730: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x222730u;
    SET_GPR_U32(ctx, 31, 0x222738u);
    ctx->pc = 0x222734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222730u;
    // 0x222734: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x222730u, 0x222738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222738u;
label_222738:
    // 0x222738: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x222738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22273c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x22273Cu;
    SET_GPR_U32(ctx, 31, 0x222744u);
    ctx->pc = 0x222740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22273Cu;
    // 0x222740: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x22273Cu, 0x222744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222744u;
label_222744:
    // 0x222744: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222748: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22274c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22274Cu;
    SET_GPR_U32(ctx, 31, 0x222754u);
    ctx->pc = 0x222750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22274Cu;
    // 0x222750: 0x24a530c0  addiu       $a1, $a1, 0x30C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22274Cu, 0x222754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222754u;
label_222754:
    // 0x222754: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222758: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222758u;
    {
        const bool branch_taken_0x222758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222758u;
        // 0x22275c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222758) {
            ctx->pc = 0x222768u;
            goto label_222768;
        }
    }
    ctx->pc = 0x222760u;
    // 0x222760: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x222760u;
    {
        const bool branch_taken_0x222760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222760u;
        // 0x222764: 0xae2001a0  sw          $zero, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222760) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x222768u;
label_222768:
    // 0x222768: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22276c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22276Cu;
    SET_GPR_U32(ctx, 31, 0x222774u);
    ctx->pc = 0x222770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22276Cu;
    // 0x222770: 0x24a530c8  addiu       $a1, $a1, 0x30C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22276Cu, 0x222774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222774u;
label_222774:
    // 0x222774: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222778: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222778u;
    {
        const bool branch_taken_0x222778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222778u;
        // 0x22277c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222778) {
            ctx->pc = 0x222788u;
            goto label_222788;
        }
    }
    ctx->pc = 0x222780u;
    // 0x222780: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x222780u;
    {
        const bool branch_taken_0x222780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222780u;
        // 0x222784: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222780) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x222788u;
label_222788:
    // 0x222788: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22278c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22278cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222790: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222790u;
    SET_GPR_U32(ctx, 31, 0x222798u);
    ctx->pc = 0x222794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222790u;
    // 0x222794: 0x24a530d0  addiu       $a1, $a1, 0x30D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222790u, 0x222798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222798u;
label_222798:
    // 0x222798: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22279c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22279Cu;
    {
        const bool branch_taken_0x22279c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22279Cu;
        // 0x2227a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22279c) {
            ctx->pc = 0x2227ACu;
            goto label_2227ac;
        }
    }
    ctx->pc = 0x2227A4u;
    // 0x2227a4: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x2227A4u;
    {
        const bool branch_taken_0x2227a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227A4u;
        // 0x2227a8: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227a4) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x2227ACu;
label_2227ac:
    // 0x2227ac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2227acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2227b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2227b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2227B4u;
    SET_GPR_U32(ctx, 31, 0x2227BCu);
    ctx->pc = 0x2227B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2227B4u;
    // 0x2227b8: 0x24a530e0  addiu       $a1, $a1, 0x30E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2227B4u, 0x2227BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2227BCu;
label_2227bc:
    // 0x2227bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2227bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2227c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2227C0u;
    {
        const bool branch_taken_0x2227c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227C0u;
        // 0x2227c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227c0) {
            ctx->pc = 0x2227D0u;
            goto label_2227d0;
        }
    }
    ctx->pc = 0x2227C8u;
    // 0x2227c8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x2227C8u;
    {
        const bool branch_taken_0x2227c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227C8u;
        // 0x2227cc: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227c8) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x2227D0u;
label_2227d0:
    // 0x2227d0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2227d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2227d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2227d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2227D8u;
    SET_GPR_U32(ctx, 31, 0x2227E0u);
    ctx->pc = 0x2227DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2227D8u;
    // 0x2227dc: 0x24a530e8  addiu       $a1, $a1, 0x30E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2227D8u, 0x2227E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2227E0u;
label_2227e0:
    // 0x2227e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2227e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2227e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2227E4u;
    {
        const bool branch_taken_0x2227e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227E4u;
        // 0x2227e8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227e4) {
            ctx->pc = 0x2227F4u;
            goto label_2227f4;
        }
    }
    ctx->pc = 0x2227ECu;
    // 0x2227ec: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x2227ECu;
    {
        const bool branch_taken_0x2227ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2227F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2227ECu;
        // 0x2227f0: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2227ec) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x2227F4u;
label_2227f4:
    // 0x2227f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2227f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2227f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2227f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2227fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2227FCu;
    SET_GPR_U32(ctx, 31, 0x222804u);
    ctx->pc = 0x222800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2227FCu;
    // 0x222800: 0x24a530f8  addiu       $a1, $a1, 0x30F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2227FCu, 0x222804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222804u;
label_222804:
    // 0x222804: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222808: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222808u;
    {
        const bool branch_taken_0x222808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222808u;
        // 0x22280c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222808) {
            ctx->pc = 0x222818u;
            goto label_222818;
        }
    }
    ctx->pc = 0x222810u;
    // 0x222810: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x222810u;
    {
        const bool branch_taken_0x222810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222810u;
        // 0x222814: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222810) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x222818u;
label_222818:
    // 0x222818: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22281c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22281cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222820: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222820u;
    SET_GPR_U32(ctx, 31, 0x222828u);
    ctx->pc = 0x222824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222820u;
    // 0x222824: 0x24a53108  addiu       $a1, $a1, 0x3108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222820u, 0x222828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222828u;
label_222828:
    // 0x222828: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22282c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22282Cu;
    {
        const bool branch_taken_0x22282c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22282Cu;
        // 0x222830: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22282c) {
            ctx->pc = 0x22283Cu;
            goto label_22283c;
        }
    }
    ctx->pc = 0x222834u;
    // 0x222834: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x222834u;
    {
        const bool branch_taken_0x222834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222834u;
        // 0x222838: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222834) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x22283Cu;
label_22283c:
    // 0x22283c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22283cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222840: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222844: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222844u;
    SET_GPR_U32(ctx, 31, 0x22284Cu);
    ctx->pc = 0x222848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222844u;
    // 0x222848: 0x24a53110  addiu       $a1, $a1, 0x3110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222844u, 0x22284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22284Cu;
label_22284c:
    // 0x22284c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22284cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222850: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222850u;
    {
        const bool branch_taken_0x222850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222850u;
        // 0x222854: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222850) {
            ctx->pc = 0x222860u;
            goto label_222860;
        }
    }
    ctx->pc = 0x222858u;
    // 0x222858: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x222858u;
    {
        const bool branch_taken_0x222858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22285Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222858u;
        // 0x22285c: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222858) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x222860u;
label_222860:
    // 0x222860: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222864: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222868: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222868u;
    SET_GPR_U32(ctx, 31, 0x222870u);
    ctx->pc = 0x22286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222868u;
    // 0x22286c: 0x24a53118  addiu       $a1, $a1, 0x3118 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222868u, 0x222870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222870u;
label_222870:
    // 0x222870: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222874: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222874u;
    {
        const bool branch_taken_0x222874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222874u;
        // 0x222878: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222874) {
            ctx->pc = 0x222884u;
            goto label_222884;
        }
    }
    ctx->pc = 0x22287Cu;
    // 0x22287c: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x22287Cu;
    {
        const bool branch_taken_0x22287c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22287Cu;
        // 0x222880: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22287c) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x222884u;
label_222884:
    // 0x222884: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222888: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22288c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22288Cu;
    SET_GPR_U32(ctx, 31, 0x222894u);
    ctx->pc = 0x222890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22288Cu;
    // 0x222890: 0x24a53120  addiu       $a1, $a1, 0x3120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22288Cu, 0x222894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222894u;
label_222894:
    // 0x222894: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222898: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222898u;
    {
        const bool branch_taken_0x222898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22289Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222898u;
        // 0x22289c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222898) {
            ctx->pc = 0x2228A8u;
            goto label_2228a8;
        }
    }
    ctx->pc = 0x2228A0u;
    // 0x2228a0: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2228A0u;
    {
        const bool branch_taken_0x2228a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228A0u;
        // 0x2228a4: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228a0) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x2228A8u;
label_2228a8:
    // 0x2228a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2228a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2228ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2228acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2228b0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2228B0u;
    SET_GPR_U32(ctx, 31, 0x2228B8u);
    ctx->pc = 0x2228B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2228B0u;
    // 0x2228b4: 0x24a53130  addiu       $a1, $a1, 0x3130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2228B0u, 0x2228B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228B8u;
label_2228b8:
    // 0x2228b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2228b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2228bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2228BCu;
    {
        const bool branch_taken_0x2228bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228BCu;
        // 0x2228c0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228bc) {
            ctx->pc = 0x2228CCu;
            goto label_2228cc;
        }
    }
    ctx->pc = 0x2228C4u;
    // 0x2228c4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2228C4u;
    {
        const bool branch_taken_0x2228c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228C4u;
        // 0x2228c8: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228c4) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x2228CCu;
label_2228cc:
    // 0x2228cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2228ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2228d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2228d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2228d4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2228D4u;
    SET_GPR_U32(ctx, 31, 0x2228DCu);
    ctx->pc = 0x2228D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2228D4u;
    // 0x2228d8: 0x24a53140  addiu       $a1, $a1, 0x3140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2228D4u, 0x2228DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2228DCu;
label_2228dc:
    // 0x2228dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2228dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2228e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2228E0u;
    {
        const bool branch_taken_0x2228e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228E0u;
        // 0x2228e4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228e0) {
            ctx->pc = 0x2228F0u;
            goto label_2228f0;
        }
    }
    ctx->pc = 0x2228E8u;
    // 0x2228e8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2228E8u;
    {
        const bool branch_taken_0x2228e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2228ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2228E8u;
        // 0x2228ec: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2228e8) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x2228F0u;
label_2228f0:
    // 0x2228f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2228f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2228f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2228f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2228f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2228F8u;
    SET_GPR_U32(ctx, 31, 0x222900u);
    ctx->pc = 0x2228FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2228F8u;
    // 0x2228fc: 0x24a51968  addiu       $a1, $a1, 0x1968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2228F8u, 0x222900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222900u;
label_222900:
    // 0x222900: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222904: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x222904u;
    {
        const bool branch_taken_0x222904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222904u;
        // 0x222908: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222904) {
            ctx->pc = 0x222A64u;
            goto label_222a64;
        }
    }
    ctx->pc = 0x22290Cu;
    // 0x22290c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22290cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222910: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222910u;
    SET_GPR_U32(ctx, 31, 0x222918u);
    ctx->pc = 0x222914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222910u;
    // 0x222914: 0x24a53148  addiu       $a1, $a1, 0x3148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222910u, 0x222918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222918u;
label_222918:
    // 0x222918: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22291c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22291Cu;
    {
        const bool branch_taken_0x22291c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22291Cu;
        // 0x222920: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22291c) {
            ctx->pc = 0x22292Cu;
            goto label_22292c;
        }
    }
    ctx->pc = 0x222924u;
    // 0x222924: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x222924u;
    {
        const bool branch_taken_0x222924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222924u;
        // 0x222928: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222924) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x22292Cu;
label_22292c:
    // 0x22292c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x22292cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222930: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222934: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222934u;
    SET_GPR_U32(ctx, 31, 0x22293Cu);
    ctx->pc = 0x222938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222934u;
    // 0x222938: 0x24a53160  addiu       $a1, $a1, 0x3160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222934u, 0x22293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22293Cu;
label_22293c:
    // 0x22293c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22293cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222940: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222940u;
    {
        const bool branch_taken_0x222940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222940u;
        // 0x222944: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222940) {
            ctx->pc = 0x222950u;
            goto label_222950;
        }
    }
    ctx->pc = 0x222948u;
    // 0x222948: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x222948u;
    {
        const bool branch_taken_0x222948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222948u;
        // 0x22294c: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222948) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x222950u;
label_222950:
    // 0x222950: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222954: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222958: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222958u;
    SET_GPR_U32(ctx, 31, 0x222960u);
    ctx->pc = 0x22295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222958u;
    // 0x22295c: 0x24a53170  addiu       $a1, $a1, 0x3170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222958u, 0x222960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222960u;
label_222960:
    // 0x222960: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222964: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222964u;
    {
        const bool branch_taken_0x222964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222964u;
        // 0x222968: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222964) {
            ctx->pc = 0x222974u;
            goto label_222974;
        }
    }
    ctx->pc = 0x22296Cu;
    // 0x22296c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x22296Cu;
    {
        const bool branch_taken_0x22296c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22296Cu;
        // 0x222970: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22296c) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x222974u;
label_222974:
    // 0x222974: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222978: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22297c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22297Cu;
    SET_GPR_U32(ctx, 31, 0x222984u);
    ctx->pc = 0x222980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22297Cu;
    // 0x222980: 0x24a53180  addiu       $a1, $a1, 0x3180 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22297Cu, 0x222984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222984u;
label_222984:
    // 0x222984: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222988: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222988u;
    {
        const bool branch_taken_0x222988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22298Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222988u;
        // 0x22298c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222988) {
            ctx->pc = 0x222998u;
            goto label_222998;
        }
    }
    ctx->pc = 0x222990u;
    // 0x222990: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x222990u;
    {
        const bool branch_taken_0x222990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222990u;
        // 0x222994: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222990) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x222998u;
label_222998:
    // 0x222998: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22299c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22299cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2229a0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2229A0u;
    SET_GPR_U32(ctx, 31, 0x2229A8u);
    ctx->pc = 0x2229A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2229A0u;
    // 0x2229a4: 0x24a53188  addiu       $a1, $a1, 0x3188 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2229A0u, 0x2229A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229A8u;
label_2229a8:
    // 0x2229a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2229a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2229ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2229ACu;
    {
        const bool branch_taken_0x2229ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2229B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229ACu;
        // 0x2229b0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229ac) {
            ctx->pc = 0x2229BCu;
            goto label_2229bc;
        }
    }
    ctx->pc = 0x2229B4u;
    // 0x2229b4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2229B4u;
    {
        const bool branch_taken_0x2229b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2229B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229B4u;
        // 0x2229b8: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229b4) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x2229BCu;
label_2229bc:
    // 0x2229bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2229bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2229c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2229c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2229c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2229C4u;
    SET_GPR_U32(ctx, 31, 0x2229CCu);
    ctx->pc = 0x2229C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2229C4u;
    // 0x2229c8: 0x24a53198  addiu       $a1, $a1, 0x3198 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2229C4u, 0x2229CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229CCu;
label_2229cc:
    // 0x2229cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2229ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2229d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2229D0u;
    {
        const bool branch_taken_0x2229d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2229D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229D0u;
        // 0x2229d4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229d0) {
            ctx->pc = 0x2229E0u;
            goto label_2229e0;
        }
    }
    ctx->pc = 0x2229D8u;
    // 0x2229d8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2229D8u;
    {
        const bool branch_taken_0x2229d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2229DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229D8u;
        // 0x2229dc: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229d8) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x2229E0u;
label_2229e0:
    // 0x2229e0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2229e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2229e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2229e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2229e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2229E8u;
    SET_GPR_U32(ctx, 31, 0x2229F0u);
    ctx->pc = 0x2229ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2229E8u;
    // 0x2229ec: 0x24a531a8  addiu       $a1, $a1, 0x31A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2229E8u, 0x2229F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2229F0u;
label_2229f0:
    // 0x2229f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2229f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2229f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2229F4u;
    {
        const bool branch_taken_0x2229f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2229F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229F4u;
        // 0x2229f8: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229f4) {
            ctx->pc = 0x222A04u;
            goto label_222a04;
        }
    }
    ctx->pc = 0x2229FCu;
    // 0x2229fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2229FCu;
    {
        const bool branch_taken_0x2229fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2229FCu;
        // 0x222a00: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2229fc) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x222A04u;
label_222a04:
    // 0x222a04: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x222a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x222a08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x222a08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a0c: 0x245031b8  addiu       $s0, $v0, 0x31B8
    ctx->pc = 0x222a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12728));
    // 0x222a10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a14: 0xc0d758e  jal         func_35D638
    ctx->pc = 0x222A14u;
    SET_GPR_U32(ctx, 31, 0x222A1Cu);
    ctx->pc = 0x222A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A14u;
    // 0x222a18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x222A14u, 0x222A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A1Cu;
label_222a1c:
    // 0x222a1c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x222A1Cu;
    {
        const bool branch_taken_0x222a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A1Cu;
        // 0x222a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a1c) {
            ctx->pc = 0x222A44u;
            goto label_222a44;
        }
    }
    ctx->pc = 0x222A24u;
    // 0x222a24: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x222A24u;
    SET_GPR_U32(ctx, 31, 0x222A2Cu);
    ctx->pc = 0x222A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A24u;
    // 0x222a28: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x222A24u, 0x222A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A2Cu;
label_222a2c:
    // 0x222a2c: 0xc0f02a8  jal         func_3C0AA0
    ctx->pc = 0x222A2Cu;
    SET_GPR_U32(ctx, 31, 0x222A34u);
    ctx->pc = 0x222A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A2Cu;
    // 0x222a30: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0AA0u, 0x222A2Cu, 0x222A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A34u;
label_222a34:
    // 0x222a34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222A34u;
    {
        const bool branch_taken_0x222a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A34u;
        // 0x222a38: 0x24420013  addiu       $v0, $v0, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a34) {
            ctx->pc = 0x222A44u;
            goto label_222a44;
        }
    }
    ctx->pc = 0x222A3Cu;
    // 0x222a3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x222A3Cu;
    {
        const bool branch_taken_0x222a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A3Cu;
        // 0x222a40: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a3c) {
            ctx->pc = 0x222A48u;
            goto label_222a48;
        }
    }
    ctx->pc = 0x222A44u;
label_222a44:
    // 0x222a44: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x222a44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222a48:
    // 0x222a48: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x222A48u;
    {
        const bool branch_taken_0x222a48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A48u;
        // 0x222a4c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a48) {
            ctx->pc = 0x222A60u;
            goto label_222a60;
        }
    }
    ctx->pc = 0x222A50u;
    // 0x222a50: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x222a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222a54: 0x24a531d0  addiu       $a1, $a1, 0x31D0
    ctx->pc = 0x222a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12752));
    // 0x222a58: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x222A58u;
    SET_GPR_U32(ctx, 31, 0x222A60u);
    ctx->pc = 0x222A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A58u;
    // 0x222a5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x222A58u, 0x222A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A60u;
label_222a60:
    // 0x222a60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_222a64:
    // 0x222a64: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x222A64u;
    SET_GPR_U32(ctx, 31, 0x222A6Cu);
    ctx->pc = 0x222A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A64u;
    // 0x222a68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x222A64u, 0x222A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A6Cu;
label_222a6c:
    // 0x222a6c: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x222A6Cu;
    {
        const bool branch_taken_0x222a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A6Cu;
        // 0x222a70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a6c) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222A74u;
label_222a74:
    // 0x222a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a78: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222A78u;
    SET_GPR_U32(ctx, 31, 0x222A80u);
    ctx->pc = 0x222A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A78u;
    // 0x222a7c: 0x24a531f8  addiu       $a1, $a1, 0x31F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222A78u, 0x222A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A80u;
label_222a80:
    // 0x222a80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222a84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222A84u;
    {
        const bool branch_taken_0x222a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A84u;
        // 0x222a88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a84) {
            ctx->pc = 0x222A9Cu;
            goto label_222a9c;
        }
    }
    ctx->pc = 0x222A8Cu;
    // 0x222a8c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x222A8Cu;
    SET_GPR_U32(ctx, 31, 0x222A94u);
    ctx->pc = 0x222A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222A8Cu;
    // 0x222a90: 0x262501a4  addiu       $a1, $s1, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x222A8Cu, 0x222A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222A94u;
label_222a94:
    // 0x222a94: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x222A94u;
    {
        const bool branch_taken_0x222a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222A94u;
        // 0x222a98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222a94) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222A9Cu;
label_222a9c:
    // 0x222a9c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222aa4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222AA4u;
    SET_GPR_U32(ctx, 31, 0x222AACu);
    ctx->pc = 0x222AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222AA4u;
    // 0x222aa8: 0x24a53208  addiu       $a1, $a1, 0x3208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222AA4u, 0x222AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AACu;
label_222aac:
    // 0x222aac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222ab0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222AB0u;
    {
        const bool branch_taken_0x222ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222AB0u;
        // 0x222ab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ab0) {
            ctx->pc = 0x222AC8u;
            goto label_222ac8;
        }
    }
    ctx->pc = 0x222AB8u;
    // 0x222ab8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x222AB8u;
    SET_GPR_U32(ctx, 31, 0x222AC0u);
    ctx->pc = 0x222ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222AB8u;
    // 0x222abc: 0x262501a8  addiu       $a1, $s1, 0x1A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x222AB8u, 0x222AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AC0u;
label_222ac0:
    // 0x222ac0: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x222AC0u;
    {
        const bool branch_taken_0x222ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222AC0u;
        // 0x222ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ac0) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222AC8u;
label_222ac8:
    // 0x222ac8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222ad0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222AD0u;
    SET_GPR_U32(ctx, 31, 0x222AD8u);
    ctx->pc = 0x222AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222AD0u;
    // 0x222ad4: 0x24a53218  addiu       $a1, $a1, 0x3218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222AD0u, 0x222AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AD8u;
label_222ad8:
    // 0x222ad8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222adc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222ADCu;
    {
        const bool branch_taken_0x222adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222ADCu;
        // 0x222ae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222adc) {
            ctx->pc = 0x222AECu;
            goto label_222aec;
        }
    }
    ctx->pc = 0x222AE4u;
    // 0x222ae4: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x222AE4u;
    {
        const bool branch_taken_0x222ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222AE4u;
        // 0x222ae8: 0xae2201f0  sw          $v0, 0x1F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ae4) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222AECu;
label_222aec:
    // 0x222aec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222af4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222AF4u;
    SET_GPR_U32(ctx, 31, 0x222AFCu);
    ctx->pc = 0x222AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222AF4u;
    // 0x222af8: 0x24a52988  addiu       $a1, $a1, 0x2988 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222AF4u, 0x222AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AFCu;
label_222afc:
    // 0x222afc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222b00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222B00u;
    {
        const bool branch_taken_0x222b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B00u;
        // 0x222b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b00) {
            ctx->pc = 0x222B18u;
            goto label_222b18;
        }
    }
    ctx->pc = 0x222B08u;
    // 0x222b08: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x222B08u;
    SET_GPR_U32(ctx, 31, 0x222B10u);
    ctx->pc = 0x222B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B08u;
    // 0x222b0c: 0x262501ac  addiu       $a1, $s1, 0x1AC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x222B08u, 0x222B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B10u;
label_222b10:
    // 0x222b10: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x222B10u;
    {
        const bool branch_taken_0x222b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B10u;
        // 0x222b14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b10) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222B18u;
label_222b18:
    // 0x222b18: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b20: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222B20u;
    SET_GPR_U32(ctx, 31, 0x222B28u);
    ctx->pc = 0x222B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B20u;
    // 0x222b24: 0x24a53228  addiu       $a1, $a1, 0x3228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222B20u, 0x222B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B28u;
label_222b28:
    // 0x222b28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222b2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222B2Cu;
    {
        const bool branch_taken_0x222b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B2Cu;
        // 0x222b30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b2c) {
            ctx->pc = 0x222B44u;
            goto label_222b44;
        }
    }
    ctx->pc = 0x222B34u;
    // 0x222b34: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x222B34u;
    SET_GPR_U32(ctx, 31, 0x222B3Cu);
    ctx->pc = 0x222B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B34u;
    // 0x222b38: 0x262501d8  addiu       $a1, $s1, 0x1D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x222B34u, 0x222B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B3Cu;
label_222b3c:
    // 0x222b3c: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x222B3Cu;
    {
        const bool branch_taken_0x222b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B3Cu;
        // 0x222b40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b3c) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222B44u;
label_222b44:
    // 0x222b44: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b4c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222B4Cu;
    SET_GPR_U32(ctx, 31, 0x222B54u);
    ctx->pc = 0x222B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B4Cu;
    // 0x222b50: 0x24a53238  addiu       $a1, $a1, 0x3238 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222B4Cu, 0x222B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B54u;
label_222b54:
    // 0x222b54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222b58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222B58u;
    {
        const bool branch_taken_0x222b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B58u;
        // 0x222b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b58) {
            ctx->pc = 0x222B70u;
            goto label_222b70;
        }
    }
    ctx->pc = 0x222B60u;
    // 0x222b60: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x222B60u;
    SET_GPR_U32(ctx, 31, 0x222B68u);
    ctx->pc = 0x222B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B60u;
    // 0x222b64: 0x262501e0  addiu       $a1, $s1, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x222B60u, 0x222B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B68u;
label_222b68:
    // 0x222b68: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x222B68u;
    {
        const bool branch_taken_0x222b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B68u;
        // 0x222b6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b68) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222B70u;
label_222b70:
    // 0x222b70: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222b78: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222B78u;
    SET_GPR_U32(ctx, 31, 0x222B80u);
    ctx->pc = 0x222B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B78u;
    // 0x222b7c: 0x24a53250  addiu       $a1, $a1, 0x3250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222B78u, 0x222B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222B80u;
label_222b80:
    // 0x222b80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222b84: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x222B84u;
    {
        const bool branch_taken_0x222b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222B84u;
        // 0x222b88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222b84) {
            ctx->pc = 0x222BB0u;
            goto label_222bb0;
        }
    }
    ctx->pc = 0x222B8Cu;
    // 0x222b8c: 0x8e2501d4  lw          $a1, 0x1D4($s1)
    ctx->pc = 0x222b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x222b90: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x222b90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x222b94: 0x24a501bc  addiu       $a1, $a1, 0x1BC
    ctx->pc = 0x222b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 444));
    // 0x222b98: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x222B98u;
    SET_GPR_U32(ctx, 31, 0x222BA0u);
    ctx->pc = 0x222B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222B98u;
    // 0x222b9c: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x222B98u, 0x222BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222BA0u;
label_222ba0:
    // 0x222ba0: 0x8e2201d4  lw          $v0, 0x1D4($s1)
    ctx->pc = 0x222ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x222ba4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x222ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x222ba8: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x222BA8u;
    {
        const bool branch_taken_0x222ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222BA8u;
        // 0x222bac: 0xae2201d4  sw          $v0, 0x1D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ba8) {
            ctx->pc = 0x222DB8u;
            goto label_222db8;
        }
    }
    ctx->pc = 0x222BB0u;
label_222bb0:
    // 0x222bb0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222bb8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222BB8u;
    SET_GPR_U32(ctx, 31, 0x222BC0u);
    ctx->pc = 0x222BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222BB8u;
    // 0x222bbc: 0x24a53260  addiu       $a1, $a1, 0x3260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222BB8u, 0x222BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222BC0u;
label_222bc0:
    // 0x222bc0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222bc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222BC4u;
    {
        const bool branch_taken_0x222bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222BC4u;
        // 0x222bc8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bc4) {
            ctx->pc = 0x222BDCu;
            goto label_222bdc;
        }
    }
    ctx->pc = 0x222BCCu;
    // 0x222bcc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x222BCCu;
    SET_GPR_U32(ctx, 31, 0x222BD4u);
    ctx->pc = 0x222BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222BCCu;
    // 0x222bd0: 0x262501b0  addiu       $a1, $s1, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x222BCCu, 0x222BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222BD4u;
label_222bd4:
    // 0x222bd4: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x222BD4u;
    {
        const bool branch_taken_0x222bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222BD4u;
        // 0x222bd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bd4) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222BDCu;
label_222bdc:
    // 0x222bdc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222be4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222BE4u;
    SET_GPR_U32(ctx, 31, 0x222BECu);
    ctx->pc = 0x222BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222BE4u;
    // 0x222be8: 0x24a53278  addiu       $a1, $a1, 0x3278 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222BE4u, 0x222BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222BECu;
label_222bec:
    // 0x222bec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222bf0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222BF0u;
    {
        const bool branch_taken_0x222bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222BF0u;
        // 0x222bf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222bf0) {
            ctx->pc = 0x222C08u;
            goto label_222c08;
        }
    }
    ctx->pc = 0x222BF8u;
    // 0x222bf8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x222BF8u;
    SET_GPR_U32(ctx, 31, 0x222C00u);
    ctx->pc = 0x222BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222BF8u;
    // 0x222bfc: 0x262501b4  addiu       $a1, $s1, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x222BF8u, 0x222C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C00u;
label_222c00:
    // 0x222c00: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x222C00u;
    {
        const bool branch_taken_0x222c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C00u;
        // 0x222c04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c00) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222C08u;
label_222c08:
    // 0x222c08: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222c0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c10: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222C10u;
    SET_GPR_U32(ctx, 31, 0x222C18u);
    ctx->pc = 0x222C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222C10u;
    // 0x222c14: 0x24a53290  addiu       $a1, $a1, 0x3290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222C10u, 0x222C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C18u;
label_222c18:
    // 0x222c18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222c1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222C1Cu;
    {
        const bool branch_taken_0x222c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C1Cu;
        // 0x222c20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c1c) {
            ctx->pc = 0x222C34u;
            goto label_222c34;
        }
    }
    ctx->pc = 0x222C24u;
    // 0x222c24: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x222C24u;
    SET_GPR_U32(ctx, 31, 0x222C2Cu);
    ctx->pc = 0x222C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222C24u;
    // 0x222c28: 0x262501b8  addiu       $a1, $s1, 0x1B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x222C24u, 0x222C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C2Cu;
label_222c2c:
    // 0x222c2c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x222C2Cu;
    {
        const bool branch_taken_0x222c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C2Cu;
        // 0x222c30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c2c) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222C34u;
label_222c34:
    // 0x222c34: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c3c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222C3Cu;
    SET_GPR_U32(ctx, 31, 0x222C44u);
    ctx->pc = 0x222C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222C3Cu;
    // 0x222c40: 0x24a532a0  addiu       $a1, $a1, 0x32A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222C3Cu, 0x222C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C44u;
label_222c44:
    // 0x222c44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222c48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222C48u;
    {
        const bool branch_taken_0x222c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C48u;
        // 0x222c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c48) {
            ctx->pc = 0x222C60u;
            goto label_222c60;
        }
    }
    ctx->pc = 0x222C50u;
    // 0x222c50: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x222C50u;
    SET_GPR_U32(ctx, 31, 0x222C58u);
    ctx->pc = 0x222C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222C50u;
    // 0x222c54: 0x262501e8  addiu       $a1, $s1, 0x1E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x222C50u, 0x222C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C58u;
label_222c58:
    // 0x222c58: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x222C58u;
    {
        const bool branch_taken_0x222c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C58u;
        // 0x222c5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c58) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222C60u;
label_222c60:
    // 0x222c60: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c68: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222C68u;
    SET_GPR_U32(ctx, 31, 0x222C70u);
    ctx->pc = 0x222C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222C68u;
    // 0x222c6c: 0x24a532b8  addiu       $a1, $a1, 0x32B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222C68u, 0x222C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C70u;
label_222c70:
    // 0x222c70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222c74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222C74u;
    {
        const bool branch_taken_0x222c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C74u;
        // 0x222c78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c74) {
            ctx->pc = 0x222C84u;
            goto label_222c84;
        }
    }
    ctx->pc = 0x222C7Cu;
    // 0x222c7c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x222C7Cu;
    {
        const bool branch_taken_0x222c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C7Cu;
        // 0x222c80: 0xae2201f4  sw          $v0, 0x1F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c7c) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222C84u;
label_222c84:
    // 0x222c84: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222c8c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222C8Cu;
    SET_GPR_U32(ctx, 31, 0x222C94u);
    ctx->pc = 0x222C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222C8Cu;
    // 0x222c90: 0x24a532c8  addiu       $a1, $a1, 0x32C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222C8Cu, 0x222C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222C94u;
label_222c94:
    // 0x222c94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222c98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222C98u;
    {
        const bool branch_taken_0x222c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222C98u;
        // 0x222c9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222c98) {
            ctx->pc = 0x222CA8u;
            goto label_222ca8;
        }
    }
    ctx->pc = 0x222CA0u;
    // 0x222ca0: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x222CA0u;
    {
        const bool branch_taken_0x222ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CA0u;
        // 0x222ca4: 0xae22020c  sw          $v0, 0x20C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ca0) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222CA8u;
label_222ca8:
    // 0x222ca8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222cb0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222CB0u;
    SET_GPR_U32(ctx, 31, 0x222CB8u);
    ctx->pc = 0x222CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222CB0u;
    // 0x222cb4: 0x24a532d8  addiu       $a1, $a1, 0x32D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222CB0u, 0x222CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222CB8u;
label_222cb8:
    // 0x222cb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222cbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222CBCu;
    {
        const bool branch_taken_0x222cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CBCu;
        // 0x222cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cbc) {
            ctx->pc = 0x222CCCu;
            goto label_222ccc;
        }
    }
    ctx->pc = 0x222CC4u;
    // 0x222cc4: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x222CC4u;
    {
        const bool branch_taken_0x222cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CC4u;
        // 0x222cc8: 0xae2201f8  sw          $v0, 0x1F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222cc4) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222CCCu;
label_222ccc:
    // 0x222ccc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222cd4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222CD4u;
    SET_GPR_U32(ctx, 31, 0x222CDCu);
    ctx->pc = 0x222CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222CD4u;
    // 0x222cd8: 0x24a532e0  addiu       $a1, $a1, 0x32E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222CD4u, 0x222CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222CDCu;
label_222cdc:
    // 0x222cdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222ce0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222CE0u;
    {
        const bool branch_taken_0x222ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CE0u;
        // 0x222ce4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ce0) {
            ctx->pc = 0x222CF0u;
            goto label_222cf0;
        }
    }
    ctx->pc = 0x222CE8u;
    // 0x222ce8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x222CE8u;
    {
        const bool branch_taken_0x222ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222CE8u;
        // 0x222cec: 0xae2201fc  sw          $v0, 0x1FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222ce8) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222CF0u;
label_222cf0:
    // 0x222cf0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222cf8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222CF8u;
    SET_GPR_U32(ctx, 31, 0x222D00u);
    ctx->pc = 0x222CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222CF8u;
    // 0x222cfc: 0x24a532e8  addiu       $a1, $a1, 0x32E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222CF8u, 0x222D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D00u;
label_222d00:
    // 0x222d00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222d04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222D04u;
    {
        const bool branch_taken_0x222d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D04u;
        // 0x222d08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d04) {
            ctx->pc = 0x222D14u;
            goto label_222d14;
        }
    }
    ctx->pc = 0x222D0Cu;
    // 0x222d0c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x222D0Cu;
    {
        const bool branch_taken_0x222d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D0Cu;
        // 0x222d10: 0xae220200  sw          $v0, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d0c) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222D14u;
label_222d14:
    // 0x222d14: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222d18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d1c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222D1Cu;
    SET_GPR_U32(ctx, 31, 0x222D24u);
    ctx->pc = 0x222D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D1Cu;
    // 0x222d20: 0x24a532f8  addiu       $a1, $a1, 0x32F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222D1Cu, 0x222D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D24u;
label_222d24:
    // 0x222d24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222d28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222D28u;
    {
        const bool branch_taken_0x222d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D28u;
        // 0x222d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d28) {
            ctx->pc = 0x222D38u;
            goto label_222d38;
        }
    }
    ctx->pc = 0x222D30u;
    // 0x222d30: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x222D30u;
    {
        const bool branch_taken_0x222d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D30u;
        // 0x222d34: 0xae220204  sw          $v0, 0x204($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d30) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222D38u;
label_222d38:
    // 0x222d38: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222d3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d40: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222D40u;
    SET_GPR_U32(ctx, 31, 0x222D48u);
    ctx->pc = 0x222D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D40u;
    // 0x222d44: 0x24a53310  addiu       $a1, $a1, 0x3310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222D40u, 0x222D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D48u;
label_222d48:
    // 0x222d48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222d4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222D4Cu;
    {
        const bool branch_taken_0x222d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D4Cu;
        // 0x222d50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d4c) {
            ctx->pc = 0x222D5Cu;
            goto label_222d5c;
        }
    }
    ctx->pc = 0x222D54u;
    // 0x222d54: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x222D54u;
    {
        const bool branch_taken_0x222d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D54u;
        // 0x222d58: 0xae220208  sw          $v0, 0x208($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d54) {
            ctx->pc = 0x222DBCu;
            goto label_222dbc;
        }
    }
    ctx->pc = 0x222D5Cu;
label_222d5c:
    // 0x222d5c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d64: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222D64u;
    SET_GPR_U32(ctx, 31, 0x222D6Cu);
    ctx->pc = 0x222D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D64u;
    // 0x222d68: 0x24a53328  addiu       $a1, $a1, 0x3328 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222D64u, 0x222D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D6Cu;
label_222d6c:
    // 0x222d6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222d70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x222D70u;
    {
        const bool branch_taken_0x222d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D70u;
        // 0x222d74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d70) {
            ctx->pc = 0x222D80u;
            goto label_222d80;
        }
    }
    ctx->pc = 0x222D78u;
    // 0x222d78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x222D78u;
    {
        const bool branch_taken_0x222d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D78u;
        // 0x222d7c: 0xa2220210  sb          $v0, 0x210($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 528), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d78) {
            ctx->pc = 0x222DB8u;
            goto label_222db8;
        }
    }
    ctx->pc = 0x222D80u;
label_222d80:
    // 0x222d80: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x222d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x222d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x222d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222d88: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x222D88u;
    SET_GPR_U32(ctx, 31, 0x222D90u);
    ctx->pc = 0x222D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D88u;
    // 0x222d8c: 0x24a53338  addiu       $a1, $a1, 0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x222D88u, 0x222D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D90u;
label_222d90:
    // 0x222d90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x222d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222d94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x222D94u;
    {
        const bool branch_taken_0x222d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222D94u;
        // 0x222d98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222d94) {
            ctx->pc = 0x222DB0u;
            goto label_222db0;
        }
    }
    ctx->pc = 0x222D9Cu;
    // 0x222d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x222d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222da0: 0xc08753c  jal         func_21D4F0
    ctx->pc = 0x222DA0u;
    SET_GPR_U32(ctx, 31, 0x222DA8u);
    ctx->pc = 0x222DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222DA0u;
    // 0x222da4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4F0u, 0x222DA0u, 0x222DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DA8u;
label_222da8:
    // 0x222da8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x222DA8u;
    {
        const bool branch_taken_0x222da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DA8u;
        // 0x222dac: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222da8) {
            ctx->pc = 0x222DC0u;
            goto label_222dc0;
        }
    }
    ctx->pc = 0x222DB0u;
label_222db0:
    // 0x222db0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x222DB0u;
    SET_GPR_U32(ctx, 31, 0x222DB8u);
    ctx->pc = 0x222DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222DB0u;
    // 0x222db4: 0x26250214  addiu       $a1, $s1, 0x214 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 532));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x222DB0u, 0x222DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222DB8u;
label_222db8:
    // 0x222db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x222db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_222dbc:
    // 0x222dbc: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x222dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_222dc0:
    // 0x222dc0: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x222dc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x222dc4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x222dc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x222dc8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x222dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x222dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x222DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222DCCu;
        // 0x222dd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222DD4u;
    // 0x222dd4: 0x0  nop
    ctx->pc = 0x222dd4u;
    // NOP
    ctx->pc = 0x222dd8u;
}
