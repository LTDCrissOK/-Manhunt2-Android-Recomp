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

// Function: sub_00261A28
// Address: 0x261a28 - 0x261c98
void sub_00261A28_0x261a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261A28_0x261a28");
#endif

    switch (ctx->pc) {
        case 0x261a28u: goto label_261a28;
        case 0x261a2cu: goto label_261a2c;
        case 0x261a30u: goto label_261a30;
        case 0x261a34u: goto label_261a34;
        case 0x261a38u: goto label_261a38;
        case 0x261a3cu: goto label_261a3c;
        case 0x261a40u: goto label_261a40;
        case 0x261a44u: goto label_261a44;
        case 0x261a48u: goto label_261a48;
        case 0x261a4cu: goto label_261a4c;
        case 0x261a50u: goto label_261a50;
        case 0x261a54u: goto label_261a54;
        case 0x261a58u: goto label_261a58;
        case 0x261a5cu: goto label_261a5c;
        case 0x261a60u: goto label_261a60;
        case 0x261a64u: goto label_261a64;
        case 0x261a68u: goto label_261a68;
        case 0x261a6cu: goto label_261a6c;
        case 0x261a70u: goto label_261a70;
        case 0x261a74u: goto label_261a74;
        case 0x261a78u: goto label_261a78;
        case 0x261a7cu: goto label_261a7c;
        case 0x261a80u: goto label_261a80;
        case 0x261a84u: goto label_261a84;
        case 0x261a88u: goto label_261a88;
        case 0x261a8cu: goto label_261a8c;
        case 0x261a90u: goto label_261a90;
        case 0x261a94u: goto label_261a94;
        case 0x261a98u: goto label_261a98;
        case 0x261a9cu: goto label_261a9c;
        case 0x261aa0u: goto label_261aa0;
        case 0x261aa4u: goto label_261aa4;
        case 0x261aa8u: goto label_261aa8;
        case 0x261aacu: goto label_261aac;
        case 0x261ab0u: goto label_261ab0;
        case 0x261ab4u: goto label_261ab4;
        case 0x261ab8u: goto label_261ab8;
        case 0x261abcu: goto label_261abc;
        case 0x261ac0u: goto label_261ac0;
        case 0x261ac4u: goto label_261ac4;
        case 0x261ac8u: goto label_261ac8;
        case 0x261accu: goto label_261acc;
        case 0x261ad0u: goto label_261ad0;
        case 0x261ad4u: goto label_261ad4;
        case 0x261ad8u: goto label_261ad8;
        case 0x261adcu: goto label_261adc;
        case 0x261ae0u: goto label_261ae0;
        case 0x261ae4u: goto label_261ae4;
        case 0x261ae8u: goto label_261ae8;
        case 0x261aecu: goto label_261aec;
        case 0x261af0u: goto label_261af0;
        case 0x261af4u: goto label_261af4;
        case 0x261af8u: goto label_261af8;
        case 0x261afcu: goto label_261afc;
        case 0x261b00u: goto label_261b00;
        case 0x261b04u: goto label_261b04;
        case 0x261b08u: goto label_261b08;
        case 0x261b0cu: goto label_261b0c;
        case 0x261b10u: goto label_261b10;
        case 0x261b14u: goto label_261b14;
        case 0x261b18u: goto label_261b18;
        case 0x261b1cu: goto label_261b1c;
        case 0x261b20u: goto label_261b20;
        case 0x261b24u: goto label_261b24;
        case 0x261b28u: goto label_261b28;
        case 0x261b2cu: goto label_261b2c;
        case 0x261b30u: goto label_261b30;
        case 0x261b34u: goto label_261b34;
        case 0x261b38u: goto label_261b38;
        case 0x261b3cu: goto label_261b3c;
        case 0x261b40u: goto label_261b40;
        case 0x261b44u: goto label_261b44;
        case 0x261b48u: goto label_261b48;
        case 0x261b4cu: goto label_261b4c;
        case 0x261b50u: goto label_261b50;
        case 0x261b54u: goto label_261b54;
        case 0x261b58u: goto label_261b58;
        case 0x261b5cu: goto label_261b5c;
        case 0x261b60u: goto label_261b60;
        case 0x261b64u: goto label_261b64;
        case 0x261b68u: goto label_261b68;
        case 0x261b6cu: goto label_261b6c;
        case 0x261b70u: goto label_261b70;
        case 0x261b74u: goto label_261b74;
        case 0x261b78u: goto label_261b78;
        case 0x261b7cu: goto label_261b7c;
        case 0x261b80u: goto label_261b80;
        case 0x261b84u: goto label_261b84;
        case 0x261b88u: goto label_261b88;
        case 0x261b8cu: goto label_261b8c;
        case 0x261b90u: goto label_261b90;
        case 0x261b94u: goto label_261b94;
        case 0x261b98u: goto label_261b98;
        case 0x261b9cu: goto label_261b9c;
        case 0x261ba0u: goto label_261ba0;
        case 0x261ba4u: goto label_261ba4;
        case 0x261ba8u: goto label_261ba8;
        case 0x261bacu: goto label_261bac;
        case 0x261bb0u: goto label_261bb0;
        case 0x261bb4u: goto label_261bb4;
        case 0x261bb8u: goto label_261bb8;
        case 0x261bbcu: goto label_261bbc;
        case 0x261bc0u: goto label_261bc0;
        case 0x261bc4u: goto label_261bc4;
        case 0x261bc8u: goto label_261bc8;
        case 0x261bccu: goto label_261bcc;
        case 0x261bd0u: goto label_261bd0;
        case 0x261bd4u: goto label_261bd4;
        case 0x261bd8u: goto label_261bd8;
        case 0x261bdcu: goto label_261bdc;
        case 0x261be0u: goto label_261be0;
        case 0x261be4u: goto label_261be4;
        case 0x261be8u: goto label_261be8;
        case 0x261becu: goto label_261bec;
        case 0x261bf0u: goto label_261bf0;
        case 0x261bf4u: goto label_261bf4;
        case 0x261bf8u: goto label_261bf8;
        case 0x261bfcu: goto label_261bfc;
        case 0x261c00u: goto label_261c00;
        case 0x261c04u: goto label_261c04;
        case 0x261c08u: goto label_261c08;
        case 0x261c0cu: goto label_261c0c;
        case 0x261c10u: goto label_261c10;
        case 0x261c14u: goto label_261c14;
        case 0x261c18u: goto label_261c18;
        case 0x261c1cu: goto label_261c1c;
        case 0x261c20u: goto label_261c20;
        case 0x261c24u: goto label_261c24;
        case 0x261c28u: goto label_261c28;
        case 0x261c2cu: goto label_261c2c;
        case 0x261c30u: goto label_261c30;
        case 0x261c34u: goto label_261c34;
        case 0x261c38u: goto label_261c38;
        case 0x261c3cu: goto label_261c3c;
        case 0x261c40u: goto label_261c40;
        case 0x261c44u: goto label_261c44;
        case 0x261c48u: goto label_261c48;
        case 0x261c4cu: goto label_261c4c;
        case 0x261c50u: goto label_261c50;
        case 0x261c54u: goto label_261c54;
        case 0x261c58u: goto label_261c58;
        case 0x261c5cu: goto label_261c5c;
        case 0x261c60u: goto label_261c60;
        case 0x261c64u: goto label_261c64;
        case 0x261c68u: goto label_261c68;
        case 0x261c6cu: goto label_261c6c;
        case 0x261c70u: goto label_261c70;
        case 0x261c74u: goto label_261c74;
        case 0x261c78u: goto label_261c78;
        case 0x261c7cu: goto label_261c7c;
        case 0x261c80u: goto label_261c80;
        case 0x261c84u: goto label_261c84;
        case 0x261c88u: goto label_261c88;
        case 0x261c8cu: goto label_261c8c;
        case 0x261c90u: goto label_261c90;
        case 0x261c94u: goto label_261c94;
        default: break;
    }

    ctx->pc = 0x261a28u;

