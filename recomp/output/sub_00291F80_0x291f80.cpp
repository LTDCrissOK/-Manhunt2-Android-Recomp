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

// Function: sub_00291F80
// Address: 0x291f80 - 0x2923c8
void sub_00291F80_0x291f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291F80_0x291f80");
#endif

    switch (ctx->pc) {
        case 0x291fb8u: goto label_291fb8;
        case 0x291fc4u: goto label_291fc4;
        case 0x291fecu: goto label_291fec;
        case 0x291ff4u: goto label_291ff4;
        case 0x292004u: goto label_292004;
        case 0x29200cu: goto label_29200c;
        case 0x29201cu: goto label_29201c;
        case 0x292024u: goto label_292024;
        case 0x292034u: goto label_292034;
        case 0x29203cu: goto label_29203c;
        case 0x292050u: goto label_292050;
        case 0x292078u: goto label_292078;
        case 0x292080u: goto label_292080;
        case 0x292090u: goto label_292090;
        case 0x292098u: goto label_292098;
        case 0x2920a8u: goto label_2920a8;
        case 0x2920b0u: goto label_2920b0;
        case 0x2920c0u: goto label_2920c0;
        case 0x2920c8u: goto label_2920c8;
        case 0x2920d8u: goto label_2920d8;
        case 0x2920fcu: goto label_2920fc;
        case 0x292120u: goto label_292120;
        case 0x292144u: goto label_292144;
        case 0x292168u: goto label_292168;
        case 0x292190u: goto label_292190;
        case 0x292198u: goto label_292198;
        case 0x2921b4u: goto label_2921b4;
        case 0x2921d8u: goto label_2921d8;
        case 0x292200u: goto label_292200;
        case 0x292208u: goto label_292208;
        case 0x292224u: goto label_292224;
        case 0x292248u: goto label_292248;
        case 0x29226cu: goto label_29226c;
        case 0x292294u: goto label_292294;
        case 0x29229cu: goto label_29229c;
        case 0x2922acu: goto label_2922ac;
        case 0x2922b4u: goto label_2922b4;
        case 0x2922c4u: goto label_2922c4;
        case 0x2922ccu: goto label_2922cc;
        case 0x2922e0u: goto label_2922e0;
        case 0x2922e8u: goto label_2922e8;
        case 0x2922fcu: goto label_2922fc;
        case 0x292320u: goto label_292320;
        case 0x292328u: goto label_292328;
        case 0x292338u: goto label_292338;
        case 0x292340u: goto label_292340;
        case 0x292350u: goto label_292350;
        case 0x292358u: goto label_292358;
        case 0x292368u: goto label_292368;
        case 0x292370u: goto label_292370;
        case 0x292384u: goto label_292384;
        case 0x29238cu: goto label_29238c;
        case 0x292398u: goto label_292398;
        default: break;
    }

    ctx->pc = 0x291f80u;

    // 0x291f80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x291f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x291f84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x291f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x291f88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x291f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x291f8c: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x291f8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x291f90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x291f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x291f94: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x291f94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x291f98: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x291f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x291f9c: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x291f9cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
    // 0x291fa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x291fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291fa4: 0x3c150047  lui         $s5, 0x47
    ctx->pc = 0x291fa4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
    // 0x291fa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x291fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x291fac: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x291FACu;
    {
        const bool branch_taken_0x291fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FACu;
        // 0x291fb0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291fac) {
            ctx->pc = 0x292370u;
            goto label_292370;
        }
    }
    ctx->pc = 0x291FB4u;
    // 0x291fb4: 0x0  nop
    ctx->pc = 0x291fb4u;
    // NOP
label_291fb8:
    // 0x291fb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x291fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291fbc: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x291FBCu;
    SET_GPR_U32(ctx, 31, 0x291FC4u);
    ctx->pc = 0x291FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291FBCu;
    // 0x291fc0: 0x24a5b4e0  addiu       $a1, $a1, -0x4B20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x291FBCu, 0x291FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291FC4u;
