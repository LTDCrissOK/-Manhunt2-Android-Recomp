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

// Function: sub_00232A68
// Address: 0x232a68 - 0x232d88
void sub_00232A68_0x232a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232A68_0x232a68");
#endif

    switch (ctx->pc) {
        case 0x232a68u: goto label_232a68;
        case 0x232a6cu: goto label_232a6c;
        case 0x232a70u: goto label_232a70;
        case 0x232a74u: goto label_232a74;
        case 0x232a78u: goto label_232a78;
        case 0x232a7cu: goto label_232a7c;
        case 0x232a80u: goto label_232a80;
        case 0x232a84u: goto label_232a84;
        case 0x232a88u: goto label_232a88;
        case 0x232a8cu: goto label_232a8c;
        case 0x232a90u: goto label_232a90;
        case 0x232a94u: goto label_232a94;
        case 0x232a98u: goto label_232a98;
        case 0x232a9cu: goto label_232a9c;
        case 0x232aa0u: goto label_232aa0;
        case 0x232aa4u: goto label_232aa4;
        case 0x232aa8u: goto label_232aa8;
        case 0x232aacu: goto label_232aac;
        case 0x232ab0u: goto label_232ab0;
        case 0x232ab4u: goto label_232ab4;
        case 0x232ab8u: goto label_232ab8;
        case 0x232abcu: goto label_232abc;
        case 0x232ac0u: goto label_232ac0;
        case 0x232ac4u: goto label_232ac4;
        case 0x232ac8u: goto label_232ac8;
        case 0x232accu: goto label_232acc;
        case 0x232ad0u: goto label_232ad0;
        case 0x232ad4u: goto label_232ad4;
        case 0x232ad8u: goto label_232ad8;
        case 0x232adcu: goto label_232adc;
        case 0x232ae0u: goto label_232ae0;
        case 0x232ae4u: goto label_232ae4;
        case 0x232ae8u: goto label_232ae8;
        case 0x232aecu: goto label_232aec;
        case 0x232af0u: goto label_232af0;
        case 0x232af4u: goto label_232af4;
        case 0x232af8u: goto label_232af8;
        case 0x232afcu: goto label_232afc;
        case 0x232b00u: goto label_232b00;
        case 0x232b04u: goto label_232b04;
        case 0x232b08u: goto label_232b08;
        case 0x232b0cu: goto label_232b0c;
        case 0x232b10u: goto label_232b10;
        case 0x232b14u: goto label_232b14;
        case 0x232b18u: goto label_232b18;
        case 0x232b1cu: goto label_232b1c;
        case 0x232b20u: goto label_232b20;
        case 0x232b24u: goto label_232b24;
        case 0x232b28u: goto label_232b28;
        case 0x232b2cu: goto label_232b2c;
        case 0x232b30u: goto label_232b30;
        case 0x232b34u: goto label_232b34;
        case 0x232b38u: goto label_232b38;
        case 0x232b3cu: goto label_232b3c;
        case 0x232b40u: goto label_232b40;
        case 0x232b44u: goto label_232b44;
        case 0x232b48u: goto label_232b48;
        case 0x232b4cu: goto label_232b4c;
        case 0x232b50u: goto label_232b50;
        case 0x232b54u: goto label_232b54;
        case 0x232b58u: goto label_232b58;
        case 0x232b5cu: goto label_232b5c;
        case 0x232b60u: goto label_232b60;
        case 0x232b64u: goto label_232b64;
        case 0x232b68u: goto label_232b68;
        case 0x232b6cu: goto label_232b6c;
        case 0x232b70u: goto label_232b70;
        case 0x232b74u: goto label_232b74;
        case 0x232b78u: goto label_232b78;
        case 0x232b7cu: goto label_232b7c;
        case 0x232b80u: goto label_232b80;
        case 0x232b84u: goto label_232b84;
        case 0x232b88u: goto label_232b88;
        case 0x232b8cu: goto label_232b8c;
        case 0x232b90u: goto label_232b90;
        case 0x232b94u: goto label_232b94;
        case 0x232b98u: goto label_232b98;
        case 0x232b9cu: goto label_232b9c;
        case 0x232ba0u: goto label_232ba0;
        case 0x232ba4u: goto label_232ba4;
        case 0x232ba8u: goto label_232ba8;
        case 0x232bacu: goto label_232bac;
        case 0x232bb0u: goto label_232bb0;
        case 0x232bb4u: goto label_232bb4;
        case 0x232bb8u: goto label_232bb8;
        case 0x232bbcu: goto label_232bbc;
        case 0x232bc0u: goto label_232bc0;
        case 0x232bc4u: goto label_232bc4;
        case 0x232bc8u: goto label_232bc8;
        case 0x232bccu: goto label_232bcc;
        case 0x232bd0u: goto label_232bd0;
        case 0x232bd4u: goto label_232bd4;
        case 0x232bd8u: goto label_232bd8;
        case 0x232bdcu: goto label_232bdc;
        case 0x232be0u: goto label_232be0;
        case 0x232be4u: goto label_232be4;
        case 0x232be8u: goto label_232be8;
        case 0x232becu: goto label_232bec;
        case 0x232bf0u: goto label_232bf0;
        case 0x232bf4u: goto label_232bf4;
        case 0x232bf8u: goto label_232bf8;
        case 0x232bfcu: goto label_232bfc;
        case 0x232c00u: goto label_232c00;
        case 0x232c04u: goto label_232c04;
        case 0x232c08u: goto label_232c08;
        case 0x232c0cu: goto label_232c0c;
        case 0x232c10u: goto label_232c10;
        case 0x232c14u: goto label_232c14;
        case 0x232c18u: goto label_232c18;
        case 0x232c1cu: goto label_232c1c;
        case 0x232c20u: goto label_232c20;
        case 0x232c24u: goto label_232c24;
        case 0x232c28u: goto label_232c28;
        case 0x232c2cu: goto label_232c2c;
        case 0x232c30u: goto label_232c30;
        case 0x232c34u: goto label_232c34;
        case 0x232c38u: goto label_232c38;
        case 0x232c3cu: goto label_232c3c;
        case 0x232c40u: goto label_232c40;
        case 0x232c44u: goto label_232c44;
        case 0x232c48u: goto label_232c48;
        case 0x232c4cu: goto label_232c4c;
        case 0x232c50u: goto label_232c50;
        case 0x232c54u: goto label_232c54;
        case 0x232c58u: goto label_232c58;
        case 0x232c5cu: goto label_232c5c;
        case 0x232c60u: goto label_232c60;
        case 0x232c64u: goto label_232c64;
        case 0x232c68u: goto label_232c68;
        case 0x232c6cu: goto label_232c6c;
        case 0x232c70u: goto label_232c70;
        case 0x232c74u: goto label_232c74;
        case 0x232c78u: goto label_232c78;
        case 0x232c7cu: goto label_232c7c;
        case 0x232c80u: goto label_232c80;
        case 0x232c84u: goto label_232c84;
        case 0x232c88u: goto label_232c88;
        case 0x232c8cu: goto label_232c8c;
        case 0x232c90u: goto label_232c90;
        case 0x232c94u: goto label_232c94;
        case 0x232c98u: goto label_232c98;
        case 0x232c9cu: goto label_232c9c;
        case 0x232ca0u: goto label_232ca0;
        case 0x232ca4u: goto label_232ca4;
        case 0x232ca8u: goto label_232ca8;
        case 0x232cacu: goto label_232cac;
        case 0x232cb0u: goto label_232cb0;
        case 0x232cb4u: goto label_232cb4;
        case 0x232cb8u: goto label_232cb8;
        case 0x232cbcu: goto label_232cbc;
        case 0x232cc0u: goto label_232cc0;
        case 0x232cc4u: goto label_232cc4;
        case 0x232cc8u: goto label_232cc8;
        case 0x232cccu: goto label_232ccc;
        case 0x232cd0u: goto label_232cd0;
        case 0x232cd4u: goto label_232cd4;
        case 0x232cd8u: goto label_232cd8;
        case 0x232cdcu: goto label_232cdc;
        case 0x232ce0u: goto label_232ce0;
        case 0x232ce4u: goto label_232ce4;
        case 0x232ce8u: goto label_232ce8;
        case 0x232cecu: goto label_232cec;
        case 0x232cf0u: goto label_232cf0;
        case 0x232cf4u: goto label_232cf4;
        case 0x232cf8u: goto label_232cf8;
        case 0x232cfcu: goto label_232cfc;
        case 0x232d00u: goto label_232d00;
        case 0x232d04u: goto label_232d04;
        case 0x232d08u: goto label_232d08;
        case 0x232d0cu: goto label_232d0c;
        case 0x232d10u: goto label_232d10;
        case 0x232d14u: goto label_232d14;
        case 0x232d18u: goto label_232d18;
        case 0x232d1cu: goto label_232d1c;
        case 0x232d20u: goto label_232d20;
        case 0x232d24u: goto label_232d24;
        case 0x232d28u: goto label_232d28;
        case 0x232d2cu: goto label_232d2c;
        case 0x232d30u: goto label_232d30;
        case 0x232d34u: goto label_232d34;
        case 0x232d38u: goto label_232d38;
        case 0x232d3cu: goto label_232d3c;
        case 0x232d40u: goto label_232d40;
        case 0x232d44u: goto label_232d44;
        case 0x232d48u: goto label_232d48;
        case 0x232d4cu: goto label_232d4c;
        case 0x232d50u: goto label_232d50;
        case 0x232d54u: goto label_232d54;
        case 0x232d58u: goto label_232d58;
        case 0x232d5cu: goto label_232d5c;
        case 0x232d60u: goto label_232d60;
        case 0x232d64u: goto label_232d64;
        case 0x232d68u: goto label_232d68;
        case 0x232d6cu: goto label_232d6c;
        case 0x232d70u: goto label_232d70;
        case 0x232d74u: goto label_232d74;
        case 0x232d78u: goto label_232d78;
        case 0x232d7cu: goto label_232d7c;
        case 0x232d80u: goto label_232d80;
        case 0x232d84u: goto label_232d84;
        default: break;
    }

    ctx->pc = 0x232a68u;

