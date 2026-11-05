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

// Function: sub_00319A08
// Address: 0x319a08 - 0x319be0
void sub_00319A08_0x319a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319A08_0x319a08");
#endif

    switch (ctx->pc) {
        case 0x319a3cu: goto label_319a3c;
        case 0x319a5cu: goto label_319a5c;
        case 0x319a70u: goto label_319a70;
        case 0x319a80u: goto label_319a80;
        case 0x319a90u: goto label_319a90;
        case 0x319a9cu: goto label_319a9c;
        case 0x319ab4u: goto label_319ab4;
        case 0x319accu: goto label_319acc;
        case 0x319ad8u: goto label_319ad8;
        case 0x319ae4u: goto label_319ae4;
        case 0x319af0u: goto label_319af0;
        case 0x319b00u: goto label_319b00;
        case 0x319b3cu: goto label_319b3c;
        case 0x319b4cu: goto label_319b4c;
        case 0x319b54u: goto label_319b54;
        case 0x319b64u: goto label_319b64;
        case 0x319b6cu: goto label_319b6c;
        case 0x319b7cu: goto label_319b7c;
        case 0x319b84u: goto label_319b84;
        case 0x319b94u: goto label_319b94;
        case 0x319b9cu: goto label_319b9c;
        case 0x319bacu: goto label_319bac;
        case 0x319bb4u: goto label_319bb4;
        default: break;
    }

    ctx->pc = 0x319a08u;

    // 0x319a08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x319a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x319a0c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x319a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x319a10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x319a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x319a14: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x319a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x319a18: 0x8c44bd48  lw          $a0, -0x42B8($v0)
    ctx->pc = 0x319a18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x319a1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x319a1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319a20: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x319a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x319a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x319a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x319a28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x319a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x319a2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x319a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x319a30: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x319a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x319a34: 0xc0a0472  jal         func_2811C8
    ctx->pc = 0x319A34u;
    SET_GPR_U32(ctx, 31, 0x319A3Cu);
    ctx->pc = 0x319A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319A34u;
    // 0x319a38: 0x24a53840  addiu       $a1, $a1, 0x3840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x319A34u, 0x319A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A3Cu;
label_319a3c:
    // 0x319a3c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x319a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x319a40: 0x9062bd24  lbu         $v0, -0x42DC($v1)
    ctx->pc = 0x319a40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x319a44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x319A44u;
    {
        const bool branch_taken_0x319a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A44u;
        // 0x319a48: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a44) {
            ctx->pc = 0x319A64u;
            goto label_319a64;
        }
    }
    ctx->pc = 0x319A4Cu;
    // 0x319a4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x319a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x319a50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x319a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319a54: 0xc0b580e  jal         func_2D6038
    ctx->pc = 0x319A54u;
    SET_GPR_U32(ctx, 31, 0x319A5Cu);
    ctx->pc = 0x319A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319A54u;
    // 0x319a58: 0x8c44bd20  lw          $a0, -0x42E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6038u, 0x319A54u, 0x319A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A5Cu;
label_319a5c:
    // 0x319a5c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x319A5Cu;
    {
        const bool branch_taken_0x319a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319A5Cu;
        // 0x319a60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319a5c) {
            ctx->pc = 0x319AD8u;
            goto label_319ad8;
        }
    }
    ctx->pc = 0x319A64u;
label_319a64:
    // 0x319a64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x319a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319a68: 0xc0c87c6  jal         func_321F18
    ctx->pc = 0x319A68u;
    SET_GPR_U32(ctx, 31, 0x319A70u);
    ctx->pc = 0x319A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319A68u;
    // 0x319a6c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F18u, 0x319A68u, 0x319A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A70u;
label_319a70:
    // 0x319a70: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x319a70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x319a74: 0xae02bd3c  sw          $v0, -0x42C4($s0)
    ctx->pc = 0x319a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950204), GPR_U32(ctx, 2));
    // 0x319a78: 0xc0c87c6  jal         func_321F18
    ctx->pc = 0x319A78u;
    SET_GPR_U32(ctx, 31, 0x319A80u);
    ctx->pc = 0x319A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319A78u;
    // 0x319a7c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F18u, 0x319A78u, 0x319A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A80u;