label_291fc4:
    // 0x291fc4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x291FC4u;
    {
        const bool branch_taken_0x291fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291FC4u;
        // 0x291fc8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291fc4) {
            ctx->pc = 0x292044u;
            goto label_292044;
        }
    }
    ctx->pc = 0x291FCCu;
    // 0x291fcc: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x291fccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x291fd0: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x291fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x291fd4: 0x2631ca90  addiu       $s1, $s1, -0x3570
    ctx->pc = 0x291fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953616));
    // 0x291fd8: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x291fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x291fdc: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x291fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x291fe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x291fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291fe4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x291FE4u;
    SET_GPR_U32(ctx, 31, 0x291FECu);
    ctx->pc = 0x291FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291FE4u;
    // 0x291fe8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x291FE4u, 0x291FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291FECu;
label_291fec:
    // 0x291fec: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x291FECu;
    SET_GPR_U32(ctx, 31, 0x291FF4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x291FECu, 0x291FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291FF4u;
label_291ff4:
    // 0x291ff4: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x291ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x291ff8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x291ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291ffc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x291FFCu;
    SET_GPR_U32(ctx, 31, 0x292004u);
    ctx->pc = 0x292000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291FFCu;
    // 0x292000: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x291FFCu, 0x292004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292004u;
label_292004:
    // 0x292004: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292004u;
    SET_GPR_U32(ctx, 31, 0x29200Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292004u, 0x29200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29200Cu;
label_29200c:
    // 0x29200c: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x29200cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x292010: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292014: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292014u;
    SET_GPR_U32(ctx, 31, 0x29201Cu);
    ctx->pc = 0x292018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292014u;
    // 0x292018: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292014u, 0x29201Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29201Cu;
label_29201c:
    // 0x29201c: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x29201Cu;
    SET_GPR_U32(ctx, 31, 0x292024u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x29201Cu, 0x292024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292024u;
label_292024:
    // 0x292024: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x292024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x292028: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29202c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x29202Cu;
    SET_GPR_U32(ctx, 31, 0x292034u);
    ctx->pc = 0x292030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29202Cu;
    // 0x292030: 0x2626000c  addiu       $a2, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x29202Cu, 0x292034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292034u;
label_292034:
    // 0x292034: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292034u;
    SET_GPR_U32(ctx, 31, 0x29203Cu);
    ctx->pc = 0x292038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292034u;
    // 0x292038: 0x2670c230  addiu       $s0, $s3, -0x3DD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292034u, 0x29203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29203Cu;
label_29203c:
    // 0x29203c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x29203Cu;
    {
        const bool branch_taken_0x29203c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29203Cu;
        // 0x292040: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29203c) {
            ctx->pc = 0x2920CCu;
            goto label_2920cc;
        }
    }
    ctx->pc = 0x292044u;
label_292044:
    // 0x292044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292048: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292048u;
    SET_GPR_U32(ctx, 31, 0x292050u);
    ctx->pc = 0x29204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292048u;
    // 0x29204c: 0x24a5b4f0  addiu       $a1, $a1, -0x4B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292048u, 0x292050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292050u;
label_292050:
    // 0x292050: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x292050u;
    {
        const bool branch_taken_0x292050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292050u;
        // 0x292054: 0x2670c230  addiu       $s0, $s3, -0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292050) {
            ctx->pc = 0x2920C8u;
            goto label_2920c8;
        }
    }
    ctx->pc = 0x292058u;
    // 0x292058: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x292058u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x29205c: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x29205cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292060: 0x2631caa0  addiu       $s1, $s1, -0x3560
    ctx->pc = 0x292060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953632));
    // 0x292064: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x292064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x292068: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x292068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x29206c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29206cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292070: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292070u;
    SET_GPR_U32(ctx, 31, 0x292078u);
    ctx->pc = 0x292074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292070u;
    // 0x292074: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292070u, 0x292078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292078u;
