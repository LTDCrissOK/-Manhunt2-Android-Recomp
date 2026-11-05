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

// Function: sub_00160F60
// Address: 0x160f60 - 0x1610c0
void sub_00160F60_0x160f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160F60_0x160f60");
#endif

    switch (ctx->pc) {
        case 0x160f60u: goto label_160f60;
        case 0x160f64u: goto label_160f64;
        case 0x160f68u: goto label_160f68;
        case 0x160f6cu: goto label_160f6c;
        case 0x160f70u: goto label_160f70;
        case 0x160f74u: goto label_160f74;
        case 0x160f78u: goto label_160f78;
        case 0x160f7cu: goto label_160f7c;
        case 0x160f80u: goto label_160f80;
        case 0x160f84u: goto label_160f84;
        case 0x160f88u: goto label_160f88;
        case 0x160f8cu: goto label_160f8c;
        case 0x160f90u: goto label_160f90;
        case 0x160f94u: goto label_160f94;
        case 0x160f98u: goto label_160f98;
        case 0x160f9cu: goto label_160f9c;
        case 0x160fa0u: goto label_160fa0;
        case 0x160fa4u: goto label_160fa4;
        case 0x160fa8u: goto label_160fa8;
        case 0x160facu: goto label_160fac;
        case 0x160fb0u: goto label_160fb0;
        case 0x160fb4u: goto label_160fb4;
        case 0x160fb8u: goto label_160fb8;
        case 0x160fbcu: goto label_160fbc;
        case 0x160fc0u: goto label_160fc0;
        case 0x160fc4u: goto label_160fc4;
        case 0x160fc8u: goto label_160fc8;
        case 0x160fccu: goto label_160fcc;
        case 0x160fd0u: goto label_160fd0;
        case 0x160fd4u: goto label_160fd4;
        case 0x160fd8u: goto label_160fd8;
        case 0x160fdcu: goto label_160fdc;
        case 0x160fe0u: goto label_160fe0;
        case 0x160fe4u: goto label_160fe4;
        case 0x160fe8u: goto label_160fe8;
        case 0x160fecu: goto label_160fec;
        case 0x160ff0u: goto label_160ff0;
        case 0x160ff4u: goto label_160ff4;
        case 0x160ff8u: goto label_160ff8;
        case 0x160ffcu: goto label_160ffc;
        case 0x161000u: goto label_161000;
        case 0x161004u: goto label_161004;
        case 0x161008u: goto label_161008;
        case 0x16100cu: goto label_16100c;
        case 0x161010u: goto label_161010;
        case 0x161014u: goto label_161014;
        case 0x161018u: goto label_161018;
        case 0x16101cu: goto label_16101c;
        case 0x161020u: goto label_161020;
        case 0x161024u: goto label_161024;
        case 0x161028u: goto label_161028;
        case 0x16102cu: goto label_16102c;
        case 0x161030u: goto label_161030;
        case 0x161034u: goto label_161034;
        case 0x161038u: goto label_161038;
        case 0x16103cu: goto label_16103c;
        case 0x161040u: goto label_161040;
        case 0x161044u: goto label_161044;
        case 0x161048u: goto label_161048;
        case 0x16104cu: goto label_16104c;
        case 0x161050u: goto label_161050;
        case 0x161054u: goto label_161054;
        case 0x161058u: goto label_161058;
        case 0x16105cu: goto label_16105c;
        case 0x161060u: goto label_161060;
        case 0x161064u: goto label_161064;
        case 0x161068u: goto label_161068;
        case 0x16106cu: goto label_16106c;
        case 0x161070u: goto label_161070;
        case 0x161074u: goto label_161074;
        case 0x161078u: goto label_161078;
        case 0x16107cu: goto label_16107c;
        case 0x161080u: goto label_161080;
        case 0x161084u: goto label_161084;
        case 0x161088u: goto label_161088;
        case 0x16108cu: goto label_16108c;
        case 0x161090u: goto label_161090;
        case 0x161094u: goto label_161094;
        case 0x161098u: goto label_161098;
        case 0x16109cu: goto label_16109c;
        case 0x1610a0u: goto label_1610a0;
        case 0x1610a4u: goto label_1610a4;
        case 0x1610a8u: goto label_1610a8;
        case 0x1610acu: goto label_1610ac;
        case 0x1610b0u: goto label_1610b0;
        case 0x1610b4u: goto label_1610b4;
        case 0x1610b8u: goto label_1610b8;
        case 0x1610bcu: goto label_1610bc;
        default: break;
    }

    ctx->pc = 0x160f60u;