label_232a68:
    // 0x232a68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x232a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_232a6c:
    // 0x232a6c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x232a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_232a70:
    // 0x232a70: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x232a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
label_232a74:
    // 0x232a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_232a78:
    // 0x232a78: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x232a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_232a7c:
    // 0x232a7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x232a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_232a80:
    // 0x232a80: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x232a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_232a84:
    // 0x232a84: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x232a84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_232a88:
    // 0x232a88: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x232a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_232a8c:
    // 0x232a8c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x232a8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232a90:
    // 0x232a90: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x232a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_232a94:
    // 0x232a94: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x232a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_232a98:
    // 0x232a98: 0xc0f6a96  jal         func_3DAA58
label_232a9c:
    if (ctx->pc == 0x232A9Cu) {
        ctx->pc = 0x232A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232A98u;
        // 0x232a9c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AA0u;
        goto label_232aa0;
    }
    ctx->pc = 0x232A98u;
    SET_GPR_U32(ctx, 31, 0x232AA0u);
    ctx->pc = 0x232A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A98u;
    // 0x232a9c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x232A98u, 0x232AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AA0u;
label_232aa0:
    // 0x232aa0: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x232aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_232aa4:
    // 0x232aa4: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x232aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_232aa8:
    // 0x232aa8: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x232aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_232aac:
    // 0x232aac: 0x10640008  beq         $v1, $a0, . + 4 + (0x8 << 2)
