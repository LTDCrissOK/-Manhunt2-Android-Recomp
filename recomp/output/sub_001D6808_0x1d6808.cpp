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

// Function: sub_001D6808
// Address: 0x1d6808 - 0x1d6af8
void sub_001D6808_0x1d6808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6808_0x1d6808");
#endif

    switch (ctx->pc) {
        case 0x1d6808u: goto label_1d6808;
        case 0x1d680cu: goto label_1d680c;
        case 0x1d6810u: goto label_1d6810;
        case 0x1d6814u: goto label_1d6814;
        case 0x1d6818u: goto label_1d6818;
        case 0x1d681cu: goto label_1d681c;
        case 0x1d6820u: goto label_1d6820;
        case 0x1d6824u: goto label_1d6824;
        case 0x1d6828u: goto label_1d6828;
        case 0x1d682cu: goto label_1d682c;
        case 0x1d6830u: goto label_1d6830;
        case 0x1d6834u: goto label_1d6834;
        case 0x1d6838u: goto label_1d6838;
        case 0x1d683cu: goto label_1d683c;
        case 0x1d6840u: goto label_1d6840;
        case 0x1d6844u: goto label_1d6844;
        case 0x1d6848u: goto label_1d6848;
        case 0x1d684cu: goto label_1d684c;
        case 0x1d6850u: goto label_1d6850;
        case 0x1d6854u: goto label_1d6854;
        case 0x1d6858u: goto label_1d6858;
        case 0x1d685cu: goto label_1d685c;
        case 0x1d6860u: goto label_1d6860;
        case 0x1d6864u: goto label_1d6864;
        case 0x1d6868u: goto label_1d6868;
        case 0x1d686cu: goto label_1d686c;
        case 0x1d6870u: goto label_1d6870;
        case 0x1d6874u: goto label_1d6874;
        case 0x1d6878u: goto label_1d6878;
        case 0x1d687cu: goto label_1d687c;
        case 0x1d6880u: goto label_1d6880;
        case 0x1d6884u: goto label_1d6884;
        case 0x1d6888u: goto label_1d6888;
        case 0x1d688cu: goto label_1d688c;
        case 0x1d6890u: goto label_1d6890;
        case 0x1d6894u: goto label_1d6894;
        case 0x1d6898u: goto label_1d6898;
        case 0x1d689cu: goto label_1d689c;
        case 0x1d68a0u: goto label_1d68a0;
        case 0x1d68a4u: goto label_1d68a4;
        case 0x1d68a8u: goto label_1d68a8;
        case 0x1d68acu: goto label_1d68ac;
        case 0x1d68b0u: goto label_1d68b0;
        case 0x1d68b4u: goto label_1d68b4;
        case 0x1d68b8u: goto label_1d68b8;
        case 0x1d68bcu: goto label_1d68bc;
        case 0x1d68c0u: goto label_1d68c0;
        case 0x1d68c4u: goto label_1d68c4;
        case 0x1d68c8u: goto label_1d68c8;
        case 0x1d68ccu: goto label_1d68cc;
        case 0x1d68d0u: goto label_1d68d0;
        case 0x1d68d4u: goto label_1d68d4;
        case 0x1d68d8u: goto label_1d68d8;
        case 0x1d68dcu: goto label_1d68dc;
        case 0x1d68e0u: goto label_1d68e0;
        case 0x1d68e4u: goto label_1d68e4;
        case 0x1d68e8u: goto label_1d68e8;
        case 0x1d68ecu: goto label_1d68ec;
        case 0x1d68f0u: goto label_1d68f0;
        case 0x1d68f4u: goto label_1d68f4;
        case 0x1d68f8u: goto label_1d68f8;
        case 0x1d68fcu: goto label_1d68fc;
        case 0x1d6900u: goto label_1d6900;
        case 0x1d6904u: goto label_1d6904;
        case 0x1d6908u: goto label_1d6908;
        case 0x1d690cu: goto label_1d690c;
        case 0x1d6910u: goto label_1d6910;
        case 0x1d6914u: goto label_1d6914;
        case 0x1d6918u: goto label_1d6918;
        case 0x1d691cu: goto label_1d691c;
        case 0x1d6920u: goto label_1d6920;
        case 0x1d6924u: goto label_1d6924;
        case 0x1d6928u: goto label_1d6928;
        case 0x1d692cu: goto label_1d692c;
        case 0x1d6930u: goto label_1d6930;
        case 0x1d6934u: goto label_1d6934;
        case 0x1d6938u: goto label_1d6938;
        case 0x1d693cu: goto label_1d693c;
        case 0x1d6940u: goto label_1d6940;
        case 0x1d6944u: goto label_1d6944;
        case 0x1d6948u: goto label_1d6948;
        case 0x1d694cu: goto label_1d694c;
        case 0x1d6950u: goto label_1d6950;
        case 0x1d6954u: goto label_1d6954;
        case 0x1d6958u: goto label_1d6958;
        case 0x1d695cu: goto label_1d695c;
        case 0x1d6960u: goto label_1d6960;
        case 0x1d6964u: goto label_1d6964;
        case 0x1d6968u: goto label_1d6968;
        case 0x1d696cu: goto label_1d696c;
        case 0x1d6970u: goto label_1d6970;
        case 0x1d6974u: goto label_1d6974;
        case 0x1d6978u: goto label_1d6978;
        case 0x1d697cu: goto label_1d697c;
        case 0x1d6980u: goto label_1d6980;
        case 0x1d6984u: goto label_1d6984;
        case 0x1d6988u: goto label_1d6988;
        case 0x1d698cu: goto label_1d698c;
        case 0x1d6990u: goto label_1d6990;
        case 0x1d6994u: goto label_1d6994;
        case 0x1d6998u: goto label_1d6998;
        case 0x1d699cu: goto label_1d699c;
        case 0x1d69a0u: goto label_1d69a0;
        case 0x1d69a4u: goto label_1d69a4;
        case 0x1d69a8u: goto label_1d69a8;
        case 0x1d69acu: goto label_1d69ac;
        case 0x1d69b0u: goto label_1d69b0;
        case 0x1d69b4u: goto label_1d69b4;
        case 0x1d69b8u: goto label_1d69b8;
        case 0x1d69bcu: goto label_1d69bc;
        case 0x1d69c0u: goto label_1d69c0;
        case 0x1d69c4u: goto label_1d69c4;
        case 0x1d69c8u: goto label_1d69c8;
        case 0x1d69ccu: goto label_1d69cc;
        case 0x1d69d0u: goto label_1d69d0;
        case 0x1d69d4u: goto label_1d69d4;
        case 0x1d69d8u: goto label_1d69d8;
        case 0x1d69dcu: goto label_1d69dc;
        case 0x1d69e0u: goto label_1d69e0;
        case 0x1d69e4u: goto label_1d69e4;
        case 0x1d69e8u: goto label_1d69e8;
        case 0x1d69ecu: goto label_1d69ec;
        case 0x1d69f0u: goto label_1d69f0;
        case 0x1d69f4u: goto label_1d69f4;
        case 0x1d69f8u: goto label_1d69f8;
        case 0x1d69fcu: goto label_1d69fc;
        case 0x1d6a00u: goto label_1d6a00;
        case 0x1d6a04u: goto label_1d6a04;
        case 0x1d6a08u: goto label_1d6a08;
        case 0x1d6a0cu: goto label_1d6a0c;
        case 0x1d6a10u: goto label_1d6a10;
        case 0x1d6a14u: goto label_1d6a14;
        case 0x1d6a18u: goto label_1d6a18;
        case 0x1d6a1cu: goto label_1d6a1c;
        case 0x1d6a20u: goto label_1d6a20;
        case 0x1d6a24u: goto label_1d6a24;
        case 0x1d6a28u: goto label_1d6a28;
        case 0x1d6a2cu: goto label_1d6a2c;
        case 0x1d6a30u: goto label_1d6a30;
        case 0x1d6a34u: goto label_1d6a34;
        case 0x1d6a38u: goto label_1d6a38;
        case 0x1d6a3cu: goto label_1d6a3c;
        case 0x1d6a40u: goto label_1d6a40;
        case 0x1d6a44u: goto label_1d6a44;
        case 0x1d6a48u: goto label_1d6a48;
        case 0x1d6a4cu: goto label_1d6a4c;
        case 0x1d6a50u: goto label_1d6a50;
        case 0x1d6a54u: goto label_1d6a54;
        case 0x1d6a58u: goto label_1d6a58;
        case 0x1d6a5cu: goto label_1d6a5c;
        case 0x1d6a60u: goto label_1d6a60;
        case 0x1d6a64u: goto label_1d6a64;
        case 0x1d6a68u: goto label_1d6a68;
        case 0x1d6a6cu: goto label_1d6a6c;
        case 0x1d6a70u: goto label_1d6a70;
        case 0x1d6a74u: goto label_1d6a74;
        case 0x1d6a78u: goto label_1d6a78;
        case 0x1d6a7cu: goto label_1d6a7c;
        case 0x1d6a80u: goto label_1d6a80;
        case 0x1d6a84u: goto label_1d6a84;
        case 0x1d6a88u: goto label_1d6a88;
        case 0x1d6a8cu: goto label_1d6a8c;
        case 0x1d6a90u: goto label_1d6a90;
        case 0x1d6a94u: goto label_1d6a94;
        case 0x1d6a98u: goto label_1d6a98;
        case 0x1d6a9cu: goto label_1d6a9c;
        case 0x1d6aa0u: goto label_1d6aa0;
        case 0x1d6aa4u: goto label_1d6aa4;
        case 0x1d6aa8u: goto label_1d6aa8;
        case 0x1d6aacu: goto label_1d6aac;
        case 0x1d6ab0u: goto label_1d6ab0;
        case 0x1d6ab4u: goto label_1d6ab4;
        case 0x1d6ab8u: goto label_1d6ab8;
        case 0x1d6abcu: goto label_1d6abc;
        case 0x1d6ac0u: goto label_1d6ac0;
        case 0x1d6ac4u: goto label_1d6ac4;
        case 0x1d6ac8u: goto label_1d6ac8;
        case 0x1d6accu: goto label_1d6acc;
        case 0x1d6ad0u: goto label_1d6ad0;
        case 0x1d6ad4u: goto label_1d6ad4;
        case 0x1d6ad8u: goto label_1d6ad8;
        case 0x1d6adcu: goto label_1d6adc;
        case 0x1d6ae0u: goto label_1d6ae0;
        case 0x1d6ae4u: goto label_1d6ae4;
        case 0x1d6ae8u: goto label_1d6ae8;
        case 0x1d6aecu: goto label_1d6aec;
        case 0x1d6af0u: goto label_1d6af0;
        case 0x1d6af4u: goto label_1d6af4;
        default: break;
    }

    ctx->pc = 0x1d6808u;

