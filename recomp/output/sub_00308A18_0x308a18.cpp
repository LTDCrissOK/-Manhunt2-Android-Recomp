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

// Function: sub_00308A18
// Address: 0x308a18 - 0x308cc8
void sub_00308A18_0x308a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308A18_0x308a18");
#endif

    switch (ctx->pc) {
        case 0x308a18u: goto label_308a18;
        case 0x308a1cu: goto label_308a1c;
        case 0x308a20u: goto label_308a20;
        case 0x308a24u: goto label_308a24;
        case 0x308a28u: goto label_308a28;
        case 0x308a2cu: goto label_308a2c;
        case 0x308a30u: goto label_308a30;
        case 0x308a34u: goto label_308a34;
        case 0x308a38u: goto label_308a38;
        case 0x308a3cu: goto label_308a3c;
        case 0x308a40u: goto label_308a40;
        case 0x308a44u: goto label_308a44;
        case 0x308a48u: goto label_308a48;
        case 0x308a4cu: goto label_308a4c;
        case 0x308a50u: goto label_308a50;
        case 0x308a54u: goto label_308a54;
        case 0x308a58u: goto label_308a58;
        case 0x308a5cu: goto label_308a5c;
        case 0x308a60u: goto label_308a60;
        case 0x308a64u: goto label_308a64;
        case 0x308a68u: goto label_308a68;
        case 0x308a6cu: goto label_308a6c;
        case 0x308a70u: goto label_308a70;
        case 0x308a74u: goto label_308a74;
        case 0x308a78u: goto label_308a78;
        case 0x308a7cu: goto label_308a7c;
        case 0x308a80u: goto label_308a80;
        case 0x308a84u: goto label_308a84;
        case 0x308a88u: goto label_308a88;
        case 0x308a8cu: goto label_308a8c;
        case 0x308a90u: goto label_308a90;
        case 0x308a94u: goto label_308a94;
        case 0x308a98u: goto label_308a98;
        case 0x308a9cu: goto label_308a9c;
        case 0x308aa0u: goto label_308aa0;
        case 0x308aa4u: goto label_308aa4;
        case 0x308aa8u: goto label_308aa8;
        case 0x308aacu: goto label_308aac;
        case 0x308ab0u: goto label_308ab0;
        case 0x308ab4u: goto label_308ab4;
        case 0x308ab8u: goto label_308ab8;
        case 0x308abcu: goto label_308abc;
        case 0x308ac0u: goto label_308ac0;
        case 0x308ac4u: goto label_308ac4;
        case 0x308ac8u: goto label_308ac8;
        case 0x308accu: goto label_308acc;
        case 0x308ad0u: goto label_308ad0;
        case 0x308ad4u: goto label_308ad4;
        case 0x308ad8u: goto label_308ad8;
        case 0x308adcu: goto label_308adc;
        case 0x308ae0u: goto label_308ae0;
        case 0x308ae4u: goto label_308ae4;
        case 0x308ae8u: goto label_308ae8;
        case 0x308aecu: goto label_308aec;
        case 0x308af0u: goto label_308af0;
        case 0x308af4u: goto label_308af4;
        case 0x308af8u: goto label_308af8;
        case 0x308afcu: goto label_308afc;
        case 0x308b00u: goto label_308b00;
        case 0x308b04u: goto label_308b04;
        case 0x308b08u: goto label_308b08;
        case 0x308b0cu: goto label_308b0c;
        case 0x308b10u: goto label_308b10;
        case 0x308b14u: goto label_308b14;
        case 0x308b18u: goto label_308b18;
        case 0x308b1cu: goto label_308b1c;
        case 0x308b20u: goto label_308b20;
        case 0x308b24u: goto label_308b24;
        case 0x308b28u: goto label_308b28;
        case 0x308b2cu: goto label_308b2c;
        case 0x308b30u: goto label_308b30;
        case 0x308b34u: goto label_308b34;
        case 0x308b38u: goto label_308b38;
        case 0x308b3cu: goto label_308b3c;
        case 0x308b40u: goto label_308b40;
        case 0x308b44u: goto label_308b44;
        case 0x308b48u: goto label_308b48;
        case 0x308b4cu: goto label_308b4c;
        case 0x308b50u: goto label_308b50;
        case 0x308b54u: goto label_308b54;
        case 0x308b58u: goto label_308b58;
        case 0x308b5cu: goto label_308b5c;
        case 0x308b60u: goto label_308b60;
        case 0x308b64u: goto label_308b64;
        case 0x308b68u: goto label_308b68;
        case 0x308b6cu: goto label_308b6c;
        case 0x308b70u: goto label_308b70;
        case 0x308b74u: goto label_308b74;
        case 0x308b78u: goto label_308b78;
        case 0x308b7cu: goto label_308b7c;
        case 0x308b80u: goto label_308b80;
        case 0x308b84u: goto label_308b84;
        case 0x308b88u: goto label_308b88;
        case 0x308b8cu: goto label_308b8c;
        case 0x308b90u: goto label_308b90;
        case 0x308b94u: goto label_308b94;
        case 0x308b98u: goto label_308b98;
        case 0x308b9cu: goto label_308b9c;
        case 0x308ba0u: goto label_308ba0;
        case 0x308ba4u: goto label_308ba4;
        case 0x308ba8u: goto label_308ba8;
        case 0x308bacu: goto label_308bac;
        case 0x308bb0u: goto label_308bb0;
        case 0x308bb4u: goto label_308bb4;
        case 0x308bb8u: goto label_308bb8;
        case 0x308bbcu: goto label_308bbc;
        case 0x308bc0u: goto label_308bc0;
        case 0x308bc4u: goto label_308bc4;
        case 0x308bc8u: goto label_308bc8;
        case 0x308bccu: goto label_308bcc;
        case 0x308bd0u: goto label_308bd0;
        case 0x308bd4u: goto label_308bd4;
        case 0x308bd8u: goto label_308bd8;
        case 0x308bdcu: goto label_308bdc;
        case 0x308be0u: goto label_308be0;
        case 0x308be4u: goto label_308be4;
        case 0x308be8u: goto label_308be8;
        case 0x308becu: goto label_308bec;
        case 0x308bf0u: goto label_308bf0;
        case 0x308bf4u: goto label_308bf4;
        case 0x308bf8u: goto label_308bf8;
        case 0x308bfcu: goto label_308bfc;
        case 0x308c00u: goto label_308c00;
        case 0x308c04u: goto label_308c04;
        case 0x308c08u: goto label_308c08;
        case 0x308c0cu: goto label_308c0c;
        case 0x308c10u: goto label_308c10;
        case 0x308c14u: goto label_308c14;
        case 0x308c18u: goto label_308c18;
        case 0x308c1cu: goto label_308c1c;
        case 0x308c20u: goto label_308c20;
        case 0x308c24u: goto label_308c24;
        case 0x308c28u: goto label_308c28;
        case 0x308c2cu: goto label_308c2c;
        case 0x308c30u: goto label_308c30;
        case 0x308c34u: goto label_308c34;
        case 0x308c38u: goto label_308c38;
        case 0x308c3cu: goto label_308c3c;
        case 0x308c40u: goto label_308c40;
        case 0x308c44u: goto label_308c44;
        case 0x308c48u: goto label_308c48;
        case 0x308c4cu: goto label_308c4c;
        case 0x308c50u: goto label_308c50;
        case 0x308c54u: goto label_308c54;
        case 0x308c58u: goto label_308c58;
        case 0x308c5cu: goto label_308c5c;
        case 0x308c60u: goto label_308c60;
        case 0x308c64u: goto label_308c64;
        case 0x308c68u: goto label_308c68;
        case 0x308c6cu: goto label_308c6c;
        case 0x308c70u: goto label_308c70;
        case 0x308c74u: goto label_308c74;
        case 0x308c78u: goto label_308c78;
        case 0x308c7cu: goto label_308c7c;
        case 0x308c80u: goto label_308c80;
        case 0x308c84u: goto label_308c84;
        case 0x308c88u: goto label_308c88;
        case 0x308c8cu: goto label_308c8c;
        case 0x308c90u: goto label_308c90;
        case 0x308c94u: goto label_308c94;
        case 0x308c98u: goto label_308c98;
        case 0x308c9cu: goto label_308c9c;
        case 0x308ca0u: goto label_308ca0;
        case 0x308ca4u: goto label_308ca4;
        case 0x308ca8u: goto label_308ca8;
        case 0x308cacu: goto label_308cac;
        case 0x308cb0u: goto label_308cb0;
        case 0x308cb4u: goto label_308cb4;
        case 0x308cb8u: goto label_308cb8;
        case 0x308cbcu: goto label_308cbc;
        case 0x308cc0u: goto label_308cc0;
        case 0x308cc4u: goto label_308cc4;
        default: break;
    }

    ctx->pc = 0x308a18u;