label_319a80:
    // 0x319a80: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x319a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319a84: 0x240401c4  addiu       $a0, $zero, 0x1C4
    ctx->pc = 0x319a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x319a88: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x319A88u;
    SET_GPR_U32(ctx, 31, 0x319A90u);
    ctx->pc = 0x319A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319A88u;
    // 0x319a8c: 0xae22bd40  sw          $v0, -0x42C0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950208), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x319A88u, 0x319A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A90u;
label_319a90:
    // 0x319a90: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x319a90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x319a94: 0xc0b4f92  jal         func_2D3E48
    ctx->pc = 0x319A94u;
    SET_GPR_U32(ctx, 31, 0x319A9Cu);
    ctx->pc = 0x319A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319A94u;
    // 0x319a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3E48u, 0x319A94u, 0x319A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319A9Cu;
label_319a9c:
    // 0x319a9c: 0x8e26bd40  lw          $a2, -0x42C0($s1)
    ctx->pc = 0x319a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950208)));
    // 0x319aa0: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x319AA0u;
    {
        const bool branch_taken_0x319aa0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x319AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AA0u;
        // 0x319aa4: 0xae02bd28  sw          $v0, -0x42D8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319aa0) {
            ctx->pc = 0x319ABCu;
            goto label_319abc;
        }
    }
    ctx->pc = 0x319AA8u;
    // 0x319aa8: 0x8e45bd3c  lw          $a1, -0x42C4($s2)
    ctx->pc = 0x319aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950204)));
    // 0x319aac: 0xc0b5346  jal         func_2D4D18
    ctx->pc = 0x319AACu;
    SET_GPR_U32(ctx, 31, 0x319AB4u);
    ctx->pc = 0x319AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319AACu;
    // 0x319ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4D18u, 0x319AACu, 0x319AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AB4u;
label_319ab4:
    // 0x319ab4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x319AB4u;
    {
        const bool branch_taken_0x319ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319AB4u;
        // 0x319ab8: 0x8e51bd3c  lw          $s1, -0x42C4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319ab4) {
            ctx->pc = 0x319AD0u;
            goto label_319ad0;
        }
    }
    ctx->pc = 0x319ABCu;
label_319abc:
    // 0x319abc: 0x8e45bd3c  lw          $a1, -0x42C4($s2)
    ctx->pc = 0x319abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950204)));
    // 0x319ac0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319ac4: 0xc0b5346  jal         func_2D4D18
    ctx->pc = 0x319AC4u;
    SET_GPR_U32(ctx, 31, 0x319ACCu);
    ctx->pc = 0x319AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319AC4u;
    // 0x319ac8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4D18u, 0x319AC4u, 0x319ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319ACCu;
label_319acc:
    // 0x319acc: 0x8e51bd3c  lw          $s1, -0x42C4($s2)
    ctx->pc = 0x319accu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950204)));
label_319ad0:
    // 0x319ad0: 0xc0c8b96  jal         func_322E58
    ctx->pc = 0x319AD0u;
    SET_GPR_U32(ctx, 31, 0x319AD8u);
    ctx->pc = 0x319AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319AD0u;
    // 0x319ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322E58u, 0x319AD0u, 0x319AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AD8u;
label_319ad8:
    // 0x319ad8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x319ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x319adc: 0xc0c87c6  jal         func_321F18
    ctx->pc = 0x319ADCu;
    SET_GPR_U32(ctx, 31, 0x319AE4u);
    ctx->pc = 0x319AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319ADCu;
    // 0x319ae0: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321F18u, 0x319ADCu, 0x319AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AE4u;
label_319ae4:
    // 0x319ae4: 0xae02bd44  sw          $v0, -0x42BC($s0)
    ctx->pc = 0x319ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950212), GPR_U32(ctx, 2));
    // 0x319ae8: 0xc0858a8  jal         func_2162A0
    ctx->pc = 0x319AE8u;
    SET_GPR_U32(ctx, 31, 0x319AF0u);
    ctx->pc = 0x319AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319AE8u;
    // 0x319aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2162A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162A0u, 0x319AE8u, 0x319AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319AF0u;