label_261a28:
    // 0x261a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_261a2c:
    // 0x261a2c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x261a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_261a30:
    // 0x261a30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x261a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_261a34:
    // 0x261a34: 0x24422350  addiu       $v0, $v0, 0x2350
    ctx->pc = 0x261a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9040));
label_261a38:
    // 0x261a38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x261a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_261a3c:
    // 0x261a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x261a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_261a40:
    // 0x261a40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x261a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_261a44:
    // 0x261a44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x261a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_261a48:
    // 0x261a48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x261a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_261a4c:
    // 0x261a4c: 0xae220218  sw          $v0, 0x218($s1)
    ctx->pc = 0x261a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 2));
label_261a50:
    // 0x261a50: 0x8e240234  lw          $a0, 0x234($s1)
    ctx->pc = 0x261a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_261a54:
    // 0x261a54: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_261a58:
    if (ctx->pc == 0x261A58u) {
        ctx->pc = 0x261A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A54u;
        // 0x261a58: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A5Cu;
        goto label_261a5c;
    }
    ctx->pc = 0x261A54u;
    {
        const bool branch_taken_0x261a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x261A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A54u;
        // 0x261a58: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a54) {
            ctx->pc = 0x261A84u;
            goto label_261a84;
        }
    }
    ctx->pc = 0x261A5Cu;