label_308a18:
    // 0x308a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_308a1c:
    // 0x308a1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x308a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_308a20:
    // 0x308a20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x308a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_308a24:
    // 0x308a24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x308a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_308a28:
    // 0x308a28: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x308a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_308a2c:
    // 0x308a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_308a30:
    // 0x308a30: 0x8e300234  lw          $s0, 0x234($s1)
    ctx->pc = 0x308a30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_308a34:
    // 0x308a34: 0x5200009c  beql        $s0, $zero, . + 4 + (0x9C << 2)
label_308a38:
    if (ctx->pc == 0x308A38u) {
        ctx->pc = 0x308A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A34u;
        // 0x308a38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A3Cu;
        goto label_308a3c;
    }
    ctx->pc = 0x308A34u;
    {
        const bool branch_taken_0x308a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x308a34) {
            ctx->pc = 0x308A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308A34u;
            // 0x308a38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308CA8u;
            goto label_308ca8;
        }
    }
    ctx->pc = 0x308A3Cu;
label_308a3c:
    // 0x308a3c: 0x8e2302e0  lw          $v1, 0x2E0($s1)
    ctx->pc = 0x308a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
label_308a40:
    // 0x308a40: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x308a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_308a44:
    // 0x308a44: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
label_308a48:
    if (ctx->pc == 0x308A48u) {
        ctx->pc = 0x308A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A44u;
        // 0x308a48: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A4Cu;
        goto label_308a4c;
    }
    ctx->pc = 0x308A44u;
    {
        const bool branch_taken_0x308a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A44u;
        // 0x308a48: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a44) {
            ctx->pc = 0x308CA4u;
            goto label_308ca4;
        }
    }
    ctx->pc = 0x308A4Cu;
