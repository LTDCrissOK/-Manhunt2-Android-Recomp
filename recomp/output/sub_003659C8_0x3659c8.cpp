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

// Function: sub_003659C8
// Address: 0x3659c8 - 0x365ca0
void sub_003659C8_0x3659c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003659C8_0x3659c8");
#endif

    switch (ctx->pc) {
        case 0x3659f0u: goto label_3659f0;
        case 0x365a00u: goto label_365a00;
        case 0x365a18u: goto label_365a18;
        case 0x365a24u: goto label_365a24;
        case 0x365a34u: goto label_365a34;
        case 0x365a44u: goto label_365a44;
        case 0x365a50u: goto label_365a50;
        case 0x365a58u: goto label_365a58;
        case 0x365a68u: goto label_365a68;
        case 0x365a80u: goto label_365a80;
        case 0x365a90u: goto label_365a90;
        case 0x365aacu: goto label_365aac;
        case 0x365ac0u: goto label_365ac0;
        case 0x365ac8u: goto label_365ac8;
        case 0x365adcu: goto label_365adc;
        case 0x365af0u: goto label_365af0;
        case 0x365b0cu: goto label_365b0c;
        case 0x365b14u: goto label_365b14;
        case 0x365b1cu: goto label_365b1c;
        case 0x365b24u: goto label_365b24;
        case 0x365b40u: goto label_365b40;
        case 0x365b54u: goto label_365b54;
        case 0x365b5cu: goto label_365b5c;
        case 0x365b70u: goto label_365b70;
        case 0x365b84u: goto label_365b84;
        case 0x365ba0u: goto label_365ba0;
        case 0x365ba8u: goto label_365ba8;
        case 0x365bb0u: goto label_365bb0;
        case 0x365bb8u: goto label_365bb8;
        case 0x365bd4u: goto label_365bd4;
        case 0x365be8u: goto label_365be8;
        case 0x365c04u: goto label_365c04;
        case 0x365c0cu: goto label_365c0c;
        case 0x365c14u: goto label_365c14;
        case 0x365c1cu: goto label_365c1c;
        case 0x365c28u: goto label_365c28;
        case 0x365c38u: goto label_365c38;
        case 0x365c44u: goto label_365c44;
        case 0x365c54u: goto label_365c54;
        case 0x365c5cu: goto label_365c5c;
        case 0x365c68u: goto label_365c68;
        case 0x365c74u: goto label_365c74;
        case 0x365c80u: goto label_365c80;
        default: break;
    }

    ctx->pc = 0x3659c8u;

    // 0x3659c8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3659c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3659cc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3659ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3659d0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x3659d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x3659d4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x3659d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x3659d8: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x3659d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x3659dc: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x3659dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x3659e0: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x3659e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x3659e4: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x3659e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x3659e8: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x3659E8u;
    SET_GPR_U32(ctx, 31, 0x3659F0u);
    ctx->pc = 0x3659ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3659E8u;
    // 0x3659ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x3659E8u, 0x3659F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3659F0u;
label_3659f0:
    // 0x3659f0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3659f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3659f4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x3659f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3659f8: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x3659F8u;
    SET_GPR_U32(ctx, 31, 0x365A00u);
    ctx->pc = 0x3659FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3659F8u;
    // 0x3659fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x3659F8u, 0x365A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A00u;
label_365a00:
    // 0x365a00: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x365a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x365a04: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x365a04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x365a08: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x365a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x365a0c: 0x2473fe40  addiu       $s3, $v1, -0x1C0
    ctx->pc = 0x365a0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
    // 0x365a10: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x365A10u;
    SET_GPR_U32(ctx, 31, 0x365A18u);
    ctx->pc = 0x365A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A10u;
    // 0x365a14: 0x2484edf0  addiu       $a0, $a0, -0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x365A10u, 0x365A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A18u;
label_365a18:
    // 0x365a18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x365a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a1c: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x365A1Cu;
    SET_GPR_U32(ctx, 31, 0x365A24u);
    ctx->pc = 0x365A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A1Cu;
    // 0x365a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x365A1Cu, 0x365A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A24u;