label_232ab0:
    if (ctx->pc == 0x232AB0u) {
        ctx->pc = 0x232AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AACu;
        // 0x232ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AB4u;
        goto label_232ab4;
    }
    ctx->pc = 0x232AACu;
    {
        const bool branch_taken_0x232aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x232AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AACu;
        // 0x232ab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232aac) {
            ctx->pc = 0x232AD0u;
            goto label_232ad0;
        }
    }
    ctx->pc = 0x232AB4u;
label_232ab4:
    // 0x232ab4: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x232ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_232ab8:
    // 0x232ab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x232ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232abc:
    // 0x232abc: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x232abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_232ac0:
    // 0x232ac0: 0x40f809  jalr        $v0
label_232ac4:
    if (ctx->pc == 0x232AC4u) {
        ctx->pc = 0x232AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AC0u;
        // 0x232ac4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AC8u;
        goto label_232ac8;
    }
    ctx->pc = 0x232AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232AC8u);
        ctx->pc = 0x232AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AC0u;
        // 0x232ac4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232AC0u, 0x232AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232AC8u;
label_232ac8:
    // 0x232ac8: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
label_232acc:
    if (ctx->pc == 0x232ACCu) {
        ctx->pc = 0x232ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AC8u;
        // 0x232acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AD0u;
        goto label_232ad0;
    }
    ctx->pc = 0x232AC8u;
    {
        const bool branch_taken_0x232ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AC8u;
        // 0x232acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ac8) {
            ctx->pc = 0x232D60u;
            goto label_232d60;
        }
    }
    ctx->pc = 0x232AD0u;