label_292078:
    // 0x292078: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292078u;
    SET_GPR_U32(ctx, 31, 0x292080u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292078u, 0x292080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292080u;
label_292080:
    // 0x292080: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x292080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x292084: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292088: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292088u;
    SET_GPR_U32(ctx, 31, 0x292090u);
    ctx->pc = 0x29208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292088u;
    // 0x29208c: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292088u, 0x292090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292090u;
label_292090:
    // 0x292090: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292090u;
    SET_GPR_U32(ctx, 31, 0x292098u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292090u, 0x292098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292098u;
label_292098:
    // 0x292098: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x292098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x29209c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29209cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2920a0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2920A0u;
    SET_GPR_U32(ctx, 31, 0x2920A8u);
    ctx->pc = 0x2920A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2920A0u;
    // 0x2920a4: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2920A0u, 0x2920A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920A8u;
label_2920a8:
    // 0x2920a8: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2920A8u;
    SET_GPR_U32(ctx, 31, 0x2920B0u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2920A8u, 0x2920B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920B0u;
label_2920b0:
    // 0x2920b0: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2920b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2920b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2920b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2920b8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2920B8u;
    SET_GPR_U32(ctx, 31, 0x2920C0u);
    ctx->pc = 0x2920BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2920B8u;
    // 0x2920bc: 0x2626000c  addiu       $a2, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2920B8u, 0x2920C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920C0u;
label_2920c0:
    // 0x2920c0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2920C0u;
    SET_GPR_U32(ctx, 31, 0x2920C8u);
    ctx->pc = 0x2920C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2920C0u;
    // 0x2920c4: 0x2670c230  addiu       $s0, $s3, -0x3DD0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2920C0u, 0x2920C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920C8u;
label_2920c8:
    // 0x2920c8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2920c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_2920cc:
    // 0x2920cc: 0x24a5b508  addiu       $a1, $a1, -0x4AF8
    ctx->pc = 0x2920ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948104));
    // 0x2920d0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2920D0u;
    SET_GPR_U32(ctx, 31, 0x2920D8u);
    ctx->pc = 0x2920D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2920D0u;
    // 0x2920d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2920D0u, 0x2920D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920D8u;
label_2920d8:
    // 0x2920d8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2920D8u;
    {
        const bool branch_taken_0x2920d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2920d8) {
            ctx->pc = 0x2920DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2920D8u;
            // 0x2920dc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2920F0u;
            goto label_2920f0;
        }
    }
    ctx->pc = 0x2920E0u;
    // 0x2920e0: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x2920e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x2920e4: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2920e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2920e8: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2920E8u;
    {
        const bool branch_taken_0x2920e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2920ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2920E8u;
        // 0x2920ec: 0x2631cab0  addiu       $s1, $s1, -0x3550 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2920e8) {
            ctx->pc = 0x292280u;
            goto label_292280;
        }
    }
    ctx->pc = 0x2920F0u;
label_2920f0:
    // 0x2920f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2920f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2920f4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2920F4u;
    SET_GPR_U32(ctx, 31, 0x2920FCu);
    ctx->pc = 0x2920F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2920F4u;
    // 0x2920f8: 0x24a5b518  addiu       $a1, $a1, -0x4AE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2920F4u, 0x2920FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2920FCu;
label_2920fc:
    // 0x2920fc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2920FCu;
    {
        const bool branch_taken_0x2920fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2920fc) {
            ctx->pc = 0x292100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2920FCu;
            // 0x292100: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292114u;
            goto label_292114;
        }
    }
    ctx->pc = 0x292104u;
    // 0x292104: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x292104u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x292108: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292108u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x29210c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x29210Cu;
    {
        const bool branch_taken_0x29210c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29210Cu;
        // 0x292110: 0x2631cac0  addiu       $s1, $s1, -0x3540 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29210c) {
            ctx->pc = 0x292280u;
            goto label_292280;
        }
    }
    ctx->pc = 0x292114u;