label_319af0:
    // 0x319af0: 0x8e64bd48  lw          $a0, -0x42B8($s3)
    ctx->pc = 0x319af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
    // 0x319af4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x319af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x319af8: 0xc0a0472  jal         func_2811C8
    ctx->pc = 0x319AF8u;
    SET_GPR_U32(ctx, 31, 0x319B00u);
    ctx->pc = 0x319AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319AF8u;
    // 0x319afc: 0x24a53858  addiu       $a1, $a1, 0x3858 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x319AF8u, 0x319B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B00u;
label_319b00:
    // 0x319b00: 0x9284bd24  lbu         $a0, -0x42DC($s4)
    ctx->pc = 0x319b00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 4294950180)));
    // 0x319b04: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x319B04u;
    {
        const bool branch_taken_0x319b04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x319B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B04u;
        // 0x319b08: 0x8e02bd44  lw          $v0, -0x42BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b04) {
            ctx->pc = 0x319B1Cu;
            goto label_319b1c;
        }
    }
    ctx->pc = 0x319B0Cu;
    // 0x319b0c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x319b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x319b10: 0x8c43bd3c  lw          $v1, -0x42C4($v0)
    ctx->pc = 0x319b10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD3Cu));
    // 0x319b14: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x319B14u;
    {
        const bool branch_taken_0x319b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x319B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B14u;
        // 0x319b18: 0x8e02bd44  lw          $v0, -0x42BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b14) {
            ctx->pc = 0x319B24u;
            goto label_319b24;
        }
    }
    ctx->pc = 0x319B1Cu;
label_319b1c:
    // 0x319b1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x319B1Cu;
    {
        const bool branch_taken_0x319b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B1Cu;
        // 0x319b20: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b1c) {
            ctx->pc = 0x319B2Cu;
            goto label_319b2c;
        }
    }
    ctx->pc = 0x319B24u;
label_319b24:
    // 0x319b24: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x319B24u;
    {
        const bool branch_taken_0x319b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319B24u;
        // 0x319b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319b24) {
            ctx->pc = 0x319BB8u;
            goto label_319bb8;
        }
    }
    ctx->pc = 0x319B2Cu;
label_319b2c:
    // 0x319b2c: 0xac40be00  sw          $zero, -0x4200($v0)
    ctx->pc = 0x319b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950400), GPR_U32(ctx, 0));
    // 0x319b30: 0x8e65bd48  lw          $a1, -0x42B8($s3)
    ctx->pc = 0x319b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
    // 0x319b34: 0xc0c8848  jal         func_322120
    ctx->pc = 0x319B34u;
    SET_GPR_U32(ctx, 31, 0x319B3Cu);
    ctx->pc = 0x319B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B34u;
    // 0x319b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322120u, 0x319B34u, 0x319B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B3Cu;
label_319b3c:
    // 0x319b3c: 0x8e64bd48  lw          $a0, -0x42B8($s3)
    ctx->pc = 0x319b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
    // 0x319b40: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x319b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x319b44: 0xc0a0472  jal         func_2811C8
    ctx->pc = 0x319B44u;
    SET_GPR_U32(ctx, 31, 0x319B4Cu);
    ctx->pc = 0x319B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B44u;
    // 0x319b48: 0x24a53868  addiu       $a1, $a1, 0x3868 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x319B44u, 0x319B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B4Cu;
label_319b4c:
    // 0x319b4c: 0xc0c4ca0  jal         func_313280
    ctx->pc = 0x319B4Cu;
    SET_GPR_U32(ctx, 31, 0x319B54u);
    ctx->pc = 0x319B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B4Cu;
    // 0x319b50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313280u, 0x319B4Cu, 0x319B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B54u;