label_232ad0:
    // 0x232ad0: 0xae000410  sw          $zero, 0x410($s0)
    ctx->pc = 0x232ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
label_232ad4:
    // 0x232ad4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x232ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_232ad8:
    // 0x232ad8: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x232ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_232adc:
    // 0x232adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232ae0:
    // 0x232ae0: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x232ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_232ae4:
    // 0x232ae4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x232ae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232ae8:
    // 0x232ae8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x232ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_232aec:
    // 0x232aec: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x232aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_232af0:
    // 0x232af0: 0x40f809  jalr        $v0
label_232af4:
    if (ctx->pc == 0x232AF4u) {
        ctx->pc = 0x232AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AF0u;
        // 0x232af4: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232AF8u;
        goto label_232af8;
    }
    ctx->pc = 0x232AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232AF8u);
        ctx->pc = 0x232AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AF0u;
        // 0x232af4: 0x24c60060  addiu       $a2, $a2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232AF0u, 0x232AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232AF8u;
label_232af8:
    // 0x232af8: 0x5440006a  bnel        $v0, $zero, . + 4 + (0x6A << 2)
label_232afc:
    if (ctx->pc == 0x232AFCu) {
        ctx->pc = 0x232AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AF8u;
        // 0x232afc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B00u;
        goto label_232b00;
    }
    ctx->pc = 0x232AF8u;
    {
        const bool branch_taken_0x232af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232af8) {
            ctx->pc = 0x232AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232AF8u;
            // 0x232afc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232CA4u;
            goto label_232ca4;
        }
    }
    ctx->pc = 0x232B00u;
label_232b00:
    // 0x232b00: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x232b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_232b04:
    // 0x232b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232b08:
    // 0x232b08: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x232b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_232b0c:
    // 0x232b0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x232b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232b10:
    // 0x232b10: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x232b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_232b14:
    // 0x232b14: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x232b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_232b18:
    // 0x232b18: 0x40f809  jalr        $v0
label_232b1c:
    if (ctx->pc == 0x232B1Cu) {
        ctx->pc = 0x232B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B18u;
        // 0x232b1c: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B20u;
        goto label_232b20;
    }
    ctx->pc = 0x232B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232B20u);
        ctx->pc = 0x232B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B18u;
        // 0x232b1c: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232B18u, 0x232B20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232B20u;
label_232b20:
    // 0x232b20: 0x54400060  bnel        $v0, $zero, . + 4 + (0x60 << 2)
label_232b24:
    if (ctx->pc == 0x232B24u) {
        ctx->pc = 0x232B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B20u;
        // 0x232b24: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B28u;
        goto label_232b28;
    }
    ctx->pc = 0x232B20u;
    {
        const bool branch_taken_0x232b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232b20) {
            ctx->pc = 0x232B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232B20u;
            // 0x232b24: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232CA4u;
            goto label_232ca4;
        }
    }
    ctx->pc = 0x232B28u;