label_292114:
    // 0x292114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292118: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292118u;
    SET_GPR_U32(ctx, 31, 0x292120u);
    ctx->pc = 0x29211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292118u;
    // 0x29211c: 0x24a5b530  addiu       $a1, $a1, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292118u, 0x292120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292120u;
label_292120:
    // 0x292120: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x292120u;
    {
        const bool branch_taken_0x292120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292120) {
            ctx->pc = 0x292124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292120u;
            // 0x292124: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292138u;
            goto label_292138;
        }
    }
    ctx->pc = 0x292128u;
    // 0x292128: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x292128u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x29212c: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x29212cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292130: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x292130u;
    {
        const bool branch_taken_0x292130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292130u;
        // 0x292134: 0x2631cad0  addiu       $s1, $s1, -0x3530 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292130) {
            ctx->pc = 0x292280u;
            goto label_292280;
        }
    }
    ctx->pc = 0x292138u;
label_292138:
    // 0x292138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29213c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x29213Cu;
    SET_GPR_U32(ctx, 31, 0x292144u);
    ctx->pc = 0x292140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29213Cu;
    // 0x292140: 0x24a5b548  addiu       $a1, $a1, -0x4AB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x29213Cu, 0x292144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292144u;
label_292144:
    // 0x292144: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x292144u;
    {
        const bool branch_taken_0x292144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292144) {
            ctx->pc = 0x292148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292144u;
            // 0x292148: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29215Cu;
            goto label_29215c;
        }
    }
    ctx->pc = 0x29214Cu;
    // 0x29214c: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x29214cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x292150: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292150u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292154: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x292154u;
    {
        const bool branch_taken_0x292154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292154u;
        // 0x292158: 0x2631cae0  addiu       $s1, $s1, -0x3520 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292154) {
            ctx->pc = 0x292280u;
            goto label_292280;
        }
    }
    ctx->pc = 0x29215Cu;
label_29215c:
    // 0x29215c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29215cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292160: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292160u;
    SET_GPR_U32(ctx, 31, 0x292168u);
    ctx->pc = 0x292164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292160u;
    // 0x292164: 0x24a5b560  addiu       $a1, $a1, -0x4AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292160u, 0x292168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292168u;
label_292168:
    // 0x292168: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x292168u;
    {
        const bool branch_taken_0x292168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292168) {
            ctx->pc = 0x29216Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292168u;
            // 0x29216c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2921A8u;
            goto label_2921a8;
        }
    }
    ctx->pc = 0x292170u;
    // 0x292170: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292170u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292174: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x292174u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x292178: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x292178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x29217c: 0x2631cb50  addiu       $s1, $s1, -0x34B0
    ctx->pc = 0x29217cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953808));
    // 0x292180: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x292180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x292184: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292188: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292188u;
    SET_GPR_U32(ctx, 31, 0x292190u);
    ctx->pc = 0x29218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292188u;
    // 0x29218c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292188u, 0x292190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292190u;
label_292190:
    // 0x292190: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292190u;
    SET_GPR_U32(ctx, 31, 0x292198u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292190u, 0x292198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292198u;
label_292198:
    // 0x292198: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x292198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x29219c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29219cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921a0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x2921A0u;
    {
        const bool branch_taken_0x2921a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2921A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921A0u;
        // 0x2921a4: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921a0) {
            ctx->pc = 0x2922D8u;
            goto label_2922d8;
        }
    }
    ctx->pc = 0x2921A8u;
label_2921a8:
    // 0x2921a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2921a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921ac: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2921ACu;
    SET_GPR_U32(ctx, 31, 0x2921B4u);
    ctx->pc = 0x2921B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2921ACu;
    // 0x2921b0: 0x24a5b580  addiu       $a1, $a1, -0x4A80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2921ACu, 0x2921B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2921B4u;