label_308a4c:
    // 0x308a4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x308a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_308a50:
    // 0x308a50: 0x24422100  addiu       $v0, $v0, 0x2100
    ctx->pc = 0x308a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8448));
label_308a54:
    // 0x308a54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x308a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_308a58:
    // 0x308a58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x308a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_308a5c:
    // 0x308a5c: 0x800008  jr          $a0
label_308a60:
    if (ctx->pc == 0x308A60u) {
        ctx->pc = 0x308A64u;
        goto label_308a64;
    }
    ctx->pc = 0x308A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x308A64u: goto label_308a64;
            case 0x308A74u: goto label_308a74;
            case 0x308AA8u: goto label_308aa8;
            case 0x308AE0u: goto label_308ae0;
            case 0x308BB4u: goto label_308bb4;
            case 0x308BDCu: goto label_308bdc;
            case 0x308C94u: goto label_308c94;
            case 0x308CA4u: goto label_308ca4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308A5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x308A64u;
label_308a64:
    // 0x308a64: 0xc06bf3e  jal         func_1AFCF8
label_308a68:
    if (ctx->pc == 0x308A68u) {
        ctx->pc = 0x308A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A64u;
        // 0x308a68: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A6Cu;
        goto label_308a6c;
    }
    ctx->pc = 0x308A64u;
    SET_GPR_U32(ctx, 31, 0x308A6Cu);
    ctx->pc = 0x308A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A64u;
    // 0x308a68: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFCF8u, 0x308A64u, 0x308A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A6Cu;
label_308a6c:
    // 0x308a6c: 0x10000085  b           . + 4 + (0x85 << 2)
label_308a70:
    if (ctx->pc == 0x308A70u) {
        ctx->pc = 0x308A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A6Cu;
        // 0x308a70: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A74u;
        goto label_308a74;
    }
    ctx->pc = 0x308A6Cu;
    {
        const bool branch_taken_0x308a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A6Cu;
        // 0x308a70: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a6c) {
            ctx->pc = 0x308C84u;
            goto label_308c84;
        }
    }
    ctx->pc = 0x308A74u;
label_308a74:
    // 0x308a74: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x308a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_308a78:
    // 0x308a78: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x308a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_308a7c:
    // 0x308a7c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x308a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_308a80:
    // 0x308a80: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_308a84:
    if (ctx->pc == 0x308A84u) {
        ctx->pc = 0x308A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A80u;
        // 0x308a84: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A88u;
        goto label_308a88;
    }
    ctx->pc = 0x308A80u;
    {
        const bool branch_taken_0x308a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x308a80) {
            ctx->pc = 0x308A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308A80u;
            // 0x308a84: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308A98u;
            goto label_308a98;
        }
    }
    ctx->pc = 0x308A88u;
label_308a88:
    // 0x308a88: 0xc06bd66  jal         func_1AF598
label_308a8c:
    if (ctx->pc == 0x308A8Cu) {
        ctx->pc = 0x308A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A88u;
        // 0x308a8c: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A90u;
        goto label_308a90;
    }
    ctx->pc = 0x308A88u;
    SET_GPR_U32(ctx, 31, 0x308A90u);
    ctx->pc = 0x308A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A88u;
    // 0x308a8c: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF598u, 0x308A88u, 0x308A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308A90u;
label_308a90:
    // 0x308a90: 0x1000007c  b           . + 4 + (0x7C << 2)
label_308a94:
    if (ctx->pc == 0x308A94u) {
        ctx->pc = 0x308A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A90u;
        // 0x308a94: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308A98u;
        goto label_308a98;
    }
    ctx->pc = 0x308A90u;
    {
        const bool branch_taken_0x308a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A90u;
        // 0x308a94: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308a90) {
            ctx->pc = 0x308C84u;
            goto label_308c84;
        }
    }
    ctx->pc = 0x308A98u;
label_308a98:
    // 0x308a98: 0xc06b85c  jal         func_1AE170
label_308a9c:
    if (ctx->pc == 0x308A9Cu) {
        ctx->pc = 0x308A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308A98u;
        // 0x308a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AA0u;
        goto label_308aa0;
    }
    ctx->pc = 0x308A98u;
    SET_GPR_U32(ctx, 31, 0x308AA0u);
    ctx->pc = 0x308A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308A98u;
    // 0x308a9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x308A98u, 0x308AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308AA0u;
label_308aa0:
    // 0x308aa0: 0x10000078  b           . + 4 + (0x78 << 2)