label_261a5c:
    // 0x261a5c: 0x8c840224  lw          $a0, 0x224($a0)
    ctx->pc = 0x261a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_261a60:
    // 0x261a60: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_261a64:
    if (ctx->pc == 0x261A64u) {
        ctx->pc = 0x261A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A60u;
        // 0x261a64: 0x8e240298  lw          $a0, 0x298($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A68u;
        goto label_261a68;
    }
    ctx->pc = 0x261A60u;
    {
        const bool branch_taken_0x261a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261a60) {
            ctx->pc = 0x261A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261A60u;
            // 0x261a64: 0x8e240298  lw          $a0, 0x298($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261A88u;
            goto label_261a88;
        }
    }
    ctx->pc = 0x261A68u;
label_261a68:
    // 0x261a68: 0xc0ac91c  jal         func_2B2470
label_261a6c:
    if (ctx->pc == 0x261A6Cu) {
        ctx->pc = 0x261A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A68u;
        // 0x261a6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A70u;
        goto label_261a70;
    }
    ctx->pc = 0x261A68u;
    SET_GPR_U32(ctx, 31, 0x261A70u);
    ctx->pc = 0x261A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A68u;
    // 0x261a6c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2470u, 0x261A68u, 0x261A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A70u;
label_261a70:
    // 0x261a70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_261a74:
    if (ctx->pc == 0x261A74u) {
        ctx->pc = 0x261A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A70u;
        // 0x261a74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A78u;
        goto label_261a78;
    }
    ctx->pc = 0x261A70u;
    {
        const bool branch_taken_0x261a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A70u;
        // 0x261a74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a70) {
            ctx->pc = 0x261A84u;
            goto label_261a84;
        }
    }
    ctx->pc = 0x261A78u;
label_261a78:
    // 0x261a78: 0x8e220234  lw          $v0, 0x234($s1)
    ctx->pc = 0x261a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_261a7c:
    // 0x261a7c: 0xc0ac90e  jal         func_2B2438
label_261a80:
    if (ctx->pc == 0x261A80u) {
        ctx->pc = 0x261A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A7Cu;
        // 0x261a80: 0x8c440224  lw          $a0, 0x224($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A84u;
        goto label_261a84;
    }
    ctx->pc = 0x261A7Cu;
    SET_GPR_U32(ctx, 31, 0x261A84u);
    ctx->pc = 0x261A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261A7Cu;
    // 0x261a80: 0x8c440224  lw          $a0, 0x224($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2438u, 0x261A7Cu, 0x261A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261A84u;
label_261a84:
    // 0x261a84: 0x8e240298  lw          $a0, 0x298($s1)
    ctx->pc = 0x261a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
label_261a88:
    // 0x261a88: 0x50800022  beql        $a0, $zero, . + 4 + (0x22 << 2)
label_261a8c:
    if (ctx->pc == 0x261A8Cu) {
        ctx->pc = 0x261A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A88u;
        // 0x261a8c: 0x8e240284  lw          $a0, 0x284($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A90u;
        goto label_261a90;
    }
    ctx->pc = 0x261A88u;
    {
        const bool branch_taken_0x261a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261a88) {
            ctx->pc = 0x261A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261A88u;
            // 0x261a8c: 0x8e240284  lw          $a0, 0x284($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261B14u;
            goto label_261b14;
        }
    }
    ctx->pc = 0x261A90u;
label_261a90:
    // 0x261a90: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x261a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_261a94:
    // 0x261a94: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_261a98:
    if (ctx->pc == 0x261A98u) {
        ctx->pc = 0x261A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A94u;
        // 0x261a98: 0x8e230298  lw          $v1, 0x298($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261A9Cu;
        goto label_261a9c;
    }
    ctx->pc = 0x261A94u;
    {
        const bool branch_taken_0x261a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261a94) {
            ctx->pc = 0x261A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261A94u;
            // 0x261a98: 0x8e230298  lw          $v1, 0x298($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261AC0u;
            goto label_261ac0;
        }
    }
    ctx->pc = 0x261A9Cu;
label_261a9c:
    // 0x261a9c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x261a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_261aa0:
    // 0x261aa0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x261aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_261aa4:
    // 0x261aa4: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x261aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
label_261aa8:
    // 0x261aa8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x261aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_261aac:
    // 0x261aac: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x261aacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
label_261ab0:
    // 0x261ab0: 0x8e250298  lw          $a1, 0x298($s1)
    ctx->pc = 0x261ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
label_261ab4:
    // 0x261ab4: 0xc0c8716  jal         func_321C58
label_261ab8:
    if (ctx->pc == 0x261AB8u) {
        ctx->pc = 0x261AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AB4u;
        // 0x261ab8: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261ABCu;
        goto label_261abc;
    }
    ctx->pc = 0x261AB4u;
    SET_GPR_U32(ctx, 31, 0x261ABCu);
    ctx->pc = 0x261AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261AB4u;
    // 0x261ab8: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x261AB4u, 0x261ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261ABCu;