label_1d6808:
    // 0x1d6808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d680c:
    // 0x1d680c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d680cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1d6810:
    // 0x1d6810: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1d6814:
    // 0x1d6814: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d6814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1d6818:
    // 0x1d6818: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1d6818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d681c:
    // 0x1d681c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d681cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1d6820:
    // 0x1d6820: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d6820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1d6824:
    // 0x1d6824: 0x8c62cba8  lw          $v0, -0x3458($v1)
    ctx->pc = 0x1d6824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953896)));
label_1d6828:
    // 0x1d6828: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1d6828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d682c:
    // 0x1d682c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d682cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d6830:
    // 0x1d6830: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d6830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d6834:
    // 0x1d6834: 0x40f809  jalr        $v0
label_1d6838:
    if (ctx->pc == 0x1D6838u) {
        ctx->pc = 0x1D683Cu;
        goto label_1d683c;
    }
    ctx->pc = 0x1D6834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D683Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6834u, 0x1D683Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D683Cu;
label_1d683c:
    // 0x1d683c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d683cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1d6840:
    // 0x1d6840: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1d6840u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d6844:
    // 0x1d6844: 0x8c638ec8  lw          $v1, -0x7138($v1)
    ctx->pc = 0x1d6844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938312)));
label_1d6848:
    // 0x1d6848: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1d6848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1d684c:
    // 0x1d684c: 0x10400091  beqz        $v0, . + 4 + (0x91 << 2)