label_160f60:
    // 0x160f60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x160f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_160f64:
    // 0x160f64: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x160f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_160f68:
    // 0x160f68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x160f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_160f6c:
    // 0x160f6c: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x160f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
label_160f70:
    // 0x160f70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x160f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_160f74:
    // 0x160f74: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x160f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_160f78:
    // 0x160f78: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x160f78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_160f7c:
    // 0x160f7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x160f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_160f80:
    // 0x160f80: 0x30b500ff  andi        $s5, $a1, 0xFF
    ctx->pc = 0x160f80u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_160f84:
    // 0x160f84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x160f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_160f88:
    // 0x160f88: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x160f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_160f8c:
    // 0x160f8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x160f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_160f90:
    // 0x160f90: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x160f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_160f94:
    // 0x160f94: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x160f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_160f98:
    // 0x160f98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x160f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_160f9c:
    // 0x160f9c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x160f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_160fa0:
    // 0x160fa0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x160fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_160fa4:
    // 0x160fa4: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x160fa4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_160fa8:
    // 0x160fa8: 0x162080  sll         $a0, $s6, 2
    ctx->pc = 0x160fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_160fac:
    // 0x160fac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x160facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_160fb0:
    // 0x160fb0: 0x8c77020c  lw          $s7, 0x20C($v1)
    ctx->pc = 0x160fb0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
label_160fb4:
    // 0x160fb4: 0xc044340  jal         func_110D00
label_160fb8:
    if (ctx->pc == 0x160FB8u) {
        ctx->pc = 0x160FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FB4u;
        // 0x160fb8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FBCu;
        goto label_160fbc;
    }
    ctx->pc = 0x160FB4u;
    SET_GPR_U32(ctx, 31, 0x160FBCu);
    ctx->pc = 0x160FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FB4u;
    // 0x160fb8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D00u, 0x160FB4u, 0x160FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FBCu;
label_160fbc:
    // 0x160fbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x160fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160fc0:
    // 0x160fc0: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_160fc4:
    if (ctx->pc == 0x160FC4u) {
        ctx->pc = 0x160FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FC0u;
        // 0x160fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FC8u;
        goto label_160fc8;
    }
    ctx->pc = 0x160FC0u;
    {
        const bool branch_taken_0x160fc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x160FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FC0u;
        // 0x160fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160fc0) {
            ctx->pc = 0x160FDCu;
            goto label_160fdc;
        }
    }
    ctx->pc = 0x160FC8u;
label_160fc8:
    // 0x160fc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x160fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_160fcc:
    // 0x160fcc: 0xc0584e8  jal         func_1613A0
label_160fd0:
    if (ctx->pc == 0x160FD0u) {
        ctx->pc = 0x160FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FCCu;
        // 0x160fd0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FD4u;
        goto label_160fd4;
    }
    ctx->pc = 0x160FCCu;
    SET_GPR_U32(ctx, 31, 0x160FD4u);
    ctx->pc = 0x160FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FCCu;
    // 0x160fd0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1613A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1613A0u, 0x160FCCu, 0x160FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FD4u;
label_160fd4:
    // 0x160fd4: 0x10000030  b           . + 4 + (0x30 << 2)
label_160fd8:
    if (ctx->pc == 0x160FD8u) {
        ctx->pc = 0x160FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FD4u;
        // 0x160fd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FDCu;
        goto label_160fdc;
    }
    ctx->pc = 0x160FD4u;
    {
        const bool branch_taken_0x160fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FD4u;
        // 0x160fd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160fd4) {
            ctx->pc = 0x161098u;
            goto label_161098;
        }
    }
    ctx->pc = 0x160FDCu;