label_261abc:
    // 0x261abc: 0x8e230298  lw          $v1, 0x298($s1)
    ctx->pc = 0x261abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
label_261ac0:
    // 0x261ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x261ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261ac4:
    // 0x261ac4: 0x8e22028c  lw          $v0, 0x28C($s1)
    ctx->pc = 0x261ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
label_261ac8:
    // 0x261ac8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_261acc:
    if (ctx->pc == 0x261ACCu) {
        ctx->pc = 0x261ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AC8u;
        // 0x261acc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261AD0u;
        goto label_261ad0;
    }
    ctx->pc = 0x261AC8u;
    {
        const bool branch_taken_0x261ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AC8u;
        // 0x261acc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ac8) {
            ctx->pc = 0x261AD4u;
            goto label_261ad4;
        }
    }
    ctx->pc = 0x261AD0u;
label_261ad0:
    // 0x261ad0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x261ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261ad4:
    // 0x261ad4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_261ad8:
    if (ctx->pc == 0x261AD8u) {
        ctx->pc = 0x261AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AD4u;
        // 0x261ad8: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261ADCu;
        goto label_261adc;
    }
    ctx->pc = 0x261AD4u;
    {
        const bool branch_taken_0x261ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x261AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AD4u;
        // 0x261ad8: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ad4) {
            ctx->pc = 0x261AF8u;
            goto label_261af8;
        }
    }
    ctx->pc = 0x261ADCu;
label_261adc:
    // 0x261adc: 0x10850006  beq         $a0, $a1, . + 4 + (0x6 << 2)
label_261ae0:
    if (ctx->pc == 0x261AE0u) {
        ctx->pc = 0x261AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261ADCu;
        // 0x261ae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261AE4u;
        goto label_261ae4;
    }
    ctx->pc = 0x261ADCu;
    {
        const bool branch_taken_0x261adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x261AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261ADCu;
        // 0x261ae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261adc) {
            ctx->pc = 0x261AF8u;
            goto label_261af8;
        }
    }
    ctx->pc = 0x261AE4u;
label_261ae4:
    // 0x261ae4: 0xae02bce4  sw          $v0, -0x431C($s0)
    ctx->pc = 0x261ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950116), GPR_U32(ctx, 2));
label_261ae8:
    // 0x261ae8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_261aec:
    if (ctx->pc == 0x261AECu) {
        ctx->pc = 0x261AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AE8u;
        // 0x261aec: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261AF0u;
        goto label_261af0;
    }
    ctx->pc = 0x261AE8u;
    {
        const bool branch_taken_0x261ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x261AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AE8u;
        // 0x261aec: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ae8) {
            ctx->pc = 0x261AF8u;
            goto label_261af8;
        }
    }
    ctx->pc = 0x261AF0u;
label_261af0:
    // 0x261af0: 0xc0c4858  jal         func_312160
label_261af4:
    if (ctx->pc == 0x261AF4u) {
        ctx->pc = 0x261AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AF0u;
        // 0x261af4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261AF8u;
        goto label_261af8;
    }
    ctx->pc = 0x261AF0u;
    SET_GPR_U32(ctx, 31, 0x261AF8u);
    ctx->pc = 0x261AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261AF0u;
    // 0x261af4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x261AF0u, 0x261AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261AF8u;
label_261af8:
    // 0x261af8: 0x8e230298  lw          $v1, 0x298($s1)
    ctx->pc = 0x261af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
label_261afc:
    // 0x261afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x261afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_261b00:
    // 0x261b00: 0xae02bce4  sw          $v0, -0x431C($s0)
    ctx->pc = 0x261b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950116), GPR_U32(ctx, 2));
label_261b04:
    // 0x261b04: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x261b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_261b08:
    // 0x261b08: 0xc0f5222  jal         func_3D4888
label_261b0c:
    if (ctx->pc == 0x261B0Cu) {
        ctx->pc = 0x261B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B08u;
        // 0x261b0c: 0x8e240298  lw          $a0, 0x298($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B10u;
        goto label_261b10;
    }
    ctx->pc = 0x261B08u;
    SET_GPR_U32(ctx, 31, 0x261B10u);
    ctx->pc = 0x261B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261B08u;
    // 0x261b0c: 0x8e240298  lw          $a0, 0x298($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x261B08u, 0x261B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B10u;
label_261b10:
    // 0x261b10: 0x8e240284  lw          $a0, 0x284($s1)
    ctx->pc = 0x261b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
label_261b14:
    // 0x261b14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_261b18:
    if (ctx->pc == 0x261B18u) {
        ctx->pc = 0x261B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B14u;
        // 0x261b18: 0x8e240288  lw          $a0, 0x288($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B1Cu;
        goto label_261b1c;
    }
    ctx->pc = 0x261B14u;
    {
        const bool branch_taken_0x261b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261b14) {
            ctx->pc = 0x261B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261B14u;
            // 0x261b18: 0x8e240288  lw          $a0, 0x288($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261B28u;
            goto label_261b28;
        }
    }
    ctx->pc = 0x261B1Cu;