label_1d6850:
    if (ctx->pc == 0x1D6850u) {
        ctx->pc = 0x1D6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D684Cu;
        // 0x1d6850: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6854u;
        goto label_1d6854;
    }
    ctx->pc = 0x1D684Cu;
    {
        const bool branch_taken_0x1d684c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D684Cu;
        // 0x1d6850: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d684c) {
            ctx->pc = 0x1D6A94u;
            goto label_1d6a94;
        }
    }
    ctx->pc = 0x1D6854u;
label_1d6854:
    // 0x1d6854: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d6854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d6858:
    // 0x1d6858: 0x2442d660  addiu       $v0, $v0, -0x29A0
    ctx->pc = 0x1d6858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956640));
label_1d685c:
    // 0x1d685c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d685cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d6860:
    // 0x1d6860: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d6860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d6864:
    // 0x1d6864: 0x800008  jr          $a0
label_1d6868:
    if (ctx->pc == 0x1D6868u) {
        ctx->pc = 0x1D686Cu;
        goto label_1d686c;
    }
    ctx->pc = 0x1D6864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D686Cu: goto label_1d686c;
            case 0x1D6874u: goto label_1d6874;
            case 0x1D689Cu: goto label_1d689c;
            case 0x1D68B8u: goto label_1d68b8;
            case 0x1D6960u: goto label_1d6960;
            case 0x1D6988u: goto label_1d6988;
            case 0x1D6A1Cu: goto label_1d6a1c;
            case 0x1D6A44u: goto label_1d6a44;
            case 0x1D6A8Cu: goto label_1d6a8c;
            case 0x1D6A94u: goto label_1d6a94;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6864u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D686Cu;
label_1d686c:
    // 0x1d686c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d6870:
    if (ctx->pc == 0x1D6870u) {
        ctx->pc = 0x1D6870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D686Cu;
        // 0x1d6870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6874u;
        goto label_1d6874;
    }
    ctx->pc = 0x1D686Cu;
    {
        const bool branch_taken_0x1d686c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D686Cu;
        // 0x1d6870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d686c) {
            ctx->pc = 0x1D688Cu;
            goto label_1d688c;
        }
    }
    ctx->pc = 0x1D6874u;
label_1d6874:
    // 0x1d6874: 0xc075d44  jal         func_1D7510
label_1d6878:
    if (ctx->pc == 0x1D6878u) {
        ctx->pc = 0x1D687Cu;
        goto label_1d687c;
    }
    ctx->pc = 0x1D6874u;
    SET_GPR_U32(ctx, 31, 0x1D687Cu);
    ctx->pc = 0x1D7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7510u, 0x1D6874u, 0x1D687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D687Cu;
label_1d687c:
    // 0x1d687c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d6880:
    if (ctx->pc == 0x1D6880u) {
        ctx->pc = 0x1D6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D687Cu;
        // 0x1d6880: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6884u;
        goto label_1d6884;
    }
    ctx->pc = 0x1D687Cu;
    {
        const bool branch_taken_0x1d687c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D687Cu;
        // 0x1d6880: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d687c) {
            ctx->pc = 0x1D688Cu;
            goto label_1d688c;
        }
    }
    ctx->pc = 0x1D6884u;
label_1d6884:
    // 0x1d6884: 0x10000095  b           . + 4 + (0x95 << 2)
label_1d6888:
    if (ctx->pc == 0x1D6888u) {
        ctx->pc = 0x1D6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6884u;
        // 0x1d6888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D688Cu;
        goto label_1d688c;
    }
    ctx->pc = 0x1D6884u;
    {
        const bool branch_taken_0x1d6884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6884u;
        // 0x1d6888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6884) {
            ctx->pc = 0x1D6ADCu;
            goto label_1d6adc;
        }
    }
    ctx->pc = 0x1D688Cu;
label_1d688c:
    // 0x1d688c: 0xc075a02  jal         func_1D6808
label_1d6890:
    if (ctx->pc == 0x1D6890u) {
        ctx->pc = 0x1D6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D688Cu;
        // 0x1d6890: 0xae228ec8  sw          $v0, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6894u;
        goto label_1d6894;
    }
    ctx->pc = 0x1D688Cu;
    SET_GPR_U32(ctx, 31, 0x1D6894u);
    ctx->pc = 0x1D6890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D688Cu;
    // 0x1d6890: 0xae228ec8  sw          $v0, -0x7138($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6808u;
    goto label_1d6808;
    ctx->pc = 0x1D6894u;
label_1d6894:
    // 0x1d6894: 0x10000080  b           . + 4 + (0x80 << 2)
label_1d6898:
    if (ctx->pc == 0x1D6898u) {
        ctx->pc = 0x1D6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6894u;
        // 0x1d6898: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D689Cu;
        goto label_1d689c;
    }
    ctx->pc = 0x1D6894u;
    {
        const bool branch_taken_0x1d6894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6894u;
        // 0x1d6898: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6894) {
            ctx->pc = 0x1D6A98u;
            goto label_1d6a98;
        }
    }
    ctx->pc = 0x1D689Cu;
label_1d689c:
    // 0x1d689c: 0xc0c5b8c  jal         func_316E30
label_1d68a0:
    if (ctx->pc == 0x1D68A0u) {
        ctx->pc = 0x1D68A4u;
        goto label_1d68a4;
    }
    ctx->pc = 0x1D689Cu;
    SET_GPR_U32(ctx, 31, 0x1D68A4u);
    ctx->pc = 0x316E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316E30u, 0x1D689Cu, 0x1D68A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68A4u;
label_1d68a4:
    // 0x1d68a4: 0x5440007c  bnel        $v0, $zero, . + 4 + (0x7C << 2)
label_1d68a8:
    if (ctx->pc == 0x1D68A8u) {
        ctx->pc = 0x1D68A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68A4u;
        // 0x1d68a8: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68ACu;
        goto label_1d68ac;
    }
    ctx->pc = 0x1D68A4u;
    {
        const bool branch_taken_0x1d68a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d68a4) {
            ctx->pc = 0x1D68A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D68A4u;
            // 0x1d68a8: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6A98u;
            goto label_1d6a98;
        }
    }
    ctx->pc = 0x1D68ACu;