label_365a24:
    // 0x365a24: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x365a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x365a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a2c: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x365A2Cu;
    SET_GPR_U32(ctx, 31, 0x365A34u);
    ctx->pc = 0x365A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A2Cu;
    // 0x365a30: 0x24a5eeb8  addiu       $a1, $a1, -0x1148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x365A2Cu, 0x365A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A34u;
label_365a34:
    // 0x365a34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x365a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x365a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a3c: 0xc09dd98  jal         func_277660
    ctx->pc = 0x365A3Cu;
    SET_GPR_U32(ctx, 31, 0x365A44u);
    ctx->pc = 0x365A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A3Cu;
    // 0x365a40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x365A3Cu, 0x365A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A44u;
label_365a44:
    // 0x365a44: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x365A44u;
    {
        const bool branch_taken_0x365a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A44u;
        // 0x365a48: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365a44) {
            ctx->pc = 0x365C38u;
            goto label_365c38;
        }
    }
    ctx->pc = 0x365A4Cu;
    // 0x365a4c: 0x0  nop
    ctx->pc = 0x365a4cu;
    // NOP
label_365a50:
    // 0x365a50: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x365A50u;
    SET_GPR_U32(ctx, 31, 0x365A58u);
    ctx->pc = 0x365A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A50u;
    // 0x365a54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x365A50u, 0x365A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A58u;
label_365a58:
    // 0x365a58: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x365a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x365a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a60: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365A60u;
    SET_GPR_U32(ctx, 31, 0x365A68u);
    ctx->pc = 0x365A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A60u;
    // 0x365a64: 0x24a56f30  addiu       $a1, $a1, 0x6F30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365A60u, 0x365A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A68u;
label_365a68:
    // 0x365a68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365a6c: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x365A6Cu;
    {
        const bool branch_taken_0x365a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365a6c) {
            ctx->pc = 0x365A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365A6Cu;
            // 0x365a70: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365C20u;
            goto label_365c20;
        }
    }
    ctx->pc = 0x365A74u;
    // 0x365a74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x365a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a78: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x365A78u;
    SET_GPR_U32(ctx, 31, 0x365A80u);
    ctx->pc = 0x365A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A78u;
    // 0x365a7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x365A78u, 0x365A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A80u;
label_365a80:
    // 0x365a80: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x365a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x365a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365a88: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365A88u;
    SET_GPR_U32(ctx, 31, 0x365A90u);
    ctx->pc = 0x365A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365A88u;
    // 0x365a8c: 0x24a56f38  addiu       $a1, $a1, 0x6F38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365A88u, 0x365A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365A90u;
label_365a90:
    // 0x365a90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365a94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x365A94u;
    {
        const bool branch_taken_0x365a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365a94) {
            ctx->pc = 0x365AB8u;
            goto label_365ab8;
        }
    }
    ctx->pc = 0x365A9Cu;
    // 0x365a9c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x365a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x365aa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365aa4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365AA4u;
    SET_GPR_U32(ctx, 31, 0x365AACu);
    ctx->pc = 0x365AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365AA4u;
    // 0x365aa8: 0x24a56f48  addiu       $a1, $a1, 0x6F48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365AA4u, 0x365AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AACu;
label_365aac:
    // 0x365aac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365ab0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x365AB0u;
    {
        const bool branch_taken_0x365ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365ab0) {
            ctx->pc = 0x365AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365AB0u;
            // 0x365ab4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365AD0u;
            goto label_365ad0;
        }
    }
    ctx->pc = 0x365AB8u;
label_365ab8:
    // 0x365ab8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x365AB8u;
    SET_GPR_U32(ctx, 31, 0x365AC0u);
    ctx->pc = 0x365ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365AB8u;
    // 0x365abc: 0x24040110  addiu       $a0, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x365AB8u, 0x365AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AC0u;
label_365ac0:
    // 0x365ac0: 0xc088bf4  jal         func_222FD0
    ctx->pc = 0x365AC0u;
    SET_GPR_U32(ctx, 31, 0x365AC8u);
    ctx->pc = 0x365AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365AC0u;
    // 0x365ac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FD0u, 0x365AC0u, 0x365AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AC8u;