label_261b1c:
    // 0x261b1c: 0xc0c3212  jal         func_30C848
label_261b20:
    if (ctx->pc == 0x261B20u) {
        ctx->pc = 0x261B24u;
        goto label_261b24;
    }
    ctx->pc = 0x261B1Cu;
    SET_GPR_U32(ctx, 31, 0x261B24u);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x261B1Cu, 0x261B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B24u;
label_261b24:
    // 0x261b24: 0x8e240288  lw          $a0, 0x288($s1)
    ctx->pc = 0x261b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
label_261b28:
    // 0x261b28: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_261b2c:
    if (ctx->pc == 0x261B2Cu) {
        ctx->pc = 0x261B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B28u;
        // 0x261b2c: 0x8e24028c  lw          $a0, 0x28C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B30u;
        goto label_261b30;
    }
    ctx->pc = 0x261B28u;
    {
        const bool branch_taken_0x261b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261b28) {
            ctx->pc = 0x261B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261B28u;
            // 0x261b2c: 0x8e24028c  lw          $a0, 0x28C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261B3Cu;
            goto label_261b3c;
        }
    }
    ctx->pc = 0x261B30u;
label_261b30:
    // 0x261b30: 0xc0c3212  jal         func_30C848
label_261b34:
    if (ctx->pc == 0x261B34u) {
        ctx->pc = 0x261B38u;
        goto label_261b38;
    }
    ctx->pc = 0x261B30u;
    SET_GPR_U32(ctx, 31, 0x261B38u);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x261B30u, 0x261B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B38u;
label_261b38:
    // 0x261b38: 0x8e24028c  lw          $a0, 0x28C($s1)
    ctx->pc = 0x261b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
label_261b3c:
    // 0x261b3c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_261b40:
    if (ctx->pc == 0x261B40u) {
        ctx->pc = 0x261B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B3Cu;
        // 0x261b40: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B44u;
        goto label_261b44;
    }
    ctx->pc = 0x261B3Cu;
    {
        const bool branch_taken_0x261b3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261b3c) {
            ctx->pc = 0x261B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261B3Cu;
            // 0x261b40: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261B50u;
            goto label_261b50;
        }
    }
    ctx->pc = 0x261B44u;
label_261b44:
    // 0x261b44: 0xc0c3212  jal         func_30C848
label_261b48:
    if (ctx->pc == 0x261B48u) {
        ctx->pc = 0x261B4Cu;
        goto label_261b4c;
    }
    ctx->pc = 0x261B44u;
    SET_GPR_U32(ctx, 31, 0x261B4Cu);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x261B44u, 0x261B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261B4Cu;
label_261b4c:
    // 0x261b4c: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x261b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_261b50:
    // 0x261b50: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_261b54:
    if (ctx->pc == 0x261B54u) {
        ctx->pc = 0x261B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B50u;
        // 0x261b54: 0x8e240278  lw          $a0, 0x278($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B58u;
        goto label_261b58;
    }
    ctx->pc = 0x261B50u;
    {
        const bool branch_taken_0x261b50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261b50) {
            ctx->pc = 0x261B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261B50u;
            // 0x261b54: 0x8e240278  lw          $a0, 0x278($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261B78u;
            goto label_261b78;
        }
    }
    ctx->pc = 0x261B58u;
label_261b58:
    // 0x261b58: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x261b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_261b5c:
    // 0x261b5c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_261b60:
    if (ctx->pc == 0x261B60u) {
        ctx->pc = 0x261B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B5Cu;
        // 0x261b60: 0x8e240278  lw          $a0, 0x278($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B64u;
        goto label_261b64;
    }
    ctx->pc = 0x261B5Cu;
    {
        const bool branch_taken_0x261b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261b5c) {
            ctx->pc = 0x261B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261B5Cu;
            // 0x261b60: 0x8e240278  lw          $a0, 0x278($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261B78u;
            goto label_261b78;
        }
    }
    ctx->pc = 0x261B64u;
label_261b64:
    // 0x261b64: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x261b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_261b68:
    // 0x261b68: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x261b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_261b6c:
    // 0x261b6c: 0x40f809  jalr        $v0
label_261b70:
    if (ctx->pc == 0x261B70u) {
        ctx->pc = 0x261B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B6Cu;
        // 0x261b70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B74u;
        goto label_261b74;
    }
    ctx->pc = 0x261B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261B74u);
        ctx->pc = 0x261B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B6Cu;
        // 0x261b70: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261B6Cu, 0x261B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261B74u;