label_1d68ac:
    // 0x1d68ac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d68acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d68b0:
    // 0x1d68b0: 0x10000078  b           . + 4 + (0x78 << 2)
label_1d68b4:
    if (ctx->pc == 0x1D68B4u) {
        ctx->pc = 0x1D68B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68B0u;
        // 0x1d68b4: 0xae228ec8  sw          $v0, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68B8u;
        goto label_1d68b8;
    }
    ctx->pc = 0x1D68B0u;
    {
        const bool branch_taken_0x1d68b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68B0u;
        // 0x1d68b4: 0xae228ec8  sw          $v0, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68b0) {
            ctx->pc = 0x1D6A94u;
            goto label_1d6a94;
        }
    }
    ctx->pc = 0x1D68B8u;
label_1d68b8:
    // 0x1d68b8: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x1d68b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_1d68bc:
    // 0x1d68bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d68bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d68c0:
    // 0x1d68c0: 0x8e50bd6c  lw          $s0, -0x4294($s2)
    ctx->pc = 0x1d68c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950252)));
label_1d68c4:
    // 0x1d68c4: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
label_1d68c8:
    if (ctx->pc == 0x1D68C8u) {
        ctx->pc = 0x1D68CCu;
        goto label_1d68cc;
    }
    ctx->pc = 0x1D68C4u;
    {
        const bool branch_taken_0x1d68c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d68c4) {
            ctx->pc = 0x1D68F0u;
            goto label_1d68f0;
        }
    }
    ctx->pc = 0x1D68CCu;
label_1d68cc:
    // 0x1d68cc: 0xc0c555a  jal         func_315568
label_1d68d0:
    if (ctx->pc == 0x1D68D0u) {
        ctx->pc = 0x1D68D4u;
        goto label_1d68d4;
    }
    ctx->pc = 0x1D68CCu;
    SET_GPR_U32(ctx, 31, 0x1D68D4u);
    ctx->pc = 0x315568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315568u, 0x1D68CCu, 0x1D68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68D4u;
label_1d68d4:
    // 0x1d68d4: 0xc0a71e0  jal         func_29C780
label_1d68d8:
    if (ctx->pc == 0x1D68D8u) {
        ctx->pc = 0x1D68D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68D4u;
        // 0x1d68d8: 0xae308ec8  sw          $s0, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68DCu;
        goto label_1d68dc;
    }
    ctx->pc = 0x1D68D4u;
    SET_GPR_U32(ctx, 31, 0x1D68DCu);
    ctx->pc = 0x1D68D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68D4u;
    // 0x1d68d8: 0xae308ec8  sw          $s0, -0x7138($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x1D68D4u, 0x1D68DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68DCu;
label_1d68dc:
    // 0x1d68dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d68dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d68e0:
    // 0x1d68e0: 0xc0a7428  jal         func_29D0A0
label_1d68e4:
    if (ctx->pc == 0x1D68E4u) {
        ctx->pc = 0x1D68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68E0u;
        // 0x1d68e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68E8u;
        goto label_1d68e8;
    }
    ctx->pc = 0x1D68E0u;
    SET_GPR_U32(ctx, 31, 0x1D68E8u);
    ctx->pc = 0x1D68E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68E0u;
    // 0x1d68e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x1D68E0u, 0x1D68E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68E8u;
label_1d68e8:
    // 0x1d68e8: 0x1000007c  b           . + 4 + (0x7C << 2)
label_1d68ec:
    if (ctx->pc == 0x1D68ECu) {
        ctx->pc = 0x1D68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68E8u;
        // 0x1d68ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D68F0u;
        goto label_1d68f0;
    }
    ctx->pc = 0x1D68E8u;
    {
        const bool branch_taken_0x1d68e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68E8u;
        // 0x1d68ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68e8) {
            ctx->pc = 0x1D6ADCu;
            goto label_1d6adc;
        }
    }
    ctx->pc = 0x1D68F0u;
label_1d68f0:
    // 0x1d68f0: 0xc075cf2  jal         func_1D73C8
label_1d68f4:
    if (ctx->pc == 0x1D68F4u) {
        ctx->pc = 0x1D68F8u;
        goto label_1d68f8;
    }
    ctx->pc = 0x1D68F0u;
    SET_GPR_U32(ctx, 31, 0x1D68F8u);
    ctx->pc = 0x1D73C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D73C8u, 0x1D68F0u, 0x1D68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68F8u;
label_1d68f8:
    // 0x1d68f8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d68f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_1d68fc:
    // 0x1d68fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d68fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6900:
    // 0x1d6900: 0xc07fb1e  jal         func_1FEC78
label_1d6904:
    if (ctx->pc == 0x1D6904u) {
        ctx->pc = 0x1D6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6900u;
        // 0x1d6904: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6908u;
        goto label_1d6908;
    }
    ctx->pc = 0x1D6900u;
    SET_GPR_U32(ctx, 31, 0x1D6908u);
    ctx->pc = 0x1D6904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6900u;
    // 0x1d6904: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC78u, 0x1D6900u, 0x1D6908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6908u;
label_1d6908:
    // 0x1d6908: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d6908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1d690c:
    // 0x1d690c: 0x9043bd74  lbu         $v1, -0x428C($v0)
    ctx->pc = 0x1d690cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950260)));
label_1d6910:
    // 0x1d6910: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1d6914:
    if (ctx->pc == 0x1D6914u) {
        ctx->pc = 0x1D6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6910u;
        // 0x1d6914: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6918u;
        goto label_1d6918;
    }
    ctx->pc = 0x1D6910u;
    {
        const bool branch_taken_0x1d6910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6910u;
        // 0x1d6914: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6910) {
            ctx->pc = 0x1D692Cu;
            goto label_1d692c;
        }
    }
    ctx->pc = 0x1D6918u;
label_1d6918:
    // 0x1d6918: 0xc075d2c  jal         func_1D74B0
label_1d691c:
    if (ctx->pc == 0x1D691Cu) {
        ctx->pc = 0x1D6920u;
        goto label_1d6920;
    }
    ctx->pc = 0x1D6918u;
    SET_GPR_U32(ctx, 31, 0x1D6920u);
    ctx->pc = 0x1D74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D74B0u, 0x1D6918u, 0x1D6920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6920u;