label_365ac8:
    // 0x365ac8: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x365AC8u;
    {
        const bool branch_taken_0x365ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365AC8u;
        // 0x365acc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365ac8) {
            ctx->pc = 0x365C1Cu;
            goto label_365c1c;
        }
    }
    ctx->pc = 0x365AD0u;
label_365ad0:
    // 0x365ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ad4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365AD4u;
    SET_GPR_U32(ctx, 31, 0x365ADCu);
    ctx->pc = 0x365AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365AD4u;
    // 0x365ad8: 0x24a56f58  addiu       $a1, $a1, 0x6F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365AD4u, 0x365ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365ADCu;
label_365adc:
    // 0x365adc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365ae0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x365AE0u;
    {
        const bool branch_taken_0x365ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365ae0) {
            ctx->pc = 0x365AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365AE0u;
            // 0x365ae4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365B34u;
            goto label_365b34;
        }
    }
    ctx->pc = 0x365AE8u;
    // 0x365ae8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x365AE8u;
    SET_GPR_U32(ctx, 31, 0x365AF0u);
    ctx->pc = 0x365AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365AE8u;
    // 0x365aec: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x365AE8u, 0x365AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365AF0u;
label_365af0:
    // 0x365af0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x365af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x365af4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365af8: 0x24631830  addiu       $v1, $v1, 0x1830
    ctx->pc = 0x365af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6192));
    // 0x365afc: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x365afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x365b00: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x365b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x365b04: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x365B04u;
    SET_GPR_U32(ctx, 31, 0x365B0Cu);
    ctx->pc = 0x365B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B04u;
    // 0x365b08: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x365B04u, 0x365B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B0Cu;
label_365b0c:
    // 0x365b0c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x365B0Cu;
    SET_GPR_U32(ctx, 31, 0x365B14u);
    ctx->pc = 0x365B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B0Cu;
    // 0x365b10: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x365B0Cu, 0x365B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B14u;
label_365b14:
    // 0x365b14: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x365B14u;
    SET_GPR_U32(ctx, 31, 0x365B1Cu);
    ctx->pc = 0x365B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B14u;
    // 0x365b18: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x365B14u, 0x365B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B1Cu;
label_365b1c:
    // 0x365b1c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x365B1Cu;
    SET_GPR_U32(ctx, 31, 0x365B24u);
    ctx->pc = 0x365B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B1Cu;
    // 0x365b20: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x365B1Cu, 0x365B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B24u;
label_365b24:
    // 0x365b24: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x365b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x365b28: 0x24631800  addiu       $v1, $v1, 0x1800
    ctx->pc = 0x365b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6144));
    // 0x365b2c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x365B2Cu;
    {
        const bool branch_taken_0x365b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B2Cu;
        // 0x365b30: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365b2c) {
            ctx->pc = 0x365C1Cu;
            goto label_365c1c;
        }
    }
    ctx->pc = 0x365B34u;
label_365b34:
    // 0x365b34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365b38: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365B38u;
    SET_GPR_U32(ctx, 31, 0x365B40u);
    ctx->pc = 0x365B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B38u;
    // 0x365b3c: 0x24a56f68  addiu       $a1, $a1, 0x6F68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365B38u, 0x365B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B40u;
label_365b40:
    // 0x365b40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365b44: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x365B44u;
    {
        const bool branch_taken_0x365b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365b44) {
            ctx->pc = 0x365B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365B44u;
            // 0x365b48: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365B64u;
            goto label_365b64;
        }
    }
    ctx->pc = 0x365B4Cu;
    // 0x365b4c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x365B4Cu;
    SET_GPR_U32(ctx, 31, 0x365B54u);
    ctx->pc = 0x365B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B4Cu;
    // 0x365b50: 0x240400cc  addiu       $a0, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x365B4Cu, 0x365B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B54u;
label_365b54:
    // 0x365b54: 0xc088db4  jal         func_2236D0
    ctx->pc = 0x365B54u;
    SET_GPR_U32(ctx, 31, 0x365B5Cu);
    ctx->pc = 0x365B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B54u;
    // 0x365b58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2236D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2236D0u, 0x365B54u, 0x365B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B5Cu;