label_2921b4:
    // 0x2921b4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2921B4u;
    {
        const bool branch_taken_0x2921b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2921b4) {
            ctx->pc = 0x2921B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2921B4u;
            // 0x2921b8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2921CCu;
            goto label_2921cc;
        }
    }
    ctx->pc = 0x2921BCu;
    // 0x2921bc: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x2921bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x2921c0: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2921c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2921c4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2921C4u;
    {
        const bool branch_taken_0x2921c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2921C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2921C4u;
        // 0x2921c8: 0x2631caf0  addiu       $s1, $s1, -0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921c4) {
            ctx->pc = 0x292280u;
            goto label_292280;
        }
    }
    ctx->pc = 0x2921CCu;
label_2921cc:
    // 0x2921cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2921ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921d0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2921D0u;
    SET_GPR_U32(ctx, 31, 0x2921D8u);
    ctx->pc = 0x2921D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2921D0u;
    // 0x2921d4: 0x24a5b598  addiu       $a1, $a1, -0x4A68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2921D0u, 0x2921D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2921D8u;
label_2921d8:
    // 0x2921d8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2921D8u;
    {
        const bool branch_taken_0x2921d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2921d8) {
            ctx->pc = 0x2921DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2921D8u;
            // 0x2921dc: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292218u;
            goto label_292218;
        }
    }
    ctx->pc = 0x2921E0u;
    // 0x2921e0: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x2921e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x2921e4: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x2921e4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x2921e8: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x2921e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x2921ec: 0x2631cb58  addiu       $s1, $s1, -0x34A8
    ctx->pc = 0x2921ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953816));
    // 0x2921f0: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2921f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2921f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2921f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2921f8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2921F8u;
    SET_GPR_U32(ctx, 31, 0x292200u);
    ctx->pc = 0x2921FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2921F8u;
    // 0x2921fc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2921F8u, 0x292200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292200u;
label_292200:
    // 0x292200: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292200u;
    SET_GPR_U32(ctx, 31, 0x292208u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292200u, 0x292208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292208u;
label_292208:
    // 0x292208: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x292208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x29220c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29220cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292210: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x292210u;
    {
        const bool branch_taken_0x292210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292210u;
        // 0x292214: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292210) {
            ctx->pc = 0x2922D8u;
            goto label_2922d8;
        }
    }
    ctx->pc = 0x292218u;
label_292218:
    // 0x292218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29221c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x29221Cu;
    SET_GPR_U32(ctx, 31, 0x292224u);
    ctx->pc = 0x292220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29221Cu;
    // 0x292220: 0x24a5b5c0  addiu       $a1, $a1, -0x4A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x29221Cu, 0x292224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292224u;
label_292224:
    // 0x292224: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x292224u;
    {
        const bool branch_taken_0x292224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292224) {
            ctx->pc = 0x292228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292224u;
            // 0x292228: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29223Cu;
            goto label_29223c;
        }
    }
    ctx->pc = 0x29222Cu;
    // 0x29222c: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x29222cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x292230: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292230u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292234: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x292234u;
    {
        const bool branch_taken_0x292234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x292238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292234u;
        // 0x292238: 0x2631cb10  addiu       $s1, $s1, -0x34F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292234) {
            ctx->pc = 0x292280u;
            goto label_292280;
        }
    }
    ctx->pc = 0x29223Cu;
label_29223c:
    // 0x29223c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292240: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292240u;
    SET_GPR_U32(ctx, 31, 0x292248u);
    ctx->pc = 0x292244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292240u;
    // 0x292244: 0x24a5b5e0  addiu       $a1, $a1, -0x4A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292240u, 0x292248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292248u;
label_292248:
    // 0x292248: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x292248u;
    {
        const bool branch_taken_0x292248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292248) {
            ctx->pc = 0x29224Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292248u;
            // 0x29224c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292260u;
            goto label_292260;
        }
    }
    ctx->pc = 0x292250u;
    // 0x292250: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x292250u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x292254: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292254u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x292258: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x292258u;
    {
        const bool branch_taken_0x292258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292258u;
        // 0x29225c: 0x2631cb20  addiu       $s1, $s1, -0x34E0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292258) {
            ctx->pc = 0x292280u;
            goto label_292280;
        }
    }
    ctx->pc = 0x292260u;