label_1d6920:
    // 0x1d6920: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d6920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d6924:
    // 0x1d6924: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1d6928:
    if (ctx->pc == 0x1D6928u) {
        ctx->pc = 0x1D6928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6924u;
        // 0x1d6928: 0xae228ec8  sw          $v0, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D692Cu;
        goto label_1d692c;
    }
    ctx->pc = 0x1D6924u;
    {
        const bool branch_taken_0x1d6924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6924u;
        // 0x1d6928: 0xae228ec8  sw          $v0, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6924) {
            ctx->pc = 0x1D6AD8u;
            goto label_1d6ad8;
        }
    }
    ctx->pc = 0x1D692Cu;
label_1d692c:
    // 0x1d692c: 0x8e42bd6c  lw          $v0, -0x4294($s2)
    ctx->pc = 0x1d692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950252)));
label_1d6930:
    // 0x1d6930: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d6930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6934:
    // 0x1d6934: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
label_1d6938:
    if (ctx->pc == 0x1D6938u) {
        ctx->pc = 0x1D6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6934u;
        // 0x1d6938: 0xac60a324  sw          $zero, -0x5CDC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D693Cu;
        goto label_1d693c;
    }
    ctx->pc = 0x1D6934u;
    {
        const bool branch_taken_0x1d6934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D6938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6934u;
        // 0x1d6938: 0xac60a324  sw          $zero, -0x5CDC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6934) {
            ctx->pc = 0x1D6948u;
            goto label_1d6948;
        }
    }
    ctx->pc = 0x1D693Cu;
label_1d693c:
    // 0x1d693c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1d693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d6940:
    // 0x1d6940: 0x10000065  b           . + 4 + (0x65 << 2)
label_1d6944:
    if (ctx->pc == 0x1D6944u) {
        ctx->pc = 0x1D6944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6940u;
        // 0x1d6944: 0xae228ec8  sw          $v0, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6948u;
        goto label_1d6948;
    }
    ctx->pc = 0x1D6940u;
    {
        const bool branch_taken_0x1d6940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6940u;
        // 0x1d6944: 0xae228ec8  sw          $v0, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6940) {
            ctx->pc = 0x1D6AD8u;
            goto label_1d6ad8;
        }
    }
    ctx->pc = 0x1D6948u;
label_1d6948:
    // 0x1d6948: 0xc075d2c  jal         func_1D74B0
label_1d694c:
    if (ctx->pc == 0x1D694Cu) {
        ctx->pc = 0x1D6950u;
        goto label_1d6950;
    }
    ctx->pc = 0x1D6948u;
    SET_GPR_U32(ctx, 31, 0x1D6950u);
    ctx->pc = 0x1D74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D74B0u, 0x1D6948u, 0x1D6950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6950u;
label_1d6950:
    // 0x1d6950: 0xc0a040c  jal         func_281030
label_1d6954:
    if (ctx->pc == 0x1D6954u) {
        ctx->pc = 0x1D6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6950u;
        // 0x1d6954: 0xae208ec8  sw          $zero, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6958u;
        goto label_1d6958;
    }
    ctx->pc = 0x1D6950u;
    SET_GPR_U32(ctx, 31, 0x1D6958u);
    ctx->pc = 0x1D6954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6950u;
    // 0x1d6954: 0xae208ec8  sw          $zero, -0x7138($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281030u, 0x1D6950u, 0x1D6958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6958u;
label_1d6958:
    // 0x1d6958: 0x10000060  b           . + 4 + (0x60 << 2)
label_1d695c:
    if (ctx->pc == 0x1D695Cu) {
        ctx->pc = 0x1D695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6958u;
        // 0x1d695c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6960u;
        goto label_1d6960;
    }
    ctx->pc = 0x1D6958u;
    {
        const bool branch_taken_0x1d6958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6958u;
        // 0x1d695c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6958) {
            ctx->pc = 0x1D6ADCu;
            goto label_1d6adc;
        }
    }
    ctx->pc = 0x1D6960u;
label_1d6960:
    // 0x1d6960: 0xc075cf2  jal         func_1D73C8
label_1d6964:
    if (ctx->pc == 0x1D6964u) {
        ctx->pc = 0x1D6968u;
        goto label_1d6968;
    }
    ctx->pc = 0x1D6960u;
    SET_GPR_U32(ctx, 31, 0x1D6968u);
    ctx->pc = 0x1D73C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D73C8u, 0x1D6960u, 0x1D6968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6968u;
label_1d6968:
    // 0x1d6968: 0xc075d2c  jal         func_1D74B0
label_1d696c:
    if (ctx->pc == 0x1D696Cu) {
        ctx->pc = 0x1D6970u;
        goto label_1d6970;
    }
    ctx->pc = 0x1D6968u;
    SET_GPR_U32(ctx, 31, 0x1D6970u);
    ctx->pc = 0x1D74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D74B0u, 0x1D6968u, 0x1D6970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6970u;
label_1d6970:
    // 0x1d6970: 0xc075d44  jal         func_1D7510
label_1d6974:
    if (ctx->pc == 0x1D6974u) {
        ctx->pc = 0x1D6978u;
        goto label_1d6978;
    }
    ctx->pc = 0x1D6970u;
    SET_GPR_U32(ctx, 31, 0x1D6978u);
    ctx->pc = 0x1D7510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7510u, 0x1D6970u, 0x1D6978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6978u;
label_1d6978:
    // 0x1d6978: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d6978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d697c:
    // 0x1d697c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6980:
    // 0x1d6980: 0x10000056  b           . + 4 + (0x56 << 2)
label_1d6984:
    if (ctx->pc == 0x1D6984u) {
        ctx->pc = 0x1D6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6980u;
        // 0x1d6984: 0xae238ec8  sw          $v1, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6988u;
        goto label_1d6988;
    }
    ctx->pc = 0x1D6980u;
    {
        const bool branch_taken_0x1d6980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6980u;
        // 0x1d6984: 0xae238ec8  sw          $v1, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6980) {
            ctx->pc = 0x1D6ADCu;
            goto label_1d6adc;
        }
    }
    ctx->pc = 0x1D6988u;