label_232b28:
    // 0x232b28: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x232b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_232b2c:
    // 0x232b2c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x232b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_232b30:
    // 0x232b30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_232b34:
    // 0x232b34: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x232b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_232b38:
    // 0x232b38: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x232b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232b3c:
    // 0x232b3c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x232b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232b40:
    // 0x232b40: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x232b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_232b44:
    // 0x232b44: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x232b44u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_232b48:
    // 0x232b48: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x232b48u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_232b4c:
    // 0x232b4c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x232b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_232b50:
    // 0x232b50: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x232b50u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_232b54:
    // 0x232b54: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x232b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_232b58:
    // 0x232b58: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x232b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_232b5c:
    // 0x232b5c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x232b5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_232b60:
    // 0x232b60: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x232b60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_232b64:
    // 0x232b64: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x232b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_232b68:
    // 0x232b68: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x232b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_232b6c:
    // 0x232b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232b70:
    // 0x232b70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x232b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232b74:
    // 0x232b74: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x232b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_232b78:
    // 0x232b78: 0x40f809  jalr        $v0
label_232b7c:
    if (ctx->pc == 0x232B7Cu) {
        ctx->pc = 0x232B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B78u;
        // 0x232b7c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B80u;
        goto label_232b80;
    }
    ctx->pc = 0x232B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232B80u);
        ctx->pc = 0x232B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B78u;
        // 0x232b7c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232B78u, 0x232B80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232B80u;
label_232b80:
    // 0x232b80: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
label_232b84:
    if (ctx->pc == 0x232B84u) {
        ctx->pc = 0x232B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232B80u;
        // 0x232b84: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232B88u;
        goto label_232b88;
    }
    ctx->pc = 0x232B80u;
    {
        const bool branch_taken_0x232b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232b80) {
            ctx->pc = 0x232B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232B80u;
            // 0x232b84: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232CA0u;
            goto label_232ca0;
        }
    }
    ctx->pc = 0x232B88u;
label_232b88:
    // 0x232b88: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x232b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_232b8c:
    // 0x232b8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_232b90:
    // 0x232b90: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x232b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_232b94:
    // 0x232b94: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x232b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_232b98:
    // 0x232b98: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x232b98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_232b9c:
    // 0x232b9c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x232b9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_232ba0:
    // 0x232ba0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x232ba0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_232ba4:
    // 0x232ba4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x232ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_232ba8:
    // 0x232ba8: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x232ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232bac:
    // 0x232bac: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x232bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232bb0:
    // 0x232bb0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x232bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_232bb4:
    // 0x232bb4: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x232bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_232bb8:
    // 0x232bb8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x232bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_232bbc:
    // 0x232bbc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x232bbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_232bc0:
    // 0x232bc0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x232bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_232bc4:
    // 0x232bc4: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x232bc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_232bc8:
    // 0x232bc8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x232bc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_232bcc:
    // 0x232bcc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x232bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_232bd0:
    // 0x232bd0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x232bd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_232bd4:
    // 0x232bd4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x232bd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_232bd8:
    // 0x232bd8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x232bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_232bdc:
    // 0x232bdc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x232bdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_232be0:
    // 0x232be0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x232be0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_232be4:
    // 0x232be4: 0x4a0003bf  vwaitq
    ctx->pc = 0x232be4u;
    // VWAITQ (Q already resolved in this runtime)
label_232be8:
    // 0x232be8: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x232be8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_232bec:
    // 0x232bec: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x232becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_232bf0:
    // 0x232bf0: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x232bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_232bf4:
    // 0x232bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232bf8:
    // 0x232bf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x232bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232bfc:
    // 0x232bfc: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x232bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_232c00:
    // 0x232c00: 0x40f809  jalr        $v0
label_232c04:
    if (ctx->pc == 0x232C04u) {
        ctx->pc = 0x232C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C00u;
        // 0x232c04: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232C08u;
        goto label_232c08;
    }
    ctx->pc = 0x232C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232C08u);
        ctx->pc = 0x232C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C00u;
        // 0x232c04: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232C00u, 0x232C08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232C08u;