label_261b74:
    // 0x261b74: 0x8e240278  lw          $a0, 0x278($s1)
    ctx->pc = 0x261b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_261b78:
    // 0x261b78: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_261b7c:
    if (ctx->pc == 0x261B7Cu) {
        ctx->pc = 0x261B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B78u;
        // 0x261b7c: 0x8e24027c  lw          $a0, 0x27C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B80u;
        goto label_261b80;
    }
    ctx->pc = 0x261B78u;
    {
        const bool branch_taken_0x261b78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261b78) {
            ctx->pc = 0x261B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261B78u;
            // 0x261b7c: 0x8e24027c  lw          $a0, 0x27C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x261B80u;
label_261b80:
    // 0x261b80: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x261b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_261b84:
    // 0x261b84: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_261b88:
    if (ctx->pc == 0x261B88u) {
        ctx->pc = 0x261B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B84u;
        // 0x261b88: 0x8e24027c  lw          $a0, 0x27C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B8Cu;
        goto label_261b8c;
    }
    ctx->pc = 0x261B84u;
    {
        const bool branch_taken_0x261b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261b84) {
            ctx->pc = 0x261B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261B84u;
            // 0x261b88: 0x8e24027c  lw          $a0, 0x27C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261BA0u;
            goto label_261ba0;
        }
    }
    ctx->pc = 0x261B8Cu;
label_261b8c:
    // 0x261b8c: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x261b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_261b90:
    // 0x261b90: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x261b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_261b94:
    // 0x261b94: 0x40f809  jalr        $v0
label_261b98:
    if (ctx->pc == 0x261B98u) {
        ctx->pc = 0x261B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B94u;
        // 0x261b98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261B9Cu;
        goto label_261b9c;
    }
    ctx->pc = 0x261B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261B9Cu);
        ctx->pc = 0x261B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B94u;
        // 0x261b98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261B94u, 0x261B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261B9Cu;
label_261b9c:
    // 0x261b9c: 0x8e24027c  lw          $a0, 0x27C($s1)
    ctx->pc = 0x261b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 636)));
label_261ba0:
    // 0x261ba0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_261ba4:
    if (ctx->pc == 0x261BA4u) {
        ctx->pc = 0x261BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BA0u;
        // 0x261ba4: 0x263002cc  addiu       $s0, $s1, 0x2CC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 716));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261BA8u;
        goto label_261ba8;
    }
    ctx->pc = 0x261BA0u;
    {
        const bool branch_taken_0x261ba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x261BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BA0u;
        // 0x261ba4: 0x263002cc  addiu       $s0, $s1, 0x2CC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ba0) {
            ctx->pc = 0x261BC8u;
            goto label_261bc8;
        }
    }
    ctx->pc = 0x261BA8u;
label_261ba8:
    // 0x261ba8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x261ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_261bac:
    // 0x261bac: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_261bb0:
    if (ctx->pc == 0x261BB0u) {
        ctx->pc = 0x261BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BACu;
        // 0x261bb0: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261BB4u;
        goto label_261bb4;
    }
    ctx->pc = 0x261BACu;
    {
        const bool branch_taken_0x261bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BACu;
        // 0x261bb0: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261bac) {
            ctx->pc = 0x261BD0u;
            goto label_261bd0;
        }
    }
    ctx->pc = 0x261BB4u;
label_261bb4:
    // 0x261bb4: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x261bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_261bb8:
    // 0x261bb8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x261bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_261bbc:
    // 0x261bbc: 0x40f809  jalr        $v0
label_261bc0:
    if (ctx->pc == 0x261BC0u) {
        ctx->pc = 0x261BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BBCu;
        // 0x261bc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261BC4u;
        goto label_261bc4;
    }
    ctx->pc = 0x261BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261BC4u);
        ctx->pc = 0x261BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BBCu;
        // 0x261bc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261BBCu, 0x261BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261BC4u;
label_261bc4:
    // 0x261bc4: 0x263002cc  addiu       $s0, $s1, 0x2CC
    ctx->pc = 0x261bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 716));
label_261bc8:
    // 0x261bc8: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x261bc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_261bcc:
    // 0x261bcc: 0x0  nop
    ctx->pc = 0x261bccu;
    // NOP
label_261bd0:
    // 0x261bd0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x261bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_261bd4:
    // 0x261bd4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_261bd8:
    if (ctx->pc == 0x261BD8u) {
        ctx->pc = 0x261BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BD4u;
        // 0x261bd8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261BDCu;
        goto label_261bdc;
    }
    ctx->pc = 0x261BD4u;
    {
        const bool branch_taken_0x261bd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x261bd4) {
            ctx->pc = 0x261BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261BD4u;
            // 0x261bd8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261BF0u;
            goto label_261bf0;
        }
    }
    ctx->pc = 0x261BDCu;