label_160fdc:
    // 0x160fdc: 0xc04631a  jal         func_118C68
label_160fe0:
    if (ctx->pc == 0x160FE0u) {
        ctx->pc = 0x160FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FDCu;
        // 0x160fe0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FE4u;
        goto label_160fe4;
    }
    ctx->pc = 0x160FDCu;
    SET_GPR_U32(ctx, 31, 0x160FE4u);
    ctx->pc = 0x160FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FDCu;
    // 0x160fe0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C68u, 0x160FDCu, 0x160FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FE4u;
label_160fe4:
    // 0x160fe4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x160fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160fe8:
    // 0x160fe8: 0xc045eee  jal         func_117BB8
label_160fec:
    if (ctx->pc == 0x160FECu) {
        ctx->pc = 0x160FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FE8u;
        // 0x160fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FF0u;
        goto label_160ff0;
    }
    ctx->pc = 0x160FE8u;
    SET_GPR_U32(ctx, 31, 0x160FF0u);
    ctx->pc = 0x160FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FE8u;
    // 0x160fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x160FE8u, 0x160FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FF0u;
label_160ff0:
    // 0x160ff0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x160ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_160ff4:
    // 0x160ff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160ff8:
    // 0x160ff8: 0xc042136  jal         func_1084D8
label_160ffc:
    if (ctx->pc == 0x160FFCu) {
        ctx->pc = 0x160FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FF8u;
        // 0x160ffc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161000u;
        goto label_161000;
    }
    ctx->pc = 0x160FF8u;
    SET_GPR_U32(ctx, 31, 0x161000u);
    ctx->pc = 0x160FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FF8u;
    // 0x160ffc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x160FF8u, 0x161000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161000u;
label_161000:
    // 0x161000: 0xc04f1e0  jal         func_13C780
label_161004:
    if (ctx->pc == 0x161004u) {
        ctx->pc = 0x161004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161000u;
        // 0x161004: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161008u;
        goto label_161008;
    }
    ctx->pc = 0x161000u;
    SET_GPR_U32(ctx, 31, 0x161008u);
    ctx->pc = 0x161004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161000u;
    // 0x161004: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C780u, 0x161000u, 0x161008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161008u;
label_161008:
    // 0x161008: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x161008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16100c:
    // 0x16100c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16100cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_161010:
    // 0x161010: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_161014:
    // 0x161014: 0xc04f33e  jal         func_13CCF8
label_161018:
    if (ctx->pc == 0x161018u) {
        ctx->pc = 0x161018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161014u;
        // 0x161018: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16101Cu;
        goto label_16101c;
    }
    ctx->pc = 0x161014u;
    SET_GPR_U32(ctx, 31, 0x16101Cu);
    ctx->pc = 0x161018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161014u;
    // 0x161018: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x161014u, 0x16101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16101Cu;
label_16101c:
    // 0x16101c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x16101cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_161020:
    // 0x161020: 0xc04f0b6  jal         func_13C2D8
label_161024:
    if (ctx->pc == 0x161024u) {
        ctx->pc = 0x161024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161020u;
        // 0x161024: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161028u;
        goto label_161028;
    }
    ctx->pc = 0x161020u;
    SET_GPR_U32(ctx, 31, 0x161028u);
    ctx->pc = 0x161024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161020u;
    // 0x161024: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x161020u, 0x161028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161028u;
label_161028:
    // 0x161028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x161028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16102c:
    // 0x16102c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16102cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_161030:
    // 0x161030: 0xc046304  jal         func_118C10
label_161034:
    if (ctx->pc == 0x161034u) {
        ctx->pc = 0x161034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161030u;
        // 0x161034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161038u;
        goto label_161038;
    }
    ctx->pc = 0x161030u;
    SET_GPR_U32(ctx, 31, 0x161038u);
    ctx->pc = 0x161034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161030u;
    // 0x161034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C10u, 0x161030u, 0x161038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161038u;