label_232c08:
    // 0x232c08: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_232c0c:
    if (ctx->pc == 0x232C0Cu) {
        ctx->pc = 0x232C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C08u;
        // 0x232c0c: 0x8e030104  lw          $v1, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232C10u;
        goto label_232c10;
    }
    ctx->pc = 0x232C08u;
    {
        const bool branch_taken_0x232c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232c08) {
            ctx->pc = 0x232C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232C08u;
            // 0x232c0c: 0x8e030104  lw          $v1, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232C18u;
            goto label_232c18;
        }
    }
    ctx->pc = 0x232C10u;
label_232c10:
    // 0x232c10: 0x10000024  b           . + 4 + (0x24 << 2)
label_232c14:
    if (ctx->pc == 0x232C14u) {
        ctx->pc = 0x232C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C10u;
        // 0x232c14: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232C18u;
        goto label_232c18;
    }
    ctx->pc = 0x232C10u;
    {
        const bool branch_taken_0x232c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C10u;
        // 0x232c14: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232c10) {
            ctx->pc = 0x232CA4u;
            goto label_232ca4;
        }
    }
    ctx->pc = 0x232C18u;
label_232c18:
    // 0x232c18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_232c1c:
    // 0x232c1c: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x232c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_232c20:
    // 0x232c20: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x232c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_232c24:
    // 0x232c24: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x232c24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_232c28:
    // 0x232c28: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x232c28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_232c2c:
    // 0x232c2c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x232c2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_232c30:
    // 0x232c30: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x232c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_232c34:
    // 0x232c34: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x232c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232c38:
    // 0x232c38: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x232c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232c3c:
    // 0x232c3c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x232c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_232c40:
    // 0x232c40: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x232c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_232c44:
    // 0x232c44: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x232c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_232c48:
    // 0x232c48: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x232c48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_232c4c:
    // 0x232c4c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x232c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_232c50:
    // 0x232c50: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x232c50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_232c54:
    // 0x232c54: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x232c54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_232c58:
    // 0x232c58: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x232c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_232c5c:
    // 0x232c5c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x232c5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_232c60:
    // 0x232c60: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x232c60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_232c64:
    // 0x232c64: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x232c64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_232c68:
    // 0x232c68: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x232c68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_232c6c:
    // 0x232c6c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x232c6cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_232c70:
    // 0x232c70: 0x4a0003bf  vwaitq
    ctx->pc = 0x232c70u;
    // VWAITQ (Q already resolved in this runtime)
label_232c74:
    // 0x232c74: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x232c74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_232c78:
    // 0x232c78: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x232c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_232c7c:
    // 0x232c7c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x232c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_232c80:
    // 0x232c80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x232c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232c84:
    // 0x232c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232c88:
    // 0x232c88: 0x8c6201b0  lw          $v0, 0x1B0($v1)
    ctx->pc = 0x232c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
label_232c8c:
    // 0x232c8c: 0x40f809  jalr        $v0
label_232c90:
    if (ctx->pc == 0x232C90u) {
        ctx->pc = 0x232C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C8Cu;
        // 0x232c90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232C94u;
        goto label_232c94;
    }
    ctx->pc = 0x232C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232C94u);
        ctx->pc = 0x232C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232C8Cu;
        // 0x232c90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232C8Cu, 0x232C94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x232C94u;
label_232c94:
    // 0x232c94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_232c98:
    if (ctx->pc == 0x232C98u) {
        ctx->pc = 0x232C9Cu;
        goto label_232c9c;
    }
    ctx->pc = 0x232C94u;
    {
        const bool branch_taken_0x232c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232c94) {
            ctx->pc = 0x232CA4u;
            goto label_232ca4;
        }
    }
    ctx->pc = 0x232C9Cu;
label_232c9c:
    // 0x232c9c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x232c9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232ca0:
    // 0x232ca0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x232ca0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232ca4:
    // 0x232ca4: 0x1260002e  beqz        $s3, . + 4 + (0x2E << 2)
