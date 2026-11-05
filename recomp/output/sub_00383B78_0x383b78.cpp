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

// Function: sub_00383B78
// Address: 0x383b78 - 0x383cf8
void sub_00383B78_0x383b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383B78_0x383b78");
#endif

    switch (ctx->pc) {
        case 0x383b78u: goto label_383b78;
        case 0x383b7cu: goto label_383b7c;
        case 0x383b80u: goto label_383b80;
        case 0x383b84u: goto label_383b84;
        case 0x383b88u: goto label_383b88;
        case 0x383b8cu: goto label_383b8c;
        case 0x383b90u: goto label_383b90;
        case 0x383b94u: goto label_383b94;
        case 0x383b98u: goto label_383b98;
        case 0x383b9cu: goto label_383b9c;
        case 0x383ba0u: goto label_383ba0;
        case 0x383ba4u: goto label_383ba4;
        case 0x383ba8u: goto label_383ba8;
        case 0x383bacu: goto label_383bac;
        case 0x383bb0u: goto label_383bb0;
        case 0x383bb4u: goto label_383bb4;
        case 0x383bb8u: goto label_383bb8;
        case 0x383bbcu: goto label_383bbc;
        case 0x383bc0u: goto label_383bc0;
        case 0x383bc4u: goto label_383bc4;
        case 0x383bc8u: goto label_383bc8;
        case 0x383bccu: goto label_383bcc;
        case 0x383bd0u: goto label_383bd0;
        case 0x383bd4u: goto label_383bd4;
        case 0x383bd8u: goto label_383bd8;
        case 0x383bdcu: goto label_383bdc;
        case 0x383be0u: goto label_383be0;
        case 0x383be4u: goto label_383be4;
        case 0x383be8u: goto label_383be8;
        case 0x383becu: goto label_383bec;
        case 0x383bf0u: goto label_383bf0;
        case 0x383bf4u: goto label_383bf4;
        case 0x383bf8u: goto label_383bf8;
        case 0x383bfcu: goto label_383bfc;
        case 0x383c00u: goto label_383c00;
        case 0x383c04u: goto label_383c04;
        case 0x383c08u: goto label_383c08;
        case 0x383c0cu: goto label_383c0c;
        case 0x383c10u: goto label_383c10;
        case 0x383c14u: goto label_383c14;
        case 0x383c18u: goto label_383c18;
        case 0x383c1cu: goto label_383c1c;
        case 0x383c20u: goto label_383c20;
        case 0x383c24u: goto label_383c24;
        case 0x383c28u: goto label_383c28;
        case 0x383c2cu: goto label_383c2c;
        case 0x383c30u: goto label_383c30;
        case 0x383c34u: goto label_383c34;
        case 0x383c38u: goto label_383c38;
        case 0x383c3cu: goto label_383c3c;
        case 0x383c40u: goto label_383c40;
        case 0x383c44u: goto label_383c44;
        case 0x383c48u: goto label_383c48;
        case 0x383c4cu: goto label_383c4c;
        case 0x383c50u: goto label_383c50;
        case 0x383c54u: goto label_383c54;
        case 0x383c58u: goto label_383c58;
        case 0x383c5cu: goto label_383c5c;
        case 0x383c60u: goto label_383c60;
        case 0x383c64u: goto label_383c64;
        case 0x383c68u: goto label_383c68;
        case 0x383c6cu: goto label_383c6c;
        case 0x383c70u: goto label_383c70;
        case 0x383c74u: goto label_383c74;
        case 0x383c78u: goto label_383c78;
        case 0x383c7cu: goto label_383c7c;
        case 0x383c80u: goto label_383c80;
        case 0x383c84u: goto label_383c84;
        case 0x383c88u: goto label_383c88;
        case 0x383c8cu: goto label_383c8c;
        case 0x383c90u: goto label_383c90;
        case 0x383c94u: goto label_383c94;
        case 0x383c98u: goto label_383c98;
        case 0x383c9cu: goto label_383c9c;
        case 0x383ca0u: goto label_383ca0;
        case 0x383ca4u: goto label_383ca4;
        case 0x383ca8u: goto label_383ca8;
        case 0x383cacu: goto label_383cac;
        case 0x383cb0u: goto label_383cb0;
        case 0x383cb4u: goto label_383cb4;
        case 0x383cb8u: goto label_383cb8;
        case 0x383cbcu: goto label_383cbc;
        case 0x383cc0u: goto label_383cc0;
        case 0x383cc4u: goto label_383cc4;
        case 0x383cc8u: goto label_383cc8;
        case 0x383cccu: goto label_383ccc;
        case 0x383cd0u: goto label_383cd0;
        case 0x383cd4u: goto label_383cd4;
        case 0x383cd8u: goto label_383cd8;
        case 0x383cdcu: goto label_383cdc;
        case 0x383ce0u: goto label_383ce0;
        case 0x383ce4u: goto label_383ce4;
        case 0x383ce8u: goto label_383ce8;
        case 0x383cecu: goto label_383cec;
        case 0x383cf0u: goto label_383cf0;
        case 0x383cf4u: goto label_383cf4;
        default: break;
    }

    ctx->pc = 0x383b78u;