label_261bdc:
    // 0x261bdc: 0xc084a46  jal         func_212918
label_261be0:
    if (ctx->pc == 0x261BE0u) {
        ctx->pc = 0x261BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BDCu;
        // 0x261be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261BE4u;
        goto label_261be4;
    }
    ctx->pc = 0x261BDCu;
    SET_GPR_U32(ctx, 31, 0x261BE4u);
    ctx->pc = 0x261BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261BDCu;
    // 0x261be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212918u, 0x261BDCu, 0x261BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261BE4u;
label_261be4:
    // 0x261be4: 0xc0c3212  jal         func_30C848
label_261be8:
    if (ctx->pc == 0x261BE8u) {
        ctx->pc = 0x261BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BE4u;
        // 0x261be8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261BECu;
        goto label_261bec;
    }
    ctx->pc = 0x261BE4u;
    SET_GPR_U32(ctx, 31, 0x261BECu);
    ctx->pc = 0x261BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261BE4u;
    // 0x261be8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x261BE4u, 0x261BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261BECu;
label_261bec:
    // 0x261bec: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x261becu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_261bf0:
    // 0x261bf0: 0x641fff7  bgez        $s2, . + 4 + (-0x9 << 2)
label_261bf4:
    if (ctx->pc == 0x261BF4u) {
        ctx->pc = 0x261BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BF0u;
        // 0x261bf4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261BF8u;
        goto label_261bf8;
    }
    ctx->pc = 0x261BF0u;
    {
        const bool branch_taken_0x261bf0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x261BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BF0u;
        // 0x261bf4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261bf0) {
            ctx->pc = 0x261BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261bd0;
        }
    }
    ctx->pc = 0x261BF8u;
label_261bf8:
    // 0x261bf8: 0x8e22029c  lw          $v0, 0x29C($s1)
    ctx->pc = 0x261bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
label_261bfc:
    // 0x261bfc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_261c00:
    if (ctx->pc == 0x261C00u) {
        ctx->pc = 0x261C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BFCu;
        // 0x261c00: 0x8e2402a4  lw          $a0, 0x2A4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C04u;
        goto label_261c04;
    }
    ctx->pc = 0x261BFCu;
    {
        const bool branch_taken_0x261bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261bfc) {
            ctx->pc = 0x261C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261BFCu;
            // 0x261c00: 0x8e2402a4  lw          $a0, 0x2A4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261C2Cu;
            goto label_261c2c;
        }
    }
    ctx->pc = 0x261C04u;
label_261c04:
    // 0x261c04: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x261c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_261c08:
    // 0x261c08: 0xc0c305c  jal         func_30C170
label_261c0c:
    if (ctx->pc == 0x261C0Cu) {
        ctx->pc = 0x261C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C08u;
        // 0x261c0c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C10u;
        goto label_261c10;
    }
    ctx->pc = 0x261C08u;
    SET_GPR_U32(ctx, 31, 0x261C10u);
    ctx->pc = 0x261C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C08u;
    // 0x261c0c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C170u, 0x261C08u, 0x261C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C10u;
label_261c10:
    // 0x261c10: 0x8e24029c  lw          $a0, 0x29C($s1)
    ctx->pc = 0x261c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
label_261c14:
    // 0x261c14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_261c18:
    if (ctx->pc == 0x261C18u) {
        ctx->pc = 0x261C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C14u;
        // 0x261c18: 0xae20029c  sw          $zero, 0x29C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C1Cu;
        goto label_261c1c;
    }
    ctx->pc = 0x261C14u;
    {
        const bool branch_taken_0x261c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261c14) {
            ctx->pc = 0x261C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261C14u;
            // 0x261c18: 0xae20029c  sw          $zero, 0x29C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261C28u;
            goto label_261c28;
        }
    }
    ctx->pc = 0x261C1Cu;
label_261c1c:
    // 0x261c1c: 0xc0c4858  jal         func_312160
label_261c20:
    if (ctx->pc == 0x261C20u) {
        ctx->pc = 0x261C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C1Cu;
        // 0x261c20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C24u;
        goto label_261c24;
    }
    ctx->pc = 0x261C1Cu;
    SET_GPR_U32(ctx, 31, 0x261C24u);
    ctx->pc = 0x261C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C1Cu;
    // 0x261c20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x261C1Cu, 0x261C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C24u;
label_261c24:
    // 0x261c24: 0xae20029c  sw          $zero, 0x29C($s1)
    ctx->pc = 0x261c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
label_261c28:
    // 0x261c28: 0x8e2402a4  lw          $a0, 0x2A4($s1)
    ctx->pc = 0x261c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 676)));