label_232ca8:
    if (ctx->pc == 0x232CA8u) {
        ctx->pc = 0x232CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CA4u;
        // 0x232ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232CACu;
        goto label_232cac;
    }
    ctx->pc = 0x232CA4u;
    {
        const bool branch_taken_0x232ca4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x232CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CA4u;
        // 0x232ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ca4) {
            ctx->pc = 0x232D60u;
            goto label_232d60;
        }
    }
    ctx->pc = 0x232CACu;
label_232cac:
    // 0x232cac: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x232cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_232cb0:
    // 0x232cb0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x232cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_232cb4:
    // 0x232cb4: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x232cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_232cb8:
    // 0x232cb8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_232cbc:
    if (ctx->pc == 0x232CBCu) {
        ctx->pc = 0x232CC0u;
        goto label_232cc0;
    }
    ctx->pc = 0x232CB8u;
    {
        const bool branch_taken_0x232cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232cb8) {
            ctx->pc = 0x232D48u;
            goto label_232d48;
        }
    }
    ctx->pc = 0x232CC0u;
label_232cc0:
    // 0x232cc0: 0x8e021004  lw          $v0, 0x1004($s0)
    ctx->pc = 0x232cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
label_232cc4:
    // 0x232cc4: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_232cc8:
    if (ctx->pc == 0x232CC8u) {
        ctx->pc = 0x232CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CC4u;
        // 0x232cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232CCCu;
        goto label_232ccc;
    }
    ctx->pc = 0x232CC4u;
    {
        const bool branch_taken_0x232cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232cc4) {
            ctx->pc = 0x232CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232CC4u;
            // 0x232cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232D60u;
            goto label_232d60;
        }
    }
    ctx->pc = 0x232CCCu;
label_232ccc:
    // 0x232ccc: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x232cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_232cd0:
    // 0x232cd0: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x232cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
label_232cd4:
    // 0x232cd4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x232cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_232cd8:
    // 0x232cd8: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x232cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
label_232cdc:
    // 0x232cdc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x232cdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_232ce0:
    // 0x232ce0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x232ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_232ce4:
    // 0x232ce4: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x232ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232ce8:
    // 0x232ce8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x232ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_232cec:
    // 0x232cec: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x232cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_232cf0:
    // 0x232cf0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x232cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_232cf4:
    // 0x232cf4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x232cf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_232cf8:
    // 0x232cf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x232cf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_232cfc:
    // 0x232cfc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x232cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232d00:
    // 0x232d00: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x232d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_232d04:
    // 0x232d04: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x232d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_232d08:
    // 0x232d08: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x232d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_232d0c:
    // 0x232d0c: 0xc061fbe  jal         func_187EF8
label_232d10:
    if (ctx->pc == 0x232D10u) {
        ctx->pc = 0x232D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D0Cu;
        // 0x232d10: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D14u;
        goto label_232d14;
    }
    ctx->pc = 0x232D0Cu;
    SET_GPR_U32(ctx, 31, 0x232D14u);
    ctx->pc = 0x232D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D0Cu;
    // 0x232d10: 0xe7a2001c  swc1        $f2, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EF8u, 0x232D0Cu, 0x232D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D14u;
label_232d14:
    // 0x232d14: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x232d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_232d18:
    // 0x232d18: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x232d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_232d1c:
    // 0x232d1c: 0x260603d0  addiu       $a2, $s0, 0x3D0
    ctx->pc = 0x232d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
label_232d20:
    // 0x232d20: 0xc062da6  jal         func_18B698
label_232d24:
    if (ctx->pc == 0x232D24u) {
        ctx->pc = 0x232D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D20u;
        // 0x232d24: 0x260703c0  addiu       $a3, $s0, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D28u;
        goto label_232d28;
    }
    ctx->pc = 0x232D20u;
    SET_GPR_U32(ctx, 31, 0x232D28u);
    ctx->pc = 0x232D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D20u;
    // 0x232d24: 0x260703c0  addiu       $a3, $s0, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B698u, 0x232D20u, 0x232D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D28u;