label_383b78:
    // 0x383b78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x383b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_383b7c:
    // 0x383b7c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x383b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_383b80:
    // 0x383b80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x383b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_383b84:
    // 0x383b84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x383b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383b88:
    // 0x383b88: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x383b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_383b8c:
    // 0x383b8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x383b8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_383b90:
    // 0x383b90: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x383b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_383b94:
    // 0x383b94: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x383b94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_383b98:
    // 0x383b98: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x383b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_383b9c:
    // 0x383b9c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x383b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_383ba0:
    // 0x383ba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x383ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_383ba4:
    // 0x383ba4: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x383ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_383ba8:
    // 0x383ba8: 0x8e510034  lw          $s1, 0x34($s2)
    ctx->pc = 0x383ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_383bac:
    // 0x383bac: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x383bacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_383bb0:
    // 0x383bb0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_383bb4:
    if (ctx->pc == 0x383BB4u) {
        ctx->pc = 0x383BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BB0u;
        // 0x383bb4: 0x8e740010  lw          $s4, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383BB8u;
        goto label_383bb8;
    }
    ctx->pc = 0x383BB0u;
    {
        const bool branch_taken_0x383bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BB0u;
        // 0x383bb4: 0x8e740010  lw          $s4, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383bb0) {
            ctx->pc = 0x383BC0u;
            goto label_383bc0;
        }
    }
    ctx->pc = 0x383BB8u;
label_383bb8:
    // 0x383bb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_383bbc:
    if (ctx->pc == 0x383BBCu) {
        ctx->pc = 0x383BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BB8u;
        // 0x383bbc: 0x718023  subu        $s0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383BC0u;
        goto label_383bc0;
    }
    ctx->pc = 0x383BB8u;
    {
        const bool branch_taken_0x383bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BB8u;
        // 0x383bbc: 0x718023  subu        $s0, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383bb8) {
            ctx->pc = 0x383BC8u;
            goto label_383bc8;
        }
    }
    ctx->pc = 0x383BC0u;
label_383bc0:
    // 0x383bc0: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x383bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_383bc4:
    // 0x383bc4: 0x518023  subu        $s0, $v0, $s1
    ctx->pc = 0x383bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_383bc8:
    // 0x383bc8: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x383bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_383bcc:
    // 0x383bcc: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x383bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_383bd0:
    // 0x383bd0: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x383bd0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_383bd4:
    // 0x383bd4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_383bd8:
    if (ctx->pc == 0x383BD8u) {
        ctx->pc = 0x383BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BD4u;
        // 0x383bd8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383BDCu;
        goto label_383bdc;
    }
    ctx->pc = 0x383BD4u;
    {
        const bool branch_taken_0x383bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x383BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BD4u;
        // 0x383bd8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383bd4) {
            ctx->pc = 0x383BE4u;
            goto label_383be4;
        }
    }
    ctx->pc = 0x383BDCu;
label_383bdc:
    // 0x383bdc: 0x2a21026  xor         $v0, $s5, $v0
    ctx->pc = 0x383bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 2));
label_383be0:
    // 0x383be0: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x383be0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_383be4:
    // 0x383be4: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x383be4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_383be8:
    // 0x383be8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x383be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_383bec:
    // 0x383bec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x383becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_383bf0:
    // 0x383bf0: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x383bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_383bf4:
    // 0x383bf4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x383bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_383bf8:
    // 0x383bf8: 0xae640014  sw          $a0, 0x14($s3)
    ctx->pc = 0x383bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