label_308aa4:
    if (ctx->pc == 0x308AA4u) {
        ctx->pc = 0x308AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AA0u;
        // 0x308aa4: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AA8u;
        goto label_308aa8;
    }
    ctx->pc = 0x308AA0u;
    {
        const bool branch_taken_0x308aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AA0u;
        // 0x308aa4: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308aa0) {
            ctx->pc = 0x308C84u;
            goto label_308c84;
        }
    }
    ctx->pc = 0x308AA8u;
label_308aa8:
    // 0x308aa8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x308aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_308aac:
    // 0x308aac: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x308aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_308ab0:
    // 0x308ab0: 0x5440007d  bnel        $v0, $zero, . + 4 + (0x7D << 2)
label_308ab4:
    if (ctx->pc == 0x308AB4u) {
        ctx->pc = 0x308AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AB0u;
        // 0x308ab4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AB8u;
        goto label_308ab8;
    }
    ctx->pc = 0x308AB0u;
    {
        const bool branch_taken_0x308ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308ab0) {
            ctx->pc = 0x308AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308AB0u;
            // 0x308ab4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308CA8u;
            goto label_308ca8;
        }
    }
    ctx->pc = 0x308AB8u;
label_308ab8:
    // 0x308ab8: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x308ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_308abc:
    // 0x308abc: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x308abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_308ac0:
    // 0x308ac0: 0x2442ffeb  addiu       $v0, $v0, -0x15
    ctx->pc = 0x308ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967275));
label_308ac4:
    // 0x308ac4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x308ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_308ac8:
    // 0x308ac8: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
label_308acc:
    if (ctx->pc == 0x308ACCu) {
        ctx->pc = 0x308ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AC8u;
        // 0x308acc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AD0u;
        goto label_308ad0;
    }
    ctx->pc = 0x308AC8u;
    {
        const bool branch_taken_0x308ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AC8u;
        // 0x308acc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ac8) {
            ctx->pc = 0x308CA8u;
            goto label_308ca8;
        }
    }
    ctx->pc = 0x308AD0u;
label_308ad0:
    // 0x308ad0: 0xc06bef0  jal         func_1AFBC0
label_308ad4:
    if (ctx->pc == 0x308AD4u) {
        ctx->pc = 0x308AD8u;
        goto label_308ad8;
    }
    ctx->pc = 0x308AD0u;
    SET_GPR_U32(ctx, 31, 0x308AD8u);
    ctx->pc = 0x1AFBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFBC0u, 0x308AD0u, 0x308AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308AD8u;
label_308ad8:
    // 0x308ad8: 0x10000073  b           . + 4 + (0x73 << 2)
label_308adc:
    if (ctx->pc == 0x308ADCu) {
        ctx->pc = 0x308ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AD8u;
        // 0x308adc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AE0u;
        goto label_308ae0;
    }
    ctx->pc = 0x308AD8u;
    {
        const bool branch_taken_0x308ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AD8u;
        // 0x308adc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ad8) {
            ctx->pc = 0x308CA8u;
            goto label_308ca8;
        }
    }
    ctx->pc = 0x308AE0u;
label_308ae0:
    // 0x308ae0: 0x8e230290  lw          $v1, 0x290($s1)
    ctx->pc = 0x308ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
label_308ae4:
    // 0x308ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x308ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308ae8:
    // 0x308ae8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_308aec:
    if (ctx->pc == 0x308AECu) {
        ctx->pc = 0x308AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AE8u;
        // 0x308aec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308AF0u;
        goto label_308af0;
    }
    ctx->pc = 0x308AE8u;
    {
        const bool branch_taken_0x308ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x308AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AE8u;
        // 0x308aec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ae8) {
            ctx->pc = 0x308B14u;
            goto label_308b14;
        }
    }
    ctx->pc = 0x308AF0u;
label_308af0:
    // 0x308af0: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x308af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_308af4:
    // 0x308af4: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x308af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_308af8:
    // 0x308af8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x308af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_308afc:
    // 0x308afc: 0x40f809  jalr        $v0
label_308b00:
    if (ctx->pc == 0x308B00u) {
        ctx->pc = 0x308B04u;
        goto label_308b04;
    }
    ctx->pc = 0x308AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308B04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308AFCu, 0x308B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308B04u;
label_308b04:
    // 0x308b04: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_308b08:
    if (ctx->pc == 0x308B08u) {
        ctx->pc = 0x308B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B04u;
        // 0x308b08: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B0Cu;
        goto label_308b0c;
    }
    ctx->pc = 0x308B04u;
    {
        const bool branch_taken_0x308b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308b04) {
            ctx->pc = 0x308B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308B04u;
            // 0x308b08: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308B3Cu;
            goto label_308b3c;
        }
    }
    ctx->pc = 0x308B0Cu;
label_308b0c:
    // 0x308b0c: 0x8e230290  lw          $v1, 0x290($s1)
    ctx->pc = 0x308b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
label_308b10:
    // 0x308b10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x308b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_308b14:
    // 0x308b14: 0x5462001d  bnel        $v1, $v0, . + 4 + (0x1D << 2)