label_261c2c:
    // 0x261c2c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_261c30:
    if (ctx->pc == 0x261C30u) {
        ctx->pc = 0x261C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C2Cu;
        // 0x261c30: 0x8e2202a8  lw          $v0, 0x2A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C34u;
        goto label_261c34;
    }
    ctx->pc = 0x261C2Cu;
    {
        const bool branch_taken_0x261c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261c2c) {
            ctx->pc = 0x261C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261C2Cu;
            // 0x261c30: 0x8e2202a8  lw          $v0, 0x2A8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261C44u;
            goto label_261c44;
        }
    }
    ctx->pc = 0x261C34u;
label_261c34:
    // 0x261c34: 0xc0c3212  jal         func_30C848
label_261c38:
    if (ctx->pc == 0x261C38u) {
        ctx->pc = 0x261C3Cu;
        goto label_261c3c;
    }
    ctx->pc = 0x261C34u;
    SET_GPR_U32(ctx, 31, 0x261C3Cu);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x261C34u, 0x261C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C3Cu;
label_261c3c:
    // 0x261c3c: 0xae2002a4  sw          $zero, 0x2A4($s1)
    ctx->pc = 0x261c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 0));
label_261c40:
    // 0x261c40: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x261c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_261c44:
    // 0x261c44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_261c48:
    if (ctx->pc == 0x261C48u) {
        ctx->pc = 0x261C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C44u;
        // 0x261c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C4Cu;
        goto label_261c4c;
    }
    ctx->pc = 0x261C44u;
    {
        const bool branch_taken_0x261c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C44u;
        // 0x261c48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c44) {
            ctx->pc = 0x261C74u;
            goto label_261c74;
        }
    }
    ctx->pc = 0x261C4Cu;
label_261c4c:
    // 0x261c4c: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x261c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_261c50:
    // 0x261c50: 0xc0c305c  jal         func_30C170
label_261c54:
    if (ctx->pc == 0x261C54u) {
        ctx->pc = 0x261C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C50u;
        // 0x261c54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C58u;
        goto label_261c58;
    }
    ctx->pc = 0x261C50u;
    SET_GPR_U32(ctx, 31, 0x261C58u);
    ctx->pc = 0x261C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C50u;
    // 0x261c54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C170u, 0x261C50u, 0x261C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C58u;
label_261c58:
    // 0x261c58: 0x8e2402a8  lw          $a0, 0x2A8($s1)
    ctx->pc = 0x261c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_261c5c:
    // 0x261c5c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_261c60:
    if (ctx->pc == 0x261C60u) {
        ctx->pc = 0x261C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C5Cu;
        // 0x261c60: 0xae2002a8  sw          $zero, 0x2A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C64u;
        goto label_261c64;
    }
    ctx->pc = 0x261C5Cu;
    {
        const bool branch_taken_0x261c5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x261c5c) {
            ctx->pc = 0x261C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261C5Cu;
            // 0x261c60: 0xae2002a8  sw          $zero, 0x2A8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261C70u;
            goto label_261c70;
        }
    }
    ctx->pc = 0x261C64u;
label_261c64:
    // 0x261c64: 0xc0c4858  jal         func_312160
label_261c68:
    if (ctx->pc == 0x261C68u) {
        ctx->pc = 0x261C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C64u;
        // 0x261c68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C6Cu;
        goto label_261c6c;
    }
    ctx->pc = 0x261C64u;
    SET_GPR_U32(ctx, 31, 0x261C6Cu);
    ctx->pc = 0x261C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C64u;
    // 0x261c68: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312160u, 0x261C64u, 0x261C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C6Cu;
label_261c6c:
    // 0x261c6c: 0xae2002a8  sw          $zero, 0x2A8($s1)
    ctx->pc = 0x261c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
label_261c70:
    // 0x261c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x261c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_261c74:
    // 0x261c74: 0xc097682  jal         func_25DA08
label_261c78:
    if (ctx->pc == 0x261C78u) {
        ctx->pc = 0x261C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C74u;
        // 0x261c78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C7Cu;
        goto label_261c7c;
    }
    ctx->pc = 0x261C74u;
    SET_GPR_U32(ctx, 31, 0x261C7Cu);
    ctx->pc = 0x261C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261C74u;
    // 0x261c78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25DA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DA08u, 0x261C74u, 0x261C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261C7Cu;
label_261c7c:
    // 0x261c7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x261c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261c80:
    // 0x261c80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x261c80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_261c84:
    // 0x261c84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x261c84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_261c88:
    // 0x261c88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x261c88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_261c8c:
    // 0x261c8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x261c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_261c90:
    // 0x261c90: 0x3e00008  jr          $ra
label_261c94:
    if (ctx->pc == 0x261C94u) {
        ctx->pc = 0x261C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C90u;
        // 0x261c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261C98u;
        goto label_fallthrough_0x261c90;
    }
    ctx->pc = 0x261C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C90u;
        // 0x261c94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x261c90:
    ctx->pc = 0x261C98u;
}