label_1d6988:
    // 0x1d6988: 0x8e02cba8  lw          $v0, -0x3458($s0)
    ctx->pc = 0x1d6988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_1d698c:
    // 0x1d698c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1d698cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d6990:
    // 0x1d6990: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d6990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d6994:
    // 0x1d6994: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1d6994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1d6998:
    // 0x1d6998: 0x40f809  jalr        $v0
label_1d699c:
    if (ctx->pc == 0x1D699Cu) {
        ctx->pc = 0x1D69A0u;
        goto label_1d69a0;
    }
    ctx->pc = 0x1D6998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D69A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6998u, 0x1D69A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D69A0u;
label_1d69a0:
    // 0x1d69a0: 0x8e03cba8  lw          $v1, -0x3458($s0)
    ctx->pc = 0x1d69a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_1d69a4:
    // 0x1d69a4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1d69a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1d69a8:
    // 0x1d69a8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d69a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d69ac:
    // 0x1d69ac: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1d69acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1d69b0:
    // 0x1d69b0: 0x40f809  jalr        $v0
label_1d69b4:
    if (ctx->pc == 0x1D69B4u) {
        ctx->pc = 0x1D69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69B0u;
        // 0x1d69b4: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69B8u;
        goto label_1d69b8;
    }
    ctx->pc = 0x1D69B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D69B8u);
        ctx->pc = 0x1D69B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69B0u;
        // 0x1d69b4: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D69B0u, 0x1D69B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D69B8u;
label_1d69b8:
    // 0x1d69b8: 0x26104ed8  addiu       $s0, $s0, 0x4ED8
    ctx->pc = 0x1d69b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20184));
label_1d69bc:
    // 0x1d69bc: 0xc0aeac2  jal         func_2BAB08
label_1d69c0:
    if (ctx->pc == 0x1D69C0u) {
        ctx->pc = 0x1D69C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69BCu;
        // 0x1d69c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69C4u;
        goto label_1d69c4;
    }
    ctx->pc = 0x1D69BCu;
    SET_GPR_U32(ctx, 31, 0x1D69C4u);
    ctx->pc = 0x1D69C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69BCu;
    // 0x1d69c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAB08u, 0x1D69BCu, 0x1D69C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69C4u;
label_1d69c4:
    // 0x1d69c4: 0xc075f04  jal         func_1D7C10
label_1d69c8:
    if (ctx->pc == 0x1D69C8u) {
        ctx->pc = 0x1D69CCu;
        goto label_1d69cc;
    }
    ctx->pc = 0x1D69C4u;
    SET_GPR_U32(ctx, 31, 0x1D69CCu);
    ctx->pc = 0x1D7C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7C10u, 0x1D69C4u, 0x1D69CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69CCu;
label_1d69cc:
    // 0x1d69cc: 0xc0ae9f6  jal         func_2BA7D8
label_1d69d0:
    if (ctx->pc == 0x1D69D0u) {
        ctx->pc = 0x1D69D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69CCu;
        // 0x1d69d0: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69D4u;
        goto label_1d69d4;
    }
    ctx->pc = 0x1D69CCu;
    SET_GPR_U32(ctx, 31, 0x1D69D4u);
    ctx->pc = 0x1D69D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69CCu;
    // 0x1d69d0: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA7D8u, 0x1D69CCu, 0x1D69D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69D4u;
label_1d69d4:
    // 0x1d69d4: 0xc0ae94a  jal         func_2BA528
label_1d69d8:
    if (ctx->pc == 0x1D69D8u) {
        ctx->pc = 0x1D69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69D4u;
        // 0x1d69d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69DCu;
        goto label_1d69dc;
    }
    ctx->pc = 0x1D69D4u;
    SET_GPR_U32(ctx, 31, 0x1D69DCu);
    ctx->pc = 0x1D69D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69D4u;
    // 0x1d69d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA528u, 0x1D69D4u, 0x1D69DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69DCu;
label_1d69dc:
    // 0x1d69dc: 0xc075d2c  jal         func_1D74B0
label_1d69e0:
    if (ctx->pc == 0x1D69E0u) {
        ctx->pc = 0x1D69E4u;
        goto label_1d69e4;
    }
    ctx->pc = 0x1D69DCu;
    SET_GPR_U32(ctx, 31, 0x1D69E4u);
    ctx->pc = 0x1D74B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D74B0u, 0x1D69DCu, 0x1D69E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69E4u;
label_1d69e4:
    // 0x1d69e4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d69e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_1d69e8:
    // 0x1d69e8: 0xc08028a  jal         func_200A28
label_1d69ec:
    if (ctx->pc == 0x1D69ECu) {
        ctx->pc = 0x1D69ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69E8u;
        // 0x1d69ec: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69F0u;
        goto label_1d69f0;
    }
    ctx->pc = 0x1D69E8u;
    SET_GPR_U32(ctx, 31, 0x1D69F0u);
    ctx->pc = 0x1D69ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69E8u;
    // 0x1d69ec: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200A28u, 0x1D69E8u, 0x1D69F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69F0u;
label_1d69f0:
    // 0x1d69f0: 0xc0a2306  jal         func_288C18
label_1d69f4:
    if (ctx->pc == 0x1D69F4u) {
        ctx->pc = 0x1D69F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D69F0u;
        // 0x1d69f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D69F8u;
        goto label_1d69f8;
    }
    ctx->pc = 0x1D69F0u;
    SET_GPR_U32(ctx, 31, 0x1D69F8u);
    ctx->pc = 0x1D69F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69F0u;
    // 0x1d69f4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288C18u, 0x1D69F0u, 0x1D69F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69F8u;
label_1d69f8:
    // 0x1d69f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d69f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1d69fc:
    // 0x1d69fc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1d69fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d6a00:
    // 0x1d6a00: 0xac60a438  sw          $zero, -0x5BC8($v1)
    ctx->pc = 0x1d6a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943800), GPR_U32(ctx, 0));
label_1d6a04:
    // 0x1d6a04: 0xc075a02  jal         func_1D6808