label_308b18:
    if (ctx->pc == 0x308B18u) {
        ctx->pc = 0x308B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B14u;
        // 0x308b18: 0x8e2402e4  lw          $a0, 0x2E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B1Cu;
        goto label_308b1c;
    }
    ctx->pc = 0x308B14u;
    {
        const bool branch_taken_0x308b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x308b14) {
            ctx->pc = 0x308B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308B14u;
            // 0x308b18: 0x8e2402e4  lw          $a0, 0x2E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308B8Cu;
            goto label_308b8c;
        }
    }
    ctx->pc = 0x308B1Cu;
label_308b1c:
    // 0x308b1c: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x308b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_308b20:
    // 0x308b20: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x308b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_308b24:
    // 0x308b24: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x308b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_308b28:
    // 0x308b28: 0x40f809  jalr        $v0
label_308b2c:
    if (ctx->pc == 0x308B2Cu) {
        ctx->pc = 0x308B30u;
        goto label_308b30;
    }
    ctx->pc = 0x308B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308B30u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308B28u, 0x308B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308B30u;
label_308b30:
    // 0x308b30: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_308b34:
    if (ctx->pc == 0x308B34u) {
        ctx->pc = 0x308B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B30u;
        // 0x308b34: 0x8e2402e4  lw          $a0, 0x2E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B38u;
        goto label_308b38;
    }
    ctx->pc = 0x308B30u;
    {
        const bool branch_taken_0x308b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308b30) {
            ctx->pc = 0x308B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308B30u;
            // 0x308b34: 0x8e2402e4  lw          $a0, 0x2E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308B8Cu;
            goto label_308b8c;
        }
    }
    ctx->pc = 0x308B38u;
label_308b38:
    // 0x308b38: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x308b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_308b3c:
    // 0x308b3c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x308b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_308b40:
    // 0x308b40: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x308b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_308b44:
    // 0x308b44: 0x50430016  beql        $v0, $v1, . + 4 + (0x16 << 2)
label_308b48:
    if (ctx->pc == 0x308B48u) {
        ctx->pc = 0x308B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B44u;
        // 0x308b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B4Cu;
        goto label_308b4c;
    }
    ctx->pc = 0x308B44u;
    {
        const bool branch_taken_0x308b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x308b44) {
            ctx->pc = 0x308B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308B44u;
            // 0x308b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308BA0u;
            goto label_308ba0;
        }
    }
    ctx->pc = 0x308B4Cu;
label_308b4c:
    // 0x308b4c: 0xc06b93c  jal         func_1AE4F0
label_308b50:
    if (ctx->pc == 0x308B50u) {
        ctx->pc = 0x308B54u;
        goto label_308b54;
    }
    ctx->pc = 0x308B4Cu;
    SET_GPR_U32(ctx, 31, 0x308B54u);
    ctx->pc = 0x1AE4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE4F0u, 0x308B4Cu, 0x308B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B54u;
label_308b54:
    // 0x308b54: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x308b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_308b58:
    // 0x308b58: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x308b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_308b5c:
    // 0x308b5c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x308b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_308b60:
    // 0x308b60: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x308b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_308b64:
    // 0x308b64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_308b68:
    if (ctx->pc == 0x308B68u) {
        ctx->pc = 0x308B6Cu;
        goto label_308b6c;
    }
    ctx->pc = 0x308B64u;
    {
        const bool branch_taken_0x308b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308b64) {
            ctx->pc = 0x308B7Cu;
            goto label_308b7c;
        }
    }
    ctx->pc = 0x308B6Cu;
label_308b6c:
    // 0x308b6c: 0xc06bfc8  jal         func_1AFF20
label_308b70:
    if (ctx->pc == 0x308B70u) {
        ctx->pc = 0x308B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B6Cu;
        // 0x308b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B74u;
        goto label_308b74;
    }
    ctx->pc = 0x308B6Cu;
    SET_GPR_U32(ctx, 31, 0x308B74u);
    ctx->pc = 0x308B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B6Cu;
    // 0x308b70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x308B6Cu, 0x308B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B74u;
label_308b74:
    // 0x308b74: 0x1000000a  b           . + 4 + (0xA << 2)
label_308b78:
    if (ctx->pc == 0x308B78u) {
        ctx->pc = 0x308B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B74u;
        // 0x308b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B7Cu;
        goto label_308b7c;
    }
    ctx->pc = 0x308B74u;
    {
        const bool branch_taken_0x308b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B74u;
        // 0x308b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b74) {
            ctx->pc = 0x308BA0u;
            goto label_308ba0;
        }
    }
    ctx->pc = 0x308B7Cu;
label_308b7c:
    // 0x308b7c: 0xc06c546  jal         func_1B1518
label_308b80:
    if (ctx->pc == 0x308B80u) {
        ctx->pc = 0x308B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B7Cu;
        // 0x308b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B84u;
        goto label_308b84;
    }
    ctx->pc = 0x308B7Cu;
    SET_GPR_U32(ctx, 31, 0x308B84u);
    ctx->pc = 0x308B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308B7Cu;
    // 0x308b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x308B7Cu, 0x308B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308B84u;
label_308b84:
    // 0x308b84: 0x10000006  b           . + 4 + (0x6 << 2)