label_365b5c:
    // 0x365b5c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x365B5Cu;
    {
        const bool branch_taken_0x365b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B5Cu;
        // 0x365b60: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365b5c) {
            ctx->pc = 0x365C1Cu;
            goto label_365c1c;
        }
    }
    ctx->pc = 0x365B64u;
label_365b64:
    // 0x365b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365b68: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365B68u;
    SET_GPR_U32(ctx, 31, 0x365B70u);
    ctx->pc = 0x365B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B68u;
    // 0x365b6c: 0x24a56f70  addiu       $a1, $a1, 0x6F70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365B68u, 0x365B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B70u;
label_365b70:
    // 0x365b70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365b74: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x365B74u;
    {
        const bool branch_taken_0x365b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365b74) {
            ctx->pc = 0x365B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365B74u;
            // 0x365b78: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365BC8u;
            goto label_365bc8;
        }
    }
    ctx->pc = 0x365B7Cu;
    // 0x365b7c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x365B7Cu;
    SET_GPR_U32(ctx, 31, 0x365B84u);
    ctx->pc = 0x365B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B7Cu;
    // 0x365b80: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x365B7Cu, 0x365B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365B84u;
label_365b84:
    // 0x365b84: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x365b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x365b88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365b8c: 0x24631830  addiu       $v1, $v1, 0x1830
    ctx->pc = 0x365b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6192));
    // 0x365b90: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x365b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x365b94: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x365b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x365b98: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x365B98u;
    SET_GPR_U32(ctx, 31, 0x365BA0u);
    ctx->pc = 0x365B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365B98u;
    // 0x365b9c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x365B98u, 0x365BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365BA0u;
label_365ba0:
    // 0x365ba0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x365BA0u;
    SET_GPR_U32(ctx, 31, 0x365BA8u);
    ctx->pc = 0x365BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365BA0u;
    // 0x365ba4: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x365BA0u, 0x365BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365BA8u;
label_365ba8:
    // 0x365ba8: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x365BA8u;
    SET_GPR_U32(ctx, 31, 0x365BB0u);
    ctx->pc = 0x365BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365BA8u;
    // 0x365bac: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x365BA8u, 0x365BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365BB0u;
label_365bb0:
    // 0x365bb0: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x365BB0u;
    SET_GPR_U32(ctx, 31, 0x365BB8u);
    ctx->pc = 0x365BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365BB0u;
    // 0x365bb4: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x365BB0u, 0x365BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365BB8u;
label_365bb8:
    // 0x365bb8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x365bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x365bbc: 0x246317d0  addiu       $v1, $v1, 0x17D0
    ctx->pc = 0x365bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6096));
    // 0x365bc0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x365BC0u;
    {
        const bool branch_taken_0x365bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365BC0u;
        // 0x365bc4: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365bc0) {
            ctx->pc = 0x365C1Cu;
            goto label_365c1c;
        }
    }
    ctx->pc = 0x365BC8u;
label_365bc8:
    // 0x365bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365bcc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x365BCCu;
    SET_GPR_U32(ctx, 31, 0x365BD4u);
    ctx->pc = 0x365BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365BCCu;
    // 0x365bd0: 0x24a56f80  addiu       $a1, $a1, 0x6F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x365BCCu, 0x365BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365BD4u;
label_365bd4:
    // 0x365bd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365bd8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x365BD8u;
    {
        const bool branch_taken_0x365bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365bd8) {
            ctx->pc = 0x365BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365BD8u;
            // 0x365bdc: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365C20u;
            goto label_365c20;
        }
    }
    ctx->pc = 0x365BE0u;
    // 0x365be0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x365BE0u;
    SET_GPR_U32(ctx, 31, 0x365BE8u);
    ctx->pc = 0x365BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365BE0u;
    // 0x365be4: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x365BE0u, 0x365BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365BE8u;
label_365be8:
    // 0x365be8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x365be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x365bec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x365becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365bf0: 0x24631830  addiu       $v1, $v1, 0x1830
    ctx->pc = 0x365bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6192));
    // 0x365bf4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x365bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x365bf8: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x365bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x365bfc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x365BFCu;
    SET_GPR_U32(ctx, 31, 0x365C04u);
    ctx->pc = 0x365C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365BFCu;
    // 0x365c00: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x365BFCu, 0x365C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C04u;