label_292260:
    // 0x292260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292264: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292264u;
    SET_GPR_U32(ctx, 31, 0x29226Cu);
    ctx->pc = 0x292268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292264u;
    // 0x292268: 0x24a5b5f8  addiu       $a1, $a1, -0x4A08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292264u, 0x29226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29226Cu;
label_29226c:
    // 0x29226c: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x29226Cu;
    {
        const bool branch_taken_0x29226c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29226c) {
            ctx->pc = 0x292270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29226Cu;
            // 0x292270: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2922F0u;
            goto label_2922f0;
        }
    }
    ctx->pc = 0x292274u;
    // 0x292274: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x292274u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x292278: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292278u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x29227c: 0x2631cb30  addiu       $s1, $s1, -0x34D0
    ctx->pc = 0x29227cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953776));
label_292280:
    // 0x292280: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x292280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x292284: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x292284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x292288: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29228c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x29228Cu;
    SET_GPR_U32(ctx, 31, 0x292294u);
    ctx->pc = 0x292290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29228Cu;
    // 0x292290: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x29228Cu, 0x292294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292294u;
label_292294:
    // 0x292294: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292294u;
    SET_GPR_U32(ctx, 31, 0x29229Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292294u, 0x29229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29229Cu;
label_29229c:
    // 0x29229c: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x29229cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2922a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2922a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922a4: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2922A4u;
    SET_GPR_U32(ctx, 31, 0x2922ACu);
    ctx->pc = 0x2922A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2922A4u;
    // 0x2922a8: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2922A4u, 0x2922ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922ACu;
label_2922ac:
    // 0x2922ac: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2922ACu;
    SET_GPR_U32(ctx, 31, 0x2922B4u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2922ACu, 0x2922B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922B4u;
label_2922b4:
    // 0x2922b4: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2922b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2922b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2922b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922bc: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2922BCu;
    SET_GPR_U32(ctx, 31, 0x2922C4u);
    ctx->pc = 0x2922C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2922BCu;
    // 0x2922c0: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2922BCu, 0x2922C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922C4u;
label_2922c4:
    // 0x2922c4: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2922C4u;
    SET_GPR_U32(ctx, 31, 0x2922CCu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2922C4u, 0x2922CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922CCu;
label_2922cc:
    // 0x2922cc: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x2922ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x2922d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2922d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922d4: 0x2626000c  addiu       $a2, $s1, 0xC
    ctx->pc = 0x2922d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_2922d8:
    // 0x2922d8: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x2922D8u;
    SET_GPR_U32(ctx, 31, 0x2922E0u);
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x2922D8u, 0x2922E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922E0u;
label_2922e0:
    // 0x2922e0: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x2922E0u;
    SET_GPR_U32(ctx, 31, 0x2922E8u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x2922E0u, 0x2922E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922E8u;
label_2922e8:
    // 0x2922e8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2922E8u;
    {
        const bool branch_taken_0x2922e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2922ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2922E8u;
        // 0x2922ec: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922e8) {
            ctx->pc = 0x292374u;
            goto label_292374;
        }
    }
    ctx->pc = 0x2922F0u;
label_2922f0:
    // 0x2922f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2922f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922f4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2922F4u;
    SET_GPR_U32(ctx, 31, 0x2922FCu);
    ctx->pc = 0x2922F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2922F4u;
    // 0x2922f8: 0x24a5b610  addiu       $a1, $a1, -0x49F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2922F4u, 0x2922FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2922FCu;
label_2922fc:
    // 0x2922fc: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2922FCu;
    {
        const bool branch_taken_0x2922fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2922FCu;
        // 0x292300: 0x8e442bc8  lw          $a0, 0x2BC8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922fc) {
            ctx->pc = 0x292374u;
            goto label_292374;
        }
    }
    ctx->pc = 0x292304u;
    // 0x292304: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x292304u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x292308: 0x3c100047  lui         $s0, 0x47
    ctx->pc = 0x292308u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
    // 0x29230c: 0x2631cb40  addiu       $s1, $s1, -0x34C0
    ctx->pc = 0x29230cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953792));
    // 0x292310: 0x2610b4c8  addiu       $s0, $s0, -0x4B38
    ctx->pc = 0x292310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948040));
    // 0x292314: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292318: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292318u;
    SET_GPR_U32(ctx, 31, 0x292320u);
    ctx->pc = 0x29231Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292318u;
    // 0x29231c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292318u, 0x292320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292320u;