label_308b88:
    if (ctx->pc == 0x308B88u) {
        ctx->pc = 0x308B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B84u;
        // 0x308b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B8Cu;
        goto label_308b8c;
    }
    ctx->pc = 0x308B84u;
    {
        const bool branch_taken_0x308b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B84u;
        // 0x308b88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308b84) {
            ctx->pc = 0x308BA0u;
            goto label_308ba0;
        }
    }
    ctx->pc = 0x308B8Cu;
label_308b8c:
    // 0x308b8c: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x308b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_308b90:
    // 0x308b90: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x308b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_308b94:
    // 0x308b94: 0x40f809  jalr        $v0
label_308b98:
    if (ctx->pc == 0x308B98u) {
        ctx->pc = 0x308B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B94u;
        // 0x308b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308B9Cu;
        goto label_308b9c;
    }
    ctx->pc = 0x308B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308B9Cu);
        ctx->pc = 0x308B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308B94u;
        // 0x308b98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308B94u, 0x308B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308B9Cu;
label_308b9c:
    // 0x308b9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x308b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_308ba0:
    // 0x308ba0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x308ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308ba4:
    // 0x308ba4: 0xc0984bc  jal         func_2612F0
label_308ba8:
    if (ctx->pc == 0x308BA8u) {
        ctx->pc = 0x308BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BA4u;
        // 0x308ba8: 0x8c850260  lw          $a1, 0x260($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308BACu;
        goto label_308bac;
    }
    ctx->pc = 0x308BA4u;
    SET_GPR_U32(ctx, 31, 0x308BACu);
    ctx->pc = 0x308BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308BA4u;
    // 0x308ba8: 0x8c850260  lw          $a1, 0x260($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 608)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x308BA4u, 0x308BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308BACu;
label_308bac:
    // 0x308bac: 0x1000003e  b           . + 4 + (0x3E << 2)
label_308bb0:
    if (ctx->pc == 0x308BB0u) {
        ctx->pc = 0x308BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BACu;
        // 0x308bb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308BB4u;
        goto label_308bb4;
    }
    ctx->pc = 0x308BACu;
    {
        const bool branch_taken_0x308bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BACu;
        // 0x308bb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308bac) {
            ctx->pc = 0x308CA8u;
            goto label_308ca8;
        }
    }
    ctx->pc = 0x308BB4u;
label_308bb4:
    // 0x308bb4: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x308bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_308bb8:
    // 0x308bb8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x308bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_308bbc:
    // 0x308bbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x308bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_308bc0:
    // 0x308bc0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x308bc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_308bc4:
    // 0x308bc4: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_308bc8:
    if (ctx->pc == 0x308BC8u) {
        ctx->pc = 0x308BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BC4u;
        // 0x308bc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308BCCu;
        goto label_308bcc;
    }
    ctx->pc = 0x308BC4u;
    {
        const bool branch_taken_0x308bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308bc4) {
            ctx->pc = 0x308BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308BC4u;
            // 0x308bc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308CA8u;
            goto label_308ca8;
        }
    }
    ctx->pc = 0x308BCCu;
label_308bcc:
    // 0x308bcc: 0xc06b866  jal         func_1AE198
label_308bd0:
    if (ctx->pc == 0x308BD0u) {
        ctx->pc = 0x308BD4u;
        goto label_308bd4;
    }
    ctx->pc = 0x308BCCu;
    SET_GPR_U32(ctx, 31, 0x308BD4u);
    ctx->pc = 0x1AE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE198u, 0x308BCCu, 0x308BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308BD4u;
label_308bd4:
    // 0x308bd4: 0x1000002b  b           . + 4 + (0x2B << 2)
label_308bd8:
    if (ctx->pc == 0x308BD8u) {
        ctx->pc = 0x308BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BD4u;
        // 0x308bd8: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308BDCu;
        goto label_308bdc;
    }
    ctx->pc = 0x308BD4u;
    {
        const bool branch_taken_0x308bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BD4u;
        // 0x308bd8: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308bd4) {
            ctx->pc = 0x308C84u;
            goto label_308c84;
        }
    }
    ctx->pc = 0x308BDCu;
label_308bdc:
    // 0x308bdc: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x308bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_308be0:
    // 0x308be0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x308be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_308be4:
    // 0x308be4: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_308be8:
    if (ctx->pc == 0x308BE8u) {
        ctx->pc = 0x308BECu;
        goto label_308bec;
    }
    ctx->pc = 0x308BE4u;
    {
        const bool branch_taken_0x308be4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x308be4) {
            ctx->pc = 0x308C58u;
            goto label_308c58;
        }
    }
    ctx->pc = 0x308BECu;
label_308bec:
    // 0x308bec: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x308becu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_308bf0:
    // 0x308bf0: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x308bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_308bf4:
    // 0x308bf4: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x308bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_308bf8:
    // 0x308bf8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x308bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_308bfc:
    // 0x308bfc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_308c00:
    if (ctx->pc == 0x308C00u) {
        ctx->pc = 0x308C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BFCu;
        // 0x308c00: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C04u;
        goto label_308c04;
    }
    ctx->pc = 0x308BFCu;
    {
        const bool branch_taken_0x308bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BFCu;
        // 0x308c00: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308bfc) {
            ctx->pc = 0x308C38u;
            goto label_308c38;
        }
    }
    ctx->pc = 0x308C04u;