label_319b54:
    // 0x319b54: 0x3c10005b  lui         $s0, 0x5B
    ctx->pc = 0x319b54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)91 << 16));
    // 0x319b58: 0x261021e8  addiu       $s0, $s0, 0x21E8
    ctx->pc = 0x319b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8680));
    // 0x319b5c: 0xc0c6d70  jal         func_31B5C0
    ctx->pc = 0x319B5Cu;
    SET_GPR_U32(ctx, 31, 0x319B64u);
    ctx->pc = 0x319B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B5Cu;
    // 0x319b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B5C0u, 0x319B5Cu, 0x319B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B64u;
label_319b64:
    // 0x319b64: 0xc0c6d72  jal         func_31B5C8
    ctx->pc = 0x319B64u;
    SET_GPR_U32(ctx, 31, 0x319B6Cu);
    ctx->pc = 0x319B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B64u;
    // 0x319b68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B5C8u, 0x319B64u, 0x319B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B6Cu;
label_319b6c:
    // 0x319b6c: 0x8e64bd48  lw          $a0, -0x42B8($s3)
    ctx->pc = 0x319b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
    // 0x319b70: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x319b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x319b74: 0xc0a0472  jal         func_2811C8
    ctx->pc = 0x319B74u;
    SET_GPR_U32(ctx, 31, 0x319B7Cu);
    ctx->pc = 0x319B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B74u;
    // 0x319b78: 0x24a53878  addiu       $a1, $a1, 0x3878 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x319B74u, 0x319B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B7Cu;
label_319b7c:
    // 0x319b7c: 0xc086f68  jal         func_21BDA0
    ctx->pc = 0x319B7Cu;
    SET_GPR_U32(ctx, 31, 0x319B84u);
    ctx->pc = 0x21BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BDA0u, 0x319B7Cu, 0x319B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B84u;
label_319b84:
    // 0x319b84: 0x8e64bd48  lw          $a0, -0x42B8($s3)
    ctx->pc = 0x319b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
    // 0x319b88: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x319b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x319b8c: 0xc0a0472  jal         func_2811C8
    ctx->pc = 0x319B8Cu;
    SET_GPR_U32(ctx, 31, 0x319B94u);
    ctx->pc = 0x319B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B8Cu;
    // 0x319b90: 0x24a53890  addiu       $a1, $a1, 0x3890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x319B8Cu, 0x319B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B94u;
label_319b94:
    // 0x319b94: 0xc0c8a1c  jal         func_322870
    ctx->pc = 0x319B94u;
    SET_GPR_U32(ctx, 31, 0x319B9Cu);
    ctx->pc = 0x319B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319B94u;
    // 0x319b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322870u, 0x319B94u, 0x319B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319B9Cu;
label_319b9c:
    // 0x319b9c: 0x8e64bd48  lw          $a0, -0x42B8($s3)
    ctx->pc = 0x319b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950216)));
    // 0x319ba0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x319ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x319ba4: 0xc0a0472  jal         func_2811C8
    ctx->pc = 0x319BA4u;
    SET_GPR_U32(ctx, 31, 0x319BACu);
    ctx->pc = 0x319BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319BA4u;
    // 0x319ba8: 0x24a538a8  addiu       $a1, $a1, 0x38A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2811C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2811C8u, 0x319BA4u, 0x319BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319BACu;
label_319bac:
    // 0x319bac: 0xc086fa0  jal         func_21BE80
    ctx->pc = 0x319BACu;
    SET_GPR_U32(ctx, 31, 0x319BB4u);
    ctx->pc = 0x21BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21BE80u, 0x319BACu, 0x319BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319BB4u;
label_319bb4:
    // 0x319bb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x319bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_319bb8:
    // 0x319bb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x319bb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319bbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x319bbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x319bc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x319bc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319bc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x319bc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x319bc8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x319bc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319bcc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x319bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x319bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x319BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319BD0u;
        // 0x319bd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319BD8u;
    // 0x319bd8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x319bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x319bdc: 0x0  nop
    ctx->pc = 0x319bdcu;
    // NOP
    ctx->pc = 0x319be0u;
}