label_383bfc:
    // 0x383bfc: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x383bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
label_383c00:
    // 0x383c00: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x383c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_383c04:
    // 0x383c04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_383c08:
    if (ctx->pc == 0x383C08u) {
        ctx->pc = 0x383C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C04u;
        // 0x383c08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383C0Cu;
        goto label_383c0c;
    }
    ctx->pc = 0x383C04u;
    {
        const bool branch_taken_0x383c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C04u;
        // 0x383c08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c04) {
            ctx->pc = 0x383C20u;
            goto label_383c20;
        }
    }
    ctx->pc = 0x383C0Cu;
label_383c0c:
    // 0x383c0c: 0xde440040  ld          $a0, 0x40($s2)
    ctx->pc = 0x383c0cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 64)));
label_383c10:
    // 0x383c10: 0x40f809  jalr        $v0
label_383c14:
    if (ctx->pc == 0x383C14u) {
        ctx->pc = 0x383C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C10u;
        // 0x383c14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383C18u;
        goto label_383c18;
    }
    ctx->pc = 0x383C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x383C18u);
        ctx->pc = 0x383C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C10u;
        // 0x383c14: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383C10u, 0x383C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x383C18u;
label_383c18:
    // 0x383c18: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x383c18u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
label_383c1c:
    // 0x383c1c: 0xfe620038  sd          $v0, 0x38($s3)
    ctx->pc = 0x383c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 2));
label_383c20:
    // 0x383c20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x383c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_383c24:
    // 0x383c24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x383c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_383c28:
    // 0x383c28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x383c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_383c2c:
    // 0x383c2c: 0xc0efa49  jal         func_3BE924
label_383c30:
    if (ctx->pc == 0x383C30u) {
        ctx->pc = 0x383C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C2Cu;
        // 0x383c30: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383C34u;
        goto label_383c34;
    }
    ctx->pc = 0x383C2Cu;
    SET_GPR_U32(ctx, 31, 0x383C34u);
    ctx->pc = 0x383C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383C2Cu;
    // 0x383c30: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x383C2Cu, 0x383C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383C34u;
label_383c34:
    // 0x383c34: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x383c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_383c38:
    // 0x383c38: 0x16230023  bne         $s1, $v1, . + 4 + (0x23 << 2)
label_383c3c:
    if (ctx->pc == 0x383C3Cu) {
        ctx->pc = 0x383C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C38u;
        // 0x383c3c: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383C40u;
        goto label_383c40;
    }
    ctx->pc = 0x383C38u;
    {
        const bool branch_taken_0x383c38 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x383C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C38u;
        // 0x383c3c: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c38) {
            ctx->pc = 0x383CC8u;
            goto label_383cc8;
        }
    }
    ctx->pc = 0x383C40u;
label_383c40:
    // 0x383c40: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x383c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_383c44:
    // 0x383c44: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_383c48:
    if (ctx->pc == 0x383C48u) {
        ctx->pc = 0x383C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C44u;
        // 0x383c48: 0x8e51002c  lw          $s1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383C4Cu;
        goto label_383c4c;
    }
    ctx->pc = 0x383C44u;
    {
        const bool branch_taken_0x383c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x383C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C44u;
        // 0x383c48: 0x8e51002c  lw          $s1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c44) {
            ctx->pc = 0x383C50u;
            goto label_383c50;
        }
    }
    ctx->pc = 0x383C4Cu;
label_383c4c:
    // 0x383c4c: 0xae510038  sw          $s1, 0x38($s2)
    ctx->pc = 0x383c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 17));
label_383c50:
    // 0x383c50: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x383c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_383c54:
    // 0x383c54: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x383c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_383c58:
    // 0x383c58: 0x718023  subu        $s0, $v1, $s1
    ctx->pc = 0x383c58u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_383c5c:
    // 0x383c5c: 0x90102b  sltu        $v0, $a0, $s0
    ctx->pc = 0x383c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_383c60:
    // 0x383c60: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x383c60u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_383c64:
    // 0x383c64: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_383c68:
    if (ctx->pc == 0x383C68u) {
        ctx->pc = 0x383C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C64u;
        // 0x383c68: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383C6Cu;
        goto label_383c6c;
    }
    ctx->pc = 0x383C64u;
    {
        const bool branch_taken_0x383c64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x383C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C64u;
        // 0x383c68: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c64) {
            ctx->pc = 0x383C74u;
            goto label_383c74;
        }
    }
    ctx->pc = 0x383C6Cu;