label_308c04:
    // 0x308c04: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x308c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_308c08:
    // 0x308c08: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_308c0c:
    if (ctx->pc == 0x308C0Cu) {
        ctx->pc = 0x308C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C08u;
        // 0x308c0c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C10u;
        goto label_308c10;
    }
    ctx->pc = 0x308C08u;
    {
        const bool branch_taken_0x308c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x308c08) {
            ctx->pc = 0x308C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308C08u;
            // 0x308c0c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308C3Cu;
            goto label_308c3c;
        }
    }
    ctx->pc = 0x308C10u;
label_308c10:
    // 0x308c10: 0xc0924a8  jal         func_2492A0
label_308c14:
    if (ctx->pc == 0x308C14u) {
        ctx->pc = 0x308C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C10u;
        // 0x308c14: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C18u;
        goto label_308c18;
    }
    ctx->pc = 0x308C10u;
    SET_GPR_U32(ctx, 31, 0x308C18u);
    ctx->pc = 0x308C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C10u;
    // 0x308c14: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x308C10u, 0x308C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C18u;
label_308c18:
    // 0x308c18: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_308c1c:
    if (ctx->pc == 0x308C1Cu) {
        ctx->pc = 0x308C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C18u;
        // 0x308c1c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C20u;
        goto label_308c20;
    }
    ctx->pc = 0x308C18u;
    {
        const bool branch_taken_0x308c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308c18) {
            ctx->pc = 0x308C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308C18u;
            // 0x308c1c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308C3Cu;
            goto label_308c3c;
        }
    }
    ctx->pc = 0x308C20u;
label_308c20:
    // 0x308c20: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x308c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
label_308c24:
    // 0x308c24: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x308c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_308c28:
    // 0x308c28: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_308c2c:
    if (ctx->pc == 0x308C2Cu) {
        ctx->pc = 0x308C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C28u;
        // 0x308c2c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C30u;
        goto label_308c30;
    }
    ctx->pc = 0x308C28u;
    {
        const bool branch_taken_0x308c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x308C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C28u;
        // 0x308c2c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c28) {
            ctx->pc = 0x308C38u;
            goto label_308c38;
        }
    }
    ctx->pc = 0x308C30u;
label_308c30:
    // 0x308c30: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_308c34:
    if (ctx->pc == 0x308C34u) {
        ctx->pc = 0x308C38u;
        goto label_308c38;
    }
    ctx->pc = 0x308C30u;
    {
        const bool branch_taken_0x308c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x308c30) {
            ctx->pc = 0x308C3Cu;
            goto label_308c3c;
        }
    }
    ctx->pc = 0x308C38u;
label_308c38:
    // 0x308c38: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x308c38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308c3c:
    // 0x308c3c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_308c40:
    if (ctx->pc == 0x308C40u) {
        ctx->pc = 0x308C44u;
        goto label_308c44;
    }
    ctx->pc = 0x308C3Cu;
    {
        const bool branch_taken_0x308c3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x308c3c) {
            ctx->pc = 0x308C58u;
            goto label_308c58;
        }
    }
    ctx->pc = 0x308C44u;
label_308c44:
    // 0x308c44: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x308c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_308c48:
    // 0x308c48: 0xc06b958  jal         func_1AE560
label_308c4c:
    if (ctx->pc == 0x308C4Cu) {
        ctx->pc = 0x308C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C48u;
        // 0x308c4c: 0x24050063  addiu       $a1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C50u;
        goto label_308c50;
    }
    ctx->pc = 0x308C48u;
    SET_GPR_U32(ctx, 31, 0x308C50u);
    ctx->pc = 0x308C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C48u;
    // 0x308c4c: 0x24050063  addiu       $a1, $zero, 0x63 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE560u, 0x308C48u, 0x308C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C50u;
label_308c50:
    // 0x308c50: 0x1000000c  b           . + 4 + (0xC << 2)
label_308c54:
    if (ctx->pc == 0x308C54u) {
        ctx->pc = 0x308C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C50u;
        // 0x308c54: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C58u;
        goto label_308c58;
    }
    ctx->pc = 0x308C50u;
    {
        const bool branch_taken_0x308c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C50u;
        // 0x308c54: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c50) {
            ctx->pc = 0x308C84u;
            goto label_308c84;
        }
    }
    ctx->pc = 0x308C58u;
label_308c58:
    // 0x308c58: 0xc08f672  jal         func_23D9C8
label_308c5c:
    if (ctx->pc == 0x308C5Cu) {
        ctx->pc = 0x308C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C58u;
        // 0x308c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C60u;
        goto label_308c60;
    }
    ctx->pc = 0x308C58u;
    SET_GPR_U32(ctx, 31, 0x308C60u);
    ctx->pc = 0x308C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C58u;
    // 0x308c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x308C58u, 0x308C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C60u;