label_161038:
    // 0x161038: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x161038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_16103c:
    // 0x16103c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16103cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161040:
    // 0x161040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_161044:
    // 0x161044: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x161044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_161048:
    // 0x161048: 0x40f809  jalr        $v0
label_16104c:
    if (ctx->pc == 0x16104Cu) {
        ctx->pc = 0x16104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161048u;
        // 0x16104c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161050u;
        goto label_161050;
    }
    ctx->pc = 0x161048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161050u);
        ctx->pc = 0x16104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161048u;
        // 0x16104c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161048u, 0x161050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161050u;
label_161050:
    // 0x161050: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x161050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_161054:
    // 0x161054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x161054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_161058:
    // 0x161058: 0xc04d6fe  jal         func_135BF8
label_16105c:
    if (ctx->pc == 0x16105Cu) {
        ctx->pc = 0x16105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161058u;
        // 0x16105c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161060u;
        goto label_161060;
    }
    ctx->pc = 0x161058u;
    SET_GPR_U32(ctx, 31, 0x161060u);
    ctx->pc = 0x16105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161058u;
    // 0x16105c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135BF8u, 0x161058u, 0x161060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161060u;
label_161060:
    // 0x161060: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_161064:
    // 0x161064: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_161068:
    // 0x161068: 0xc04f124  jal         func_13C490
label_16106c:
    if (ctx->pc == 0x16106Cu) {
        ctx->pc = 0x16106Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161068u;
        // 0x16106c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161070u;
        goto label_161070;
    }
    ctx->pc = 0x161068u;
    SET_GPR_U32(ctx, 31, 0x161070u);
    ctx->pc = 0x16106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161068u;
    // 0x16106c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C490u, 0x161068u, 0x161070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161070u;
label_161070:
    // 0x161070: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_161074:
    // 0x161074: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x161074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_161078:
    // 0x161078: 0xc04f10c  jal         func_13C430
label_16107c:
    if (ctx->pc == 0x16107Cu) {
        ctx->pc = 0x16107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161078u;
        // 0x16107c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161080u;
        goto label_161080;
    }
    ctx->pc = 0x161078u;
    SET_GPR_U32(ctx, 31, 0x161080u);
    ctx->pc = 0x16107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161078u;
    // 0x16107c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x161078u, 0x161080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161080u;
label_161080:
    // 0x161080: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x161080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_161084:
    // 0x161084: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x161084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_161088:
    // 0x161088: 0xc04f118  jal         func_13C460
label_16108c:
    if (ctx->pc == 0x16108Cu) {
        ctx->pc = 0x16108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161088u;
        // 0x16108c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161090u;
        goto label_161090;
    }
    ctx->pc = 0x161088u;
    SET_GPR_U32(ctx, 31, 0x161090u);
    ctx->pc = 0x16108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161088u;
    // 0x16108c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x161088u, 0x161090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161090u;
label_161090:
    // 0x161090: 0xaef30238  sw          $s3, 0x238($s7)
    ctx->pc = 0x161090u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 568), GPR_U32(ctx, 19));
label_161094:
    // 0x161094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161098:
    // 0x161098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x161098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16109c:
    // 0x16109c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16109cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1610a0:
    // 0x1610a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1610a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1610a4:
    // 0x1610a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1610a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1610a8:
    // 0x1610a8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1610a8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1610ac:
    // 0x1610ac: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1610acu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1610b0:
    // 0x1610b0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1610b0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1610b4:
    // 0x1610b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1610b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1610b8:
    // 0x1610b8: 0x3e00008  jr          $ra
label_1610bc:
    if (ctx->pc == 0x1610BCu) {
        ctx->pc = 0x1610BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610B8u;
        // 0x1610bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1610C0u;
        goto label_fallthrough_0x1610b8;
    }
    ctx->pc = 0x1610B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1610BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610B8u;
        // 0x1610bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1610B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1610b8:
    ctx->pc = 0x1610C0u;
}