label_1d6a08:
    if (ctx->pc == 0x1D6A08u) {
        ctx->pc = 0x1D6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A04u;
        // 0x1d6a08: 0xae228ec8  sw          $v0, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A0Cu;
        goto label_1d6a0c;
    }
    ctx->pc = 0x1D6A04u;
    SET_GPR_U32(ctx, 31, 0x1D6A0Cu);
    ctx->pc = 0x1D6A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A04u;
    // 0x1d6a08: 0xae228ec8  sw          $v0, -0x7138($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6808u;
    goto label_1d6808;
    ctx->pc = 0x1D6A0Cu;
label_1d6a0c:
    // 0x1d6a0c: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x1d6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_1d6a10:
    // 0x1d6a10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6a14:
    // 0x1d6a14: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1d6a18:
    if (ctx->pc == 0x1D6A18u) {
        ctx->pc = 0x1D6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A14u;
        // 0x1d6a18: 0xa0625aec  sb          $v0, 0x5AEC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23276), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A1Cu;
        goto label_1d6a1c;
    }
    ctx->pc = 0x1D6A14u;
    {
        const bool branch_taken_0x1d6a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A14u;
        // 0x1d6a18: 0xa0625aec  sb          $v0, 0x5AEC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 23276), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a14) {
            ctx->pc = 0x1D6A94u;
            goto label_1d6a94;
        }
    }
    ctx->pc = 0x1D6A1Cu;
label_1d6a1c:
    // 0x1d6a1c: 0xc075b10  jal         func_1D6C40
label_1d6a20:
    if (ctx->pc == 0x1D6A20u) {
        ctx->pc = 0x1D6A24u;
        goto label_1d6a24;
    }
    ctx->pc = 0x1D6A1Cu;
    SET_GPR_U32(ctx, 31, 0x1D6A24u);
    ctx->pc = 0x1D6C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6C40u, 0x1D6A1Cu, 0x1D6A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A24u;
label_1d6a24:
    // 0x1d6a24: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d6a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1d6a28:
    // 0x1d6a28: 0xae228ec8  sw          $v0, -0x7138($s1)
    ctx->pc = 0x1d6a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 2));
label_1d6a2c:
    // 0x1d6a2c: 0x8c629174  lw          $v0, -0x6E8C($v1)
    ctx->pc = 0x1d6a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938996)));
label_1d6a30:
    // 0x1d6a30: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1d6a34:
    if (ctx->pc == 0x1D6A34u) {
        ctx->pc = 0x1D6A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A30u;
        // 0x1d6a34: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A38u;
        goto label_1d6a38;
    }
    ctx->pc = 0x1D6A30u;
    {
        const bool branch_taken_0x1d6a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A30u;
        // 0x1d6a34: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a30) {
            ctx->pc = 0x1D6A94u;
            goto label_1d6a94;
        }
    }
    ctx->pc = 0x1D6A38u;
label_1d6a38:
    // 0x1d6a38: 0xac609174  sw          $zero, -0x6E8C($v1)
    ctx->pc = 0x1d6a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294938996), GPR_U32(ctx, 0));
label_1d6a3c:
    // 0x1d6a3c: 0x10000015  b           . + 4 + (0x15 << 2)
label_1d6a40:
    if (ctx->pc == 0x1D6A40u) {
        ctx->pc = 0x1D6A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A3Cu;
        // 0x1d6a40: 0xae228ec8  sw          $v0, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A44u;
        goto label_1d6a44;
    }
    ctx->pc = 0x1D6A3Cu;
    {
        const bool branch_taken_0x1d6a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A3Cu;
        // 0x1d6a40: 0xae228ec8  sw          $v0, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a3c) {
            ctx->pc = 0x1D6A94u;
            goto label_1d6a94;
        }
    }
    ctx->pc = 0x1D6A44u;
label_1d6a44:
    // 0x1d6a44: 0x8e02cba8  lw          $v0, -0x3458($s0)
    ctx->pc = 0x1d6a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_1d6a48:
    // 0x1d6a48: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1d6a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d6a4c:
    // 0x1d6a4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d6a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d6a50:
    // 0x1d6a50: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1d6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1d6a54:
    // 0x1d6a54: 0x40f809  jalr        $v0
label_1d6a58:
    if (ctx->pc == 0x1D6A58u) {
        ctx->pc = 0x1D6A5Cu;
        goto label_1d6a5c;
    }
    ctx->pc = 0x1D6A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6A5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6A54u, 0x1D6A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6A5Cu;
label_1d6a5c:
    // 0x1d6a5c: 0x8e03cba8  lw          $v1, -0x3458($s0)
    ctx->pc = 0x1d6a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_1d6a60:
    // 0x1d6a60: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1d6a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1d6a64:
    // 0x1d6a64: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d6a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d6a68:
    // 0x1d6a68: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1d6a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1d6a6c:
    // 0x1d6a6c: 0x40f809  jalr        $v0
label_1d6a70:
    if (ctx->pc == 0x1D6A70u) {
        ctx->pc = 0x1D6A74u;
        goto label_1d6a74;
    }
    ctx->pc = 0x1D6A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D6A74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6A6Cu, 0x1D6A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6A74u;
label_1d6a74:
    // 0x1d6a74: 0xc0a040c  jal         func_281030
label_1d6a78:
    if (ctx->pc == 0x1D6A78u) {
        ctx->pc = 0x1D6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A74u;
        // 0x1d6a78: 0xae208ec8  sw          $zero, -0x7138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A7Cu;
        goto label_1d6a7c;
    }
    ctx->pc = 0x1D6A74u;
    SET_GPR_U32(ctx, 31, 0x1D6A7Cu);
    ctx->pc = 0x1D6A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A74u;
    // 0x1d6a78: 0xae208ec8  sw          $zero, -0x7138($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294938312), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281030u, 0x1D6A74u, 0x1D6A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A7Cu;
label_1d6a7c:
    // 0x1d6a7c: 0xc075a02  jal         func_1D6808
label_1d6a80:
    if (ctx->pc == 0x1D6A80u) {
        ctx->pc = 0x1D6A84u;
        goto label_1d6a84;
    }
    ctx->pc = 0x1D6A7Cu;
    SET_GPR_U32(ctx, 31, 0x1D6A84u);
    ctx->pc = 0x1D6808u;
    goto label_1d6808;
    ctx->pc = 0x1D6A84u;