label_308c60:
    // 0x308c60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_308c64:
    if (ctx->pc == 0x308C64u) {
        ctx->pc = 0x308C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C60u;
        // 0x308c64: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C68u;
        goto label_308c68;
    }
    ctx->pc = 0x308C60u;
    {
        const bool branch_taken_0x308c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C60u;
        // 0x308c64: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c60) {
            ctx->pc = 0x308C78u;
            goto label_308c78;
        }
    }
    ctx->pc = 0x308C68u;
label_308c68:
    // 0x308c68: 0xc06b958  jal         func_1AE560
label_308c6c:
    if (ctx->pc == 0x308C6Cu) {
        ctx->pc = 0x308C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C68u;
        // 0x308c6c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C70u;
        goto label_308c70;
    }
    ctx->pc = 0x308C68u;
    SET_GPR_U32(ctx, 31, 0x308C70u);
    ctx->pc = 0x308C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C68u;
    // 0x308c6c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE560u, 0x308C68u, 0x308C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C70u;
label_308c70:
    // 0x308c70: 0x10000004  b           . + 4 + (0x4 << 2)
label_308c74:
    if (ctx->pc == 0x308C74u) {
        ctx->pc = 0x308C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C70u;
        // 0x308c74: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C78u;
        goto label_308c78;
    }
    ctx->pc = 0x308C70u;
    {
        const bool branch_taken_0x308c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C70u;
        // 0x308c74: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c70) {
            ctx->pc = 0x308C84u;
            goto label_308c84;
        }
    }
    ctx->pc = 0x308C78u;
label_308c78:
    // 0x308c78: 0xc06b958  jal         func_1AE560
label_308c7c:
    if (ctx->pc == 0x308C7Cu) {
        ctx->pc = 0x308C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C78u;
        // 0x308c7c: 0x24050062  addiu       $a1, $zero, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C80u;
        goto label_308c80;
    }
    ctx->pc = 0x308C78u;
    SET_GPR_U32(ctx, 31, 0x308C80u);
    ctx->pc = 0x308C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C78u;
    // 0x308c7c: 0x24050062  addiu       $a1, $zero, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE560u, 0x308C78u, 0x308C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C80u;
label_308c80:
    // 0x308c80: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x308c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_308c84:
    // 0x308c84: 0xc06c546  jal         func_1B1518
label_308c88:
    if (ctx->pc == 0x308C88u) {
        ctx->pc = 0x308C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C84u;
        // 0x308c88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C8Cu;
        goto label_308c8c;
    }
    ctx->pc = 0x308C84u;
    SET_GPR_U32(ctx, 31, 0x308C8Cu);
    ctx->pc = 0x308C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C84u;
    // 0x308c88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x308C84u, 0x308C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C8Cu;
label_308c8c:
    // 0x308c8c: 0x10000006  b           . + 4 + (0x6 << 2)
label_308c90:
    if (ctx->pc == 0x308C90u) {
        ctx->pc = 0x308C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C8Cu;
        // 0x308c90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C94u;
        goto label_308c94;
    }
    ctx->pc = 0x308C8Cu;
    {
        const bool branch_taken_0x308c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C8Cu;
        // 0x308c90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c8c) {
            ctx->pc = 0x308CA8u;
            goto label_308ca8;
        }
    }
    ctx->pc = 0x308C94u;
label_308c94:
    // 0x308c94: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x308c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_308c98:
    // 0x308c98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x308c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_308c9c:
    // 0x308c9c: 0xc0c2286  jal         func_308A18
label_308ca0:
    if (ctx->pc == 0x308CA0u) {
        ctx->pc = 0x308CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C9Cu;
        // 0x308ca0: 0xae2202e0  sw          $v0, 0x2E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CA4u;
        goto label_308ca4;
    }
    ctx->pc = 0x308C9Cu;
    SET_GPR_U32(ctx, 31, 0x308CA4u);
    ctx->pc = 0x308CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C9Cu;
    // 0x308ca0: 0xae2202e0  sw          $v0, 0x2E0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308A18u;
    goto label_308a18;
    ctx->pc = 0x308CA4u;
label_308ca4:
    // 0x308ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308ca8:
    // 0x308ca8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x308ca8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_308cac:
    // 0x308cac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x308cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_308cb0:
    // 0x308cb0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x308cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_308cb4:
    // 0x308cb4: 0x3e00008  jr          $ra
label_308cb8:
    if (ctx->pc == 0x308CB8u) {
        ctx->pc = 0x308CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CB4u;
        // 0x308cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CBCu;
        goto label_308cbc;
    }
    ctx->pc = 0x308CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CB4u;
        // 0x308cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308CBCu;
label_308cbc:
    // 0x308cbc: 0x0  nop
    ctx->pc = 0x308cbcu;
    // NOP
label_308cc0:
    // 0x308cc0: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x308cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
label_308cc4:
    // 0x308cc4: 0x0  nop
    ctx->pc = 0x308cc4u;
    // NOP
    ctx->pc = 0x308cc8u;
}