label_383c6c:
    // 0x383c6c: 0x2a21026  xor         $v0, $s5, $v0
    ctx->pc = 0x383c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 2));
label_383c70:
    // 0x383c70: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x383c70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_383c74:
    // 0x383c74: 0xde620018  ld          $v0, 0x18($s3)
    ctx->pc = 0x383c74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_383c78:
    // 0x383c78: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x383c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
label_383c7c:
    // 0x383c7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x383c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_383c80:
    // 0x383c80: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x383c80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_383c84:
    // 0x383c84: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x383c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_383c88:
    // 0x383c88: 0xae640014  sw          $a0, 0x14($s3)
    ctx->pc = 0x383c88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 4));
label_383c8c:
    // 0x383c8c: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x383c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
label_383c90:
    // 0x383c90: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x383c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_383c94:
    // 0x383c94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_383c98:
    if (ctx->pc == 0x383C98u) {
        ctx->pc = 0x383C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C94u;
        // 0x383c98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383C9Cu;
        goto label_383c9c;
    }
    ctx->pc = 0x383C94u;
    {
        const bool branch_taken_0x383c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C94u;
        // 0x383c98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c94) {
            ctx->pc = 0x383CB0u;
            goto label_383cb0;
        }
    }
    ctx->pc = 0x383C9Cu;
label_383c9c:
    // 0x383c9c: 0xde440040  ld          $a0, 0x40($s2)
    ctx->pc = 0x383c9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 64)));
label_383ca0:
    // 0x383ca0: 0x40f809  jalr        $v0
label_383ca4:
    if (ctx->pc == 0x383CA4u) {
        ctx->pc = 0x383CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CA0u;
        // 0x383ca4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383CA8u;
        goto label_383ca8;
    }
    ctx->pc = 0x383CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x383CA8u);
        ctx->pc = 0x383CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CA0u;
        // 0x383ca4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383CA0u, 0x383CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x383CA8u;
label_383ca8:
    // 0x383ca8: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x383ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
label_383cac:
    // 0x383cac: 0xfe620038  sd          $v0, 0x38($s3)
    ctx->pc = 0x383cacu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 2));
label_383cb0:
    // 0x383cb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x383cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_383cb4:
    // 0x383cb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x383cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_383cb8:
    // 0x383cb8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x383cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_383cbc:
    // 0x383cbc: 0xc0efa49  jal         func_3BE924
label_383cc0:
    if (ctx->pc == 0x383CC0u) {
        ctx->pc = 0x383CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CBCu;
        // 0x383cc0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383CC4u;
        goto label_383cc4;
    }
    ctx->pc = 0x383CBCu;
    SET_GPR_U32(ctx, 31, 0x383CC4u);
    ctx->pc = 0x383CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383CBCu;
    // 0x383cc0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x383CBCu, 0x383CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383CC4u;
label_383cc4:
    // 0x383cc4: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x383cc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_383cc8:
    // 0x383cc8: 0xae740010  sw          $s4, 0x10($s3)
    ctx->pc = 0x383cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
label_383ccc:
    // 0x383ccc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x383cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_383cd0:
    // 0x383cd0: 0xae510034  sw          $s1, 0x34($s2)
    ctx->pc = 0x383cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
label_383cd4:
    // 0x383cd4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x383cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_383cd8:
    // 0x383cd8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x383cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_383cdc:
    // 0x383cdc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x383cdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_383ce0:
    // 0x383ce0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x383ce0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_383ce4:
    // 0x383ce4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x383ce4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_383ce8:
    // 0x383ce8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x383ce8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_383cec:
    // 0x383cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x383cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_383cf0:
    // 0x383cf0: 0x3e00008  jr          $ra
label_383cf4:
    if (ctx->pc == 0x383CF4u) {
        ctx->pc = 0x383CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CF0u;
        // 0x383cf4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383CF8u;
        goto label_fallthrough_0x383cf0;
    }
    ctx->pc = 0x383CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383CF0u;
        // 0x383cf4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x383cf0:
    ctx->pc = 0x383CF8u;
}