label_292320:
    // 0x292320: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292320u;
    SET_GPR_U32(ctx, 31, 0x292328u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292320u, 0x292328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292328u;
label_292328:
    // 0x292328: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x292328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x29232c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29232cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292330: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292330u;
    SET_GPR_U32(ctx, 31, 0x292338u);
    ctx->pc = 0x292334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292330u;
    // 0x292334: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292330u, 0x292338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292338u;
label_292338:
    // 0x292338: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292338u;
    SET_GPR_U32(ctx, 31, 0x292340u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292338u, 0x292340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292340u;
label_292340:
    // 0x292340: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x292340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x292344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x292344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292348: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292348u;
    SET_GPR_U32(ctx, 31, 0x292350u);
    ctx->pc = 0x29234Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292348u;
    // 0x29234c: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292348u, 0x292350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292350u;
label_292350:
    // 0x292350: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292350u;
    SET_GPR_U32(ctx, 31, 0x292358u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292350u, 0x292358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292358u;
label_292358:
    // 0x292358: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x292358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
    // 0x29235c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29235cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292360: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x292360u;
    SET_GPR_U32(ctx, 31, 0x292368u);
    ctx->pc = 0x292364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292360u;
    // 0x292364: 0x2626000c  addiu       $a2, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x292360u, 0x292368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292368u;
label_292368:
    // 0x292368: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292368u;
    SET_GPR_U32(ctx, 31, 0x292370u);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292368u, 0x292370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292370u;
label_292370:
    // 0x292370: 0x8e442bc8  lw          $a0, 0x2BC8($s2)
    ctx->pc = 0x292370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11208)));
label_292374:
    // 0x292374: 0x2670c230  addiu       $s0, $s3, -0x3DD0
    ctx->pc = 0x292374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951472));
    // 0x292378: 0x2685b4d0  addiu       $a1, $s4, -0x4B30
    ctx->pc = 0x292378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948048));
    // 0x29237c: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x29237Cu;
    SET_GPR_U32(ctx, 31, 0x292384u);
    ctx->pc = 0x292380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29237Cu;
    // 0x292380: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x29237Cu, 0x292384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292384u;
label_292384:
    // 0x292384: 0xc0a173e  jal         func_285CF8
    ctx->pc = 0x292384u;
    SET_GPR_U32(ctx, 31, 0x29238Cu);
    ctx->pc = 0x285CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CF8u, 0x292384u, 0x29238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29238Cu;
label_29238c:
    // 0x29238c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29238cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292390: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x292390u;
    SET_GPR_U32(ctx, 31, 0x292398u);
    ctx->pc = 0x292394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292390u;
    // 0x292394: 0x26a5b4d8  addiu       $a1, $s5, -0x4B28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x292390u, 0x292398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292398u;
label_292398:
    // 0x292398: 0x5440ff07  bnel        $v0, $zero, . + 4 + (-0xF9 << 2)
    ctx->pc = 0x292398u;
    {
        const bool branch_taken_0x292398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292398) {
            ctx->pc = 0x29239Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292398u;
            // 0x29239c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291fb8;
        }
    }
    ctx->pc = 0x2923A0u;
    // 0x2923a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2923a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2923a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2923a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2923a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2923a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2923ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2923acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2923b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2923b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2923b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2923b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2923b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2923b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2923bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2923BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2923C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2923BCu;
        // 0x2923c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2923BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2923C4u;
    // 0x2923c4: 0x0  nop
    ctx->pc = 0x2923c4u;
    // NOP
    ctx->pc = 0x2923c8u;
}