label_1d6a84:
    // 0x1d6a84: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d6a88:
    if (ctx->pc == 0x1D6A88u) {
        ctx->pc = 0x1D6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A84u;
        // 0x1d6a88: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6A8Cu;
        goto label_1d6a8c;
    }
    ctx->pc = 0x1D6A84u;
    {
        const bool branch_taken_0x1d6a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A84u;
        // 0x1d6a88: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6a84) {
            ctx->pc = 0x1D6A98u;
            goto label_1d6a98;
        }
    }
    ctx->pc = 0x1D6A8Cu;
label_1d6a8c:
    // 0x1d6a8c: 0xc075fc8  jal         func_1D7F20
label_1d6a90:
    if (ctx->pc == 0x1D6A90u) {
        ctx->pc = 0x1D6A94u;
        goto label_1d6a94;
    }
    ctx->pc = 0x1D6A8Cu;
    SET_GPR_U32(ctx, 31, 0x1D6A94u);
    ctx->pc = 0x1D7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7F20u, 0x1D6A8Cu, 0x1D6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A94u;
label_1d6a94:
    // 0x1d6a94: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d6a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_1d6a98:
    // 0x1d6a98: 0xc0829cc  jal         func_20A730
label_1d6a9c:
    if (ctx->pc == 0x1D6A9Cu) {
        ctx->pc = 0x1D6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6A98u;
        // 0x1d6a9c: 0x2484c100  addiu       $a0, $a0, -0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AA0u;
        goto label_1d6aa0;
    }
    ctx->pc = 0x1D6A98u;
    SET_GPR_U32(ctx, 31, 0x1D6AA0u);
    ctx->pc = 0x1D6A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A98u;
    // 0x1d6a9c: 0x2484c100  addiu       $a0, $a0, -0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A730u, 0x1D6A98u, 0x1D6AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6AA0u;
label_1d6aa0:
    // 0x1d6aa0: 0x8e238ec8  lw          $v1, -0x7138($s1)
    ctx->pc = 0x1d6aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938312)));
label_1d6aa4:
    // 0x1d6aa4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6aa8:
    // 0x1d6aa8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1d6aac:
    if (ctx->pc == 0x1D6AACu) {
        ctx->pc = 0x1D6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AA8u;
        // 0x1d6aac: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AB0u;
        goto label_1d6ab0;
    }
    ctx->pc = 0x1D6AA8u;
    {
        const bool branch_taken_0x1d6aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D6AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AA8u;
        // 0x1d6aac: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6aa8) {
            ctx->pc = 0x1D6AC0u;
            goto label_1d6ac0;
        }
    }
    ctx->pc = 0x1D6AB0u;
label_1d6ab0:
    // 0x1d6ab0: 0xc07f49c  jal         func_1FD270
label_1d6ab4:
    if (ctx->pc == 0x1D6AB4u) {
        ctx->pc = 0x1D6AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AB0u;
        // 0x1d6ab4: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AB8u;
        goto label_1d6ab8;
    }
    ctx->pc = 0x1D6AB0u;
    SET_GPR_U32(ctx, 31, 0x1D6AB8u);
    ctx->pc = 0x1D6AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6AB0u;
    // 0x1d6ab4: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD270u, 0x1D6AB0u, 0x1D6AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6AB8u;
label_1d6ab8:
    // 0x1d6ab8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d6abc:
    if (ctx->pc == 0x1D6ABCu) {
        ctx->pc = 0x1D6AC0u;
        goto label_1d6ac0;
    }
    ctx->pc = 0x1D6AB8u;
    {
        const bool branch_taken_0x1d6ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6ab8) {
            ctx->pc = 0x1D6AC8u;
            goto label_1d6ac8;
        }
    }
    ctx->pc = 0x1D6AC0u;
label_1d6ac0:
    // 0x1d6ac0: 0xc081860  jal         func_206180
label_1d6ac4:
    if (ctx->pc == 0x1D6AC4u) {
        ctx->pc = 0x1D6AC8u;
        goto label_1d6ac8;
    }
    ctx->pc = 0x1D6AC0u;
    SET_GPR_U32(ctx, 31, 0x1D6AC8u);
    ctx->pc = 0x206180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206180u, 0x1D6AC0u, 0x1D6AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6AC8u;
label_1d6ac8:
    // 0x1d6ac8: 0xc073dce  jal         func_1CF738
label_1d6acc:
    if (ctx->pc == 0x1D6ACCu) {
        ctx->pc = 0x1D6AD0u;
        goto label_1d6ad0;
    }
    ctx->pc = 0x1D6AC8u;
    SET_GPR_U32(ctx, 31, 0x1D6AD0u);
    ctx->pc = 0x1CF738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF738u, 0x1D6AC8u, 0x1D6AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6AD0u;
label_1d6ad0:
    // 0x1d6ad0: 0xc0d9a30  jal         func_3668C0
label_1d6ad4:
    if (ctx->pc == 0x1D6AD4u) {
        ctx->pc = 0x1D6AD8u;
        goto label_1d6ad8;
    }
    ctx->pc = 0x1D6AD0u;
    SET_GPR_U32(ctx, 31, 0x1D6AD8u);
    ctx->pc = 0x3668C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3668C0u, 0x1D6AD0u, 0x1D6AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6AD8u;
label_1d6ad8:
    // 0x1d6ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d6adc:
    // 0x1d6adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6ae0:
    // 0x1d6ae0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1d6ae4:
    // 0x1d6ae4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d6ae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6ae8:
    // 0x1d6ae8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d6ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1d6aec:
    // 0x1d6aec: 0x3e00008  jr          $ra
label_1d6af0:
    if (ctx->pc == 0x1D6AF0u) {
        ctx->pc = 0x1D6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AECu;
        // 0x1d6af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6AF4u;
        goto label_1d6af4;
    }
    ctx->pc = 0x1D6AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6AECu;
        // 0x1d6af0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6AF4u;
label_1d6af4:
    // 0x1d6af4: 0x0  nop
    ctx->pc = 0x1d6af4u;
    // NOP
    ctx->pc = 0x1d6af8u;
}