label_232d28:
    // 0x232d28: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_232d2c:
    if (ctx->pc == 0x232D2Cu) {
        ctx->pc = 0x232D30u;
        goto label_232d30;
    }
    ctx->pc = 0x232D28u;
    {
        const bool branch_taken_0x232d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232d28) {
            ctx->pc = 0x232D48u;
            goto label_232d48;
        }
    }
    ctx->pc = 0x232D30u;
label_232d30:
    // 0x232d30: 0xc061fbe  jal         func_187EF8
label_232d34:
    if (ctx->pc == 0x232D34u) {
        ctx->pc = 0x232D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D30u;
        // 0x232d34: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D38u;
        goto label_232d38;
    }
    ctx->pc = 0x232D30u;
    SET_GPR_U32(ctx, 31, 0x232D38u);
    ctx->pc = 0x232D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D30u;
    // 0x232d34: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187EF8u, 0x232D30u, 0x232D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D38u;
label_232d38:
    // 0x232d38: 0xc062a6a  jal         func_18A9A8
label_232d3c:
    if (ctx->pc == 0x232D3Cu) {
        ctx->pc = 0x232D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D38u;
        // 0x232d3c: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D40u;
        goto label_232d40;
    }
    ctx->pc = 0x232D38u;
    SET_GPR_U32(ctx, 31, 0x232D40u);
    ctx->pc = 0x232D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D38u;
    // 0x232d3c: 0x8c44001c  lw          $a0, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A9A8u, 0x232D38u, 0x232D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D40u;
label_232d40:
    // 0x232d40: 0x10000007  b           . + 4 + (0x7 << 2)
label_232d44:
    if (ctx->pc == 0x232D44u) {
        ctx->pc = 0x232D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D40u;
        // 0x232d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D48u;
        goto label_232d48;
    }
    ctx->pc = 0x232D40u;
    {
        const bool branch_taken_0x232d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D40u;
        // 0x232d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d40) {
            ctx->pc = 0x232D60u;
            goto label_232d60;
        }
    }
    ctx->pc = 0x232D48u;
label_232d48:
    // 0x232d48: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_232d4c:
    if (ctx->pc == 0x232D4Cu) {
        ctx->pc = 0x232D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D48u;
        // 0x232d4c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D50u;
        goto label_232d50;
    }
    ctx->pc = 0x232D48u;
    {
        const bool branch_taken_0x232d48 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D48u;
        // 0x232d4c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d48) {
            ctx->pc = 0x232D5Cu;
            goto label_232d5c;
        }
    }
    ctx->pc = 0x232D50u;
label_232d50:
    // 0x232d50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_232d54:
    // 0x232d54: 0xc08beb8  jal         func_22FAE0
label_232d58:
    if (ctx->pc == 0x232D58u) {
        ctx->pc = 0x232D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D54u;
        // 0x232d58: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D5Cu;
        goto label_232d5c;
    }
    ctx->pc = 0x232D54u;
    SET_GPR_U32(ctx, 31, 0x232D5Cu);
    ctx->pc = 0x232D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D54u;
    // 0x232d58: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FAE0u, 0x232D54u, 0x232D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D5Cu;
label_232d5c:
    // 0x232d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232d60:
    // 0x232d60: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x232d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_232d64:
    // 0x232d64: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x232d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_232d68:
    // 0x232d68: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x232d68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_232d6c:
    // 0x232d6c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x232d6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_232d70:
    // 0x232d70: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x232d70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_232d74:
    // 0x232d74: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x232d74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_232d78:
    // 0x232d78: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x232d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_232d7c:
    // 0x232d7c: 0x3e00008  jr          $ra
label_232d80:
    if (ctx->pc == 0x232D80u) {
        ctx->pc = 0x232D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D7Cu;
        // 0x232d80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x232D84u;
        goto label_232d84;
    }
    ctx->pc = 0x232D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D7Cu;
        // 0x232d80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232D84u;
label_232d84:
    // 0x232d84: 0x0  nop
    ctx->pc = 0x232d84u;
    // NOP
    ctx->pc = 0x232d88u;
}