label_365c04:
    // 0x365c04: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x365C04u;
    SET_GPR_U32(ctx, 31, 0x365C0Cu);
    ctx->pc = 0x365C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C04u;
    // 0x365c08: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x365C04u, 0x365C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C0Cu;
label_365c0c:
    // 0x365c0c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x365C0Cu;
    SET_GPR_U32(ctx, 31, 0x365C14u);
    ctx->pc = 0x365C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C0Cu;
    // 0x365c10: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x365C0Cu, 0x365C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C14u;
label_365c14:
    // 0x365c14: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x365C14u;
    SET_GPR_U32(ctx, 31, 0x365C1Cu);
    ctx->pc = 0x365C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C14u;
    // 0x365c18: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x365C14u, 0x365C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C1Cu;
label_365c1c:
    // 0x365c1c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x365c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_365c20:
    // 0x365c20: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x365C20u;
    SET_GPR_U32(ctx, 31, 0x365C28u);
    ctx->pc = 0x365C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C20u;
    // 0x365c24: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x365C20u, 0x365C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C28u;
label_365c28:
    // 0x365c28: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x365c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x365c2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x365c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c30: 0xc0fbdda  jal         func_3EF768
    ctx->pc = 0x365C30u;
    SET_GPR_U32(ctx, 31, 0x365C38u);
    ctx->pc = 0x365C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C30u;
    // 0x365c34: 0x2484dc00  addiu       $a0, $a0, -0x2400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF768u, 0x365C30u, 0x365C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C38u;
label_365c38:
    // 0x365c38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x365c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c3c: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x365C3Cu;
    SET_GPR_U32(ctx, 31, 0x365C44u);
    ctx->pc = 0x365C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C3Cu;
    // 0x365c40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x365C3Cu, 0x365C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C44u;
label_365c44:
    // 0x365c44: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x365C44u;
    {
        const bool branch_taken_0x365c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x365C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365C44u;
        // 0x365c48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365c44) {
            ctx->pc = 0x365A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365a50;
        }
    }
    ctx->pc = 0x365C4Cu;
    // 0x365c4c: 0xc09dd92  jal         func_277648
    ctx->pc = 0x365C4Cu;
    SET_GPR_U32(ctx, 31, 0x365C54u);
    ctx->pc = 0x365C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C4Cu;
    // 0x365c50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277648u, 0x365C4Cu, 0x365C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C54u;
label_365c54:
    // 0x365c54: 0xc0d9628  jal         func_3658A0
    ctx->pc = 0x365C54u;
    SET_GPR_U32(ctx, 31, 0x365C5Cu);
    ctx->pc = 0x365C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C54u;
    // 0x365c58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3658A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3658A0u, 0x365C54u, 0x365C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C5Cu;
label_365c5c:
    // 0x365c5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x365c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c60: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x365C60u;
    SET_GPR_U32(ctx, 31, 0x365C68u);
    ctx->pc = 0x365C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C60u;
    // 0x365c64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x365C60u, 0x365C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C68u;
label_365c68:
    // 0x365c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x365c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c6c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x365C6Cu;
    SET_GPR_U32(ctx, 31, 0x365C74u);
    ctx->pc = 0x365C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C6Cu;
    // 0x365c70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x365C6Cu, 0x365C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C74u;
label_365c74:
    // 0x365c74: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x365c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365c78: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x365C78u;
    SET_GPR_U32(ctx, 31, 0x365C80u);
    ctx->pc = 0x365C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365C78u;
    // 0x365c7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x365C78u, 0x365C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365C80u;
label_365c80:
    // 0x365c80: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x365c80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x365c84: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x365c84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x365c88: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x365c88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x365c8c: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x365c8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x365c90: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x365c90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x365c94: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x365c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x365c98: 0x3e00008  jr          $ra
    ctx->pc = 0x365C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365C98u;
        // 0x365c9c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365CA0u;
}
